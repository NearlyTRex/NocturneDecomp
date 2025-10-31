// Name: engine_3d.c_setProcessorType_FUN_00407870
// Address: 00407870
// Address Range: [[00407870, 00407879]]
// Convention: __cdecl
// Signature: void engine_3d.c_setProcessorType_FUN_00407870(int processor_type)
// Globals:
//   int g_ProcessorType

#include "nocturne.h"

void __cdecl engine_3d_c_setProcessorType_FUN_00407870(int processor_type)

{
  g_ProcessorType = processor_type;
  return;
}


// Assembly code:
// 00407870: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_setProcessorType_FUN_00407870
//   XREF to: Stack[0x4] (READ)
// 00407874: MOV [0x02d0529c],EAX
//   XREF to: 02d0529c (WRITE)
// 00407879: RET
