; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl unkaddr_0059f520_cpp_CInStreamFile_isEof_FUN_005a0d90(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0d90
        ;   Label: unkaddr_0059f520.cpp_CInStreamFile_isEof_FUN_005a0d90
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a0d91
    CMP dword ptr [EDX + 0x4],0x0       ; 005a0d95
    JZ 0x005a0daa                       ; 005a0d99
        ;   XREF to: 005a0daa (CONDITIONAL_JUMP)  ; LAB_005a0daa
    MOV EBX,dword ptr [EDX + 0x8]       ; 005a0d9b
    CMP EBX,dword ptr [EDX + 0x10]      ; 005a0d9e
    JG 0x005a0db1                       ; 005a0da1
        ;   XREF to: 005a0db1 (CONDITIONAL_JUMP)  ; LAB_005a0db1
    MOV EAX,0x1                         ; 005a0da3
    POP EBX                             ; 005a0da8
    RET                                 ; 005a0da9
    MOV EAX,0xffffffff                  ; 005a0daa
        ;   Label: LAB_005a0daa
    POP EBX                             ; 005a0daf
    RET                                 ; 005a0db0
    XOR EAX,EAX                         ; 005a0db1
        ;   Label: LAB_005a0db1
    POP EBX                             ; 005a0db3
    RET                                 ; 005a0db4

