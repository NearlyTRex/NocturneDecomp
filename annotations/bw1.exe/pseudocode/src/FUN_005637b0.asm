; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005637b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005637d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005637b0
        ;   Label: FUN_005637b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005637b1
    PUSH EBX                            ; 005637b5
    CALL FUN_005637d0                   ; 005637b6
        ;   XREF to: 005637d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005637d0()
    ADD ESP,0x4                         ; 005637bb
    MOV EAX,EBX                         ; 005637be
    POP EBX                             ; 005637c0
    RET                                 ; 005637c1

