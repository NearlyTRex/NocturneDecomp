; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00441aa0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005b9325
;   TerminatedCString s_CInStreamPipe_seek_not_a_005b933a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b9325                    ; 00441aa0 | = "..\\support\\codec.cpp"
        ;   Label: support_codec.cpp_FUN_00441aa0
    MOV ECX,0x829                       ; 00441aa5
    PUSH 0x5b933a                       ; 00441aaa | = "CInStreamPipe::seek - not allowed"
    MOV dword ptr [0x01d71de0],EDX      ; 00441aaf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00441ab5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00441abb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00441ac0
    XOR EAX,EAX                         ; 00441ac3
    RET                                 ; 00441ac5

