; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cee0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[10]:
;   FUN_00496f60 at 00497043
;   FUN_004980b0 at 004983a0
;   FUN_00498b40 at 00498e1b
;   FUN_00499690 at 004996f0
;   FUN_0049a090 at 0049a0bc
;   FUN_0049a2c0 at 0049a2ec
;   FUN_004a0cd0 at 004a0d85
;   FUN_004a1040 at 004a10f8
;   FUN_004a6090 at 004a61e1
;   FUN_004ccbe0 at 004ccc69
;
; Called Functions:
;   FUN_004e56b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cee0
        ;   Label: FUN_0046cee0
    PUSH ESI                            ; 0046cee1
    PUSH EBP                            ; 0046cee2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046cee3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046cee7
    TEST EDX,EDX                        ; 0046ceeb
    JNZ 0x0046cf09                      ; 0046ceed
        ;   XREF to: 0046cf09 (CONDITIONAL_JUMP)  ; LAB_0046cf09
    PUSH EDX                            ; 0046ceef
    PUSH EDX                            ; 0046cef0
    PUSH EDX                            ; 0046cef1
    MOV ECX,dword ptr [EAX + 0x8]       ; 0046cef2
    PUSH ECX                            ; 0046cef5
    MOV EBX,dword ptr [EAX + 0x4]       ; 0046cef6
    PUSH EBX                            ; 0046cef9
    MOV ESI,dword ptr [EAX]             ; 0046cefa
    PUSH ESI                            ; 0046cefc
    CALL FUN_004e56b0                   ; 0046cefd
        ;   XREF to: 004e56b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e56b0()
    ADD ESP,0x18                        ; 0046cf02
    POP EBP                             ; 0046cf05
    POP ESI                             ; 0046cf06
    POP EBX                             ; 0046cf07
    RET                                 ; 0046cf08
    PUSH EDI                            ; 0046cf09
        ;   Label: LAB_0046cf09
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046cf0a
    PUSH ECX                            ; 0046cf0d
    MOV EBX,dword ptr [EDX + 0x4]       ; 0046cf0e
    PUSH EBX                            ; 0046cf11
    MOV ESI,dword ptr [EDX]             ; 0046cf12
    PUSH ESI                            ; 0046cf14
    MOV EDI,dword ptr [EAX + 0x8]       ; 0046cf15
    PUSH EDI                            ; 0046cf18
    MOV EBP,dword ptr [EAX + 0x4]       ; 0046cf19
    PUSH EBP                            ; 0046cf1c
    MOV EDX,dword ptr [EAX]             ; 0046cf1d
    PUSH EDX                            ; 0046cf1f
    CALL FUN_004e56b0                   ; 0046cf20
        ;   XREF to: 004e56b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e56b0()
    ADD ESP,0x18                        ; 0046cf25
    POP EDI                             ; 0046cf28
    POP EBP                             ; 0046cf29
    POP ESI                             ; 0046cf2a
    POP EBX                             ; 0046cf2b
    RET                                 ; 0046cf2c

