; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551100(int param_1,undefined4 param_2)
;
;
; XREF[6]:
;   FUN_004ed260 at 004edcb0
;   FUN_005523d0 at 005523d9
;   FUN_00553680 at 00553953
;   FUN_0055a1d0 at 0055a29e
;   FUN_0055a3c0 at 0055a64f
;   FUN_0055ac50 at 0055ac99
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8d77
;   TerminatedCString s_setSfxChannelVol_invalid_005e8d8c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0263cf80
;   undefined4 DAT_0263d038
;   undefined4 DAT_0263d098
;   undefined4 DAT_0263d09c
;   undefined4 DAT_0263d150
;   undefined4 DAT_02648e80
;
; Called Functions:
;   FUN_004e4500
;   FUN_00551440
;   FUN_00552b30
;   FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551100
        ;   Label: FUN_00551100
    PUSH ESI                            ; 00551101
    MOV EBX,dword ptr [ESP + 0xc]       ; 00551102
    TEST EBX,EBX                        ; 00551106
    JL 0x0055110f                       ; 00551108
        ;   XREF to: 0055110f (CONDITIONAL_JUMP)  ; LAB_0055110f
    CMP EBX,0x20                        ; 0055110a
    JL 0x00551133                       ; 0055110d
        ;   XREF to: 00551133 (CONDITIONAL_JUMP)  ; LAB_00551133
    PUSH EBX                            ; 0055110f
        ;   Label: LAB_0055110f
    MOV EDX,0x5e8d77                    ; 00551110 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x110e                      ; 00551115
    PUSH 0x5e8d8c                       ; 0055111a | = "setSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01d046a0],EDX      ; 0055111f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00551125 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0055112b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00551130
    MOV EDX,dword ptr [ESP + 0x10]      ; 00551133
        ;   Label: LAB_00551133
    MOV ESI,dword ptr [0x02648e80]      ; 00551137 | DAT_02648e80
    MOV dword ptr [EBX*0x4 + 0x26484c0],EDX ; 0055113d
    TEST ESI,ESI                        ; 00551144
    JNZ 0x0055114b                      ; 00551146
        ;   XREF to: 0055114b (CONDITIONAL_JUMP)  ; LAB_0055114b
    POP ESI                             ; 00551148
        ;   Label: LAB_00551148
    POP EBX                             ; 00551149
    RET                                 ; 0055114a
    CALL FUN_00552b30                   ; 0055114b
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00552b30()
        ;   Label: LAB_0055114b
    CMP EAX,0x1                         ; 00551150
    JL 0x00551148                       ; 00551153
        ;   XREF to: 00551148 (CONDITIONAL_JUMP)  ; LAB_00551148
    CALL FUN_005532f0                   ; 00551155
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
    MOV EAX,0x263cf1c                   ; 0055115a
    LEA EDX,[EAX + 0x4700]              ; 0055115f
    XOR ECX,ECX                         ; 00551165
    CMP ECX,dword ptr [EAX + 0x64]      ; 00551167 | DAT_0263cf80 | DAT_0263d09c
        ;   Label: LAB_00551167
    JNZ 0x0055117d                      ; 0055116a
        ;   XREF to: 0055117d (CONDITIONAL_JUMP)  ; LAB_0055117d
    ADD EAX,0x11c                       ; 0055116c
        ;   Label: LAB_0055116c
    CMP EAX,EDX                         ; 00551171
    JNZ 0x00551167                      ; 00551173
        ;   XREF to: 00551167 (CONDITIONAL_JUMP)  ; LAB_00551167
    CALL FUN_00551440                   ; 00551175
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    POP ESI                             ; 0055117a
    POP EBX                             ; 0055117b
    RET                                 ; 0055117c
    CMP ECX,dword ptr [EAX + 0x60]      ; 0055117d | DAT_0263d098
        ;   Label: LAB_0055117d
    JZ 0x0055116c                       ; 00551180
        ;   XREF to: 0055116c (CONDITIONAL_JUMP)  ; LAB_0055116c
    CMP EBX,dword ptr [EAX]             ; 00551182 | DAT_0263d038
    JNZ 0x0055116c                      ; 00551184
        ;   XREF to: 0055116c (CONDITIONAL_JUMP)  ; LAB_0055116c
    OR byte ptr [EAX + 0x118],0x8       ; 00551186 | DAT_0263d150
    JMP 0x0055116c                      ; 0055118d
        ;   XREF to: 0055116c (UNCONDITIONAL_JUMP)  ; LAB_0055116c

