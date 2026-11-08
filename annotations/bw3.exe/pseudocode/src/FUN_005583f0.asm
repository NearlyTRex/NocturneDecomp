; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005583f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004e94f0 at 004ea21b
;
; Called Functions:
;   FUN_00558290
;   FUN_00558370
;   FUN_00558390
;
; *****************************************************************************

section .text

    CALL FUN_00558390                   ; 005583f0
        ;   XREF to: 00558390 (UNCONDITIONAL_CALL)  ; undefined FUN_00558390()
        ;   Label: FUN_005583f0
    PUSH EAX                            ; 005583f5
    MOV EDX,dword ptr [ESP + 0x8]       ; 005583f6
    PUSH EDX                            ; 005583fa
    CALL FUN_00558370                   ; 005583fb
        ;   XREF to: 00558370 (UNCONDITIONAL_CALL)  ; undefined FUN_00558370()
    PUSH EAX                            ; 00558400
    CALL FUN_00558290                   ; 00558401
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; undefined FUN_00558290()
    ADD ESP,0xc                         ; 00558406
    RET                                 ; 00558409

