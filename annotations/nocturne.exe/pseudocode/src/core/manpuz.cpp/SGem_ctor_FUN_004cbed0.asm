; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_manpuz_cpp_SGem_ctor_FUN_004cbed0(int param_1)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo_0059c080
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbed0
        ;   Label: core_manpuz.cpp_SGem_ctor_FUN_004cbed0
    PUSH 0x59c080                       ; 004cbed4 | g_CDemonTriangleTypeInfo_0059c080
    PUSH 0x2                            ; 004cbed9
    ADD EAX,0x3c                        ; 004cbedb
    PUSH EAX                            ; 004cbede
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004cbedf
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004cbee4
    SUB EAX,0x3c                        ; 004cbee7
    RET                                 ; 004cbeea

