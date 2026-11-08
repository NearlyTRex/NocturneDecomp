; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[4]:
;   FUN_00486360 at 00486461
;   FUN_004cbdc0 at 004cc1c9
;   FUN_0053f990 at 0053faab
;   FUN_00575800 at 00575c33
;
; Referenced Globals:
;   undefined4 DAT_01ca23b8
;
; Called Functions:
;   FUN_0049b660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e970
        ;   Label: FUN_0049e970
    PUSH ESI                            ; 0049e971
    PUSH EDI                            ; 0049e972
    MOV EDX,dword ptr [ESP + 0x20]      ; 0049e973
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0049e977
    PUSH EDX                            ; 0049e97b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0049e97c
    MOV EDX,dword ptr [0x01ca23b8]      ; 0049e980 | DAT_01ca23b8
    PUSH ECX                            ; 0049e986
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049e987
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0049e98e
    SUB EAX,EDX                         ; 0049e992
    PUSH EBX                            ; 0049e994
    SHL EAX,0x5                         ; 0049e995
    PUSH ESI                            ; 0049e998
    ADD EAX,0x1ca23bc                   ; 0049e999
    PUSH EAX                            ; 0049e99e
    CALL FUN_0049b660                   ; 0049e99f
        ;   XREF to: 0049b660 (UNCONDITIONAL_CALL)  ; undefined FUN_0049b660()
    MOV EDI,dword ptr [0x01ca23b8]      ; 0049e9a4 | DAT_01ca23b8
    INC EDI                             ; 0049e9aa
    ADD ESP,0x14                        ; 0049e9ab
    MOV dword ptr [0x01ca23b8],EDI      ; 0049e9ae | DAT_01ca23b8
    CMP EDI,0x32                        ; 0049e9b4
    JGE 0x0049e9bd                      ; 0049e9b7
        ;   XREF to: 0049e9bd (CONDITIONAL_JUMP)  ; LAB_0049e9bd
    POP EDI                             ; 0049e9b9
    POP ESI                             ; 0049e9ba
    POP EBX                             ; 0049e9bb
    RET                                 ; 0049e9bc
    XOR EAX,EAX                         ; 0049e9bd
        ;   Label: LAB_0049e9bd
    MOV [0x01ca23b8],EAX                ; 0049e9bf | DAT_01ca23b8
    POP EDI                             ; 0049e9c4
    POP ESI                             ; 0049e9c5
    POP EBX                             ; 0049e9c6
    RET                                 ; 0049e9c7

