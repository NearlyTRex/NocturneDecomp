; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9ae0(int param_1)
;
;
; XREF[1]:
;   FUN_0051a4f0 at 0051a90a
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   FUN_0051b1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9ae0
        ;   Label: FUN_004f9ae0
    PUSH EDI                            ; 004f9ae1
    PUSH EBP                            ; 004f9ae2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f9ae3
    MOV EDX,dword ptr [EDI + 0x10]      ; 004f9ae7
    XOR EBX,EBX                         ; 004f9aea
    TEST EDX,EDX                        ; 004f9aec
    JLE 0x004f9b12                      ; 004f9aee
        ;   XREF to: 004f9b12 (CONDITIONAL_JUMP)  ; LAB_004f9b12
    PUSH ESI                            ; 004f9af0
    MOV ESI,EDI                         ; 004f9af1
    MOV ECX,dword ptr [ESI + 0x14]      ; 004f9af3
        ;   Label: LAB_004f9af3
    PUSH ECX                            ; 004f9af6
    MOV EBP,dword ptr [0x0061f650]      ; 004f9af7 | DAT_0061f650
    PUSH EBP                            ; 004f9afd | DAT_01d2c900
    ADD ESI,0x4                         ; 004f9afe
    INC EBX                             ; 004f9b01
    CALL FUN_0051b1d0                   ; 004f9b02
        ;   XREF to: 0051b1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b1d0()
    MOV EAX,dword ptr [EDI + 0x10]      ; 004f9b07
    ADD ESP,0x8                         ; 004f9b0a
    CMP EBX,EAX                         ; 004f9b0d
    JL 0x004f9af3                       ; 004f9b0f
        ;   XREF to: 004f9af3 (CONDITIONAL_JUMP)  ; LAB_004f9af3
    POP ESI                             ; 004f9b11
    MOV dword ptr [EDI + 0x458],0x0     ; 004f9b12
        ;   Label: LAB_004f9b12
    POP EBP                             ; 004f9b1c
    POP EDI                             ; 004f9b1d
    POP EBX                             ; 004f9b1e
    RET                                 ; 004f9b1f

