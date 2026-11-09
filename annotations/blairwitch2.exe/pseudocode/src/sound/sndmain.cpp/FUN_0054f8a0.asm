; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0054f8a0(CSfxSlot *param_1)
;
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_00554510 at 0055457c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e886c
;   TerminatedCString s_SfxSlot_pollHwHandle_no_005e8881
;   TerminatedCString s_Killing_looped_sfx_s_whi_005e88a4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02648e80
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f8a0
        ;   Label: sound_sndmain.cpp_FUN_0054f8a0
    PUSH EBP                            ; 0054f8a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054f8a2
    CMP dword ptr [EBX + 0x60],0x0      ; 0054f8a6
    JZ 0x0054f921                       ; 0054f8aa
        ;   XREF to: 0054f921 (CONDITIONAL_JUMP)  ; LAB_0054f921
    CMP dword ptr [0x02648e80],0x0      ; 0054f8b0 | DAT_02648e80
    JZ 0x0054f918                       ; 0054f8b7
        ;   XREF to: 0054f918 (CONDITIONAL_JUMP)  ; LAB_0054f918
    CMP dword ptr [EBX + 0x68],0x0      ; 0054f8b9
    JNZ 0x0054f8e4                      ; 0054f8bd
        ;   XREF to: 0054f8e4 (CONDITIONAL_JUMP)  ; LAB_0054f8e4
    PUSH EDI                            ; 0054f8bf
    MOV EDI,0x5e886c                    ; 0054f8c0 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0xcf9                       ; 0054f8c5
    PUSH 0x5e8881                       ; 0054f8ca | = "SfxSlot::pollHwHandle - no sample?"
    MOV dword ptr [0x01d046a0],EDI      ; 0054f8cf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054f8d5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054f8db
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054f8e0
    POP EDI                             ; 0054f8e3
    PUSH EBX                            ; 0054f8e4
        ;   Label: LAB_0054f8e4
    MOV EAX,[0x02648e80]                ; 0054f8e5 | DAT_02648e80
    PUSH EAX                            ; 0054f8ea
    MOV EDX,dword ptr [EAX]             ; 0054f8eb
    CALL dword ptr [EDX + 0x54]         ; 0054f8ed
    ADD ESP,0x8                         ; 0054f8f0
    TEST EAX,EAX                        ; 0054f8f3
    JNZ 0x0054f921                      ; 0054f8f5
        ;   XREF to: 0054f921 (CONDITIONAL_JUMP)  ; LAB_0054f921
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054f8f7
    PUSH EAX                            ; 0054f8fa
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010 ; 0054f8fb
        ;   XREF to: 00550010 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054f900
    TEST EAX,EAX                        ; 0054f903
    JZ 0x0054f918                       ; 0054f905
        ;   XREF to: 0054f918 (CONDITIONAL_JUMP)  ; LAB_0054f918
    MOV EDX,dword ptr [EBX + 0x68]      ; 0054f907
    PUSH EDX                            ; 0054f90a
    PUSH 0x5e88a4                       ; 0054f90b | = "Killing looped sfx %s, which died??\n"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0054f910
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x8                         ; 0054f915
    PUSH EBX                            ; 0054f918
        ;   Label: LAB_0054f918
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 0054f919
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054f91e
    POP EBP                             ; 0054f921
        ;   Label: LAB_0054f921
    POP EBX                             ; 0054f922
    RET                                 ; 0054f923

