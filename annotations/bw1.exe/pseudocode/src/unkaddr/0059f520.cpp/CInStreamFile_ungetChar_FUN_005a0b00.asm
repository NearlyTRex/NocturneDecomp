; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl unkaddr_0059f520_cpp_CInStreamFile_ungetChar_FUN_005a0b00(CInStreamFile *this_ptr,int param_2)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Called Functions:
;   unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0b00
        ;   Label: unkaddr_0059f520.cpp_CInStreamFile_ungetChar_FUN_005a0b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0b01
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a0b05
    TEST EAX,EAX                        ; 005a0b09
    JL 0x005a0b3f                       ; 005a0b0b
        ;   XREF to: 005a0b3f (CONDITIONAL_JUMP)  ; LAB_005a0b3f
    CMP EAX,0xff                        ; 005a0b0d
    JG 0x005a0b3f                       ; 005a0b12
        ;   XREF to: 005a0b3f (CONDITIONAL_JUMP)  ; LAB_005a0b3f
    CMP dword ptr [EBX + 0x4],0x0       ; 005a0b14
    JZ 0x005a0b3f                       ; 005a0b18
        ;   XREF to: 005a0b3f (CONDITIONAL_JUMP)  ; LAB_005a0b3f
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a0b1a
    TEST ECX,ECX                        ; 005a0b1d
    JLE 0x005a0b3f                      ; 005a0b1f
        ;   XREF to: 005a0b3f (CONDITIONAL_JUMP)  ; LAB_005a0b3f
    PUSH ESI                            ; 005a0b21
    LEA ESI,[ECX + -0x1]                ; 005a0b22
    MOV dword ptr [EBX + 0x10],ESI      ; 005a0b25
    CMP EAX,0xa                         ; 005a0b28
    JNZ 0x005a0b37                      ; 005a0b2b
        ;   XREF to: 005a0b37 (CONDITIONAL_JUMP)  ; LAB_005a0b37
    CMP dword ptr [EBX + 0x28],0x0      ; 005a0b2d
    JNZ 0x005a0b37                      ; 005a0b31
        ;   XREF to: 005a0b37 (CONDITIONAL_JUMP)  ; LAB_005a0b37
    TEST ESI,ESI                        ; 005a0b33
    JG 0x005a0b43                       ; 005a0b35
        ;   XREF to: 005a0b43 (CONDITIONAL_JUMP)  ; LAB_005a0b43
    MOV EAX,0x1                         ; 005a0b37
        ;   Label: LAB_005a0b37
    POP ESI                             ; 005a0b3c
    POP EBX                             ; 005a0b3d
    RET                                 ; 005a0b3e
    XOR EAX,EAX                         ; 005a0b3f
        ;   Label: LAB_005a0b3f
    POP EBX                             ; 005a0b41
    RET                                 ; 005a0b42
    PUSH ESI                            ; 005a0b43
        ;   Label: LAB_005a0b43
    PUSH EBX                            ; 005a0b44
    CALL unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0 ; 005a0b45
        ;   XREF to: 005a0ba0 (UNCONDITIONAL_CALL)  ; uint unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a0b4a
    CMP EAX,0xa                         ; 005a0b4d
    JNZ 0x005a0b37                      ; 005a0b50
        ;   XREF to: 005a0b37 (CONDITIONAL_JUMP)  ; LAB_005a0b37
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a0b52
    DEC EAX                             ; 005a0b55
    PUSH EAX                            ; 005a0b56
    PUSH EBX                            ; 005a0b57
    CALL unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0 ; 005a0b58
        ;   XREF to: 005a0ba0 (UNCONDITIONAL_CALL)  ; uint unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a0b5d
    CMP EAX,0xd                         ; 005a0b60
    JNZ 0x005a0b37                      ; 005a0b63
        ;   XREF to: 005a0b37 (CONDITIONAL_JUMP)  ; LAB_005a0b37
    DEC dword ptr [EBX + 0x10]          ; 005a0b65
    MOV EAX,0x1                         ; 005a0b68
    POP ESI                             ; 005a0b6d
    POP EBX                             ; 005a0b6e
    RET                                 ; 005a0b6f

