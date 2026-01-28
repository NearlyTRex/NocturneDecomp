; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005a9ef0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da92a
;
; Referenced Globals:
;   undefined4 g_SfxSlots[0].field7_0x74
;   undefined4 DAT_03f5db1c
;   undefined4 DAT_03f5dc40
;   undefined4 DAT_03f5dc44
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a9ef0
        ;   Label: sound_sndmain.cpp_getFirstActiveSfx_FUN_005a9ef0
    XOR EAX,EAX                         ; 005a9ef1
    XOR EDX,EDX                         ; 005a9ef3
    XOR ECX,ECX                         ; 005a9ef5
    CMP ECX,dword ptr [EAX + 0x3f5db1c] ; 005a9ef7 | DAT_03f5db1c | DAT_03f5dc44
        ;   Label: LAB_005a9ef7
    JZ 0x005a9f09                       ; 005a9efd
        ;   XREF to: 005a9f09 (CONDITIONAL_JUMP)  ; LAB_005a9f09
    MOV ESI,dword ptr [EAX + 0x3f5db18] ; 005a9eff | g_SfxSlots[0].field7_0x74 | DAT_03f5dc40
    CMP ECX,ESI                         ; 005a9f05
    JNZ 0x005a9f1a                      ; 005a9f07
        ;   XREF to: 005a9f1a (CONDITIONAL_JUMP)  ; LAB_005a9f1a
    ADD EAX,0x128                       ; 005a9f09
        ;   Label: LAB_005a9f09
    INC EDX                             ; 005a9f0e
    CMP EAX,0x4a00                      ; 005a9f0f
    JL 0x005a9ef7                       ; 005a9f14
        ;   XREF to: 005a9ef7 (CONDITIONAL_JUMP)  ; LAB_005a9ef7
    XOR EAX,EAX                         ; 005a9f16
    POP ESI                             ; 005a9f18
    RET                                 ; 005a9f19
    MOV EAX,ESI                         ; 005a9f1a
        ;   Label: LAB_005a9f1a
    SHL EAX,0x6                         ; 005a9f1c
    OR EAX,EDX                          ; 005a9f1f
    POP ESI                             ; 005a9f21
    RET                                 ; 005a9f22

