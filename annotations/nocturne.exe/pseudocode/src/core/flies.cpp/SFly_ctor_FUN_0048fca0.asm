; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_flies_cpp_SFly_ctor_FUN_0048fca0(int param_1)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048fca0
        ;   Label: core_flies.cpp_SFly_ctor_FUN_0048fca0
    PUSH 0x5993b0                       ; 0048fca4 | g_CVectorTypeInfo_005993b0
    PUSH 0x4                            ; 0048fca9
    ADD EAX,0x4                         ; 0048fcab
    PUSH EAX                            ; 0048fcae
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0048fcaf
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0048fcb4
    SUB EAX,0x4                         ; 0048fcb7
    RET                                 ; 0048fcba

