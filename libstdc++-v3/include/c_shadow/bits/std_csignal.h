// -*- C++ -*- header wrapper.

// Copyright (C) 1997-1999, 2000 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

//
// ISO C++ 14882: 20.4.6  C library
//

#ifndef _CPP_CSIGNAL
#define _CPP_CSIGNAL 1

namespace _C_legacy {
  extern "C" {
#     define _IN_C_LEGACY_
    // XXX
#     undef __need_sig_atomic_t
#     undef __need_sigset_t

#     pragma GCC system_header
#     include_next <signal.h>
  }
} // namespace _C_legacy

#  undef sig_atomic_t
#  undef raise
#  undef signal

namespace std {
  // Adopt C names into std::
  using _C_legacy::sig_atomic_t;
  using _C_legacy::raise;
  using _C_legacy::signal;
} // namespace std
  
# undef _IN_C_LEGACY_

#endif





