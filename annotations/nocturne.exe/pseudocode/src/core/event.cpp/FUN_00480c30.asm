; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480c30(int param_1,char *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0047ac50 at 0047c532
;
; Referenced Globals:
;   string s_..\\core\\event.cpp_00580c26
;   string s_CEventList::setSfxHandle_-_too_m_00580c38
;   string s_..\\core\\event.cpp_00580c61
;   string s_CEventList::setSfxHandle_-_sfx_h_00580c73
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00480d10
;   FUN_00480d60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480c30
        ;   Label: FUN_00480c30
    PUSH ESI                            ; 00480c31
    PUSH EDI                            ; 00480c32
    PUSH EBP                            ; 00480c33
    MOV EBX,dword ptr [ESP + 0x14]      ; 00480c34
    MOV ESI,dword ptr [ESP + 0x18]      ; 00480c38
    PUSH EBX                            ; 00480c3c
    CALL FUN_00480d60                   ; 00480c3d
        ;   XREF to: 00480d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d60()
    ADD ESP,0x4                         ; 00480c42
    PUSH ESI                            ; 00480c45
    PUSH EBX                            ; 00480c46
    CALL FUN_00480d10                   ; 00480c47
        ;   XREF to: 00480d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d10()
    ADD ESP,0x8                         ; 00480c4c
    MOV EDX,EAX                         ; 00480c4f
    TEST EAX,EAX                        ; 00480c51
    JGE 0x00480c90                      ; 00480c53
        ;   XREF to: 00480c90 (CONDITIONAL_JUMP)  ; LAB_00480c90
    CMP dword ptr [EBX + 0x3ac8],0x14   ; 00480c55
    JL 0x00480c81                       ; 00480c5c
        ;   XREF to: 00480c81 (CONDITIONAL_JUMP)  ; LAB_00480c81
    MOV ECX,0x580c26                    ; 00480c5e | = "..\\core\\event.cpp"
    MOV EDI,0xba6                       ; 00480c63
    PUSH 0x580c38                       ; 00480c68 | = "CEventList::setSfxHandle - too many sfx!"
    MOV dword ptr [0x01cc4800],ECX      ; 00480c6d | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00480c73 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00480c79
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00480c7e
    MOV EDX,dword ptr [EBX + 0x3ac8]    ; 00480c81
        ;   Label: LAB_00480c81
    LEA EAX,[EDX + 0x1]                 ; 00480c87
    MOV dword ptr [EBX + 0x3ac8],EAX    ; 00480c8a
    LEA EAX,[EDX*0x8 + 0x0]             ; 00480c90
        ;   Label: LAB_00480c90
    ADD EAX,EDX                         ; 00480c97
    LEA EBP,[EBX + 0x3acc]              ; 00480c99
    SHL EAX,0x5                         ; 00480c9f
    MOV EDI,ESI                         ; 00480ca2
    ADD EBP,EAX                         ; 00480ca4
    SUB ECX,ECX                         ; 00480ca6
    DEC ECX                             ; 00480ca8
    XOR EAX,EAX                         ; 00480ca9
    SCASB.REPNE ES:EDI                  ; 00480cab
    NOT ECX                             ; 00480cad
    DEC ECX                             ; 00480caf
    CMP ECX,0x14                        ; 00480cb0
    JNC 0x00480ce7                      ; 00480cb3
        ;   XREF to: 00480ce7 (CONDITIONAL_JUMP)  ; LAB_00480ce7
    LEA EDI,[EBP + 0x4]                 ; 00480cb5
        ;   Label: LAB_00480cb5
    PUSH EDI                            ; 00480cb8
    MOV AL,byte ptr [ESI]               ; 00480cb9
        ;   Label: LAB_00480cb9
    MOV byte ptr [EDI],AL               ; 00480cbb
    CMP AL,0x0                          ; 00480cbd
    JZ 0x00480cd1                       ; 00480cbf
        ;   XREF to: 00480cd1 (CONDITIONAL_JUMP)  ; LAB_00480cd1
    MOV AL,byte ptr [ESI + 0x1]         ; 00480cc1
    ADD ESI,0x2                         ; 00480cc4
    MOV byte ptr [EDI + 0x1],AL         ; 00480cc7
    ADD EDI,0x2                         ; 00480cca
    CMP AL,0x0                          ; 00480ccd
    JNZ 0x00480cb9                      ; 00480ccf
        ;   XREF to: 00480cb9 (CONDITIONAL_JUMP)  ; LAB_00480cb9
    POP EDI                             ; 00480cd1
        ;   Label: LAB_00480cd1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00480cd2
    PUSH EBX                            ; 00480cd6
    MOV dword ptr [EBP],EAX             ; 00480cd7
    CALL FUN_00480d60                   ; 00480cda
        ;   XREF to: 00480d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d60()
    ADD ESP,0x4                         ; 00480cdf
    POP EBP                             ; 00480ce2
    POP EDI                             ; 00480ce3
    POP ESI                             ; 00480ce4
    POP EBX                             ; 00480ce5
    RET                                 ; 00480ce6
    PUSH 0x13                           ; 00480ce7
        ;   Label: LAB_00480ce7
    PUSH ESI                            ; 00480ce9
    MOV EAX,0x580c61                    ; 00480cea | = "..\\core\\event.cpp"
    MOV EDX,0xbae                       ; 00480cef
    PUSH 0x580c73                       ; 00480cf4 | = "CEventList::setSfxHandle - sfx handle..."
    MOV [0x01cc4800],EAX                ; 00480cf9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00480cfe | DAT_01cc4804
    CALL FUN_004c8440                   ; 00480d04
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00480d09
    JMP 0x00480cb5                      ; 00480d0c
        ;   XREF to: 00480cb5 (UNCONDITIONAL_JUMP)  ; LAB_00480cb5

