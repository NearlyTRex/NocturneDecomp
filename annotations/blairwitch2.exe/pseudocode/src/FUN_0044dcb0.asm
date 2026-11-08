; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044dcb0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00502390 at 005023a7
;   FUN_005ade00 at 005ade14
;
; Called Functions:
;   FUN_0044e590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dcb0
        ;   Label: FUN_0044dcb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044dcb1
    PUSH EBX                            ; 0044dcb5
    CALL FUN_0044e590                   ; 0044dcb6
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e590()
    ADD ESP,0x4                         ; 0044dcbb
    MOV EAX,EBX                         ; 0044dcbe
    POP EBX                             ; 0044dcc0
    RET                                 ; 0044dcc1

