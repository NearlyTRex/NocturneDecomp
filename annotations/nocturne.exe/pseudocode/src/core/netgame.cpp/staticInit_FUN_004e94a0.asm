; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_staticInit_FUN_004e94a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d16408
;   undefined4 DAT_01d1640c
;
; Called Functions:
;   core_netgame.cpp_CNetGame_ctor_FUN_004e9860
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1cea280                      ; 004e94a0
        ;   Label: core_netgame.cpp_staticInit_FUN_004e94a0
    CALL core_netgame.cpp_CNetGame_ctor_FUN_004e9860 ; 004e94a5
        ;   XREF to: 004e9860 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_ctor_FUN_004e9860()
    ADD ESP,0x4                         ; 004e94aa
    PUSH 0x5bded0                       ; 004e94ad
    CALL crt_unknown.c_FUN_00564bb0     ; 004e94b2
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 004e94b7
    PUSH 0x5a0de0                       ; 004e94ba
    PUSH 0x190                          ; 004e94bf
    PUSH 0x1cea410                      ; 004e94c4
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004e94c9
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    MOV EDX,0x405                       ; 004e94ce
    ADD ESP,0xc                         ; 004e94d3
    XOR AH,AH                           ; 004e94d6
    MOV dword ptr [0x01d16408],EDX      ; 004e94d8 | DAT_01d16408
    MOV byte ptr [0x01d1640c],AH        ; 004e94de | DAT_01d1640c
    RET                                 ; 004e94e4

