; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_freeVectors_FUN_0052cc90(CVector3f **array)
;
; Parameters:
; CVector3f * *    Stack[0x4]:4   array
;
; XREF[1]:
;   core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70 at 0052cc7a
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 0052cc90 | g_CVectorTypeInfo
        ;   Label: core_morph.cpp_freeVectors_FUN_0052cc90
    PUSH 0x2                            ; 0052cc95
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052cc97
    PUSH EDX                            ; 0052cc9b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0052cc9c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052cca1
    RET                                 ; 0052cca4

