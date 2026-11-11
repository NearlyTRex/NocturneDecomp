; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamMemory_seek_FUN_005a1cc0(COutStreamMemory *this_ptr,int param_2,uint param_3)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; uint             Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1cc0
        ;   Label: support_trstream.cpp_COutStreamMemory_seek_FUN_005a1cc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a1cc4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a1cc8
    CMP ECX,0x1                         ; 005a1ccc
    JNC 0x005a1cf9                      ; 005a1ccf
        ;   XREF to: 005a1cf9 (CONDITIONAL_JUMP)  ; LAB_005a1cf9
    TEST ECX,ECX                        ; 005a1cd1
    JNZ 0x005a1cec                      ; 005a1cd3
        ;   XREF to: 005a1cec (CONDITIONAL_JUMP)  ; LAB_005a1cec
    TEST EAX,EAX                        ; 005a1cd5
        ;   Label: LAB_005a1cd5
    JL 0x005a1cec                       ; 005a1cd7
        ;   XREF to: 005a1cec (CONDITIONAL_JUMP)  ; LAB_005a1cec
    CMP EAX,dword ptr [EDX + 0x8]       ; 005a1cd9
    JLE 0x005a13a7                      ; 005a1cdc
        ;   XREF to: 005a13a7 (CONDITIONAL_JUMP)  ; LAB_005a13a7
    CMP dword ptr [EDX + 0x14],0x0      ; 005a1ce2
    JNZ 0x005a13a7                      ; 005a1ce6
        ;   XREF to: 005a13a7 (CONDITIONAL_JUMP)  ; LAB_005a13a7
    XOR EAX,EAX                         ; 005a1cec
        ;   Label: LAB_005a1cec
    RET                                 ; 005a1cee
    ADD EAX,dword ptr [EDX + 0xc]       ; 005a1cef
        ;   Label: LAB_005a1cef
    JMP 0x005a1cd5                      ; 005a1cf2
        ;   XREF to: 005a1cd5 (UNCONDITIONAL_JUMP)  ; LAB_005a1cd5
    ADD EAX,dword ptr [EDX + 0x8]       ; 005a1cf4
        ;   Label: LAB_005a1cf4
    JMP 0x005a1cd5                      ; 005a1cf7
        ;   XREF to: 005a1cd5 (UNCONDITIONAL_JUMP)  ; LAB_005a1cd5
    JBE 0x005a1cef                      ; 005a1cf9
        ;   XREF to: 005a1cef (CONDITIONAL_JUMP)  ; LAB_005a1cef
        ;   Label: LAB_005a1cf9
    CMP ECX,0x2                         ; 005a1cfb
    JZ 0x005a1cf4                       ; 005a1cfe
        ;   XREF to: 005a1cf4 (CONDITIONAL_JUMP)  ; LAB_005a1cf4
    XOR EAX,EAX                         ; 005a1d00
    RET                                 ; 005a1d02

