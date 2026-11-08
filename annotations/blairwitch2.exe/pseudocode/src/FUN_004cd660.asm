; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cd660(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
;
; XREF[1]:
;   FUN_004cc990 at 004cca1c
;
; Referenced Globals:
;   undefined1* switchdataD_004cd638 = 004cd694
;   TerminatedCString s_box_swing_wav_005d9986
;   TerminatedCString s_box_punch_wav_005d9995
;   undefined4 DAT_01cede54
;   undefined4 DAT_01cede58
;
; Called Functions:
;   FUN_0040d060
;   FUN_0042aa00
;   FUN_004cd7a0
;   FUN_005030c0
;   FUN_005515e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd660
        ;   Label: FUN_004cd660
    PUSH ESI                            ; 004cd661
    PUSH EDI                            ; 004cd662
    PUSH EBP                            ; 004cd663
    MOV EBP,ESP                         ; 004cd664
    AND ESP,0xfffffff8                  ; 004cd666
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cd669
    LEA ESI,[EBX + 0x2b4]               ; 004cd66c
    LEA EAX,[EBP + 0x18]                ; 004cd672
        ;   Label: LAB_004cd672
    PUSH EAX                            ; 004cd675
    PUSH ESI                            ; 004cd676
    CALL FUN_005030c0                   ; 004cd677
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    MOV EDX,EAX                         ; 004cd67c
    SUB EAX,0x65                        ; 004cd67e
    ADD ESP,0x8                         ; 004cd681
    CMP EAX,0x7                         ; 004cd684
    JA 0x004cd783                       ; 004cd687
        ;   XREF to: 004cd783 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4cd638]  ; 004cd68d | caseD_65 | caseD_66 | caseD_6b
        ;   Label: switchD
    MOV EDI,dword ptr [0x01cede54]      ; 004cd694 | DAT_01cede54
        ;   Label: caseD_65
    PUSH EDI                            ; 004cd69a
    PUSH EBX                            ; 004cd69b
    CALL FUN_004cd7a0                   ; 004cd69c
        ;   XREF to: 004cd7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd7a0()
    MOV EDX,dword ptr [EBX + 0x25644]   ; 004cd6a1
    ADD ESP,0x8                         ; 004cd6a7
    TEST EDX,EDX                        ; 004cd6aa
    SETZ AL                             ; 004cd6ac
        ;   Label: LAB_004cd6ac
    AND EAX,0xff                        ; 004cd6af
    MOV dword ptr [EBX + 0x25644],EAX   ; 004cd6b4
    FLD float ptr [EBP + 0x18]          ; 004cd6ba
        ;   Label: LAB_004cd6ba
    FLDZ                                ; 004cd6bd
    FCOMPP                              ; 004cd6bf
    FNSTSW AX                           ; 004cd6c1
    SAHF                                ; 004cd6c3
    JC 0x004cd672                       ; 004cd6c4
        ;   XREF to: 004cd672 (CONDITIONAL_JUMP)  ; LAB_004cd672
    MOV ESP,EBP                         ; 004cd6c6
    POP EBP                             ; 004cd6c8
    POP EDI                             ; 004cd6c9
    POP ESI                             ; 004cd6ca
    POP EBX                             ; 004cd6cb
    RET                                 ; 004cd6cc
    MOV EDX,dword ptr [0x01cede58]      ; 004cd6cd | DAT_01cede58
        ;   Label: caseD_66
    PUSH EDX                            ; 004cd6d3
    PUSH EBX                            ; 004cd6d4
    CALL FUN_004cd7a0                   ; 004cd6d5
        ;   XREF to: 004cd7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd7a0()
    MOV ECX,dword ptr [EBX + 0x25644]   ; 004cd6da
    ADD ESP,0x8                         ; 004cd6e0
    TEST ECX,ECX                        ; 004cd6e3
    JMP 0x004cd6ac                      ; 004cd6e5
        ;   XREF to: 004cd6ac (UNCONDITIONAL_JUMP)  ; LAB_004cd6ac
    PUSH 0x42200000                     ; 004cd6e7
        ;   Label: caseD_67
    SUB ESP,0x8                         ; 004cd6ec
    FLD float ptr [EBX + 0x28]          ; 004cd6ef
    FSTP double ptr [ESP]               ; 004cd6f2
    SUB ESP,0x8                         ; 004cd6f5
    FLD float ptr [EBX + 0x24]          ; 004cd6f8
    FSTP double ptr [ESP]               ; 004cd6fb
    SUB ESP,0x8                         ; 004cd6fe
    FLD float ptr [EBX + 0x20]          ; 004cd701
    FSTP double ptr [ESP]               ; 004cd704
    CALL FUN_005515e0                   ; 004cd707
        ;   XREF to: 005515e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005515e0()
    ADD ESP,0x1c                        ; 004cd70c
    TEST EAX,EAX                        ; 004cd70f
    JZ 0x004cd6ba                       ; 004cd711
        ;   XREF to: 004cd6ba (CONDITIONAL_JUMP)  ; LAB_004cd6ba
    PUSH 0x5d9986                       ; 004cd713 | = "box-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cd718
    PUSH EBX                            ; 004cd71e
    CALL dword ptr [EAX + 0x34]         ; 004cd71f
    ADD ESP,0x8                         ; 004cd722
    JMP 0x004cd6ba                      ; 004cd725
        ;   XREF to: 004cd6ba (UNCONDITIONAL_JUMP)  ; LAB_004cd6ba
    PUSH 0x42200000                     ; 004cd727
        ;   Label: caseD_68
    SUB ESP,0x8                         ; 004cd72c
    FLD float ptr [EBX + 0x28]          ; 004cd72f
    FSTP double ptr [ESP]               ; 004cd732
    SUB ESP,0x8                         ; 004cd735
    FLD float ptr [EBX + 0x24]          ; 004cd738
    FSTP double ptr [ESP]               ; 004cd73b
    SUB ESP,0x8                         ; 004cd73e
    FLD float ptr [EBX + 0x20]          ; 004cd741
    FSTP double ptr [ESP]               ; 004cd744
    CALL FUN_005515e0                   ; 004cd747
        ;   XREF to: 005515e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005515e0()
    ADD ESP,0x1c                        ; 004cd74c
    TEST EAX,EAX                        ; 004cd74f
    JZ 0x004cd6ba                       ; 004cd751
        ;   XREF to: 004cd6ba (CONDITIONAL_JUMP)  ; LAB_004cd6ba
    PUSH 0x3ecccccd                     ; 004cd757
    CALL FUN_0040d060                   ; 004cd75c
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 004cd761
    TEST EAX,EAX                        ; 004cd764
    JZ 0x004cd6ba                       ; 004cd766
        ;   XREF to: 004cd6ba (CONDITIONAL_JUMP)  ; LAB_004cd6ba
    PUSH 0x5d9995                       ; 004cd76c | = "box-punch?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cd771
    PUSH EBX                            ; 004cd777
    CALL dword ptr [EAX + 0x34]         ; 004cd778
    ADD ESP,0x8                         ; 004cd77b
    JMP 0x004cd6ba                      ; 004cd77e
        ;   XREF to: 004cd6ba (UNCONDITIONAL_JUMP)  ; LAB_004cd6ba
    PUSH EDX                            ; 004cd783
        ;   Label: default
    PUSH EBX                            ; 004cd784
    CALL FUN_0042aa00                   ; 004cd785
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 004cd78a
    JMP 0x004cd6ba                      ; 004cd78d
        ;   XREF to: 004cd6ba (UNCONDITIONAL_JUMP)  ; LAB_004cd6ba

