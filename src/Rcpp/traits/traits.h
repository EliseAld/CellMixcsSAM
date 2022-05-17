// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
/* :tabSize=4:indentSize=4:noTabs=false:folding=explicit:collapseFolds=1: */
//
// traits.h: Rcpp R/C++ interface class library -- traits to help wrap
//
// Copyright (C) 2012 - 2013 Dirk Eddelbuettel and Romain Francois
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

#ifndef Rcpp__traits__traits__h
#define Rcpp__traits__traits__h

namespace Rcpp {
namespace traits {

template <typename T>
struct identity { typedef T type; };

template <int I>
struct int2type { enum { value = I }; };

}
}

#include "integral_constant.h"
#include "same_type.h"
#include "enable_if.h"
#include "is_wide_string.h"
#include "is_arithmetic.h"
#include "char_type.h"
#include "named_object.h"
#include "is_convertible.h"
#include "has_iterator.h"
#include "expands_to_logical.h"
#include "matrix_interface.h"
#include "is_sugar_expression.h"
#include "is_eigen_base.h"
#include "has_na.h"
#include "storage_type.h"
#include "r_sexptype_traits.h"
#include "r_type_traits.h"
#include "un_pointer.h"
#include "is_pointer.h"
#include "wrap_type_traits.h"
#include "longlong.h"
#include "module_wrap_traits.h"
#include "is_na.h"
#include "is_finite.h"
#include "is_infinite.h"
#include "is_nan.h"
#include "is_bool.h"
#include "if_.h"
#include "get_na.h"
#include "is_trivial.h"
#include "init_type.h"

#include "is_const.h"
#include "is_reference.h"
#include "remove_const.h"
#include "remove_reference.h"
#include "remove_const_and_reference.h"
#include "result_of.h"
#include "is_module_object.h"
#include "is_primitive.h"

#include one_type.h"

#endif

