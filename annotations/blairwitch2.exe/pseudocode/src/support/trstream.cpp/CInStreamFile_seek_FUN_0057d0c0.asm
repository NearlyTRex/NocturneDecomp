; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamFile_seek_FUN_0057d0c0(CInStreamFile *this_ptr,int offset,int origin)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
; int              Stack[0xc]:4   origin
;
; XREF[3]:
;   core_game.cpp_FUN_004bbf70 at 004bc23b
;   sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50 at 0054dda7
;   sound_sndmain.cpp_FUN_0054c1c0 at 0054c3eb
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057d0c0
        ;   Label: support_trstream.cpp_CInStreamFile_seek_FUN_0057d0c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d0c4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057d0c8
    CMP dword ptr [EDX + 0x4],0x0       ; 0057d0cc
    JZ 0x0057d0e4                       ; 0057d0d0
        ;   XREF to: 0057d0e4 (CONDITIONAL_JUMP)  ; LAB_0057d0e4
    CMP ECX,0x1                         ; 0057d0d2
    JNC 0x0057d0f1                      ; 0057d0d5
        ;   XREF to: 0057d0f1 (CONDITIONAL_JUMP)  ; LAB_0057d0f1
    TEST ECX,ECX                        ; 0057d0d7
    JNZ 0x0057d0e4                      ; 0057d0d9
        ;   XREF to: 0057d0e4 (CONDITIONAL_JUMP)  ; LAB_0057d0e4
    TEST EAX,EAX                        ; 0057d0db
        ;   Label: LAB_0057d0db
    JL 0x0057d0e4                       ; 0057d0dd
        ;   XREF to: 0057d0e4 (CONDITIONAL_JUMP)  ; LAB_0057d0e4
    CMP EAX,dword ptr [EDX + 0x8]       ; 0057d0df
    JLE 0x0057d0fb                      ; 0057d0e2
        ;   XREF to: 0057d0fb (CONDITIONAL_JUMP)  ; LAB_0057d0fb
    XOR EAX,EAX                         ; 0057d0e4
        ;   Label: LAB_0057d0e4
    RET                                 ; 0057d0e6
    ADD EAX,dword ptr [EDX + 0x10]      ; 0057d0e7
        ;   Label: LAB_0057d0e7
    JMP 0x0057d0db                      ; 0057d0ea
        ;   XREF to: 0057d0db (UNCONDITIONAL_JUMP)  ; LAB_0057d0db
    ADD EAX,dword ptr [EDX + 0x8]       ; 0057d0ec
        ;   Label: LAB_0057d0ec
    JMP 0x0057d0db                      ; 0057d0ef
        ;   XREF to: 0057d0db (UNCONDITIONAL_JUMP)  ; LAB_0057d0db
    JBE 0x0057d0e7                      ; 0057d0f1
        ;   XREF to: 0057d0e7 (CONDITIONAL_JUMP)  ; LAB_0057d0e7
        ;   Label: LAB_0057d0f1
    CMP ECX,0x2                         ; 0057d0f3
    JZ 0x0057d0ec                       ; 0057d0f6
        ;   XREF to: 0057d0ec (CONDITIONAL_JUMP)  ; LAB_0057d0ec
    XOR EAX,EAX                         ; 0057d0f8
    RET                                 ; 0057d0fa
    MOV dword ptr [EDX + 0x10],EAX      ; 0057d0fb
        ;   Label: LAB_0057d0fb
    MOV EAX,0x1                         ; 0057d0fe
    RET                                 ; 0057d103

