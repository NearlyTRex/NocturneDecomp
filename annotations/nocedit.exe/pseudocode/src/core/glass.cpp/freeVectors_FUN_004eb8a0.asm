; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_glass_cpp_freeVectors_FUN_004eb8a0(CVector3f **array)
;
; Parameters:
; CVector3f * *    Stack[0x4]:4   array
;
; XREF[1]:
;   core_glass.cpp_CGlass_dtor_FUN_004eb820 at 004eb835
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 004eb8a0 | g_CVectorTypeInfo
        ;   Label: core_glass.cpp_freeVectors_FUN_004eb8a0
    PUSH 0x19                           ; 004eb8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004eb8a7
    PUSH EDX                            ; 004eb8ab
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004eb8ac
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004eb8b1
    RET                                 ; 004eb8b4

