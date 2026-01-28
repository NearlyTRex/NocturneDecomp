; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_freeVectors_FUN_00410500(CVector3f **array)
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

    PUSH 0x6598c0                       ; 00410500 | g_CVectorTypeInfo
        ;   Label: core_actor.cpp_freeVectors_FUN_00410500
    PUSH 0xa                            ; 00410505
    MOV EDX,dword ptr [ESP + 0xc]       ; 00410507
    PUSH EDX                            ; 0041050b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0041050c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00410511
    RET                                 ; 00410514

