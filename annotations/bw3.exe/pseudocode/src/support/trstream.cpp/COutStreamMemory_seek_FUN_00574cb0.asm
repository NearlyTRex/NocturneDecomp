; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamMemory_seek_FUN_00574cb0(COutStreamMemory *this_ptr,int param_2,uint param_3)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; uint             Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574cb0
        ;   Label: support_trstream.cpp_COutStreamMemory_seek_FUN_00574cb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574cb4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00574cb8
    CMP ECX,0x1                         ; 00574cbc
    JNC 0x00574ce9                      ; 00574cbf
        ;   XREF to: 00574ce9 (CONDITIONAL_JUMP)  ; LAB_00574ce9
    TEST ECX,ECX                        ; 00574cc1
    JNZ 0x00574cdc                      ; 00574cc3
        ;   XREF to: 00574cdc (CONDITIONAL_JUMP)  ; LAB_00574cdc
    TEST EAX,EAX                        ; 00574cc5
        ;   Label: LAB_00574cc5
    JL 0x00574cdc                       ; 00574cc7
        ;   XREF to: 00574cdc (CONDITIONAL_JUMP)  ; LAB_00574cdc
    CMP EAX,dword ptr [EDX + 0x8]       ; 00574cc9
    JLE 0x00574397                      ; 00574ccc
        ;   XREF to: 00574397 (CONDITIONAL_JUMP)  ; LAB_00574397
    CMP dword ptr [EDX + 0x14],0x0      ; 00574cd2
    JNZ 0x00574397                      ; 00574cd6
        ;   XREF to: 00574397 (CONDITIONAL_JUMP)  ; LAB_00574397
    XOR EAX,EAX                         ; 00574cdc
        ;   Label: LAB_00574cdc
    RET                                 ; 00574cde
    ADD EAX,dword ptr [EDX + 0xc]       ; 00574cdf
        ;   Label: LAB_00574cdf
    JMP 0x00574cc5                      ; 00574ce2
        ;   XREF to: 00574cc5 (UNCONDITIONAL_JUMP)  ; LAB_00574cc5
    ADD EAX,dword ptr [EDX + 0x8]       ; 00574ce4
        ;   Label: LAB_00574ce4
    JMP 0x00574cc5                      ; 00574ce7
        ;   XREF to: 00574cc5 (UNCONDITIONAL_JUMP)  ; LAB_00574cc5
    JBE 0x00574cdf                      ; 00574ce9
        ;   XREF to: 00574cdf (CONDITIONAL_JUMP)  ; LAB_00574cdf
        ;   Label: LAB_00574ce9
    CMP ECX,0x2                         ; 00574ceb
    JZ 0x00574ce4                       ; 00574cee
        ;   XREF to: 00574ce4 (CONDITIONAL_JUMP)  ; LAB_00574ce4
    XOR EAX,EAX                         ; 00574cf0
    RET                                 ; 00574cf2

