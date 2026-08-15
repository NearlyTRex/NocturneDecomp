; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_arrdtor2_FUN_004e08c0(CMorphModel *this_ptr,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_004e0070 at 004e0084
;
; Referenced Globals:
;   WatcomTypeInfo g_CMorphModelTypeInfo_005a0ce0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0ce0                       ; 004e08c0 | g_CMorphModelTypeInfo_005a0ce0
        ;   Label: core_morph.cpp_CMorphModel_arrdtor2_FUN_004e08c0
    PUSH 0x2                            ; 004e08c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e08c7
    PUSH EDX                            ; 004e08cb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004e08cc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004e08d1
    RET                                 ; 004e08d4

