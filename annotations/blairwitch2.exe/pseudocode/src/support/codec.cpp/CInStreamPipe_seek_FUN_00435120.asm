; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_codec_cpp_CInStreamPipe_seek_FUN_00435120(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005cd9f3
;   TerminatedCString s_CInStreamPipe_seek_not_a_005cda08
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5cd9f3                    ; 00435120 | = "..\\support\\codec.cpp"
        ;   Label: support_codec.cpp_CInStreamPipe_seek_FUN_00435120
    MOV ECX,0x823                       ; 00435125
    PUSH 0x5cda08                       ; 0043512a | = "CInStreamPipe::seek - not allowed"
    MOV dword ptr [0x01d046a0],EDX      ; 0043512f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00435135 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0043513b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00435140
    XOR EAX,EAX                         ; 00435143
    RET                                 ; 00435145

