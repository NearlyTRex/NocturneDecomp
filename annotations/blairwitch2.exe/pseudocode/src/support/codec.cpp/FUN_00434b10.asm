; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00434b10(uint param_1)
;
;
; XREF[1]:
;   support_codec.cpp_CAsciiUnarmor_decode_FUN_00434c90 at 00434cb9
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_00609b40
;   undefined4 s_s_0123456789ABCDEFGHJKLM_00609b40+0xf
;   undefined4 s_s_0123456789ABCDEFGHJKLM_00609b40+0x1f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434b10
        ;   Label: support_codec.cpp_FUN_00434b10
    PUSH ESI                            ; 00434b11
    MOV ESI,dword ptr [ESP + 0xc]       ; 00434b12
    MOV EDX,0x3f                        ; 00434b16
    XOR ECX,ECX                         ; 00434b1b
    LEA EAX,[ECX + EDX*0x1]             ; 00434b1d
        ;   Label: LAB_00434b1d
    SAR EAX,0x1                         ; 00434b20
    XOR EBX,EBX                         ; 00434b22
    MOV BL,byte ptr [EAX + 0x609b40]    ; 00434b24 | s_s_0123456789ABCDEFGHJKLM_00609b40+0x1f | s_s_0123456789ABCDEFGHJKLM_00609b40+0xf | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    CMP ESI,EBX                         ; 00434b2a
    JZ 0x00434b4b                       ; 00434b2c
        ;   XREF to: 00434b4b (CONDITIONAL_JUMP)  ; LAB_00434b4b
    JGE 0x00434b4e                      ; 00434b2e
        ;   XREF to: 00434b4e (CONDITIONAL_JUMP)  ; LAB_00434b4e
    LEA EDX,[EAX + -0x1]                ; 00434b30
    CMP ECX,EDX                         ; 00434b33
        ;   Label: LAB_00434b33
    JLE 0x00434b1d                      ; 00434b35
        ;   XREF to: 00434b1d (CONDITIONAL_JUMP)  ; LAB_00434b1d
    CMP ESI,0x4f                        ; 00434b37
    JZ 0x00434b53                       ; 00434b3a
        ;   XREF to: 00434b53 (CONDITIONAL_JUMP)  ; LAB_00434b53
    CMP ESI,0x49                        ; 00434b3c
    JZ 0x00434b60                       ; 00434b3f
        ;   XREF to: 00434b60 (CONDITIONAL_JUMP)  ; LAB_00434b60
    CMP ESI,0x6c                        ; 00434b41
    JZ 0x00434b60                       ; 00434b44
        ;   XREF to: 00434b60 (CONDITIONAL_JUMP)  ; LAB_00434b60
    MOV EAX,0xffffffff                  ; 00434b46
    POP ESI                             ; 00434b4b
        ;   Label: LAB_00434b4b
    POP EBX                             ; 00434b4c
    RET                                 ; 00434b4d
    LEA ECX,[EAX + 0x1]                 ; 00434b4e
        ;   Label: LAB_00434b4e
    JMP 0x00434b33                      ; 00434b51
        ;   XREF to: 00434b33 (UNCONDITIONAL_JUMP)  ; LAB_00434b33
    PUSH 0x30                           ; 00434b53
        ;   Label: LAB_00434b53
    CALL support_codec.cpp_FUN_00434b10 ; 00434b55
        ;   XREF to: 00434b10 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434b10()
    ADD ESP,0x4                         ; 00434b5a
    POP ESI                             ; 00434b5d
    POP EBX                             ; 00434b5e
    RET                                 ; 00434b5f
    PUSH 0x31                           ; 00434b60
        ;   Label: LAB_00434b60
    CALL support_codec.cpp_FUN_00434b10 ; 00434b62
        ;   XREF to: 00434b10 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434b10()
    ADD ESP,0x4                         ; 00434b67
    POP ESI                             ; 00434b6a
    POP EBX                             ; 00434b6b
    RET                                 ; 00434b6c

