; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00441b30(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00441b30
        ;   Label: support_codec.cpp_FUN_00441b30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00441b31
    CMP dword ptr [EAX + 0x10],0x0      ; 00441b35
    JZ 0x00441b53                       ; 00441b39
        ;   XREF to: 00441b53 (CONDITIONAL_JUMP)  ; LAB_00441b53
    CMP dword ptr [EAX + 0x4],0x0       ; 00441b3b
    JZ 0x00441b53                       ; 00441b3f
        ;   XREF to: 00441b53 (CONDITIONAL_JUMP)  ; LAB_00441b53
    CMP dword ptr [EAX + 0x8],0x0       ; 00441b41
    JZ 0x00441b53                       ; 00441b45
        ;   XREF to: 00441b53 (CONDITIONAL_JUMP)  ; LAB_00441b53
    MOV ESI,dword ptr [EAX + 0x18]      ; 00441b47
    CMP ESI,dword ptr [EAX + 0x1c]      ; 00441b4a
    JLE 0x00441b5a                      ; 00441b4d
        ;   XREF to: 00441b5a (CONDITIONAL_JUMP)  ; LAB_00441b5a
    XOR EAX,EAX                         ; 00441b4f
    POP ESI                             ; 00441b51
    RET                                 ; 00441b52
    MOV EAX,0xffffffff                  ; 00441b53
        ;   Label: LAB_00441b53
    POP ESI                             ; 00441b58
    RET                                 ; 00441b59
    MOV EAX,dword ptr [EAX + 0x20]      ; 00441b5a
        ;   Label: LAB_00441b5a
    POP ESI                             ; 00441b5d
    RET                                 ; 00441b5e

