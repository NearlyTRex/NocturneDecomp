; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_staticInit_FUN_005039b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01dd4488
;   undefined4 DAT_01dd448c
;
; Called Functions:
;   core_netgame.cpp_CNetGame_ctor_FUN_00503d70
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1da62f0                      ; 005039b0
        ;   Label: core_netgame.cpp_staticInit_FUN_005039b0
    CALL core_netgame.cpp_CNetGame_ctor_FUN_00503d70 ; 005039b5
        ;   XREF to: 00503d70 (UNCONDITIONAL_CALL)  ; CNetGame * core_netgame.cpp_CNetGame_ctor_FUN_00503d70(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 005039ba
    PUSH 0x603440                       ; 005039bd
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005039c2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 005039c7
    PUSH 0x5e2d20                       ; 005039ca
    PUSH 0x190                          ; 005039cf
    PUSH 0x1da6490                      ; 005039d4
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 005039d9
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    MOV EDX,0x405                       ; 005039de
    ADD ESP,0xc                         ; 005039e3
    XOR AH,AH                           ; 005039e6
    MOV dword ptr [0x01dd4488],EDX      ; 005039e8 | DAT_01dd4488
    MOV byte ptr [0x01dd448c],AH        ; 005039ee | DAT_01dd448c
    RET                                 ; 005039f4

