; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(int bits_per_sample,int channels,int sample_rate)
;
; Parameters:
; int              Stack[0x4]:4   bits_per_sample
; int              Stack[0x8]:4   channels
; int              Stack[0xc]:4   sample_rate
;
; XREF[7]:
;   core_menu.cpp_FUN_004ed260 at 004ee120
;   core_sound.cpp_FUN_0055a100 at 0055a14f
;   sound_sndmain.cpp_FUN_005524b0 at 00552502
;   sound_sndmain.cpp_FUN_00553680 at 00553865
;   sound_sndmain.cpp_setAudioBitDepth_FUN_00552830 at 00552841
;   sound_sndmain.cpp_setAudioChannelCount_FUN_00552850 at 00552861
;   sound_sndmain.cpp_setAudioSampleRate_FUN_00552870 at 00552881
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8fba
;   TerminatedCString s_setSoundOutputMode_can_t_005e8fcf
;   undefined4 DAT_0061bc98
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_0061bca0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02648e80
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_allocMixBuffers_FUN_0054ce00
;   sound_sndmain.cpp_FUN_00552b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005526f0
        ;   Label: sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0
    PUSH EDI                            ; 005526f1
    PUSH EBP                            ; 005526f2
    SUB ESP,0x4                         ; 005526f3
    CALL sound_sndmain.cpp_FUN_00552b20 ; 005526f6
        ;   XREF to: 00552b20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552b20()
    TEST EAX,EAX                        ; 005526fb
    JNZ 0x00552730                      ; 005526fd
        ;   XREF to: 00552730 (CONDITIONAL_JUMP)  ; LAB_00552730
    MOV EAX,dword ptr [ESP + 0x14]      ; 005526ff
        ;   Label: LAB_005526ff
    MOV [0x0061bc98],EAX                ; 00552703 | DAT_0061bc98
    MOV EAX,dword ptr [ESP + 0x18]      ; 00552708
    MOV [0x0061bc9c],EAX                ; 0055270c | DAT_0061bc9c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00552711
    MOV EBX,dword ptr [0x02648e80]      ; 00552715 | DAT_02648e80
    MOV [0x0061bca0],EAX                ; 0055271b | DAT_0061bca0
    TEST EBX,EBX                        ; 00552720
    JNZ 0x00552755                      ; 00552722
        ;   XREF to: 00552755 (CONDITIONAL_JUMP)  ; LAB_00552755
    MOV EAX,0x1                         ; 00552724
        ;   Label: LAB_00552724
    ADD ESP,0x4                         ; 00552729
        ;   Label: LAB_00552729
    POP EBP                             ; 0055272c
    POP EDI                             ; 0055272d
    POP EBX                             ; 0055272e
    RET                                 ; 0055272f
    MOV EDX,0x5e8fba                    ; 00552730 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00552730
    MOV ECX,0x1482                      ; 00552735
    PUSH 0x5e8fcf                       ; 0055273a | = "setSoundOutputMode - can't do this wh..."
    MOV dword ptr [0x01d046a0],EDX      ; 0055273f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00552745 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0055274b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00552750
    JMP 0x005526ff                      ; 00552753
        ;   XREF to: 005526ff (UNCONDITIONAL_JUMP)  ; LAB_005526ff
    MOV ECX,ESP                         ; 00552755
        ;   Label: LAB_00552755
    PUSH ECX                            ; 00552757
    PUSH EAX                            ; 00552758
    MOV EDI,dword ptr [ESP + 0x20]      ; 00552759
    PUSH EDI                            ; 0055275d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0055275e
    PUSH EBP                            ; 00552762
    MOV EDX,dword ptr [EBX]             ; 00552763
    PUSH EBX                            ; 00552765
    CALL dword ptr [EDX + 0xc]          ; 00552766
    ADD ESP,0x14                        ; 00552769
    TEST EAX,EAX                        ; 0055276c
    JZ 0x00552729                       ; 0055276e
        ;   XREF to: 00552729 (CONDITIONAL_JUMP)  ; LAB_00552729
    MOV EAX,dword ptr [ESP]             ; 00552770
    TEST EAX,EAX                        ; 00552773
    JLE 0x00552724                      ; 00552775
        ;   XREF to: 00552724 (CONDITIONAL_JUMP)  ; LAB_00552724
    PUSH 0x4                            ; 00552777
    PUSH EAX                            ; 00552779
    CALL sound_sndmain.cpp_allocMixBuffers_FUN_0054ce00 ; 0055277a
        ;   XREF to: 0054ce00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_allocMixBuffers_FUN_0054ce00(int requested_size, int num_buffers)
    ADD ESP,0x8                         ; 0055277f
    MOV EAX,0x1                         ; 00552782
    ADD ESP,0x4                         ; 00552787
    POP EBP                             ; 0055278a
    POP EDI                             ; 0055278b
    POP EBX                             ; 0055278c
    RET                                 ; 0055278d

