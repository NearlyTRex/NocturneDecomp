; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_FUN_00543ad0()
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543ad0
        ;   Label: core_netgame.cpp_FUN_00543ad0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00543ad1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00543ad5
    MOV BX,word ptr [EDX + 0x4]         ; 00543ad9
    CMP BX,word ptr [ECX + 0x4]         ; 00543add
    JNZ 0x00543ae9                      ; 00543ae1 | LAB_00543ae9
        ;   XREF to: 00543ae9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ECX]             ; 00543ae3
    CMP EAX,dword ptr [EDX]             ; 00543ae5
    JZ 0x00543aed                       ; 00543ae7 | LAB_00543aed
        ;   XREF to: 00543aed (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00543ae9
        ;   Label: LAB_00543ae9
    POP EBX                             ; 00543aeb
    RET                                 ; 00543aec
    MOV EAX,0x1                         ; 00543aed
        ;   Label: LAB_00543aed
    POP EBX                             ; 00543af2
    RET                                 ; 00543af3

