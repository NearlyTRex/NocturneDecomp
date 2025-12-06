; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_freeVectors_FUN_005a1ff0(CVector3f * * array)
;
; Parameters:
; CVector3f * *    Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 005a1ff0 | WatcomTypeInfo g_CVectorTypeInfo
        ;   Label: core_skeleton.cpp_freeVectors_FUN_005a1ff0
    PUSH 0xbb8                          ; 005a1ff5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a1ffa
    PUSH EDX                            ; 005a1ffe
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 005a1fff | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a2004
    RET                                 ; 005a2007

