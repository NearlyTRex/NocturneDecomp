; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00429010(int param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429010
        ;   Label: FUN_00429010
    MOV EBX,dword ptr [ESP + 0x8]       ; 00429011
    CMP dword ptr [ESP + 0x10],0x1      ; 00429015
    JNZ 0x00429041                      ; 0042901a
        ;   XREF to: 00429041 (CONDITIONAL_JUMP)  ; LAB_00429041
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0042901c
    TEST ECX,ECX                        ; 00429022
    JNZ 0x00429045                      ; 00429024
        ;   XREF to: 00429045 (CONDITIONAL_JUMP)  ; LAB_00429045
    MOV EAX,dword ptr [ESP + 0xc]       ; 00429026
        ;   Label: LAB_00429026
    MOV dword ptr [EBX + 0x26fc],EAX    ; 0042902a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00429030
    MOV dword ptr [EBX + 0x2700],EAX    ; 00429034
    MOV EAX,0x1                         ; 0042903a
    POP EBX                             ; 0042903f
    RET                                 ; 00429040
    XOR EAX,EAX                         ; 00429041
        ;   Label: LAB_00429041
    POP EBX                             ; 00429043
    RET                                 ; 00429044
    PUSH ECX                            ; 00429045
        ;   Label: LAB_00429045
    MOV EDX,dword ptr [ECX + 0x154]     ; 00429046
    CALL dword ptr [EDX + 0xf4]         ; 0042904c
    ADD ESP,0x4                         ; 00429052
    CMP EAX,EBX                         ; 00429055
    JNZ 0x00429026                      ; 00429057
        ;   XREF to: 00429026 (CONDITIONAL_JUMP)  ; LAB_00429026
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00429059
    PUSH EAX                            ; 0042905f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00429060
    CALL dword ptr [EDX + 0xf0]         ; 00429066
    ADD ESP,0x4                         ; 0042906c
    JMP 0x00429026                      ; 0042906f
        ;   XREF to: 00429026 (UNCONDITIONAL_JUMP)  ; LAB_00429026

