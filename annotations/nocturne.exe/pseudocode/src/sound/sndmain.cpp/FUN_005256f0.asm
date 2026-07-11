; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005256f0(int param_1)
;
;
; XREF[1]:
;   FUN_00529810 at 00529863
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_0059308c
;   string s_SfxSlot::pollHwHandle_-_no_sampl_005930a1
;   string s_Killing_looped_sfx_%s,_which_die_005930c4
;   string s_Error_setting_hw_sfx_%d_options_(_005930e9
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   FUN_004c8440
;   FUN_00525570
;   FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005256f0
        ;   Label: FUN_005256f0
    PUSH EDI                            ; 005256f1
    PUSH EBP                            ; 005256f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005256f3
    CMP dword ptr [EBX + 0x6c],0x0      ; 005256f7
    JZ 0x00525750                       ; 005256fb
        ;   XREF to: 00525750 (CONDITIONAL_JUMP)  ; LAB_00525750
    CMP dword ptr [0x02dc8318],0x0      ; 005256fd | DAT_02dc8318
    JZ 0x00525754                       ; 00525704
        ;   XREF to: 00525754 (CONDITIONAL_JUMP)  ; LAB_00525754
    CMP dword ptr [EBX + 0x74],0x0      ; 00525706
    JNZ 0x0052572f                      ; 0052570a
        ;   XREF to: 0052572f (CONDITIONAL_JUMP)  ; LAB_0052572f
    MOV EDI,0x59308c                    ; 0052570c | = "..\\sound\\sndmain.cpp"
    MOV EBP,0xb63                       ; 00525711
    PUSH 0x5930a1                       ; 00525716 | = "SfxSlot::pollHwHandle - no sample?"
    MOV dword ptr [0x01cc4800],EDI      ; 0052571b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00525721 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00525727
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052572c
    PUSH EBX                            ; 0052572f
        ;   Label: LAB_0052572f
    MOV EAX,[0x02dc8318]                ; 00525730 | DAT_02dc8318
    PUSH EAX                            ; 00525735
    MOV EDX,dword ptr [EAX]             ; 00525736
    CALL dword ptr [EDX + 0x50]         ; 00525738
    ADD ESP,0x8                         ; 0052573b
    TEST EAX,EAX                        ; 0052573e
    JZ 0x00525761                       ; 00525740
        ;   XREF to: 00525761 (CONDITIONAL_JUMP)  ; LAB_00525761
    MOV DL,byte ptr [EBX + 0x5c]        ; 00525742
    XOR EAX,EAX                         ; 00525745
    TEST DL,0x1                         ; 00525747
    JZ 0x00525788                       ; 0052574a
        ;   XREF to: 00525788 (CONDITIONAL_JUMP)  ; LAB_00525788
    TEST EAX,EAX                        ; 0052574c
        ;   Label: LAB_0052574c
    JNZ 0x005257a3                      ; 0052574e
        ;   XREF to: 005257a3 (CONDITIONAL_JUMP)  ; LAB_005257a3
    POP EBP                             ; 00525750
        ;   Label: LAB_00525750
    POP EDI                             ; 00525751
    POP EBX                             ; 00525752
    RET                                 ; 00525753
    PUSH EBX                            ; 00525754
        ;   Label: LAB_00525754
    CALL FUN_00525570                   ; 00525755
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined FUN_00525570()
    ADD ESP,0x4                         ; 0052575a
    POP EBP                             ; 0052575d
    POP EDI                             ; 0052575e
    POP EBX                             ; 0052575f
    RET                                 ; 00525760
    MOV EAX,dword ptr [EBX + 0x74]      ; 00525761
        ;   Label: LAB_00525761
    CMP dword ptr [EAX + 0x124],0x0     ; 00525764
    JZ 0x0052577b                       ; 0052576b
        ;   XREF to: 0052577b (CONDITIONAL_JUMP)  ; LAB_0052577b
    PUSH EAX                            ; 0052576d
    PUSH 0x5930c4                       ; 0052576e | = "Killing looped sfx %s, which died??\n"
    CALL FUN_00529980                   ; 00525773
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x8                         ; 00525778
    PUSH EBX                            ; 0052577b
        ;   Label: LAB_0052577b
    CALL FUN_00525570                   ; 0052577c
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined FUN_00525570()
    ADD ESP,0x4                         ; 00525781
    POP EBP                             ; 00525784
    POP EDI                             ; 00525785
    POP EBX                             ; 00525786
    RET                                 ; 00525787
    CMP dword ptr [EBX + 0x20],0x0      ; 00525788
        ;   Label: LAB_00525788
    JZ 0x00525793                       ; 0052578c
        ;   XREF to: 00525793 (CONDITIONAL_JUMP)  ; LAB_00525793
    MOV EAX,0x2                         ; 0052578e
    CMP dword ptr [EBX + 0x40],0x0      ; 00525793
        ;   Label: LAB_00525793
    JZ 0x0052574c                       ; 00525797
        ;   XREF to: 0052574c (CONDITIONAL_JUMP)  ; LAB_0052574c
    OR AL,0x4                           ; 00525799
    TEST EAX,EAX                        ; 0052579b
    JNZ 0x005257a3                      ; 0052579d
        ;   XREF to: 005257a3 (CONDITIONAL_JUMP)  ; LAB_005257a3
    POP EBP                             ; 0052579f
    POP EDI                             ; 005257a0
    POP EBX                             ; 005257a1
    RET                                 ; 005257a2
    PUSH EAX                            ; 005257a3
        ;   Label: LAB_005257a3
    MOV EDX,dword ptr [0x02dc8318]      ; 005257a4 | DAT_02dc8318
    PUSH EBX                            ; 005257aa
    MOV ECX,dword ptr [EDX]             ; 005257ab
    PUSH EDX                            ; 005257ad
    CALL dword ptr [ECX + 0x40]         ; 005257ae
    ADD ESP,0xc                         ; 005257b1
    TEST EAX,EAX                        ; 005257b4
    JNZ 0x00525750                      ; 005257b6
        ;   XREF to: 00525750 (CONDITIONAL_JUMP)  ; LAB_00525750
    MOV EDI,dword ptr [EBX + 0x74]      ; 005257b8
    PUSH EDI                            ; 005257bb
    MOV EBP,dword ptr [EBX + 0x6c]      ; 005257bc
    PUSH EBP                            ; 005257bf
    PUSH 0x5930e9                       ; 005257c0 | = "Error setting hw sfx %d options (samp..."
    CALL FUN_00529980                   ; 005257c5
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0xc                         ; 005257ca
    PUSH EBX                            ; 005257cd
    CALL FUN_00525570                   ; 005257ce
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined FUN_00525570()
    ADD ESP,0x4                         ; 005257d3
    POP EBP                             ; 005257d6
    POP EDI                             ; 005257d7
    POP EBX                             ; 005257d8
    RET                                 ; 005257d9

