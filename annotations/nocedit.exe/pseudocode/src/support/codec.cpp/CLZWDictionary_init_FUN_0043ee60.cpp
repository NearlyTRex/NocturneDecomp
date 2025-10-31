// Name: support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
// Address: 0043ee60
// Address Range: [[0043ee60, 0043eee1]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWDictionary_init_FUN_0043ee60(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits, int normal_code_width, int fallback_code_width)
// Cross-references:
//   support_codec.cpp_CLZWCompress_init_FUN_0043f320 (0043f320) at 0043f335 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0 (0043f4d0) at 0043f4e5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_support_codec_cpp_00618b22
//   TerminatedCString s_support_codec_cpp_00618b37
//   TerminatedCString s_CLZWDictionary_init_out__00618b4c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0

#include "nocturne.h"

void __cdecl
support_codec_cpp_CLZWDictionary_init_FUN_0043ee60
          (CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits,int normal_code_width,
          int fallback_code_width)

{
  CLZWDictionaryNode *pCVar1;
  
  if ((new_dict_size != this_ptr->dict_size) || (this_ptr->node_table == (CLZWDictionaryNode *)0x0))
  {
    this_ptr->dict_size = new_dict_size;
    pCVar1 = (CLZWDictionaryNode *)
             shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->node_table,new_dict_size << 4,"..\\support\\codec.cpp",0x2c6);
    this_ptr->node_table = pCVar1;
    if (pCVar1 == (CLZWDictionaryNode *)0x0) {
      g_CurrentFilename = "..\\support\\codec.cpp";
      g_CurrentLineNumber = 0x2c7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CLZWDictionary::init - out of memory");
      this_ptr->num_bits = fallback_code_width;
      support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(this_ptr);
      return;
    }
  }
  this_ptr->num_bits = normal_code_width;
  support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(this_ptr);
  return;
}


// Assembly code:
// 0043ee60: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
// 0043ee61: PUSH ESI
// 0043ee62: PUSH EBP
// 0043ee63: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043ee67: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043ee6b: CMP EAX,dword ptr [EBX]
// 0043ee6d: JNZ 0x0043ee89
//   XREF to: 0043ee89 (CONDITIONAL_JUMP)
// 0043ee6f: CMP dword ptr [EBX + 0x10],0x0
// 0043ee73: JZ 0x0043ee89
//   XREF to: 0043ee89 (CONDITIONAL_JUMP)
// 0043ee75: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0043ee75
//   XREF to: Stack[0xc] (READ)
// 0043ee79: PUSH EBX
// 0043ee7a: MOV dword ptr [EBX + 0x4],EAX
// 0043ee7d: CALL support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
//   XREF to: 0043eef0 (UNCONDITIONAL_CALL)
// 0043ee82: ADD ESP,0x4
// 0043ee85: POP EBP
// 0043ee86: POP ESI
// 0043ee87: POP EBX
// 0043ee88: RET
// 0043ee89: PUSH 0x2c6
//   Label: LAB_0043ee89
// 0043ee8e: MOV dword ptr [EBX],EAX
// 0043ee90: PUSH 0x618b22
//   XREF to: 00618b22 (DATA)
// 0043ee95: SHL EAX,0x4
// 0043ee98: PUSH EAX
// 0043ee99: MOV ESI,dword ptr [EBX + 0x10]
// 0043ee9c: PUSH ESI
// 0043ee9d: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0043eea2: ADD ESP,0x10
// 0043eea5: MOV dword ptr [EBX + 0x10],EAX
// 0043eea8: TEST EAX,EAX
// 0043eeaa: JNZ 0x0043ee75
//   XREF to: 0043ee75 (CONDITIONAL_JUMP)
// 0043eeac: MOV EBP,0x618b37
//   XREF to: 00618b37 (DATA)
// 0043eeb1: MOV EAX,0x2c7
// 0043eeb6: PUSH 0x618b4c
//   XREF to: 00618b4c (DATA)
// 0043eebb: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0043eec1: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0043eec6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043eecb: ADD ESP,0x4
// 0043eece: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0043eed2: PUSH EBX
// 0043eed3: MOV dword ptr [EBX + 0x4],EAX
// 0043eed6: CALL support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
//   XREF to: 0043eef0 (UNCONDITIONAL_CALL)
// 0043eedb: ADD ESP,0x4
// 0043eede: POP EBP
// 0043eedf: POP ESI
// 0043eee0: POP EBX
// 0043eee1: RET
