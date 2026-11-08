; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00435150(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005cda2a
;   TerminatedCString s_CInStreamPipe_tell_not_a_005cda3f
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5cda2a                    ; 00435150 | = "..\\support\\codec.cpp"
        ;   Label: FUN_00435150
    MOV ECX,0x82b                       ; 00435155
    PUSH 0x5cda3f                       ; 0043515a | = "CInStreamPipe::tell - not allowed"
    MOV dword ptr [0x01d046a0],EDX      ; 0043515f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00435165 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043516b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    MOV EAX,0xffffffff                  ; 00435170
    ADD ESP,0x4                         ; 00435175
    RET                                 ; 00435178

