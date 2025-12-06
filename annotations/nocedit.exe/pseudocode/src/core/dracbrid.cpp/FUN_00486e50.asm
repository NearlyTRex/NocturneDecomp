; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dracbrid.cpp_FUN_00486e50()
;
;
; Referenced Globals:
;   WatcomTypeInfo g_SFreakyTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65cf00                       ; 00486e50 | WatcomTypeInfo g_SFreakyTypeInfo
        ;   Label: core_dracbrid.cpp_FUN_00486e50
    PUSH 0x6                            ; 00486e55
    MOV EDX,dword ptr [ESP + 0xc]       ; 00486e57
    PUSH EDX                            ; 00486e5b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 00486e5c | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00486e61
    RET                                 ; 00486e64

