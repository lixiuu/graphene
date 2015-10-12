/*
 * Copyright (c) 2015 Cryptonomex, Inc., and contributors.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 * 1. Any modified source or binaries are used only with the BitShares network.
 *
 * 2. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 *
 * 3. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#pragma once
#include <graphene/chain/evaluator.hpp>
#include <graphene/chain/committee_member_object.hpp>

namespace graphene { namespace chain {

   class committee_member_create_evaluator : public evaluator<committee_member_create_evaluator>
   {
      public:
         typedef committee_member_create_operation operation_type;

         void_result do_evaluate( const committee_member_create_operation& o );
         object_id_type do_apply( const committee_member_create_operation& o );
   };

   class committee_member_update_evaluator : public evaluator<committee_member_update_evaluator>
   {
      public:
         typedef committee_member_update_operation operation_type;

         void_result do_evaluate( const committee_member_update_operation& o );
         void_result do_apply( const committee_member_update_operation& o );
   };

   class committee_member_update_global_parameters_evaluator : public evaluator<committee_member_update_global_parameters_evaluator>
   {
      public:
         typedef committee_member_update_global_parameters_operation operation_type;

         void_result do_evaluate( const committee_member_update_global_parameters_operation& o );
         void_result do_apply( const committee_member_update_global_parameters_operation& o );
   };

} } // graphene::chain
