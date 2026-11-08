; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00443e40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005d6ab5
;   TerminatedCString s_CInStreamPipe_seek_not_a_005d6aca
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d6ab5                    ; 00443e40 | = "..\\support\\codec.cpp"
        ;   Label: FUN_00443e40
    MOV ECX,0x829                       ; 00443e45
    PUSH 0x5d6aca                       ; 00443e4a | = "CInStreamPipe::seek - not allowed"
    MOV dword ptr [0x01d1d400],EDX      ; 00443e4f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00443e55 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00443e5b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00443e60
    XOR EAX,EAX                         ; 00443e63
    RET                                 ; 00443e65

