; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00443e70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005d6aec
;   TerminatedCString s_CInStreamPipe_tell_not_a_005d6b01
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d6aec                    ; 00443e70 | = "..\\support\\codec.cpp"
        ;   Label: FUN_00443e70
    MOV ECX,0x831                       ; 00443e75
    PUSH 0x5d6b01                       ; 00443e7a | = "CInStreamPipe::tell - not allowed"
    MOV dword ptr [0x01d1d400],EDX      ; 00443e7f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00443e85 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00443e8b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    MOV EAX,0xffffffff                  ; 00443e90
    ADD ESP,0x4                         ; 00443e95
    RET                                 ; 00443e98

