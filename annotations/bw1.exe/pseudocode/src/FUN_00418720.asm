; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00418720(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418720
        ;   Label: FUN_00418720
    PUSH ESI                            ; 00418721
    PUSH EBP                            ; 00418722
    MOV EDX,dword ptr [ESP + 0x14]      ; 00418723
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418727
    SUB EAX,EDX                         ; 0041872e
    SHL EAX,0x2                         ; 00418730
    SUB EAX,EDX                         ; 00418733
    MOV EDX,dword ptr [ESP + 0x10]      ; 00418735
    SHL EAX,0x2                         ; 00418739
    ADD EAX,EDX                         ; 0041873c
    MOV ESI,dword ptr [0x01c4353c]      ; 0041873e | DAT_01c4353c
    MOV EDX,dword ptr [EAX + 0x88]      ; 00418744
    MOV EBX,dword ptr [EAX + 0x90]      ; 0041874a
    MOV ECX,dword ptr [EAX + 0x8c]      ; 00418750
    MOV EAX,dword ptr [EAX + 0x94]      ; 00418756
    ADD EBX,EDX                         ; 0041875c
    ADD EAX,ECX                         ; 0041875e
    CMP EDX,ESI                         ; 00418760
    JG 0x0041877f                       ; 00418762
        ;   XREF to: 0041877f (CONDITIONAL_JUMP)  ; LAB_0041877f
    CMP EBX,ESI                         ; 00418764
    JL 0x0041877f                       ; 00418766
        ;   XREF to: 0041877f (CONDITIONAL_JUMP)  ; LAB_0041877f
    MOV EBP,dword ptr [0x01c43540]      ; 00418768 | DAT_01c43540
    CMP ECX,EBP                         ; 0041876e
    JG 0x0041877f                       ; 00418770
        ;   XREF to: 0041877f (CONDITIONAL_JUMP)  ; LAB_0041877f
    CMP EAX,EBP                         ; 00418772
    JL 0x0041877f                       ; 00418774
        ;   XREF to: 0041877f (CONDITIONAL_JUMP)  ; LAB_0041877f
    MOV EAX,0x1                         ; 00418776
    POP EBP                             ; 0041877b
    POP ESI                             ; 0041877c
    POP EBX                             ; 0041877d
    RET                                 ; 0041877e
    XOR EAX,EAX                         ; 0041877f
        ;   Label: LAB_0041877f
    POP EBP                             ; 00418781
    POP ESI                             ; 00418782
    POP EBX                             ; 00418783
    RET                                 ; 00418784

