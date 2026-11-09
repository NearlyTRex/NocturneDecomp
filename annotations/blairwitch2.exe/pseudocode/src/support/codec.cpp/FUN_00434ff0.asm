; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00434ff0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434ff0
        ;   Label: support_codec.cpp_FUN_00434ff0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00434ff1
    CMP dword ptr [EDX + 0x10],0x0      ; 00434ff5
    JZ 0x00435012                       ; 00434ff9
        ;   XREF to: 00435012 (CONDITIONAL_JUMP)  ; LAB_00435012
    MOV EBX,dword ptr [EDX + 0x1c]      ; 00434ffb
    TEST EBX,EBX                        ; 00434ffe
    JLE 0x00435012                      ; 00435000
        ;   XREF to: 00435012 (CONDITIONAL_JUMP)  ; LAB_00435012
    PUSH ESI                            ; 00435002
    MOV EAX,0x1                         ; 00435003
    MOV ESI,EBX                         ; 00435008
    SUB ESI,EAX                         ; 0043500a
    MOV dword ptr [EDX + 0x1c],ESI      ; 0043500c
    POP ESI                             ; 0043500f
    POP EBX                             ; 00435010
    RET                                 ; 00435011
    XOR EAX,EAX                         ; 00435012
        ;   Label: LAB_00435012
    POP EBX                             ; 00435014
    RET                                 ; 00435015

