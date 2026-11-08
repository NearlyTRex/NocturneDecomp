; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00558410(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004e94f0 at 004ea147
;
; Called Functions:
;   FUN_00558290
;   FUN_00558370
;   FUN_005583b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00558410
        ;   Label: FUN_00558410
    PUSH EDX                            ; 00558414
    CALL FUN_005583b0                   ; 00558415
        ;   XREF to: 005583b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005583b0()
    PUSH EAX                            ; 0055841a
    CALL FUN_00558370                   ; 0055841b
        ;   XREF to: 00558370 (UNCONDITIONAL_CALL)  ; undefined FUN_00558370()
    PUSH EAX                            ; 00558420
    CALL FUN_00558290                   ; 00558421
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; undefined FUN_00558290()
    ADD ESP,0xc                         ; 00558426
    RET                                 ; 00558429

