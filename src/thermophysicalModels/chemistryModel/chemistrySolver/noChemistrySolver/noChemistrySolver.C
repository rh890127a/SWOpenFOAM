/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "noChemistrySolver.H"
#include "addToRunTimeSelectionTable.H"

// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

template<class ODEChemistryType>
Foam::noChemistrySolver<ODEChemistryType>::noChemistrySolver
(
    const fvMesh& mesh,
    const word& ODEModelName,
    const word& thermoType
)
:
    chemistrySolver<ODEChemistryType>(mesh, ODEModelName, thermoType)
{}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

template<class ODEChemistryType>
Foam::noChemistrySolver<ODEChemistryType>::~noChemistrySolver()
{}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

template<class ODEChemistryType>
Foam::scalar Foam::noChemistrySolver<ODEChemistryType>::solve
(
    scalarField&,
    const scalar,
    const scalar,
    const scalar,
    const scalar
) const
{
    return GREAT;
}


// ************************************************************************* //
