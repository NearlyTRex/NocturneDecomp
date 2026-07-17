// Name: dll_dx7.cpp_textureSizeToIndex_FUN_10003090
// Address: 10003090
// Address Range: [[10003090, 100030d0]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_textureSizeToIndex_FUN_10003090(int texture_size)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_textureSizeToIndex_FUN_10003090(int texture_size)

{
  if (texture_size == 0x10) {
    return 4;
  }
  if (texture_size == 0x20) {
    return 5;
  }
  if (texture_size == 0x40) {
    return 6;
  }
  if (texture_size == 0x80) {
    return 7;
  }
  return (-(uint)(texture_size == 0x100) & 7) + 1;
}
