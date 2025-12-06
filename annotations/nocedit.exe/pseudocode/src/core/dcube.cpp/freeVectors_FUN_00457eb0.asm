; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_freeVectors_FUN_00457eb0(CVector3f * * array)
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

    PUSH 0x6598c0                       ; 00457eb0 | WatcomTypeInfo g_CVectorTypeInfo
        ;   Label: core_dcube.cpp_freeVectors_FUN_00457eb0
    PUSH 0x10                           ; 00457eb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00457eb7
    PUSH EDX                            ; 00457ebb
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 00457ebc | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00457ec1
    RET                                 ; 00457ec4

