; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trstream_cpp_CInStreamMemory_peekChar_FUN_005742c0(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005742c0
        ;   Label: support_trstream.cpp_CInStreamMemory_peekChar_FUN_005742c0
    CMP dword ptr [EAX + 0x4],0x0       ; 005742c4
    JZ 0x005742d8                       ; 005742c8
        ;   XREF to: 005742d8 (CONDITIONAL_JUMP)  ; LAB_005742d8
    MOV ECX,dword ptr [EAX + 0x8]       ; 005742ca
    CMP ECX,dword ptr [EAX + 0xc]       ; 005742cd
    JG 0x005742de                       ; 005742d0
        ;   XREF to: 005742de (CONDITIONAL_JUMP)  ; LAB_005742de
    MOV EAX,0xffffffff                  ; 005742d2
    RET                                 ; 005742d7
    MOV EAX,0xfffffffe                  ; 005742d8
        ;   Label: LAB_005742d8
    RET                                 ; 005742dd
    MOV EDX,dword ptr [EAX + 0x4]       ; 005742de
        ;   Label: LAB_005742de
    MOV EAX,dword ptr [EAX + 0xc]       ; 005742e1
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 005742e4
    AND EAX,0xff                        ; 005742e7
    RET                                 ; 005742ec

