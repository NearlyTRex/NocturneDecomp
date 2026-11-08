; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004614b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004724c0 at 0047251b
;
; Called Functions:
;   FUN_004615d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004614b0
        ;   Label: FUN_004614b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004614b1
    PUSH EBX                            ; 004614b5
    CALL FUN_004615d0                   ; 004614b6
        ;   XREF to: 004615d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004615d0()
    ADD ESP,0x4                         ; 004614bb
    MOV EAX,EBX                         ; 004614be
    POP EBX                             ; 004614c0
    RET                                 ; 004614c1

