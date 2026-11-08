; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00461440(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004368b0 at 004368e1
;
; Called Functions:
;   FUN_005ba1e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00461440
        ;   Label: FUN_00461440
    PUSH EDX                            ; 00461444
    CALL FUN_005ba1e0                   ; 00461445
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1e0()
    ADD ESP,0x4                         ; 0046144a
    TEST EAX,EAX                        ; 0046144d
    SETZ AL                             ; 0046144f
    AND EAX,0xff                        ; 00461452
    RET                                 ; 00461457

