; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057e330(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005ed5c8
;   TerminatedCString s_COutStreamDebug_seek_inv_005ed5e0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ed5c8                    ; 0057e330 | = "..\\support\\trstream.cpp"
        ;   Label: FUN_0057e330
    MOV ECX,0xa88                       ; 0057e335
    PUSH 0x5ed5e0                       ; 0057e33a | = "COutStreamDebug::seek - invalid opera..."
    MOV dword ptr [0x01d046a0],EDX      ; 0057e33f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0057e345 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0057e34b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0057e350
    XOR EAX,EAX                         ; 0057e353
    RET                                 ; 0057e355

