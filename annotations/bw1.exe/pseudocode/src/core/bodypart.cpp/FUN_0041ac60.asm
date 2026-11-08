; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041ac60(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_00565b10 at 00565f00
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005d44fb
;   TerminatedCString s_Too_many_body_part_textu_005d4510
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005bfb70
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ac60
        ;   Label: FUN_0041ac60
    PUSH ESI                            ; 0041ac61
    PUSH EDI                            ; 0041ac62
    PUSH EBP                            ; 0041ac63
    MOV EBX,dword ptr [ESP + 0x14]      ; 0041ac64
    MOV EBP,dword ptr [ESP + 0x18]      ; 0041ac68
    MOV EDX,dword ptr [EBX + 0x18c]     ; 0041ac6c
    XOR ESI,ESI                         ; 0041ac72
    TEST EDX,EDX                        ; 0041ac74
    JLE 0x0041ac9e                      ; 0041ac76
        ;   XREF to: 0041ac9e (CONDITIONAL_JUMP)  ; LAB_0041ac9e
    LEA EDI,[EBX + 0x198]               ; 0041ac78
    PUSH EBP                            ; 0041ac7e
        ;   Label: LAB_0041ac7e
    PUSH EDI                            ; 0041ac7f
    CALL FUN_005c04e0                   ; 0041ac80
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0041ac85
    TEST EAX,EAX                        ; 0041ac88
    JZ 0x0041ad37                       ; 0041ac8a
        ;   XREF to: 0041ad37 (CONDITIONAL_JUMP)  ; LAB_0041ad37
    INC ESI                             ; 0041ac90
    MOV ECX,dword ptr [EBX + 0x18c]     ; 0041ac91
    ADD EDI,0x18                        ; 0041ac97
    CMP ESI,ECX                         ; 0041ac9a
    JL 0x0041ac7e                       ; 0041ac9c
        ;   XREF to: 0041ac7e (CONDITIONAL_JUMP)  ; LAB_0041ac7e
    CMP dword ptr [EBX + 0x18c],0xa     ; 0041ac9e
        ;   Label: LAB_0041ac9e
    JL 0x0041acc9                       ; 0041aca5
        ;   XREF to: 0041acc9 (CONDITIONAL_JUMP)  ; LAB_0041acc9
    MOV EDI,0x5d44fb                    ; 0041aca7 | = "..\\core\\bodypart.cpp"
    MOV EAX,0x48d                       ; 0041acac
    PUSH 0x5d4510                       ; 0041acb1 | = "Too many body part textures!"
    MOV dword ptr [0x01d1d400],EDI      ; 0041acb6 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0041acbc | DAT_01d1d404
    CALL FUN_005030e0                   ; 0041acc1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0041acc6
    MOV ESI,dword ptr [EBX + 0x18c]     ; 0041acc9
        ;   Label: LAB_0041acc9
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041accf
    PUSH 0x18                           ; 0041acd6
    SUB EAX,ESI                         ; 0041acd8
    LEA EDI,[EBX + 0x190]               ; 0041acda
    SHL EAX,0x3                         ; 0041ace0
    PUSH 0x0                            ; 0041ace3
    ADD EAX,EDI                         ; 0041ace5
    PUSH EAX                            ; 0041ace7
    CALL FUN_005bfb70                   ; 0041ace8
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV ESI,dword ptr [EBX + 0x18c]     ; 0041aced
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041acf3
    SUB EAX,ESI                         ; 0041acfa
    SHL EAX,0x3                         ; 0041acfc
    ADD ESP,0xc                         ; 0041acff
    ADD EDI,EAX                         ; 0041ad02
    MOV ESI,EBP                         ; 0041ad04
    ADD EDI,0x8                         ; 0041ad06
    PUSH EDI                            ; 0041ad09
    MOV AL,byte ptr [ESI]               ; 0041ad0a
        ;   Label: LAB_0041ad0a
    MOV byte ptr [EDI],AL               ; 0041ad0c
    CMP AL,0x0                          ; 0041ad0e
    JZ 0x0041ad22                       ; 0041ad10
        ;   XREF to: 0041ad22 (CONDITIONAL_JUMP)  ; LAB_0041ad22
    MOV AL,byte ptr [ESI + 0x1]         ; 0041ad12
    ADD ESI,0x2                         ; 0041ad15
    MOV byte ptr [EDI + 0x1],AL         ; 0041ad18
    ADD EDI,0x2                         ; 0041ad1b
    CMP AL,0x0                          ; 0041ad1e
    JNZ 0x0041ad0a                      ; 0041ad20
        ;   XREF to: 0041ad0a (CONDITIONAL_JUMP)  ; LAB_0041ad0a
    POP EDI                             ; 0041ad22
        ;   Label: LAB_0041ad22
    MOV EAX,dword ptr [EBX + 0x18c]     ; 0041ad23
    LEA ESI,[EAX + 0x1]                 ; 0041ad29
    MOV dword ptr [EBX + 0x18c],ESI     ; 0041ad2c
    POP EBP                             ; 0041ad32
    POP EDI                             ; 0041ad33
    POP ESI                             ; 0041ad34
    POP EBX                             ; 0041ad35
    RET                                 ; 0041ad36
    MOV EAX,ESI                         ; 0041ad37
        ;   Label: LAB_0041ad37
    POP EBP                             ; 0041ad39
    POP EDI                             ; 0041ad3a
    POP ESI                             ; 0041ad3b
    POP EBX                             ; 0041ad3c
    RET                                 ; 0041ad3d

