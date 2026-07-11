; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042a760(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5 )
;
;
; Referenced Globals:
;   string s_..\\core\\charactr.cpp_0057a3d5
;   string s_CCharacter::addLayerAction_-_too_0057a3ea
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a760
        ;   Label: FUN_0042a760
    PUSH ESI                            ; 0042a761
    PUSH EDI                            ; 0042a762
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042a763
    CMP dword ptr [EBX + 0x2620],0x14   ; 0042a767
    JGE 0x0042a7ce                      ; 0042a76e
        ;   XREF to: 0042a7ce (CONDITIONAL_JUMP)  ; LAB_0042a7ce
    MOV EAX,dword ptr [EBX + 0x2620]    ; 0042a770
        ;   Label: LAB_0042a770
    SHL EAX,0x3                         ; 0042a776
    MOV EDI,dword ptr [EBX + 0x2620]    ; 0042a779
    MOV EDX,EAX                         ; 0042a77f
    SHL EAX,0x3                         ; 0042a781
    INC EDI                             ; 0042a784
    SUB EAX,EDX                         ; 0042a785
    LEA EDX,[EBX + 0x2624]              ; 0042a787
    MOV dword ptr [EBX + 0x2620],EDI    ; 0042a78d
    ADD EDX,EAX                         ; 0042a793
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042a795
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0042a799
    MOV dword ptr [EDX],EAX             ; 0042a79d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042a79f
    LEA EDI,[EDX + 0x8]                 ; 0042a7a3
    MOV dword ptr [EDX + 0x4],EAX       ; 0042a7a6
    PUSH EDI                            ; 0042a7a9
    MOV AL,byte ptr [ESI]               ; 0042a7aa
        ;   Label: LAB_0042a7aa
    MOV byte ptr [EDI],AL               ; 0042a7ac
    CMP AL,0x0                          ; 0042a7ae
    JZ 0x0042a7c2                       ; 0042a7b0
        ;   XREF to: 0042a7c2 (CONDITIONAL_JUMP)  ; LAB_0042a7c2
    MOV AL,byte ptr [ESI + 0x1]         ; 0042a7b2
    ADD ESI,0x2                         ; 0042a7b5
    MOV byte ptr [EDI + 0x1],AL         ; 0042a7b8
    ADD EDI,0x2                         ; 0042a7bb
    CMP AL,0x0                          ; 0042a7be
    JNZ 0x0042a7aa                      ; 0042a7c0
        ;   XREF to: 0042a7aa (CONDITIONAL_JUMP)  ; LAB_0042a7aa
    POP EDI                             ; 0042a7c2
        ;   Label: LAB_0042a7c2
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042a7c3
    MOV dword ptr [EDX + 0x28],EAX      ; 0042a7c7
    POP EDI                             ; 0042a7ca
    POP ESI                             ; 0042a7cb
    POP EBX                             ; 0042a7cc
    RET                                 ; 0042a7cd
    MOV ECX,0x57a3d5                    ; 0042a7ce | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042a7ce
    MOV ESI,0xf56                       ; 0042a7d3
    PUSH 0x57a3ea                       ; 0042a7d8 | = "CCharacter::addLayerAction - too many"
    MOV dword ptr [0x01cc4800],ECX      ; 0042a7dd | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0042a7e3 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042a7e9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042a7ee
    JMP 0x0042a770                      ; 0042a7f1
        ;   XREF to: 0042a770 (UNCONDITIONAL_JUMP)  ; LAB_0042a770

