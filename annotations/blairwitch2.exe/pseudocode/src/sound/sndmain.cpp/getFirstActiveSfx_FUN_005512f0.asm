; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005512f0(void)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5a5f
;
; Referenced Globals:
;   undefined4 DAT_0263cf80
;   undefined4 DAT_0263d09c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005512f0
        ;   Label: sound_sndmain.cpp_getFirstActiveSfx_FUN_005512f0
    XOR EAX,EAX                         ; 005512f1
    XOR EDX,EDX                         ; 005512f3
    XOR ECX,ECX                         ; 005512f5
    CMP ECX,dword ptr [EAX + 0x263cf84] ; 005512f7
        ;   Label: LAB_005512f7
    JZ 0x00551309                       ; 005512fd
        ;   XREF to: 00551309 (CONDITIONAL_JUMP)  ; LAB_00551309
    MOV ESI,dword ptr [EAX + 0x263cf80] ; 005512ff | DAT_0263cf80 | DAT_0263d09c
    CMP ECX,ESI                         ; 00551305
    JNZ 0x0055131a                      ; 00551307
        ;   XREF to: 0055131a (CONDITIONAL_JUMP)  ; LAB_0055131a
    ADD EAX,0x11c                       ; 00551309
        ;   Label: LAB_00551309
    INC EDX                             ; 0055130e
    CMP EAX,0x4700                      ; 0055130f
    JL 0x005512f7                       ; 00551314
        ;   XREF to: 005512f7 (CONDITIONAL_JUMP)  ; LAB_005512f7
    XOR EAX,EAX                         ; 00551316
    POP ESI                             ; 00551318
    RET                                 ; 00551319
    MOV EAX,ESI                         ; 0055131a
        ;   Label: LAB_0055131a
    SHL EAX,0x6                         ; 0055131c
    OR EAX,EDX                          ; 0055131f
    POP ESI                             ; 00551321
    RET                                 ; 00551322

