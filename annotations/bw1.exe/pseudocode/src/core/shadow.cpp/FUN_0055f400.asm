; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f400(int param_1)
;
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f400
        ;   Label: core_shadow.cpp_FUN_0055f400
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055f401
    MOV EDX,dword ptr [EBX + 0xc2a4]    ; 0055f405
    PUSH EDX                            ; 0055f40b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 0055f40c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f411
    TEST EAX,EAX                        ; 0055f414
    JNZ 0x0055f443                      ; 0055f416
        ;   XREF to: 0055f443 (CONDITIONAL_JUMP)  ; LAB_0055f443
    CMP dword ptr [EBX + 0xc2d4],0x1    ; 0055f418
    JZ 0x0055f445                       ; 0055f41f
        ;   XREF to: 0055f445 (CONDITIONAL_JUMP)  ; LAB_0055f445
    PUSH 0x5f1659                       ; 0055f421
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055f426
        ;   Label: LAB_0055f426
    PUSH EBX                            ; 0055f42c
    CALL dword ptr [EAX + 0x2c]         ; 0055f42d
    ADD ESP,0x8                         ; 0055f430
    MOV dword ptr [EBX + 0xc2a4],EAX    ; 0055f433
    MOV dword ptr [EBX + 0xc298],0x41a00000 ; 0055f439
    POP EBX                             ; 0055f443
        ;   Label: LAB_0055f443
    RET                                 ; 0055f444
    PUSH 0x5f1649                       ; 0055f445
        ;   Label: LAB_0055f445
    JMP 0x0055f426                      ; 0055f44a
        ;   XREF to: 0055f426 (UNCONDITIONAL_JUMP)  ; LAB_0055f426

