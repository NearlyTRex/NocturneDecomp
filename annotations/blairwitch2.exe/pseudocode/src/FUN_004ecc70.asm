; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ecc70(void)
;
; Local Variables:
; undefined8       Stack[-0x11c]:8  local_11c
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ee1a0 at 004ee37a
;
; Referenced Globals:
;   void* switchdataD_004ecc34 = 004ecd46
;   void* switchdataD_004ecc44 = 004ecfc3
;   undefined4 s_Control_Keyboard_005dcf1c+1
;   TerminatedCString s_Control_Keyboard_Mouse_005dcf30
;   TerminatedCString s_Control_Gamepad_005dcf49
;   TerminatedCString s_Control_Mouse_005dcf5b
;   TerminatedCString s_Customize_Keys_005dcf6b
;   TerminatedCString s_Always_run_ON_005dcf7a
;   TerminatedCString s_Always_run_OFF_005dcf8a
;   TerminatedCString s_Aiming_Auto_005dcf9b
;   TerminatedCString s_Aiming_Kindof_auto_005dcfa9
;   TerminatedCString s_Aiming_Manual_005dcfbe
;   TerminatedCString s_Auto_use_health_On_005dcfce
;   TerminatedCString s_Auto_use_health_Off_005dcfe3
;   TerminatedCString s_X_axis_sensitivity_005dcff9
;   ... and 26 more
;
; Called Functions:
;   FUN_004b3000
;   FUN_004b3010
;   FUN_004eb0e0
;   FUN_004eb490
;   FUN_004eb7c0
;   FUN_004eed60
;   FUN_005024a0
;   FUN_00502510
;   FUN_0050fe80
;   FUN_005344c0
;   FUN_00589560
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecc70
        ;   Label: FUN_004ecc70
    PUSH ESI                            ; 004ecc71
    PUSH EDI                            ; 004ecc72
    PUSH EBP                            ; 004ecc73
    SUB ESP,0x104                       ; 004ecc74
    MOV ECX,dword ptr [0x00616494]      ; 004ecc7a | DAT_00616494
    XOR EDX,EDX                         ; 004ecc80
    PUSH ECX                            ; 004ecc82
    MOV EBX,0x1d06b80                   ; 004ecc83
    MOV dword ptr [ESP + 0x104],EDX     ; 004ecc88
    CALL FUN_004b3000                   ; 004ecc8f
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3000()
    ADD ESP,0x4                         ; 004ecc94
    XOR EAX,EAX                         ; 004ecc97
    MOV dword ptr [EAX + 0x1d07480],EBX ; 004ecc99
        ;   Label: LAB_004ecc99
    ADD EAX,0x4                         ; 004ecc9f
    ADD EBX,0x100                       ; 004ecca2
    CMP EAX,0x24                        ; 004ecca8
    JNZ 0x004ecc99                      ; 004eccab
        ;   XREF to: 004ecc99 (CONDITIONAL_JUMP)  ; LAB_004ecc99
    MOV EBX,dword ptr [0x00616494]      ; 004eccad | DAT_00616494
        ;   Label: LAB_004eccad
    PUSH EBX                            ; 004eccb3
    CALL FUN_004b3010                   ; 004eccb4
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3010()
    ADD ESP,0x4                         ; 004eccb9
    PUSH 0x10000                        ; 004eccbc
    PUSH 0xc350                         ; 004eccc1
    PUSH 0xc350                         ; 004eccc6
    MOV EAX,[0x0061b5a8]                ; 004ecccb | DAT_0061b5a8
    PUSH EAX                            ; 004eccd0
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004eccd1 | DAT_01fc103c
    CALL FUN_005344c0                   ; 004eccdb
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005344c0()
    MOV EAX,[0x0061b5a8]                ; 004ecce0 | DAT_0061b5a8
    ADD ESP,0x10                        ; 004ecce5
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ecce8 | DAT_01fc104c
    MOV EAX,[0x00616494]                ; 004eccf2 | DAT_00616494
    SUB ESP,0x4                         ; 004eccf7
    MOV EDX,dword ptr [EAX + 0x284]     ; 004eccfa | DAT_01cb6b84
    MOV dword ptr [ESP],EDX             ; 004ecd00
    PUSH 0x1d05620                      ; 004ecd03
    CALL FUN_005024a0                   ; 004ecd08
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005024a0()
    ADD ESP,0x8                         ; 004ecd0d
    PUSH 0x1d05620                      ; 004ecd10
    CALL FUN_00502510                   ; 004ecd15
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; undefined FUN_00502510()
    MOV EAX,[0x0061b5a8]                ; 004ecd1a | DAT_0061b5a8
    MOV ESI,dword ptr [0x00616494]      ; 004ecd1f | DAT_00616494
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ecd25 | DAT_01fc103c
    XOR EBX,EBX                         ; 004ecd2f
    MOV EAX,dword ptr [ESI + 0xd0]      ; 004ecd31 | DAT_01cb69d0
    ADD ESP,0x4                         ; 004ecd37
    CMP EAX,0x3                         ; 004ecd3a
    JA 0x004ecd67                       ; 004ecd3d
        ;   XREF to: 004ecd67 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4ecc34]  ; 004ecd3f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x5dcf1d                       ; 004ecd46 | s_Control_Keyboard_005dcf1c+1
        ;   Label: caseD_0
    MOV dword ptr [ESI + 0xd0],EBX      ; 004ecd4b | DAT_01cb69d0
    CALL FUN_0050fe80                   ; 004ecd51
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004ecd51
    ADD ESP,0x4                         ; 004ecd56
    PUSH EAX                            ; 004ecd59
    PUSH 0x1d06b80                      ; 004ecd5a
    CALL FUN_005b7790                   ; 004ecd5f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 004ecd64
    PUSH 0x5dcf6b                       ; 004ecd67 | = "Customize Keys"
        ;   Label: default
    CALL FUN_0050fe80                   ; 004ecd6c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ecd71
    INC EBX                             ; 004ecd74
    PUSH EAX                            ; 004ecd75
    MOV EAX,EBX                         ; 004ecd76
    SHL EAX,0x8                         ; 004ecd78
    ADD EAX,0x1d06b80                   ; 004ecd7b
    INC EBX                             ; 004ecd80
    PUSH EAX                            ; 004ecd81
    MOV ESI,EBX                         ; 004ecd82
    CALL FUN_005b7790                   ; 004ecd84
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    SHL ESI,0x8                         ; 004ecd89
    MOV EAX,[0x00616494]                ; 004ecd8c | DAT_00616494
    INC EBX                             ; 004ecd91
    ADD ESP,0x8                         ; 004ecd92
    MOV EDI,dword ptr [EAX + 0xac]      ; 004ecd95 | DAT_01cb69ac
    ADD ESI,0x1d06b80                   ; 004ecd9b
    TEST EDI,EDI                        ; 004ecda1
    JZ 0x004ed04a                       ; 004ecda3
        ;   XREF to: 004ed04a (CONDITIONAL_JUMP)  ; LAB_004ed04a
    PUSH 0x5dcf7a                       ; 004ecda9 | = "Always run : ON"
    CALL FUN_0050fe80                   ; 004ecdae
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004ecdae
    ADD ESP,0x4                         ; 004ecdb3
    PUSH EAX                            ; 004ecdb6
    PUSH ESI                            ; 004ecdb7
    CALL FUN_005b7790                   ; 004ecdb8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 004ecdbd
    MOV EAX,[0x00616494]                ; 004ecdc0 | DAT_00616494
    MOV EAX,dword ptr [EAX + 0xd8]      ; 004ecdc5 | DAT_01cb69d8
    CMP EAX,0x1                         ; 004ecdcb
    JNC 0x004ed07c                      ; 004ecdce
        ;   XREF to: 004ed07c (CONDITIONAL_JUMP)  ; LAB_004ed07c
    MOV EAX,[0x00616494]                ; 004ecdd4 | DAT_00616494
        ;   Label: LAB_004ecdd4
    PUSH 0x5dcf9b                       ; 004ecdd9 | = "Aiming : Auto"
    MOV dword ptr [EAX + 0xd8],0x0      ; 004ecdde | DAT_01cb69d8
    CALL FUN_0050fe80                   ; 004ecde8
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ecded
    PUSH EAX                            ; 004ecdf0
    MOV EAX,EBX                         ; 004ecdf1
    SHL EAX,0x8                         ; 004ecdf3
    ADD EAX,0x1d06b80                   ; 004ecdf6
    PUSH EAX                            ; 004ecdfb
    CALL FUN_005b7790                   ; 004ecdfc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
        ;   Label: LAB_004ecdfc
    ADD ESP,0x8                         ; 004ece01
    INC EBX                             ; 004ece04
    MOV EAX,[0x00616494]                ; 004ece05 | DAT_00616494
    MOV ESI,EBX                         ; 004ece0a
    MOV EBP,dword ptr [EAX + 0xdc]      ; 004ece0c | DAT_01cb69dc
    SHL ESI,0x8                         ; 004ece12
    INC EBX                             ; 004ece15
    ADD ESI,0x1d06b80                   ; 004ece16
    TEST EBP,EBP                        ; 004ece1c
    JZ 0x004ed096                       ; 004ece1e
        ;   XREF to: 004ed096 (CONDITIONAL_JUMP)  ; LAB_004ed096
    PUSH 0x5dcfce                       ; 004ece24 | = "Auto use health : On"
    CALL FUN_0050fe80                   ; 004ece29
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004ece29
    ADD ESP,0x4                         ; 004ece2e
    PUSH EAX                            ; 004ece31
    PUSH ESI                            ; 004ece32
    CALL FUN_005b7790                   ; 004ece33
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 004ece38
    PUSH 0x5dcff9                       ; 004ece3b | = "X-axis sensitivity : "
    CALL FUN_0050fe80                   ; 004ece40
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV EDI,EBX                         ; 004ece45
    ADD ESP,0x4                         ; 004ece47
    SHL EDI,0x8                         ; 004ece4a
    MOV ESI,EAX                         ; 004ece4d
    ADD EDI,0x1d06b80                   ; 004ece4f
    PUSH EDI                            ; 004ece55
    MOV AL,byte ptr [ESI]               ; 004ece56
        ;   Label: LAB_004ece56
    MOV byte ptr [EDI],AL               ; 004ece58
    CMP AL,0x0                          ; 004ece5a
    JZ 0x004ece6e                       ; 004ece5c
        ;   XREF to: 004ece6e (CONDITIONAL_JUMP)  ; LAB_004ece6e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ece5e
    ADD ESI,0x2                         ; 004ece61
    MOV byte ptr [EDI + 0x1],AL         ; 004ece64
    ADD EDI,0x2                         ; 004ece67
    CMP AL,0x0                          ; 004ece6a
    JNZ 0x004ece56                      ; 004ece6c
        ;   XREF to: 004ece56 (CONDITIONAL_JUMP)  ; LAB_004ece56
    POP EDI                             ; 004ece6e
        ;   Label: LAB_004ece6e
    MOV EAX,[0x00616494]                ; 004ece6f | DAT_00616494
    FILD dword ptr [EAX + 0xb0]         ; 004ece74 | DAT_01cb69b0
    FMUL double ptr [0x005dd0ad]        ; 004ece7a | DAT_005dd0ad
    SUB ESP,0x8                         ; 004ece80
    FSTP double ptr [ESP]               ; 004ece83
    PUSH 0x5dd00f                       ; 004ece86 | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 004ece8b
    PUSH EAX                            ; 004ece8f
    CALL FUN_005b7790                   ; 004ece90
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 004ece95
    MOV ESI,ESP                         ; 004ece98
    PUSH EDI                            ; 004ece9a
    SUB ECX,ECX                         ; 004ece9b
    DEC ECX                             ; 004ece9d
    MOV AL,0x0                          ; 004ece9e
    SCASB.REPNE ES:EDI                  ; 004ecea0
    DEC EDI                             ; 004ecea2
    MOV AL,byte ptr [ESI]               ; 004ecea3
        ;   Label: LAB_004ecea3
    MOV byte ptr [EDI],AL               ; 004ecea5
    CMP AL,0x0                          ; 004ecea7
    JZ 0x004ecebb                       ; 004ecea9
        ;   XREF to: 004ecebb (CONDITIONAL_JUMP)  ; LAB_004ecebb
    MOV AL,byte ptr [ESI + 0x1]         ; 004eceab
    ADD ESI,0x2                         ; 004eceae
    MOV byte ptr [EDI + 0x1],AL         ; 004eceb1
    ADD EDI,0x2                         ; 004eceb4
    CMP AL,0x0                          ; 004eceb7
    JNZ 0x004ecea3                      ; 004eceb9
        ;   XREF to: 004ecea3 (CONDITIONAL_JUMP)  ; LAB_004ecea3
    POP EDI                             ; 004ecebb
        ;   Label: LAB_004ecebb
    PUSH 0x5dd015                       ; 004ecebc | = "Y-axis sensitivity : "
    INC EBX                             ; 004ecec1
    CALL FUN_0050fe80                   ; 004ecec2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV EDI,EBX                         ; 004ecec7
    ADD ESP,0x4                         ; 004ecec9
    SHL EDI,0x8                         ; 004ececc
    MOV ESI,EAX                         ; 004ececf
    ADD EDI,0x1d06b80                   ; 004eced1
    PUSH EDI                            ; 004eced7
    MOV AL,byte ptr [ESI]               ; 004eced8
        ;   Label: LAB_004eced8
    MOV byte ptr [EDI],AL               ; 004eceda
    CMP AL,0x0                          ; 004ecedc
    JZ 0x004ecef0                       ; 004ecede
        ;   XREF to: 004ecef0 (CONDITIONAL_JUMP)  ; LAB_004ecef0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ecee0
    ADD ESI,0x2                         ; 004ecee3
    MOV byte ptr [EDI + 0x1],AL         ; 004ecee6
    ADD EDI,0x2                         ; 004ecee9
    CMP AL,0x0                          ; 004eceec
    JNZ 0x004eced8                      ; 004eceee
        ;   XREF to: 004eced8 (CONDITIONAL_JUMP)  ; LAB_004eced8
    POP EDI                             ; 004ecef0
        ;   Label: LAB_004ecef0
    MOV EAX,[0x00616494]                ; 004ecef1 | DAT_00616494
    FILD dword ptr [EAX + 0xb4]         ; 004ecef6 | DAT_01cb69b4
    FMUL double ptr [0x005dd0ad]        ; 004ecefc | DAT_005dd0ad
    SUB ESP,0x8                         ; 004ecf02
    FSTP double ptr [ESP]               ; 004ecf05
    PUSH 0x5dd02b                       ; 004ecf08 | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 004ecf0d
    PUSH EAX                            ; 004ecf11
    CALL FUN_005b7790                   ; 004ecf12
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 004ecf17
    MOV ESI,ESP                         ; 004ecf1a
    INC EBX                             ; 004ecf1c
    PUSH EDI                            ; 004ecf1d
    SUB ECX,ECX                         ; 004ecf1e
    DEC ECX                             ; 004ecf20
    MOV AL,0x0                          ; 004ecf21
    SCASB.REPNE ES:EDI                  ; 004ecf23
    DEC EDI                             ; 004ecf25
    MOV AL,byte ptr [ESI]               ; 004ecf26
        ;   Label: LAB_004ecf26
    MOV byte ptr [EDI],AL               ; 004ecf28
    CMP AL,0x0                          ; 004ecf2a
    JZ 0x004ecf3e                       ; 004ecf2c
        ;   XREF to: 004ecf3e (CONDITIONAL_JUMP)  ; LAB_004ecf3e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ecf2e
    ADD ESI,0x2                         ; 004ecf31
    MOV byte ptr [EDI + 0x1],AL         ; 004ecf34
    ADD EDI,0x2                         ; 004ecf37
    CMP AL,0x0                          ; 004ecf3a
    JNZ 0x004ecf26                      ; 004ecf3c
        ;   XREF to: 004ecf26 (CONDITIONAL_JUMP)  ; LAB_004ecf26
    POP EDI                             ; 004ecf3e
        ;   Label: LAB_004ecf3e
    MOV ESI,EBX                         ; 004ecf3f
    MOV EAX,[0x00616494]                ; 004ecf41 | DAT_00616494
    SHL ESI,0x8                         ; 004ecf46
    LEA EBP,[EBX + 0x1]                 ; 004ecf49
    MOV EDX,dword ptr [EAX + 0xd0]      ; 004ecf4c | DAT_01cb69d0
    ADD ESI,0x1d06b80                   ; 004ecf52
    CMP EDX,0x1                         ; 004ecf58
    JNZ 0x004ed0aa                      ; 004ecf5b
        ;   XREF to: 004ed0aa (CONDITIONAL_JUMP)  ; LAB_004ed0aa
    CMP dword ptr [EAX + 0xa8],0x0      ; 004ecf61 | DAT_01cb69a8
    JZ 0x004ed0a0                       ; 004ecf68
        ;   XREF to: 004ed0a0 (CONDITIONAL_JUMP)  ; LAB_004ed0a0
    PUSH 0x5dd031                       ; 004ecf6e | = "Invert Y Axis : ON"
    CALL FUN_0050fe80                   ; 004ecf73
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004ecf73
    ADD ESP,0x4                         ; 004ecf78
    PUSH EAX                            ; 004ecf7b
    PUSH ESI                            ; 004ecf7c
    MOV EBX,EBP                         ; 004ecf7d
    CALL FUN_005b7790                   ; 004ecf7f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 004ecf84
    PUSH 0x5dd062                       ; 004ecf87 | = "Control Options"
        ;   Label: LAB_004ecf87
    CALL FUN_0050fe80                   ; 004ecf8c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ecf91
    PUSH EAX                            ; 004ecf94
    PUSH 0x122                          ; 004ecf95
    LEA EAX,[ESP + 0x108]               ; 004ecf9a
    PUSH EAX                            ; 004ecfa1
    PUSH EBX                            ; 004ecfa2
    PUSH 0x1d07480                      ; 004ecfa3
    CALL FUN_004eb0e0                   ; 004ecfa8
        ;   XREF to: 004eb0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb0e0()
    ADD ESP,0x14                        ; 004ecfad
    MOV EBX,EAX                         ; 004ecfb0
    CALL FUN_00589560                   ; 004ecfb2
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    CMP EBX,0x7                         ; 004ecfb7
    JA 0x004ecfee                       ; 004ecfba
        ;   XREF to: 004ecfee (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4ecc44]  ; 004ecfbc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,dword ptr [0x01d0612c]      ; 004ecfc3 | DAT_01d0612c
        ;   Label: caseD_0
    CMP EDI,0x1                         ; 004ecfc9
    JNZ 0x004ed0cc                      ; 004ecfcc
        ;   XREF to: 004ed0cc (CONDITIONAL_JUMP)  ; LAB_004ed0cc
    MOV EBX,dword ptr [0x00616494]      ; 004ecfd2 | DAT_00616494
    MOV EAX,dword ptr [EBX + 0xd0]      ; 004ecfd8 | DAT_01cb69d0
    SUB EAX,EDI                         ; 004ecfde
    MOV dword ptr [EBX + 0xd0],EAX      ; 004ecfe0 | DAT_01cb69d0
    TEST EAX,EAX                        ; 004ecfe6
    JL 0x004ed0bd                       ; 004ecfe8
        ;   XREF to: 004ed0bd (CONDITIONAL_JUMP)  ; LAB_004ed0bd
    PUSH 0x1                            ; 004ecfee
        ;   Label: default
    MOV EAX,[0x00617dd4]                ; 004ecff0 | DAT_00617dd4
    PUSH EAX                            ; 004ecff5 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 004ecff6 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 004ecff8
    ADD ESP,0x8                         ; 004ecffb
    TEST EAX,EAX                        ; 004ecffe
    JZ 0x004eccad                       ; 004ed000
        ;   XREF to: 004eccad (CONDITIONAL_JUMP)  ; LAB_004eccad
    MOV EAX,[0x00616494]                ; 004ed006 | DAT_00616494
    CMP dword ptr [EAX + 0xd0],0x2      ; 004ed00b | DAT_01cb69d0
    JNZ 0x004ed021                      ; 004ed012
        ;   XREF to: 004ed021 (CONDITIONAL_JUMP)  ; LAB_004ed021
    CMP dword ptr [EAX + 0xb8],0x0      ; 004ed014 | DAT_01cb69b8
    JZ 0x004ed1f6                       ; 004ed01b
        ;   XREF to: 004ed1f6 (CONDITIONAL_JUMP)  ; LAB_004ed1f6
    ADD ESP,0x104                       ; 004ed021
        ;   Label: LAB_004ed021
    POP EBP                             ; 004ed027
    POP EDI                             ; 004ed028
    POP ESI                             ; 004ed029
    POP EBX                             ; 004ed02a
    RET                                 ; 004ed02b
    PUSH 0x5dcf30                       ; 004ed02c | = "Control : Keyboard/Mouse"
        ;   Label: caseD_1
    JMP 0x004ecd51                      ; 004ed031
        ;   XREF to: 004ecd51 (UNCONDITIONAL_JUMP)  ; LAB_004ecd51
    PUSH 0x5dcf49                       ; 004ed036 | = "Control : Gamepad"
        ;   Label: caseD_2
    JMP 0x004ecd51                      ; 004ed03b
        ;   XREF to: 004ecd51 (UNCONDITIONAL_JUMP)  ; LAB_004ecd51
    PUSH 0x5dcf5b                       ; 004ed040 | = "Control : Mouse"
        ;   Label: caseD_3
    JMP 0x004ecd51                      ; 004ed045
        ;   XREF to: 004ecd51 (UNCONDITIONAL_JUMP)  ; LAB_004ecd51
    PUSH 0x5dcf8a                       ; 004ed04a | = "Always run : OFF"
        ;   Label: LAB_004ed04a
    JMP 0x004ecdae                      ; 004ed04f
        ;   XREF to: 004ecdae (UNCONDITIONAL_JUMP)  ; LAB_004ecdae
    PUSH 0x5dcfa9                       ; 004ed054 | = "Aiming : Kindof auto"
        ;   Label: LAB_004ed054
    CALL FUN_0050fe80                   ; 004ed059
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ed05e
    PUSH EAX                            ; 004ed061
    PUSH ESI                            ; 004ed062
    JMP 0x004ecdfc                      ; 004ed063
        ;   XREF to: 004ecdfc (UNCONDITIONAL_JUMP)  ; LAB_004ecdfc
    PUSH 0x5dcfbe                       ; 004ed068 | = "Aiming : Manual"
        ;   Label: LAB_004ed068
    CALL FUN_0050fe80                   ; 004ed06d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ed072
    PUSH EAX                            ; 004ed075
    PUSH ESI                            ; 004ed076
    JMP 0x004ecdfc                      ; 004ed077
        ;   XREF to: 004ecdfc (UNCONDITIONAL_JUMP)  ; LAB_004ecdfc
    MOV ESI,EBX                         ; 004ed07c
        ;   Label: LAB_004ed07c
    SHL ESI,0x8                         ; 004ed07e
    ADD ESI,0x1d06b80                   ; 004ed081
    CMP EAX,0x1                         ; 004ed087
    JBE 0x004ed054                      ; 004ed08a
        ;   XREF to: 004ed054 (CONDITIONAL_JUMP)  ; LAB_004ed054
    CMP EAX,0x2                         ; 004ed08c
    JZ 0x004ed068                       ; 004ed08f
        ;   XREF to: 004ed068 (CONDITIONAL_JUMP)  ; LAB_004ed068
    JMP 0x004ecdd4                      ; 004ed091
        ;   XREF to: 004ecdd4 (UNCONDITIONAL_JUMP)  ; LAB_004ecdd4
    PUSH 0x5dcfe3                       ; 004ed096 | = "Auto use health : Off"
        ;   Label: LAB_004ed096
    JMP 0x004ece29                      ; 004ed09b
        ;   XREF to: 004ece29 (UNCONDITIONAL_JUMP)  ; LAB_004ece29
    PUSH 0x5dd044                       ; 004ed0a0 | = "Invert Y Axis : OFF"
        ;   Label: LAB_004ed0a0
    JMP 0x004ecf73                      ; 004ed0a5
        ;   XREF to: 004ecf73 (UNCONDITIONAL_JUMP)  ; LAB_004ecf73
    CMP EDX,0x2                         ; 004ed0aa
        ;   Label: LAB_004ed0aa
    JNZ 0x004ecf87                      ; 004ed0ad
        ;   XREF to: 004ecf87 (CONDITIONAL_JUMP)  ; LAB_004ecf87
    PUSH 0x5dd058                       ; 004ed0b3 | = "Calibrate"
    JMP 0x004ecf73                      ; 004ed0b8
        ;   XREF to: 004ecf73 (UNCONDITIONAL_JUMP)  ; LAB_004ecf73
    MOV dword ptr [EBX + 0xd0],0x3      ; 004ed0bd | DAT_01cb69d0
        ;   Label: LAB_004ed0bd
    JMP 0x004ecfee                      ; 004ed0c7
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed0cc | DAT_00616494
        ;   Label: LAB_004ed0cc
    MOV EBX,dword ptr [EAX + 0xd0]      ; 004ed0d1 | DAT_01cb69d0
    INC EBX                             ; 004ed0d7
    MOV dword ptr [EAX + 0xd0],EBX      ; 004ed0d8 | DAT_01cb69d0
    CMP EBX,0x3                         ; 004ed0de
    JLE 0x004ecfee                      ; 004ed0e1
        ;   XREF to: 004ecfee (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xd0],0x0      ; 004ed0e7 | DAT_01cb69d0
    JMP 0x004ecfee                      ; 004ed0f1
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    CALL FUN_004eed60                   ; 004ed0f6
        ;   XREF to: 004eed60 (UNCONDITIONAL_CALL)  ; undefined FUN_004eed60()
        ;   Label: caseD_1
    JMP 0x004ecfee                      ; 004ed0fb
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed100 | DAT_00616494
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0xac],0x0      ; 004ed105 | DAT_01cb69ac
    SETZ BL                             ; 004ed10c
    AND EBX,0xff                        ; 004ed10f
    MOV dword ptr [EAX + 0xac],EBX      ; 004ed115 | DAT_01cb69ac
    JMP 0x004ecfee                      ; 004ed11b
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed120 | DAT_00616494
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0xd8],0x0      ; 004ed125 | DAT_01cb69d8
    JNZ 0x004ed13d                      ; 004ed12c
        ;   XREF to: 004ed13d (CONDITIONAL_JUMP)  ; LAB_004ed13d
    MOV dword ptr [EAX + 0xd8],0x2      ; 004ed12e | DAT_01cb69d8
    JMP 0x004ecfee                      ; 004ed138
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xd8],0x0      ; 004ed13d | DAT_01cb69d8
        ;   Label: LAB_004ed13d
    JMP 0x004ecfee                      ; 004ed147
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed14c | DAT_00616494
        ;   Label: caseD_4
    CMP dword ptr [EAX + 0xdc],0x0      ; 004ed151 | DAT_01cb69dc
    SETZ BL                             ; 004ed158
    AND EBX,0xff                        ; 004ed15b
    MOV dword ptr [EAX + 0xdc],EBX      ; 004ed161 | DAT_01cb69dc
    JMP 0x004ecfee                      ; 004ed167
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5dd072                       ; 004ed16c | = "Adjust X-Axis sensitivity"
        ;   Label: caseD_5
    CALL FUN_0050fe80                   ; 004ed171
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ed176
    PUSH EAX                            ; 004ed179
    MOV EAX,[0x00616494]                ; 004ed17a | DAT_00616494
    ADD EAX,0xb0                        ; 004ed17f
    PUSH EAX                            ; 004ed184 | DAT_01cb69b0
    CALL FUN_004eb7c0                   ; 004ed185
        ;   XREF to: 004eb7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb7c0()
    ADD ESP,0x8                         ; 004ed18a
    JMP 0x004ecfee                      ; 004ed18d
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5dd08c                       ; 004ed192 | = "Adjust Y-Axis sensitivity"
        ;   Label: caseD_6
    CALL FUN_0050fe80                   ; 004ed197
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ed19c
    PUSH EAX                            ; 004ed19f
    MOV EAX,[0x00616494]                ; 004ed1a0 | DAT_00616494
    ADD EAX,0xb4                        ; 004ed1a5
    PUSH EAX                            ; 004ed1aa | DAT_01cb69b4
    CALL FUN_004eb7c0                   ; 004ed1ab
        ;   XREF to: 004eb7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb7c0()
    ADD ESP,0x8                         ; 004ed1b0
    JMP 0x004ecfee                      ; 004ed1b3
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed1b8 | DAT_00616494
        ;   Label: caseD_7
    MOV ESI,dword ptr [EAX + 0xd0]      ; 004ed1bd | DAT_01cb69d0
    CMP ESI,0x1                         ; 004ed1c3
    JNZ 0x004ed1e3                      ; 004ed1c6
        ;   XREF to: 004ed1e3 (CONDITIONAL_JUMP)  ; LAB_004ed1e3
    CMP dword ptr [EAX + 0xa8],0x0      ; 004ed1c8 | DAT_01cb69a8
    SETZ BL                             ; 004ed1cf
    AND EBX,0xff                        ; 004ed1d2
    MOV dword ptr [EAX + 0xa8],EBX      ; 004ed1d8 | DAT_01cb69a8
    JMP 0x004ecfee                      ; 004ed1de
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x2                         ; 004ed1e3
        ;   Label: LAB_004ed1e3
    JNZ 0x004ecfee                      ; 004ed1e6
        ;   XREF to: 004ecfee (CONDITIONAL_JUMP)  ; default
    CALL FUN_004eb490                   ; 004ed1ec
        ;   XREF to: 004eb490 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb490()
    JMP 0x004ecfee                      ; 004ed1f1
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    CALL FUN_004eb490                   ; 004ed1f6
        ;   XREF to: 004eb490 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb490()
        ;   Label: LAB_004ed1f6
    TEST EAX,EAX                        ; 004ed1fb
    JNZ 0x004ed021                      ; 004ed1fd
        ;   XREF to: 004ed021 (CONDITIONAL_JUMP)  ; LAB_004ed021
    JMP 0x004eccad                      ; 004ed203
        ;   XREF to: 004eccad (UNCONDITIONAL_JUMP)  ; LAB_004eccad

