// Name: crt_strstream.cpp_strstreambuf_ctor_FUN_00570248
// Address: 00570248
// Address Range: [[00570248, 00570271]]
// Convention: unknown
// Signature: streambuf * crt_strstream_cpp_strstreambuf_ctor_FUN_00570248(streambuf *param_1)

#include "nocturne.h"

streambuf * crt_strstream_cpp_strstreambuf_ctor_FUN_00570248(streambuf *param_1)

{
  streambuf *psVar1;
  
  psVar1 = crt_iostream_cpp_streambuf_ctor_FUN_0056fe12(param_1);
  psVar1[1].__b_lock = &PTR_crt_iostream_cpp_streambuf_do_sgetn_FUN_0056ff82_005a4884;
  crt_strstream_cpp_strstreambuf_init_FUN_0056fe65(psVar1,0,0,0);
  return psVar1;
}
