; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00441ad0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005b935c
;   TerminatedCString s_CInStreamPipe_tell_not_a_005b9371
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b935c                    ; 00441ad0 | = "..\\support\\codec.cpp"
        ;   Label: FUN_00441ad0
    MOV ECX,0x831                       ; 00441ad5
    PUSH 0x5b9371                       ; 00441ada | = "CInStreamPipe::tell - not allowed"
    MOV dword ptr [0x01d71de0],EDX      ; 00441adf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00441ae5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00441aeb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    MOV EAX,0xffffffff                  ; 00441af0
    ADD ESP,0x4                         ; 00441af5
    RET                                 ; 00441af8

