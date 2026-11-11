; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamMemory_seek_FUN_0057e070(COutStreamMemory *this_ptr,int param_2,uint param_3)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; uint             Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057e070
        ;   Label: support_trstream.cpp_COutStreamMemory_seek_FUN_0057e070
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057e074
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057e078
    CMP ECX,0x1                         ; 0057e07c
    JNC 0x0057e0a9                      ; 0057e07f
        ;   XREF to: 0057e0a9 (CONDITIONAL_JUMP)  ; LAB_0057e0a9
    TEST ECX,ECX                        ; 0057e081
    JNZ 0x0057e09c                      ; 0057e083
        ;   XREF to: 0057e09c (CONDITIONAL_JUMP)  ; LAB_0057e09c
    TEST EAX,EAX                        ; 0057e085
        ;   Label: LAB_0057e085
    JL 0x0057e09c                       ; 0057e087
        ;   XREF to: 0057e09c (CONDITIONAL_JUMP)  ; LAB_0057e09c
    CMP EAX,dword ptr [EDX + 0x8]       ; 0057e089
    JLE 0x0057d757                      ; 0057e08c
        ;   XREF to: 0057d757 (CONDITIONAL_JUMP)  ; LAB_0057d757
    CMP dword ptr [EDX + 0x14],0x0      ; 0057e092
    JNZ 0x0057d757                      ; 0057e096
        ;   XREF to: 0057d757 (CONDITIONAL_JUMP)  ; LAB_0057d757
    XOR EAX,EAX                         ; 0057e09c
        ;   Label: LAB_0057e09c
    RET                                 ; 0057e09e
    ADD EAX,dword ptr [EDX + 0xc]       ; 0057e09f
        ;   Label: LAB_0057e09f
    JMP 0x0057e085                      ; 0057e0a2
        ;   XREF to: 0057e085 (UNCONDITIONAL_JUMP)  ; LAB_0057e085
    ADD EAX,dword ptr [EDX + 0x8]       ; 0057e0a4
        ;   Label: LAB_0057e0a4
    JMP 0x0057e085                      ; 0057e0a7
        ;   XREF to: 0057e085 (UNCONDITIONAL_JUMP)  ; LAB_0057e085
    JBE 0x0057e09f                      ; 0057e0a9
        ;   XREF to: 0057e09f (CONDITIONAL_JUMP)  ; LAB_0057e09f
        ;   Label: LAB_0057e0a9
    CMP ECX,0x2                         ; 0057e0ab
    JZ 0x0057e0a4                       ; 0057e0ae
        ;   XREF to: 0057e0a4 (CONDITIONAL_JUMP)  ; LAB_0057e0a4
    XOR EAX,EAX                         ; 0057e0b0
    RET                                 ; 0057e0b2

