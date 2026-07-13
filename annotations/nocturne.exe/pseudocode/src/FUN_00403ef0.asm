; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403ef0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[6]:
;   FUN_00471760 at 004718ab
;   FUN_004722b0 at 0047237b
;   FUN_00476580 at 004765b1
;   FUN_0049aab0 at 0049aafc
;   FUN_0049ab50 at 0049ae38
;   FUN_004cfbc0 at 004cfd0a
;
; Referenced Globals:
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   FUN_00403e10
;   FUN_00403e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403ef0
        ;   Label: FUN_00403ef0
    PUSH ESI                            ; 00403ef1
    PUSH EDI                            ; 00403ef2
    MOV EDX,dword ptr [ESP + 0x20]      ; 00403ef3
    PUSH EDX                            ; 00403ef7
    MOV ECX,dword ptr [ESP + 0x20]      ; 00403ef8
    PUSH ECX                            ; 00403efc
    MOV EBX,dword ptr [ESP + 0x20]      ; 00403efd
    PUSH EBX                            ; 00403f01
    MOV ESI,dword ptr [ESP + 0x20]      ; 00403f02
    PUSH ESI                            ; 00403f06
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403f07
    PUSH EDI                            ; 00403f0b
    CALL FUN_00403e60                   ; 00403f0c
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00403e60()
    ADD ESP,0x14                        ; 00403f11
    MOV EAX,dword ptr [ESP + 0x24]      ; 00403f14
    MOV EBX,dword ptr [0x01c00c70]      ; 00403f18 | DAT_01c00c70
    MOV [0x01c00c70],EAX                ; 00403f1e | DAT_01c00c70
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403f23
    INC EAX                             ; 00403f27
    PUSH EAX                            ; 00403f28
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403f29
    INC EAX                             ; 00403f2d
    PUSH EAX                            ; 00403f2e
    LEA EAX,[ESI + -0x1]                ; 00403f2f
    PUSH EAX                            ; 00403f32
    LEA EAX,[EDI + -0x1]                ; 00403f33
    PUSH EAX                            ; 00403f36
    CALL FUN_00403e10                   ; 00403f37
        ;   XREF to: 00403e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00403e10()
    ADD ESP,0x10                        ; 00403f3c
    MOV dword ptr [0x01c00c70],EBX      ; 00403f3f | DAT_01c00c70
    POP EDI                             ; 00403f45
    POP ESI                             ; 00403f46
    POP EBX                             ; 00403f47
    RET                                 ; 00403f48

