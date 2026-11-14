; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_codec_cpp_CInStreamPipe_isOpen_FUN_00441b00(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441b00
        ;   Label: support_codec.cpp_CInStreamPipe_isOpen_FUN_00441b00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00441b01
    CMP dword ptr [EAX + 0x10],0x0      ; 00441b05
    JZ 0x00441b18                       ; 00441b09
        ;   XREF to: 00441b18 (CONDITIONAL_JUMP)  ; LAB_00441b18
    CMP dword ptr [EAX + 0x4],0x0       ; 00441b0b
    JZ 0x00441b18                       ; 00441b0f
        ;   XREF to: 00441b18 (CONDITIONAL_JUMP)  ; LAB_00441b18
    MOV EBX,dword ptr [EAX + 0x8]       ; 00441b11
    TEST EBX,EBX                        ; 00441b14
    JNZ 0x00441b1c                      ; 00441b16
        ;   XREF to: 00441b1c (CONDITIONAL_JUMP)  ; LAB_00441b1c
    XOR EAX,EAX                         ; 00441b18
        ;   Label: LAB_00441b18
    POP EBX                             ; 00441b1a
    RET                                 ; 00441b1b
    PUSH EBX                            ; 00441b1c
        ;   Label: LAB_00441b1c
    MOV EDX,dword ptr [EBX]             ; 00441b1d
    CALL dword ptr [EDX + 0x1c]         ; 00441b1f
    ADD ESP,0x4                         ; 00441b22
    POP EBX                             ; 00441b25
    RET                                 ; 00441b26

