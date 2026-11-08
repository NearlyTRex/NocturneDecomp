; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411a10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007dff88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411a10
        ;   Label: FUN_00411a10
    MOV EDX,dword ptr [0x007dff88]      ; 00411a11 | DAT_007dff88
    XOR EBX,EBX                         ; 00411a17
    TEST EDX,EDX                        ; 00411a19
    JLE 0x00411a3e                      ; 00411a1b
        ;   XREF to: 00411a3e (CONDITIONAL_JUMP)  ; LAB_00411a3e
    PUSH ESI                            ; 00411a1d
    XOR ESI,ESI                         ; 00411a1e
    MOV EAX,dword ptr [ESI + 0x7dff8c]  ; 00411a20
        ;   Label: LAB_00411a20
    PUSH EAX                            ; 00411a26
    MOV EDX,dword ptr [EAX]             ; 00411a27
    ADD ESI,0x4                         ; 00411a29
    INC EBX                             ; 00411a2c
    CALL dword ptr [EDX + 0xc]          ; 00411a2d
    MOV ECX,dword ptr [0x007dff88]      ; 00411a30 | DAT_007dff88
    ADD ESP,0x4                         ; 00411a36
    CMP EBX,ECX                         ; 00411a39
    JL 0x00411a20                       ; 00411a3b
        ;   XREF to: 00411a20 (CONDITIONAL_JUMP)  ; LAB_00411a20
    POP ESI                             ; 00411a3d
    POP EBX                             ; 00411a3e
        ;   Label: LAB_00411a3e
    RET                                 ; 00411a3f

