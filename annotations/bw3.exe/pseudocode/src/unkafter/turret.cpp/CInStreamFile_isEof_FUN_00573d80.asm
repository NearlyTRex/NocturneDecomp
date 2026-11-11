; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl unkafter_turret_cpp_CInStreamFile_isEof_FUN_00573d80(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573d80
        ;   Label: unkafter_turret.cpp_CInStreamFile_isEof_FUN_00573d80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573d81
    CMP dword ptr [EDX + 0x4],0x0       ; 00573d85
    JZ 0x00573d9a                       ; 00573d89
        ;   XREF to: 00573d9a (CONDITIONAL_JUMP)  ; LAB_00573d9a
    MOV EBX,dword ptr [EDX + 0x8]       ; 00573d8b
    CMP EBX,dword ptr [EDX + 0x10]      ; 00573d8e
    JG 0x00573da1                       ; 00573d91
        ;   XREF to: 00573da1 (CONDITIONAL_JUMP)  ; LAB_00573da1
    MOV EAX,0x1                         ; 00573d93
    POP EBX                             ; 00573d98
    RET                                 ; 00573d99
    MOV EAX,0xffffffff                  ; 00573d9a
        ;   Label: LAB_00573d9a
    POP EBX                             ; 00573d9f
    RET                                 ; 00573da0
    XOR EAX,EAX                         ; 00573da1
        ;   Label: LAB_00573da1
    POP EBX                             ; 00573da3
    RET                                 ; 00573da4

