; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c93c0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004c7360 at 004c7365
;
; Called Functions:
;   FUN_004c93f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c93c0
        ;   Label: FUN_004c93c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c93c1
    PUSH EBX                            ; 004c93c5
    CALL FUN_004c93f0                   ; 004c93c6
        ;   XREF to: 004c93f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c93f0()
    ADD ESP,0x4                         ; 004c93cb
    MOV EAX,EBX                         ; 004c93ce
    POP EBX                             ; 004c93d0
    RET                                 ; 004c93d1

