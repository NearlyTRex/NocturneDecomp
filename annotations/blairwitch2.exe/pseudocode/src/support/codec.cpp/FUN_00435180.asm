; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00435180(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435180
        ;   Label: support_codec.cpp_FUN_00435180
    MOV EAX,dword ptr [ESP + 0x8]       ; 00435181
    CMP dword ptr [EAX + 0x10],0x0      ; 00435185
    JZ 0x00435198                       ; 00435189
        ;   XREF to: 00435198 (CONDITIONAL_JUMP)  ; LAB_00435198
    CMP dword ptr [EAX + 0x4],0x0       ; 0043518b
    JZ 0x00435198                       ; 0043518f
        ;   XREF to: 00435198 (CONDITIONAL_JUMP)  ; LAB_00435198
    MOV EBX,dword ptr [EAX + 0x8]       ; 00435191
    TEST EBX,EBX                        ; 00435194
    JNZ 0x0043519c                      ; 00435196
        ;   XREF to: 0043519c (CONDITIONAL_JUMP)  ; LAB_0043519c
    XOR EAX,EAX                         ; 00435198
        ;   Label: LAB_00435198
    POP EBX                             ; 0043519a
    RET                                 ; 0043519b
    PUSH EBX                            ; 0043519c
        ;   Label: LAB_0043519c
    MOV EDX,dword ptr [EBX]             ; 0043519d
    CALL dword ptr [EDX + 0x1c]         ; 0043519f
    ADD ESP,0x4                         ; 004351a2
    POP EBX                             ; 004351a5
    RET                                 ; 004351a6

