; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460a50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[8]:
;   FUN_00482950 at 00482a33
;   FUN_004838c0 at 00483e20
;   FUN_00484390 at 004843e7
;   FUN_00484d40 at 00484d66
;   FUN_00489990 at 00489a42
;   FUN_00489d00 at 00489db8
;   FUN_0048d5d0 at 0048d6f0
;   FUN_004ae190 at 004ae21a
;
; Called Functions:
;   FUN_004cd380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460a50
        ;   Label: FUN_00460a50
    PUSH ESI                            ; 00460a51
    PUSH EBP                            ; 00460a52
    MOV EAX,dword ptr [ESP + 0x14]      ; 00460a53
    MOV EDX,dword ptr [ESP + 0x18]      ; 00460a57
    TEST EDX,EDX                        ; 00460a5b
    JNZ 0x00460a79                      ; 00460a5d
        ;   XREF to: 00460a79 (CONDITIONAL_JUMP)  ; LAB_00460a79
    PUSH EDX                            ; 00460a5f
    PUSH EDX                            ; 00460a60
    PUSH EDX                            ; 00460a61
    MOV ECX,dword ptr [EAX + 0x8]       ; 00460a62
    PUSH ECX                            ; 00460a65
    MOV EBX,dword ptr [EAX + 0x4]       ; 00460a66
    PUSH EBX                            ; 00460a69
    MOV ESI,dword ptr [EAX]             ; 00460a6a
    PUSH ESI                            ; 00460a6c
    CALL FUN_004cd380                   ; 00460a6d
        ;   XREF to: 004cd380 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd380()
    ADD ESP,0x18                        ; 00460a72
    POP EBP                             ; 00460a75
    POP ESI                             ; 00460a76
    POP EBX                             ; 00460a77
    RET                                 ; 00460a78
    PUSH EDI                            ; 00460a79
        ;   Label: LAB_00460a79
    MOV ECX,dword ptr [EDX + 0x8]       ; 00460a7a
    PUSH ECX                            ; 00460a7d
    MOV EBX,dword ptr [EDX + 0x4]       ; 00460a7e
    PUSH EBX                            ; 00460a81
    MOV ESI,dword ptr [EDX]             ; 00460a82
    PUSH ESI                            ; 00460a84
    MOV EDI,dword ptr [EAX + 0x8]       ; 00460a85
    PUSH EDI                            ; 00460a88
    MOV EBP,dword ptr [EAX + 0x4]       ; 00460a89
    PUSH EBP                            ; 00460a8c
    MOV EDX,dword ptr [EAX]             ; 00460a8d
    PUSH EDX                            ; 00460a8f
    CALL FUN_004cd380                   ; 00460a90
        ;   XREF to: 004cd380 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd380()
    ADD ESP,0x18                        ; 00460a95
    POP EDI                             ; 00460a98
    POP EBP                             ; 00460a99
    POP ESI                             ; 00460a9a
    POP EBX                             ; 00460a9b
    RET                                 ; 00460a9c

