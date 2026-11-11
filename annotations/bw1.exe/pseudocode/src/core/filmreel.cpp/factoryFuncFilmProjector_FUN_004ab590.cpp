// Name: core_filmreel.cpp_factoryFuncFilmProjector_FUN_004ab590
// Address: 004ab590
// Address Range: [[004ab590, 004ab5ab]]
// Convention: unknown
// Signature: void core_filmreel_cpp_factoryFuncFilmProjector_FUN_004ab590(void)

#include "nocturne.h"

void core_filmreel_cpp_factoryFuncFilmProjector_FUN_004ab590(void)

{
  CFilmProjector *this_ptr;
  
  this_ptr = (CFilmProjector *)operator_new(0x3e4);
  if (this_ptr == (CFilmProjector *)0x0) {
    return;
  }
  core_filmreel_cpp_CFilmProjector_ctor_FUN_004ab5c0(this_ptr);
  return;
}
