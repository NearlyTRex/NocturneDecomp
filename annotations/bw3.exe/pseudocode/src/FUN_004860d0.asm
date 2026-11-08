; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004860d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,char *param_6)
;
;
; XREF[4]:
;   FUN_0047c2c0 at 0047c437
;   FUN_0047c8e0 at 0047ca81
;   FUN_0047d230 at 0047d575
;   FUN_00483c00 at 00484202
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004860d0
        ;   Label: FUN_004860d0
    PUSH EDI                            ; 004860d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004860d2
    MOV ESI,dword ptr [ESP + 0x20]      ; 004860d6
    LEA EDI,[EDX + 0x1c]                ; 004860da
    PUSH EDI                            ; 004860dd
    MOV AL,byte ptr [ESI]               ; 004860de
        ;   Label: LAB_004860de
    MOV byte ptr [EDI],AL               ; 004860e0
    CMP AL,0x0                          ; 004860e2
    JZ 0x004860f6                       ; 004860e4
        ;   XREF to: 004860f6 (CONDITIONAL_JUMP)  ; LAB_004860f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004860e6
    ADD ESI,0x2                         ; 004860e9
    MOV byte ptr [EDI + 0x1],AL         ; 004860ec
    ADD EDI,0x2                         ; 004860ef
    CMP AL,0x0                          ; 004860f2
    JNZ 0x004860de                      ; 004860f4
        ;   XREF to: 004860de (CONDITIONAL_JUMP)  ; LAB_004860de
    POP EDI                             ; 004860f6
        ;   Label: LAB_004860f6
    MOV EDI,dword ptr [ESP + 0x10]      ; 004860f7
    MOV dword ptr [EDX + 0x8],EDI       ; 004860fb
    MOV EDI,dword ptr [ESP + 0x14]      ; 004860fe
    MOV dword ptr [EDX + 0xc],EDI       ; 00486102
    MOV EDI,dword ptr [ESP + 0x18]      ; 00486105
    INC EDI                             ; 00486109
    MOV dword ptr [EDX + 0x10],EDI      ; 0048610a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048610d
    INC EDI                             ; 00486111
    MOV dword ptr [EDX + 0x14],EDI      ; 00486112
    POP EDI                             ; 00486115
    POP ESI                             ; 00486116
    RET                                 ; 00486117

