; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_staticInit_FUN_0052c0a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d7edb0
;   undefined4 DAT_01d7edb4
;
; Called Functions:
;   core_netgame.cpp_CNetGame_ctor_FUN_0052c470
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1d51c20                      ; 0052c0a0
        ;   Label: core_netgame.cpp_staticInit_FUN_0052c0a0
    CALL core_netgame.cpp_CNetGame_ctor_FUN_0052c470 ; 0052c0a5
        ;   XREF to: 0052c470 (UNCONDITIONAL_CALL)  ; CNetGame * core_netgame.cpp_CNetGame_ctor_FUN_0052c470(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0052c0aa
    PUSH 0x622570                       ; 0052c0ad
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0052c0b2
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0052c0b7
    PUSH 0x604380                       ; 0052c0ba
    PUSH 0x190                          ; 0052c0bf
    PUSH 0x1d51db8                      ; 0052c0c4
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0052c0c9
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    MOV EDX,0x405                       ; 0052c0ce
    ADD ESP,0xc                         ; 0052c0d3
    XOR AH,AH                           ; 0052c0d6
    MOV dword ptr [0x01d7edb0],EDX      ; 0052c0d8 | DAT_01d7edb0
    MOV byte ptr [0x01d7edb4],AH        ; 0052c0de | DAT_01d7edb4
    RET                                 ; 0052c0e4

