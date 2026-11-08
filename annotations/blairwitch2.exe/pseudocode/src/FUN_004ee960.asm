; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_004ee960(int param_1)
;
;
; XREF[3]:
;   FUN_004b3c50 at 004b40ed
;   FUN_004dadb0 at 004dafcd
;   FUN_004eed60 at 004efa1c
;
; Referenced Globals:
;   TerminatedCString s_none_005dd2d3
;   TerminatedCString s_Mouse_X_Axis_005dd2da
;   TerminatedCString s_Mouse_Y_Axis_005dd2e7
;   TerminatedCString s_Mouse_B1_005dd2f4
;   TerminatedCString s_Mouse_B2_005dd2fd
;   TerminatedCString s_Mouse_B3_005dd306
;   TerminatedCString s_Button_1_005dd30f
;   TerminatedCString s_Button_2_005dd318
;   TerminatedCString s_Button_3_005dd321
;   TerminatedCString s_Button_4_005dd32a
;   TerminatedCString s_Button_5_005dd333
;   TerminatedCString s_Button_6_005dd33c
;   TerminatedCString s_Button_7_005dd345
;   TerminatedCString s_Button_8_005dd34e
;   TerminatedCString s_Button_9_005dd357
;   ... and 6 more
;
; Called Functions:
;   FUN_0050fe80
;   FUN_0058f630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee960
        ;   Label: FUN_004ee960
    PUSH ESI                            ; 004ee961
    PUSH EDI                            ; 004ee962
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ee963
    XOR ESI,ESI                         ; 004ee967
    CMP EBX,0x257                       ; 004ee969
    JZ 0x004eeb78                       ; 004ee96f
        ;   XREF to: 004eeb78 (CONDITIONAL_JUMP)  ; LAB_004eeb78
    CMP EBX,0x255                       ; 004ee975
        ;   Label: LAB_004ee975
    JNZ 0x004ee98c                      ; 004ee97b
        ;   XREF to: 004ee98c (CONDITIONAL_JUMP)  ; LAB_004ee98c
    PUSH 0x5dd2da                       ; 004ee97d | = "Mouse X-Axis"
    CALL FUN_0050fe80                   ; 004ee982
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004ee987
    ADD ESP,0x4                         ; 004ee989
    CMP EBX,0x256                       ; 004ee98c
        ;   Label: LAB_004ee98c
    JNZ 0x004ee9a3                      ; 004ee992
        ;   XREF to: 004ee9a3 (CONDITIONAL_JUMP)  ; LAB_004ee9a3
    PUSH 0x5dd2e7                       ; 004ee994 | = "Mouse Y-Axis"
    CALL FUN_0050fe80                   ; 004ee999
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004ee99e
    ADD ESP,0x4                         ; 004ee9a0
    CMP EBX,0x200                       ; 004ee9a3
        ;   Label: LAB_004ee9a3
    JNZ 0x004ee9ba                      ; 004ee9a9
        ;   XREF to: 004ee9ba (CONDITIONAL_JUMP)  ; LAB_004ee9ba
    PUSH 0x5dd2f4                       ; 004ee9ab | = "Mouse B1"
    CALL FUN_0050fe80                   ; 004ee9b0
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004ee9b5
    ADD ESP,0x4                         ; 004ee9b7
    CMP EBX,0x201                       ; 004ee9ba
        ;   Label: LAB_004ee9ba
    JNZ 0x004ee9d1                      ; 004ee9c0
        ;   XREF to: 004ee9d1 (CONDITIONAL_JUMP)  ; LAB_004ee9d1
    PUSH 0x5dd2fd                       ; 004ee9c2 | = "Mouse B2"
    CALL FUN_0050fe80                   ; 004ee9c7
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004ee9cc
    ADD ESP,0x4                         ; 004ee9ce
    CMP EBX,0x20c                       ; 004ee9d1
        ;   Label: LAB_004ee9d1
    JNZ 0x004ee9e8                      ; 004ee9d7
        ;   XREF to: 004ee9e8 (CONDITIONAL_JUMP)  ; LAB_004ee9e8
    PUSH 0x5dd306                       ; 004ee9d9 | = "Mouse B3"
    CALL FUN_0050fe80                   ; 004ee9de
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004ee9e3
    ADD ESP,0x4                         ; 004ee9e5
    CMP EBX,0x202                       ; 004ee9e8
        ;   Label: LAB_004ee9e8
    JNZ 0x004ee9ff                      ; 004ee9ee
        ;   XREF to: 004ee9ff (CONDITIONAL_JUMP)  ; LAB_004ee9ff
    PUSH 0x5dd30f                       ; 004ee9f0 | = "Button 1"
    CALL FUN_0050fe80                   ; 004ee9f5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004ee9fa
    ADD ESP,0x4                         ; 004ee9fc
    CMP EBX,0x203                       ; 004ee9ff
        ;   Label: LAB_004ee9ff
    JNZ 0x004eea16                      ; 004eea05
        ;   XREF to: 004eea16 (CONDITIONAL_JUMP)  ; LAB_004eea16
    PUSH 0x5dd318                       ; 004eea07 | = "Button 2"
    CALL FUN_0050fe80                   ; 004eea0c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eea11
    ADD ESP,0x4                         ; 004eea13
    CMP EBX,0x204                       ; 004eea16
        ;   Label: LAB_004eea16
    JNZ 0x004eea2d                      ; 004eea1c
        ;   XREF to: 004eea2d (CONDITIONAL_JUMP)  ; LAB_004eea2d
    PUSH 0x5dd321                       ; 004eea1e | = "Button 3"
    CALL FUN_0050fe80                   ; 004eea23
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eea28
    ADD ESP,0x4                         ; 004eea2a
    CMP EBX,0x205                       ; 004eea2d
        ;   Label: LAB_004eea2d
    JNZ 0x004eea44                      ; 004eea33
        ;   XREF to: 004eea44 (CONDITIONAL_JUMP)  ; LAB_004eea44
    PUSH 0x5dd32a                       ; 004eea35 | = "Button 4"
    CALL FUN_0050fe80                   ; 004eea3a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eea3f
    ADD ESP,0x4                         ; 004eea41
    CMP EBX,0x206                       ; 004eea44
        ;   Label: LAB_004eea44
    JNZ 0x004eea5b                      ; 004eea4a
        ;   XREF to: 004eea5b (CONDITIONAL_JUMP)  ; LAB_004eea5b
    PUSH 0x5dd333                       ; 004eea4c | = "Button 5"
    CALL FUN_0050fe80                   ; 004eea51
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eea56
    ADD ESP,0x4                         ; 004eea58
    CMP EBX,0x207                       ; 004eea5b
        ;   Label: LAB_004eea5b
    JNZ 0x004eea72                      ; 004eea61
        ;   XREF to: 004eea72 (CONDITIONAL_JUMP)  ; LAB_004eea72
    PUSH 0x5dd33c                       ; 004eea63 | = "Button 6"
    CALL FUN_0050fe80                   ; 004eea68
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eea6d
    ADD ESP,0x4                         ; 004eea6f
    CMP EBX,0x208                       ; 004eea72
        ;   Label: LAB_004eea72
    JNZ 0x004eea89                      ; 004eea78
        ;   XREF to: 004eea89 (CONDITIONAL_JUMP)  ; LAB_004eea89
    PUSH 0x5dd345                       ; 004eea7a | = "Button 7"
    CALL FUN_0050fe80                   ; 004eea7f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eea84
    ADD ESP,0x4                         ; 004eea86
    CMP EBX,0x209                       ; 004eea89
        ;   Label: LAB_004eea89
    JNZ 0x004eeaa0                      ; 004eea8f
        ;   XREF to: 004eeaa0 (CONDITIONAL_JUMP)  ; LAB_004eeaa0
    PUSH 0x5dd34e                       ; 004eea91 | = "Button 8"
    CALL FUN_0050fe80                   ; 004eea96
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eea9b
    ADD ESP,0x4                         ; 004eea9d
    CMP EBX,0x20a                       ; 004eeaa0
        ;   Label: LAB_004eeaa0
    JNZ 0x004eeab7                      ; 004eeaa6
        ;   XREF to: 004eeab7 (CONDITIONAL_JUMP)  ; LAB_004eeab7
    PUSH 0x5dd357                       ; 004eeaa8 | = "Button 9"
    CALL FUN_0050fe80                   ; 004eeaad
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eeab2
    ADD ESP,0x4                         ; 004eeab4
    CMP EBX,0x20b                       ; 004eeab7
        ;   Label: LAB_004eeab7
    JNZ 0x004eeace                      ; 004eeabd
        ;   XREF to: 004eeace (CONDITIONAL_JUMP)  ; LAB_004eeace
    PUSH 0x5dd360                       ; 004eeabf | = "Button 10"
    CALL FUN_0050fe80                   ; 004eeac4
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eeac9
    ADD ESP,0x4                         ; 004eeacb
    CMP EBX,0x251                       ; 004eeace
        ;   Label: LAB_004eeace
    JNZ 0x004eeae5                      ; 004eead4
        ;   XREF to: 004eeae5 (CONDITIONAL_JUMP)  ; LAB_004eeae5
    PUSH 0x5dd36a                       ; 004eead6 | = "Gamepad left"
    CALL FUN_0050fe80                   ; 004eeadb
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eeae0
    ADD ESP,0x4                         ; 004eeae2
    CMP EBX,0x252                       ; 004eeae5
        ;   Label: LAB_004eeae5
    JNZ 0x004eeafc                      ; 004eeaeb
        ;   XREF to: 004eeafc (CONDITIONAL_JUMP)  ; LAB_004eeafc
    PUSH 0x5dd377                       ; 004eeaed | = "Gamepad right"
    CALL FUN_0050fe80                   ; 004eeaf2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eeaf7
    ADD ESP,0x4                         ; 004eeaf9
    CMP EBX,0x253                       ; 004eeafc
        ;   Label: LAB_004eeafc
    JNZ 0x004eeb13                      ; 004eeb02
        ;   XREF to: 004eeb13 (CONDITIONAL_JUMP)  ; LAB_004eeb13
    PUSH 0x5dd385                       ; 004eeb04 | = "Gamepad forward"
    CALL FUN_0050fe80                   ; 004eeb09
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eeb0e
    ADD ESP,0x4                         ; 004eeb10
    CMP EBX,0x254                       ; 004eeb13
        ;   Label: LAB_004eeb13
    JNZ 0x004eeb2a                      ; 004eeb19
        ;   XREF to: 004eeb2a (CONDITIONAL_JUMP)  ; LAB_004eeb2a
    PUSH 0x5dd395                       ; 004eeb1b | = "Gamepad back"
    CALL FUN_0050fe80                   ; 004eeb20
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eeb25
    ADD ESP,0x4                         ; 004eeb27
    TEST ESI,ESI                        ; 004eeb2a
        ;   Label: LAB_004eeb2a
    JZ 0x004eeb8c                       ; 004eeb2c
        ;   XREF to: 004eeb8c (CONDITIONAL_JUMP)  ; LAB_004eeb8c
    MOV EDX,dword ptr [0x01d08d80]      ; 004eeb2e | DAT_01d08d80
        ;   Label: LAB_004eeb2e
    INC EDX                             ; 004eeb34
    MOV ECX,0xa                         ; 004eeb35
    MOV EAX,EDX                         ; 004eeb3a
    SAR EDX,0x1f                        ; 004eeb3c
    IDIV ECX                            ; 004eeb3f
    MOV EBX,dword ptr [0x01d08d80]      ; 004eeb41 | DAT_01d08d80
    SHL EBX,0x8                         ; 004eeb47
    ADD EBX,0x1d08d88                   ; 004eeb4a
    MOV EDI,EBX                         ; 004eeb50
    MOV dword ptr [0x01d08d80],EDX      ; 004eeb52 | DAT_01d08d80
    PUSH EDI                            ; 004eeb58
    MOV AL,byte ptr [ESI]               ; 004eeb59
        ;   Label: LAB_004eeb59
    MOV byte ptr [EDI],AL               ; 004eeb5b
    CMP AL,0x0                          ; 004eeb5d
    JZ 0x004eeb71                       ; 004eeb5f
        ;   XREF to: 004eeb71 (CONDITIONAL_JUMP)  ; LAB_004eeb71
    MOV AL,byte ptr [ESI + 0x1]         ; 004eeb61
    ADD ESI,0x2                         ; 004eeb64
    MOV byte ptr [EDI + 0x1],AL         ; 004eeb67
    ADD EDI,0x2                         ; 004eeb6a
    CMP AL,0x0                          ; 004eeb6d
    JNZ 0x004eeb59                      ; 004eeb6f
        ;   XREF to: 004eeb59 (CONDITIONAL_JUMP)  ; LAB_004eeb59
    POP EDI                             ; 004eeb71
        ;   Label: LAB_004eeb71
    MOV EAX,EBX                         ; 004eeb72
    POP EDI                             ; 004eeb74
    POP ESI                             ; 004eeb75
    POP EBX                             ; 004eeb76
    RET                                 ; 004eeb77
    PUSH 0x5dd2d3                       ; 004eeb78 | = "(none)"
        ;   Label: LAB_004eeb78
    CALL FUN_0050fe80                   ; 004eeb7d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV ESI,EAX                         ; 004eeb82
    ADD ESP,0x4                         ; 004eeb84
    JMP 0x004ee975                      ; 004eeb87
        ;   XREF to: 004ee975 (UNCONDITIONAL_JUMP)  ; LAB_004ee975
    PUSH EBX                            ; 004eeb8c
        ;   Label: LAB_004eeb8c
    CALL FUN_0058f630                   ; 004eeb8d
        ;   XREF to: 0058f630 (UNCONDITIONAL_CALL)  ; undefined FUN_0058f630()
    MOV ESI,EAX                         ; 004eeb92
    ADD ESP,0x4                         ; 004eeb94
    JMP 0x004eeb2e                      ; 004eeb97
        ;   XREF to: 004eeb2e (UNCONDITIONAL_JUMP)  ; LAB_004eeb2e

