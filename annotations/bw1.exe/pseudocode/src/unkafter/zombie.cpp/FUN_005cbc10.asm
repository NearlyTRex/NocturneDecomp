; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cbc10(int param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c7280 at 005c72ba
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbc10
        ;   Label: unkafter_zombie.cpp_FUN_005cbc10
    MOV EDX,dword ptr [ESP + 0xc]       ; 005cbc11
    MOV EAX,dword ptr [ESP + 0x10]      ; 005cbc15
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cbc19
    CMP EBX,0x2                         ; 005cbc1d
    JNZ 0x005cbc30                      ; 005cbc20
        ;   XREF to: 005cbc30 (CONDITIONAL_JUMP)  ; LAB_005cbc30
    MOV dword ptr [EDX],0xc0000000      ; 005cbc22
    MOV dword ptr [EAX],0x80            ; 005cbc28
    POP EBX                             ; 005cbc2e
    RET                                 ; 005cbc2f
    CMP EBX,0x1                         ; 005cbc30
        ;   Label: LAB_005cbc30
    JNZ 0x005cbc43                      ; 005cbc33
        ;   XREF to: 005cbc43 (CONDITIONAL_JUMP)  ; LAB_005cbc43
    MOV dword ptr [EDX],0x40000000      ; 005cbc35
    MOV dword ptr [EAX],0x80            ; 005cbc3b
    POP EBX                             ; 005cbc41
    RET                                 ; 005cbc42
    MOV dword ptr [EDX],0x80000000      ; 005cbc43
        ;   Label: LAB_005cbc43
    MOV dword ptr [EAX],0x1             ; 005cbc49
    POP EBX                             ; 005cbc4f
    RET                                 ; 005cbc50

