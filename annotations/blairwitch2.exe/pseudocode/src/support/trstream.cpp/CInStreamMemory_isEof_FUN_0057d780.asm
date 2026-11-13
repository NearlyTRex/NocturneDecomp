; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamMemory_isEof_FUN_0057d780(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d780
        ;   Label: support_trstream.cpp_CInStreamMemory_isEof_FUN_0057d780
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d781
    CMP dword ptr [EDX + 0x4],0x0       ; 0057d785
    JZ 0x0057d79a                       ; 0057d789
        ;   XREF to: 0057d79a (CONDITIONAL_JUMP)  ; LAB_0057d79a
    MOV EBX,dword ptr [EDX + 0x8]       ; 0057d78b
    CMP EBX,dword ptr [EDX + 0xc]       ; 0057d78e
    JG 0x0057d7a1                       ; 0057d791
        ;   XREF to: 0057d7a1 (CONDITIONAL_JUMP)  ; LAB_0057d7a1
    MOV EAX,0x1                         ; 0057d793
    POP EBX                             ; 0057d798
    RET                                 ; 0057d799
    MOV EAX,0xffffffff                  ; 0057d79a
        ;   Label: LAB_0057d79a
    POP EBX                             ; 0057d79f
    RET                                 ; 0057d7a0
    XOR EAX,EAX                         ; 0057d7a1
        ;   Label: LAB_0057d7a1
    POP EBX                             ; 0057d7a3
    RET                                 ; 0057d7a4

