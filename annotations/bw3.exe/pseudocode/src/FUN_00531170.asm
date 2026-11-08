; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00531170(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005cff61
;   TerminatedCString s_Bip01_L_ForeArm_005cff6c
;   TerminatedCString s_Bip01_R_ForeArm_005cff7c
;   TerminatedCString s_Bip01_L_UpperArm_005cff8c
;   TerminatedCString s_Bip01_R_UpperArm_005cff9d
;   TerminatedCString s_Bip01_L_Foot_005cffae
;   TerminatedCString s_Bip01_R_Foot_005cffbb
;   TerminatedCString s_Bip01_L_Hand_005cffc8
;   TerminatedCString s_Bip01_R_Hand_005cffd5
;   TerminatedCString s_Bip01_Spine_005cffe2
;   TerminatedCString s_Bip01_Spine1_005cffee
;   TerminatedCString s_Bip01_Spine2_005cfffb
;   TerminatedCString s_Bip01_Head_005d0008
;   TerminatedCString s_Bip01_L_UpperArm_005d0013
;   TerminatedCString s_Bip01_R_UpperArm_005d0024
;   ... and 14 more
;
; Called Functions:
;   FUN_00489110
;   FUN_00548090
;   FUN_0054e6b0
;   FUN_0054ea40
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531170
        ;   Label: FUN_00531170
    PUSH ESI                            ; 00531171
    PUSH EDI                            ; 00531172
    MOV EDI,dword ptr [ESP + 0x10]      ; 00531173
    PUSH EDI                            ; 00531177
    CALL FUN_00489110                   ; 00531178
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    ADD ESP,0x4                         ; 0053117d
    LEA ESI,[EDI + 0x158]               ; 00531180
    PUSH ESI                            ; 00531186
    CALL FUN_0054e6b0                   ; 00531187
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 0053118c
    PUSH ESI                            ; 0053118f
    CALL FUN_0054eac0                   ; 00531190
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 00531195
    PUSH 0x1                            ; 00531198
    PUSH 0x5cff61                       ; 0053119a | = "Bip01 Head"
    PUSH EAX                            ; 0053119f
    MOV EBX,EAX                         ; 005311a0
    CALL FUN_00548090                   ; 005311a2
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005311a7
    PUSH 0x1                            ; 005311aa
    PUSH 0x5cff6c                       ; 005311ac | = "Bip01 L ForeArm"
    PUSH EBX                            ; 005311b1
    MOV [0x01ed785c],EAX                ; 005311b2 | DAT_01ed785c
    CALL FUN_00548090                   ; 005311b7
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005311bc
    PUSH 0x1                            ; 005311bf
    PUSH 0x5cff7c                       ; 005311c1 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 005311c6
    MOV [0x01ed7868],EAX                ; 005311c7 | DAT_01ed7868
    CALL FUN_00548090                   ; 005311cc
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005311d1
    PUSH 0x1                            ; 005311d4
    PUSH 0x5cff8c                       ; 005311d6 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005311db
    MOV [0x01ed786c],EAX                ; 005311dc | DAT_01ed786c
    CALL FUN_00548090                   ; 005311e1
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005311e6
    PUSH 0x1                            ; 005311e9
    PUSH 0x5cff9d                       ; 005311eb | = "Bip01 R UpperArm"
    PUSH EBX                            ; 005311f0
    MOV [0x01ed7870],EAX                ; 005311f1 | DAT_01ed7870
    CALL FUN_00548090                   ; 005311f6
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005311fb
    PUSH 0x1                            ; 005311fe
    PUSH 0x5cffae                       ; 00531200 | = "Bip01 L Foot"
    PUSH EBX                            ; 00531205
    MOV [0x01ed7874],EAX                ; 00531206 | DAT_01ed7874
    CALL FUN_00548090                   ; 0053120b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00531210
    PUSH 0x1                            ; 00531213
    PUSH 0x5cffbb                       ; 00531215 | = "Bip01 R Foot"
    PUSH EBX                            ; 0053121a
    MOV [0x01ed7878],EAX                ; 0053121b | DAT_01ed7878
    CALL FUN_00548090                   ; 00531220
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00531225
    PUSH 0x1                            ; 00531228
    PUSH 0x5cffc8                       ; 0053122a | = "Bip01 L Hand"
    PUSH EBX                            ; 0053122f
    MOV [0x01ed787c],EAX                ; 00531230 | DAT_01ed787c
    CALL FUN_00548090                   ; 00531235
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0053123a
    MOV [0x01ed7860],EAX                ; 0053123d | DAT_01ed7860
    PUSH 0x1                            ; 00531242
    PUSH 0x5cffd5                       ; 00531244 | = "Bip01 R Hand"
    PUSH EBX                            ; 00531249
    CALL FUN_00548090                   ; 0053124a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0053124f
    PUSH 0x1                            ; 00531252
    PUSH 0x5cffe2                       ; 00531254 | = "Bip01 Spine"
    PUSH EBX                            ; 00531259
    MOV [0x01ed7864],EAX                ; 0053125a | DAT_01ed7864
    CALL FUN_00548090                   ; 0053125f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00531264
    PUSH 0x1                            ; 00531267
    PUSH 0x5cffee                       ; 00531269 | = "Bip01 Spine1"
    PUSH EBX                            ; 0053126e
    MOV [0x01ed7880],EAX                ; 0053126f | DAT_01ed7880
    CALL FUN_00548090                   ; 00531274
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00531279
    PUSH 0x1                            ; 0053127c
    PUSH 0x5cfffb                       ; 0053127e | = "Bip01 Spine2"
    PUSH EBX                            ; 00531283
    MOV [0x01ed7884],EAX                ; 00531284 | DAT_01ed7884
    CALL FUN_00548090                   ; 00531289
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0053128e
    PUSH 0x1                            ; 00531291
    PUSH 0x5d0008                       ; 00531293 | = "Bip01 Head"
    PUSH EBX                            ; 00531298
    MOV [0x01ed7888],EAX                ; 00531299 | DAT_01ed7888
    CALL FUN_00548090                   ; 0053129e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005312a3
    PUSH 0x1                            ; 005312a6
    PUSH 0x5d0013                       ; 005312a8 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005312ad
    MOV [0x01ed785c],EAX                ; 005312ae | DAT_01ed785c
    CALL FUN_00548090                   ; 005312b3
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005312b8
    PUSH 0x1                            ; 005312bb
    PUSH 0x5d0024                       ; 005312bd | = "Bip01 R UpperArm"
    PUSH EBX                            ; 005312c2
    MOV [0x01ed7870],EAX                ; 005312c3 | DAT_01ed7870
    CALL FUN_00548090                   ; 005312c8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005312cd
    PUSH 0x1                            ; 005312d0
    PUSH 0x5d0035                       ; 005312d2 | = "Bip01 Spine"
    PUSH EBX                            ; 005312d7
    MOV [0x01ed7874],EAX                ; 005312d8 | DAT_01ed7874
    CALL FUN_00548090                   ; 005312dd
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005312e2
    PUSH 0x1                            ; 005312e5
    PUSH 0x5d0041                       ; 005312e7 | = "Bip01 Spine2"
    PUSH EBX                            ; 005312ec
    MOV [0x01ed7880],EAX                ; 005312ed | DAT_01ed7880
    CALL FUN_00548090                   ; 005312f2
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005312f7
    PUSH ESI                            ; 005312fa
    MOV [0x01ed7888],EAX                ; 005312fb | DAT_01ed7888
    CALL FUN_0054ea40                   ; 00531300
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    MOV dword ptr [EDI + 0xd058],0x0    ; 00531305
    ADD ESP,0x4                         ; 0053130f
    MOV dword ptr [EDI + 0xd054],0x0    ; 00531312
    POP EDI                             ; 0053131c
    POP ESI                             ; 0053131d
    POP EBX                             ; 0053131e
    RET                                 ; 0053131f

