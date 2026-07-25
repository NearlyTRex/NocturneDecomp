; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00534f90(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00534f90
        ;   Label: FUN_00534f90
    TEST EDX,EDX                        ; 00534f94
    JNZ 0x00534f9b                      ; 00534f96
        ;   XREF to: 00534f9b (CONDITIONAL_JUMP)  ; LAB_00534f9b
    XOR EAX,EAX                         ; 00534f98
    RET                                 ; 00534f9a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00534f9b
        ;   Label: LAB_00534f9b
    PUSH ECX                            ; 00534f9f
    MOV EAX,dword ptr [EDX + 0x14c]     ; 00534fa0
    PUSH EDX                            ; 00534fa6
    CALL dword ptr [EAX + 0x7c]         ; 00534fa7
    ADD ESP,0x8                         ; 00534faa
    CMP EAX,0x4                         ; 00534fad
    SETZ AL                             ; 00534fb0
    AND EAX,0xff                        ; 00534fb3
    RET                                 ; 00534fb8

