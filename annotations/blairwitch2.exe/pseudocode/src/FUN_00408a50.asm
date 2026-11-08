; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408a50(int param_1)
;
;
; XREF[13]:
;   FUN_0040b0a0 at 0040b0b5
;   FUN_0040b1c0 at 0040b1d2
;   FUN_0040b380 at 0040b3ee
;   FUN_00422930 at 00422b98
;   FUN_00488d00 at 00488e03
;   FUN_00491680 at 004916b4
;   FUN_004dadb0 at 004db4e4
;   FUN_004dbc60 at 004dbd00
;   FUN_004dc460 at 004dc47c
;   FUN_004dd020 at 004dd07e
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_s_getClassName_005ca494
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;
; Called Functions:
;   FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a50
        ;   Label: FUN_00408a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408a51
    PUSH EBX                            ; 00408a55
    PUSH 0x5ca494                       ; 00408a56 | = "%s::getClassName()\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 00408a5b | PTR_DAT_00609ed0
    PUSH EDX                            ; 00408a61 | DAT_007c158c
    CALL FUN_00436710                   ; 00408a62
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 00408a67
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00408a6a
    PUSH EBX                            ; 00408a70
    CALL dword ptr [EAX + 0xd4]         ; 00408a71
    ADD ESP,0x4                         ; 00408a77
    POP EBX                             ; 00408a7a
    RET                                 ; 00408a7b

