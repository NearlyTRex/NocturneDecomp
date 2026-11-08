; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484ed0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,char *param_6)
;
;
; XREF[4]:
;   FUN_0047b1f0 at 0047b367
;   FUN_0047b800 at 0047b9a1
;   FUN_0047c0f0 at 0047c42a
;   FUN_00482a00 at 00483002
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00484ed0
        ;   Label: FUN_00484ed0
    PUSH EDI                            ; 00484ed1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00484ed2
    MOV ESI,dword ptr [ESP + 0x20]      ; 00484ed6
    LEA EDI,[EDX + 0x1c]                ; 00484eda
    PUSH EDI                            ; 00484edd
    MOV AL,byte ptr [ESI]               ; 00484ede
        ;   Label: LAB_00484ede
    MOV byte ptr [EDI],AL               ; 00484ee0
    CMP AL,0x0                          ; 00484ee2
    JZ 0x00484ef6                       ; 00484ee4
        ;   XREF to: 00484ef6 (CONDITIONAL_JUMP)  ; LAB_00484ef6
    MOV AL,byte ptr [ESI + 0x1]         ; 00484ee6
    ADD ESI,0x2                         ; 00484ee9
    MOV byte ptr [EDI + 0x1],AL         ; 00484eec
    ADD EDI,0x2                         ; 00484eef
    CMP AL,0x0                          ; 00484ef2
    JNZ 0x00484ede                      ; 00484ef4
        ;   XREF to: 00484ede (CONDITIONAL_JUMP)  ; LAB_00484ede
    POP EDI                             ; 00484ef6
        ;   Label: LAB_00484ef6
    MOV EDI,dword ptr [ESP + 0x10]      ; 00484ef7
    MOV dword ptr [EDX + 0x8],EDI       ; 00484efb
    MOV EDI,dword ptr [ESP + 0x14]      ; 00484efe
    MOV dword ptr [EDX + 0xc],EDI       ; 00484f02
    MOV EDI,dword ptr [ESP + 0x18]      ; 00484f05
    INC EDI                             ; 00484f09
    MOV dword ptr [EDX + 0x10],EDI      ; 00484f0a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00484f0d
    INC EDI                             ; 00484f11
    MOV dword ptr [EDX + 0x14],EDI      ; 00484f12
    POP EDI                             ; 00484f15
    POP ESI                             ; 00484f16
    RET                                 ; 00484f17

