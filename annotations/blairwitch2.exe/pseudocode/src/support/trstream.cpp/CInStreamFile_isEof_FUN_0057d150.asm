; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamFile_isEof_FUN_0057d150(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d150
        ;   Label: support_trstream.cpp_CInStreamFile_isEof_FUN_0057d150
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d151
    CMP dword ptr [EDX + 0x4],0x0       ; 0057d155
    JZ 0x0057d16a                       ; 0057d159
        ;   XREF to: 0057d16a (CONDITIONAL_JUMP)  ; LAB_0057d16a
    MOV EBX,dword ptr [EDX + 0x8]       ; 0057d15b
    CMP EBX,dword ptr [EDX + 0x10]      ; 0057d15e
    JG 0x0057d171                       ; 0057d161
        ;   XREF to: 0057d171 (CONDITIONAL_JUMP)  ; LAB_0057d171
    MOV EAX,0x1                         ; 0057d163
    POP EBX                             ; 0057d168
    RET                                 ; 0057d169
    MOV EAX,0xffffffff                  ; 0057d16a
        ;   Label: LAB_0057d16a
    POP EBX                             ; 0057d16f
    RET                                 ; 0057d170
    XOR EAX,EAX                         ; 0057d171
        ;   Label: LAB_0057d171
    POP EBX                             ; 0057d173
    RET                                 ; 0057d174

