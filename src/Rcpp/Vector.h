// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
//
// Vector.h: Rcpp R/C++ interface class library -- vectors
//
// Copyright (C) 2010 - 2013 Dirk Eddelbuettel and Romain Francois
//
// This file is part of Rcpp.
//
// Rcpp is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Rcpp is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Rcpp.  If not, see <http://www.gnu.org/licenses/>.

#ifndef Rcpp__Vector_h
#define Rcpp__Vector_h

#include "../RcppCommon.h"
#include "exceptions.h"
#include "r_cast.h"

namespace Rcpp{
    namespace traits{
         template <int RTYPE, bool NA, typename VECTOR> struct Extractor ;
    }
    template <int RTYPE> class MatrixRow ;
    template <int RTYPE> class ConstMatrixRow ;
    template <int RTYPE> class MatrixColumn ;
    template <int RTYPE> class ConstMatrixColumn  ;
    template <int RTYPE> class SubMatrix ;

    class Dimension ;
    template <bool NA,typename T> class SingleLogicalResult ;

}

#include "vector/00_forward_Vector.h"
#include "vector/no_init.h"

#include "vector/00_forward_proxy.h"
#include "vector/vector_from_string.h"

#include "vector/converter.h"
#include "vector/RangeIndexer.h"
#include "vector/Vector.h"
#include "vector/proxy.h"
#include "vector/traits.h"

#include "vector/DimNameProxy.h"

#include "vector/Matrix.h"
#include "vector/SubMatrix.h"
#include "vector/MatrixRow.h"
#include "vector/MatrixColumn.h"
#include "vector/instantiation.h"

#include "vector/string_proxy.h"
#include "vector/const_string_proxy.h"
#include "vector/generic_proxy.h"
#include "vector/const_generic_proxy.h"

#include "String.h"
#include "vector/LazyVector.h"
#include "vector/swap.h"

#include "vector/ChildVector.h"
#include "vector/ListOf.h"

#endif
