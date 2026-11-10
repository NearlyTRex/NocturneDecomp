; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00571f10(CSfxSlot *param_1)
;
;
; XREF[1]:
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40 at 00576fac
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3a66
;   TerminatedCString s_SfxSlot_pollHwHandle_no_005f3a7b
;   TerminatedCString s_Killing_looped_sfx_s_whi_005f3a9e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c80650
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571f10
        ;   Label: sound_sndmain.cpp_FUN_00571f10
    PUSH EBP                            ; 00571f11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00571f12
    CMP dword ptr [EBX + 0x60],0x0      ; 00571f16
    JZ 0x00571f91                       ; 00571f1a
        ;   XREF to: 00571f91 (CONDITIONAL_JUMP)  ; LAB_00571f91
    CMP dword ptr [0x02c80650],0x0      ; 00571f20 | DAT_02c80650
    JZ 0x00571f88                       ; 00571f27
        ;   XREF to: 00571f88 (CONDITIONAL_JUMP)  ; LAB_00571f88
    CMP dword ptr [EBX + 0x68],0x0      ; 00571f29
    JNZ 0x00571f54                      ; 00571f2d
        ;   XREF to: 00571f54 (CONDITIONAL_JUMP)  ; LAB_00571f54
    PUSH EDI                            ; 00571f2f
    MOV EDI,0x5f3a66                    ; 00571f30 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0xcf9                       ; 00571f35
    PUSH 0x5f3a7b                       ; 00571f3a | = "SfxSlot::pollHwHandle - no sample?"
    MOV dword ptr [0x01d1d400],EDI      ; 00571f3f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00571f45 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00571f4b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00571f50
    POP EDI                             ; 00571f53
    PUSH EBX                            ; 00571f54
        ;   Label: LAB_00571f54
    MOV EAX,[0x02c80650]                ; 00571f55 | DAT_02c80650
    PUSH EAX                            ; 00571f5a
    MOV EDX,dword ptr [EAX]             ; 00571f5b
    CALL dword ptr [EDX + 0x54]         ; 00571f5d
    ADD ESP,0x8                         ; 00571f60
    TEST EAX,EAX                        ; 00571f63
    JNZ 0x00571f91                      ; 00571f65
        ;   XREF to: 00571f91 (CONDITIONAL_JUMP)  ; LAB_00571f91
    MOV EAX,dword ptr [EBX + 0x68]      ; 00571f67
    PUSH EAX                            ; 00571f6a
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680 ; 00571f6b
        ;   XREF to: 00572680 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00571f70
    TEST EAX,EAX                        ; 00571f73
    JZ 0x00571f88                       ; 00571f75
        ;   XREF to: 00571f88 (CONDITIONAL_JUMP)  ; LAB_00571f88
    MOV EDX,dword ptr [EBX + 0x68]      ; 00571f77
    PUSH EDX                            ; 00571f7a
    PUSH 0x5f3a9e                       ; 00571f7b | = "Killing looped sfx %s, which died??\n"
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00571f80
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x8                         ; 00571f85
    PUSH EBX                            ; 00571f88
        ;   Label: LAB_00571f88
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 00571f89
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00571f8e
    POP EBP                             ; 00571f91
        ;   Label: LAB_00571f91
    POP EBX                             ; 00571f92
    RET                                 ; 00571f93

