; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_FUN_004fb180(CMorphModel *this_ptr,uint flags)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_004fa8c0 at 004fa8d4
;
; Referenced Globals:
;   WatcomTypeInfo g_CMorphModelTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e2c20                       ; 004fb180 | g_CMorphModelTypeInfo
        ;   Label: core_morph.cpp_FUN_004fb180
    PUSH 0x2                            ; 004fb185
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fb187
    PUSH EDX                            ; 004fb18b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004fb18c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004fb191
    RET                                 ; 004fb194

