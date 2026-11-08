; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a36e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
;
; XREF[7]:
;   FUN_0042ffe0 at 004300b2
;   FUN_004461c0 at 00446256
;   FUN_0048c2e0 at 0048d2bf
;   FUN_0049d090 at 0049d4c5
;   FUN_004a7160 at 004a7217
;   FUN_005766b0 at 00576ba2
;   FUN_0059e600 at 0059e978
;
; Referenced Globals:
;   TerminatedCString s_xplode_wav_6_0_005c09f8
;   TerminatedCString s_wp_bindevil_wav_005c0a0a
;   TerminatedCString s_wp_disease_wav_005c0a1a
;   undefined4 DAT_006045f8
;   undefined4 DAT_01cf608c
;
; Called Functions:
;   FUN_0049c730
;   FUN_004a3aa0
;   FUN_005609d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a36e0
        ;   Label: FUN_004a36e0
    PUSH ESI                            ; 004a36e1
    PUSH EDI                            ; 004a36e2
    PUSH EBP                            ; 004a36e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a36e4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a36e8
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a36ec
    PUSH EBX                            ; 004a36f0
    PUSH dword ptr [ESP + 0x24]         ; 004a36f1
    MOV EAX,[0x01cf608c]                ; 004a36f5 | DAT_01cf608c
    PUSH dword ptr [ESP + 0x24]         ; 004a36fa
    SHL EAX,0x5                         ; 004a36fe
    PUSH ESI                            ; 004a3701
    ADD EAX,0x1cf6090                   ; 004a3702
    PUSH EAX                            ; 004a3707
    CALL FUN_0049c730                   ; 004a3708
        ;   XREF to: 0049c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c730()
    MOV EDX,dword ptr [0x01cf608c]      ; 004a370d | DAT_01cf608c
    INC EDX                             ; 004a3713
    ADD ESP,0x14                        ; 004a3714
    MOV dword ptr [0x01cf608c],EDX      ; 004a3717 | DAT_01cf608c
    CMP EDX,0xa                         ; 004a371d
    JGE 0x004a3745                      ; 004a3720
        ;   XREF to: 004a3745 (CONDITIONAL_JUMP)  ; LAB_004a3745
    TEST EBX,EBX                        ; 004a3722
        ;   Label: LAB_004a3722
    JNZ 0x004a374f                      ; 004a3724
        ;   XREF to: 004a374f (CONDITIONAL_JUMP)  ; LAB_004a374f
    PUSH ESI                            ; 004a3726
    PUSH 0x5c09f8                       ; 004a3727 | = "xplode?.wav @ 6.0"
    PUSH EDI                            ; 004a372c
    MOV ECX,dword ptr [0x006045f8]      ; 004a372d | DAT_006045f8
    PUSH ECX                            ; 004a3733
    CALL FUN_005609d0                   ; 004a3734
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
        ;   Label: LAB_004a3734
    ADD ESP,0x10                        ; 004a3739
    TEST EBX,EBX                        ; 004a373c
        ;   Label: LAB_004a373c
    JZ 0x004a3778                       ; 004a373e
        ;   XREF to: 004a3778 (CONDITIONAL_JUMP)  ; LAB_004a3778
    POP EBP                             ; 004a3740
    POP EDI                             ; 004a3741
    POP ESI                             ; 004a3742
    POP EBX                             ; 004a3743
    RET                                 ; 004a3744
    XOR EBP,EBP                         ; 004a3745
        ;   Label: LAB_004a3745
    MOV dword ptr [0x01cf608c],EBP      ; 004a3747 | DAT_01cf608c
    JMP 0x004a3722                      ; 004a374d
        ;   XREF to: 004a3722 (UNCONDITIONAL_JUMP)  ; LAB_004a3722
    CMP EBX,0x1                         ; 004a374f
        ;   Label: LAB_004a374f
    JZ 0x004a3768                       ; 004a3752
        ;   XREF to: 004a3768 (CONDITIONAL_JUMP)  ; LAB_004a3768
    CMP EBX,0x3                         ; 004a3754
    JNZ 0x004a373c                      ; 004a3757
        ;   XREF to: 004a373c (CONDITIONAL_JUMP)  ; LAB_004a373c
    PUSH ESI                            ; 004a3759
    PUSH 0x5c0a1a                       ; 004a375a | = "wp_disease.wav"
    PUSH EDI                            ; 004a375f
    MOV EAX,[0x006045f8]                ; 004a3760 | DAT_006045f8
    PUSH EAX                            ; 004a3765
    JMP 0x004a3734                      ; 004a3766
        ;   XREF to: 004a3734 (UNCONDITIONAL_JUMP)  ; LAB_004a3734
    PUSH ESI                            ; 004a3768
        ;   Label: LAB_004a3768
    PUSH 0x5c0a0a                       ; 004a3769 | = "wp_bindevil.wav"
    PUSH EDI                            ; 004a376e
    MOV EDX,dword ptr [0x006045f8]      ; 004a376f | DAT_006045f8
    PUSH EDX                            ; 004a3775
    JMP 0x004a3734                      ; 004a3776
        ;   XREF to: 004a3734 (UNCONDITIONAL_JUMP)  ; LAB_004a3734
    PUSH dword ptr [ESP + 0x24]         ; 004a3778
        ;   Label: LAB_004a3778
    PUSH ESI                            ; 004a377c
    PUSH EDI                            ; 004a377d
    CALL FUN_004a3aa0                   ; 004a377e
        ;   XREF to: 004a3aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3aa0()
    ADD ESP,0xc                         ; 004a3783
    POP EBP                             ; 004a3786
    POP EDI                             ; 004a3787
    POP ESI                             ; 004a3788
    POP EBX                             ; 004a3789
    RET                                 ; 004a378a

