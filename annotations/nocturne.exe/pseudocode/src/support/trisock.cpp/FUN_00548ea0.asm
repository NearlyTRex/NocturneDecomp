; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00548ea0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596c96
;   TerminatedCString s_Should_never_be_called_00596cad
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x596c96                    ; 00548ea0 | = "..\\support\\trisock.cpp"
        ;   Label: FUN_00548ea0
    MOV ECX,0xd1                        ; 00548ea5
    PUSH 0x596cad                       ; 00548eaa | = "Should never be called!"
    MOV dword ptr [0x01cc4800],EDX      ; 00548eaf | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00548eb5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00548ebb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00548ec0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00548ec3
    RET                                 ; 00548ec7

