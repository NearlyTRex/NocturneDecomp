; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415ee0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_00408a80
;   FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415ee0
        ;   Label: FUN_00415ee0
    PUSH EDI                            ; 00415ee1
    PUSH EBP                            ; 00415ee2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00415ee3
    PUSH EDI                            ; 00415ee7
    CALL FUN_00408a80                   ; 00415ee8
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    XOR EBX,EBX                         ; 00415eed
    MOV EDX,dword ptr [EDI + 0x2e8]     ; 00415eef
    ADD ESP,0x4                         ; 00415ef5
    TEST EDX,EDX                        ; 00415ef8
    JLE 0x00415f22                      ; 00415efa
        ;   XREF to: 00415f22 (CONDITIONAL_JUMP)  ; LAB_00415f22
    PUSH ESI                            ; 00415efc
    LEA ESI,[EDI + 0x2ec]               ; 00415efd
    PUSH ESI                            ; 00415f03
        ;   Label: LAB_00415f03
    MOV ECX,dword ptr [0x0060b280]      ; 00415f04 | DAT_0060b280
    PUSH ECX                            ; 00415f0a
    INC EBX                             ; 00415f0b
    CALL FUN_0046ca00                   ; 00415f0c
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESI,0x18                        ; 00415f11
    MOV EBP,dword ptr [EDI + 0x2e8]     ; 00415f14
    ADD ESP,0x8                         ; 00415f1a
    CMP EBX,EBP                         ; 00415f1d
    JL 0x00415f03                       ; 00415f1f
        ;   XREF to: 00415f03 (CONDITIONAL_JUMP)  ; LAB_00415f03
    POP ESI                             ; 00415f21
    CMP dword ptr [EDI + 0x10c8],0x0    ; 00415f22
        ;   Label: LAB_00415f22
    JNZ 0x00415f38                      ; 00415f29
        ;   XREF to: 00415f38 (CONDITIONAL_JUMP)  ; LAB_00415f38
    CMP dword ptr [EDI + 0x8a8],0x0     ; 00415f2b
    JNZ 0x00415f38                      ; 00415f32
        ;   XREF to: 00415f38 (CONDITIONAL_JUMP)  ; LAB_00415f38
    POP EBP                             ; 00415f34
    POP EDI                             ; 00415f35
    POP EBX                             ; 00415f36
    RET                                 ; 00415f37
    MOV dword ptr [EDI + 0xfc],0x1      ; 00415f38
        ;   Label: LAB_00415f38
    POP EBP                             ; 00415f42
    POP EDI                             ; 00415f43
    POP EBX                             ; 00415f44
    RET                                 ; 00415f45

