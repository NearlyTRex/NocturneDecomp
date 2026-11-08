; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403a20(int param_1)
;
;
; XREF[16]:
;   FUN_00403ce0 at 00403d2b
;   FUN_00403f40 at 00403f96
;   FUN_00404240 at 0040429d
;   FUN_004046e0 at 00404723
;   FUN_00404860 at 00404964
;   FUN_00404a60 at 00404aae
;   FUN_00404c80 at 00404cd9
;   FUN_00405190 at 004051e3
;   FUN_004060c0 at 0040611b
;   FUN_00406170 at 004061be
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_01c35e64
;
; Called Functions:
;   FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403a20
        ;   Label: FUN_00403a20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00403a21
    MOV EDX,dword ptr [EAX + 0x10]      ; 00403a25
    PUSH EDX                            ; 00403a28
    MOV ECX,dword ptr [EAX + 0xc]       ; 00403a29
    PUSH ECX                            ; 00403a2c
    MOV EBX,dword ptr [EAX + 0x8]       ; 00403a2d
    PUSH EBX                            ; 00403a30
    CALL FUN_004e28b0                   ; 00403a31
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e28b0()
    ADD ESP,0xc                         ; 00403a36
    MOV [0x01c35e64],EAX                ; 00403a39 | DAT_01c35e64
    POP EBX                             ; 00403a3e
    RET                                 ; 00403a3f

