; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ece70(int *param_1)
;
;
; XREF[1]:
;   FUN_004ea830 at 004ea923
;
; Referenced Globals:
;   string s_..\\core\\netgame.cpp_0058c430
;   string s_CNetGame::gameSettingsChanged_-_s_0058c444
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01cea404
;
; Called Functions:
;   FUN_004c8440
;   FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ece70
        ;   Label: FUN_004ece70
    PUSH ESI                            ; 004ece71
    PUSH EDI                            ; 004ece72
    PUSH EBP                            ; 004ece73
    MOV ESI,dword ptr [0x01cea3f8]      ; 004ece74 | DAT_01cea3f8
    MOV EDI,dword ptr [0x01cea404]      ; 004ece7a | DAT_01cea404
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ece80
    CMP dword ptr [EBX],0x1             ; 004ece84
    JNZ 0x004ecf15                      ; 004ece87
        ;   XREF to: 004ecf15 (CONDITIONAL_JUMP)  ; LAB_004ecf15
    MOV EDI,dword ptr [0x01cea404]      ; 004ece8d | DAT_01cea404
        ;   Label: LAB_004ece8d
    INC EDI                             ; 004ece93
    MOV dword ptr [0x01cea404],EDI      ; 004ece94 | DAT_01cea404
    CALL FUN_00558a30                   ; 004ece9a
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00558a30()
    MOV EDX,EAX                         ; 004ece9f
    MOV ECX,0x12                        ; 004ecea1
    SAR EDX,0x1f                        ; 004ecea6
    IDIV ECX                            ; 004ecea9
    MOV EDI,dword ptr [0x01cea404]      ; 004eceab | DAT_01cea404
    MOV ECX,dword ptr [0x01cea3f4]      ; 004eceb1 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004eceb7
    SUB EAX,ECX                         ; 004eceb9
    MOV dword ptr [0x01cea3f4],EDX      ; 004ecebb | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ecec1
    JL 0x004ecf3d                       ; 004ecec3
        ;   XREF to: 004ecf3d (CONDITIONAL_JUMP)  ; LAB_004ecf3d
    MOV ESI,dword ptr [0x01cea3f8]      ; 004ecec9 | DAT_01cea3f8
    CMP EAX,0x20000                     ; 004ececf
    JLE 0x004ecedb                      ; 004eced4
        ;   XREF to: 004ecedb (CONDITIONAL_JUMP)  ; LAB_004ecedb
    MOV EAX,0x20000                     ; 004eced6
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004ecedb
        ;   Label: LAB_004ecedb
    ADD ESI,EAX                         ; 004ecede
    XOR EAX,EAX                         ; 004ecee0
    TEST EBP,EBP                        ; 004ecee2
    JLE 0x004ecf04                      ; 004ecee4
        ;   XREF to: 004ecf04 (CONDITIONAL_JUMP)  ; LAB_004ecf04
    MOV EDX,EBX                         ; 004ecee6
    CMP EAX,dword ptr [EBX + 0x114]     ; 004ecee8
        ;   Label: LAB_004ecee8
    JZ 0x004ecf47                       ; 004eceee
        ;   XREF to: 004ecf47 (CONDITIONAL_JUMP)  ; LAB_004ecf47
    LEA ECX,[ESI + 0xffe20000]          ; 004ecef0
    MOV dword ptr [EDX + 0x58],ECX      ; 004ecef6
    INC EAX                             ; 004ecef9
        ;   Label: LAB_004ecef9
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004ecefa
    ADD EDX,0x78                        ; 004ecefd
    CMP EAX,ECX                         ; 004ecf00
    JL 0x004ecee8                       ; 004ecf02
        ;   XREF to: 004ecee8 (CONDITIONAL_JUMP)  ; LAB_004ecee8
    MOV dword ptr [0x01cea404],EDI      ; 004ecf04 | DAT_01cea404
        ;   Label: LAB_004ecf04
    MOV dword ptr [0x01cea3f8],ESI      ; 004ecf0a | DAT_01cea3f8
    POP EBP                             ; 004ecf10
    POP EDI                             ; 004ecf11
    POP ESI                             ; 004ecf12
    POP EBX                             ; 004ecf13
    RET                                 ; 004ecf14
    MOV ECX,0x58c430                    ; 004ecf15 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ecf15
    MOV EBP,0x88c                       ; 004ecf1a
    PUSH 0x58c444                       ; 004ecf1f | = "CNetGame::gameSettingsChanged - shoul..."
    MOV dword ptr [0x01cc4800],ECX      ; 004ecf24 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004ecf2a | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ecf30
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ecf35
    JMP 0x004ece8d                      ; 004ecf38
        ;   XREF to: 004ece8d (UNCONDITIONAL_JUMP)  ; LAB_004ece8d
    MOV ESI,dword ptr [0x01cea3f8]      ; 004ecf3d | DAT_01cea3f8
        ;   Label: LAB_004ecf3d
    XOR EAX,EAX                         ; 004ecf43
    JMP 0x004ecedb                      ; 004ecf45
        ;   XREF to: 004ecedb (UNCONDITIONAL_JUMP)  ; LAB_004ecedb
    MOV dword ptr [EDX + 0x54],EDI      ; 004ecf47
        ;   Label: LAB_004ecf47
    JMP 0x004ecef9                      ; 004ecf4a
        ;   XREF to: 004ecef9 (UNCONDITIONAL_JUMP)  ; LAB_004ecef9

