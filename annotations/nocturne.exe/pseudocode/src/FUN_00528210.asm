; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528210(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d12e0 at 004d1ffc
;
; Called Functions:
;   FUN_005280c0
;   FUN_005281a0
;   FUN_005281c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00528210
        ;   Label: FUN_00528210
    PUSH EDX                            ; 00528214
    CALL FUN_005281c0                   ; 00528215
        ;   XREF to: 005281c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005281c0()
    PUSH EAX                            ; 0052821a
    CALL FUN_005281a0                   ; 0052821b
        ;   XREF to: 005281a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005281a0()
    PUSH EAX                            ; 00528220
    CALL FUN_005280c0                   ; 00528221
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005280c0()
    ADD ESP,0xc                         ; 00528226
    RET                                 ; 00528229

