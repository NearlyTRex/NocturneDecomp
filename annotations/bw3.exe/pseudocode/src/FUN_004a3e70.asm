; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[4]:
;   FUN_00487560 at 00487661
;   FUN_004d0fc0 at 004d13c0
;   FUN_005284d0 at 005285eb
;   FUN_0056b410 at 0056b843
;
; Referenced Globals:
;   undefined4 DAT_01d028c4
;
; Called Functions:
;   FUN_004a0960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3e70
        ;   Label: FUN_004a3e70
    PUSH ESI                            ; 004a3e71
    PUSH EDI                            ; 004a3e72
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a3e73
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a3e77
    PUSH EDX                            ; 004a3e7b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a3e7c
    MOV EDX,dword ptr [0x01d028c4]      ; 004a3e80 | DAT_01d028c4
    PUSH ECX                            ; 004a3e86
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a3e87
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a3e8e
    SUB EAX,EDX                         ; 004a3e92
    PUSH EBX                            ; 004a3e94
    SHL EAX,0x5                         ; 004a3e95
    PUSH ESI                            ; 004a3e98
    ADD EAX,0x1d028c8                   ; 004a3e99
    PUSH EAX                            ; 004a3e9e
    CALL FUN_004a0960                   ; 004a3e9f
        ;   XREF to: 004a0960 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0960()
    MOV EDI,dword ptr [0x01d028c4]      ; 004a3ea4 | DAT_01d028c4
    INC EDI                             ; 004a3eaa
    ADD ESP,0x14                        ; 004a3eab
    MOV dword ptr [0x01d028c4],EDI      ; 004a3eae | DAT_01d028c4
    CMP EDI,0x32                        ; 004a3eb4
    JGE 0x004a3ebd                      ; 004a3eb7
        ;   XREF to: 004a3ebd (CONDITIONAL_JUMP)  ; LAB_004a3ebd
    POP EDI                             ; 004a3eb9
    POP ESI                             ; 004a3eba
    POP EBX                             ; 004a3ebb
    RET                                 ; 004a3ebc
    XOR EAX,EAX                         ; 004a3ebd
        ;   Label: LAB_004a3ebd
    MOV [0x01d028c4],EAX                ; 004a3ebf | DAT_01d028c4
    POP EDI                             ; 004a3ec4
    POP ESI                             ; 004a3ec5
    POP EBX                             ; 004a3ec6
    RET                                 ; 004a3ec7

