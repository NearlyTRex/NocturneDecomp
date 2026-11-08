; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dbb0(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_004a7d70 at 004a7e97
;   FUN_004a9f30 at 004a9fe2
;   FUN_004abe00 at 004ac3cc
;   FUN_004ac900 at 004aceac
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dbb0
        ;   Label: FUN_0040dbb0
    PUSH ESI                            ; 0040dbb1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040dbb2
    MOV EAX,dword ptr [EDX + 0xc]       ; 0040dbb6
    IMUL EAX,dword ptr [EDX + 0x10]     ; 0040dbb9
    PUSH EAX                            ; 0040dbbd
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040dbbe
    PUSH EBX                            ; 0040dbc2
    MOV ESI,dword ptr [EDX + 0x4]       ; 0040dbc3
    PUSH ESI                            ; 0040dbc6
    CALL FUN_005a28f0                   ; 0040dbc7
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0040dbcc
    POP ESI                             ; 0040dbcf
    POP EBX                             ; 0040dbd0
    RET                                 ; 0040dbd1

