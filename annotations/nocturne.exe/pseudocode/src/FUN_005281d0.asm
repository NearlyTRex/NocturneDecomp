; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005281d0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d12e0 at 004d2071
;
; Called Functions:
;   FUN_005280c0
;   FUN_005281b0
;   FUN_005281c0
;
; *****************************************************************************

section .text

    CALL FUN_005281b0                   ; 005281d0
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005281b0()
        ;   Label: FUN_005281d0
    PUSH EAX                            ; 005281d5
    CALL FUN_005281c0                   ; 005281d6
        ;   XREF to: 005281c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005281c0()
    PUSH EAX                            ; 005281db
    MOV EDX,dword ptr [ESP + 0xc]       ; 005281dc
    PUSH EDX                            ; 005281e0
    CALL FUN_005280c0                   ; 005281e1
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005280c0()
    ADD ESP,0xc                         ; 005281e6
    RET                                 ; 005281e9

