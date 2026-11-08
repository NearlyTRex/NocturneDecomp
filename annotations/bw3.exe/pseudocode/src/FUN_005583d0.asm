; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005583d0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004e94f0 at 004ea1c4
;
; Called Functions:
;   FUN_00558290
;   FUN_00558390
;   FUN_005583b0
;
; *****************************************************************************

section .text

    CALL FUN_00558390                   ; 005583d0
        ;   XREF to: 00558390 (UNCONDITIONAL_CALL)  ; undefined FUN_00558390()
        ;   Label: FUN_005583d0
    PUSH EAX                            ; 005583d5
    CALL FUN_005583b0                   ; 005583d6
        ;   XREF to: 005583b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005583b0()
    PUSH EAX                            ; 005583db
    MOV EDX,dword ptr [ESP + 0xc]       ; 005583dc
    PUSH EDX                            ; 005583e0
    CALL FUN_00558290                   ; 005583e1
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; undefined FUN_00558290()
    ADD ESP,0xc                         ; 005583e6
    RET                                 ; 005583e9

