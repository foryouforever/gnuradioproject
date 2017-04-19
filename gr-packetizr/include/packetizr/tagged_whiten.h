/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_PACKETIZR_TAGGED_WHITEN_H
#define INCLUDED_PACKETIZR_TAGGED_WHITEN_H

#include <packetizr/api.h>
#include <gnuradio/tagged_stream_block.h>
#include <gnuradio/blocks/lfsr_15_1_0.h>

namespace gr {
  namespace packetizr {

    /*!
     * \brief <+description of block+>
     * \ingroup packetizr
     *
     */
    class PACKETIZR_API tagged_whiten : virtual public gr::tagged_stream_block
    {
     public:
      typedef boost::shared_ptr<tagged_whiten> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of packetizr::tagged_whiten.
       *
       * To avoid accidental use of raw pointers, packetizr::tagged_whiten's
       * constructor is in a private implementation
       * class. packetizr::tagged_whiten::make is the public interface for
       * creating new instances.
       */
      static sptr make(
        const bool use_lfsr, 
        const std::vector<unsigned char> random_mask, 
        const int bits_per_byte,
        const std::string &lengthtagname = "packet_len");
    };

  } // namespace packetizr
} // namespace gr

#endif /* INCLUDED_PACKETIZR_TAGGED_WHITEN_H */

