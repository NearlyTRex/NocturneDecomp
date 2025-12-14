; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_freeVectors_FUN_0049a410(CVector3f * * array)
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

    PUSH 0x6598c0                       ; 0049a410 | g_CVectorTypeInfo
        ;   Label: core_dtrace.cpp_freeVectors_FUN_0049a410
    PUSH 0x4e20                         ; 0049a415
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049a41a
    PUSH EDX                            ; 0049a41e
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0049a41f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a424
    RET                                 ; 0049a427

