; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057e360(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005ed60a
;   TerminatedCString s_COutStreamDebug_tell_inv_005ed622
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ed60a                    ; 0057e360 | = "..\\support\\trstream.cpp"
        ;   Label: FUN_0057e360
    MOV ECX,0xa8d                       ; 0057e365
    PUSH 0x5ed622                       ; 0057e36a | = "COutStreamDebug::tell - invalid opera..."
    MOV dword ptr [0x01d046a0],EDX      ; 0057e36f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0057e375 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0057e37b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    MOV EAX,0xffffffff                  ; 0057e380
    ADD ESP,0x4                         ; 0057e385
    RET                                 ; 0057e388

