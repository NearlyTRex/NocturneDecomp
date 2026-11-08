; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00502390(int param_1)
;
;
; Called Functions:
;   FUN_0044dcb0
;   FUN_00502450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502390
        ;   Label: FUN_00502390
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502391
    PUSH EBX                            ; 00502395
    CALL FUN_00502450                   ; 00502396
        ;   XREF to: 00502450 (UNCONDITIONAL_CALL)  ; undefined FUN_00502450()
    ADD ESP,0x4                         ; 0050239b
    PUSH 0x0                            ; 0050239e
    ADD EBX,0x738                       ; 005023a0
    PUSH EBX                            ; 005023a6
    CALL FUN_0044dcb0                   ; 005023a7
        ;   XREF to: 0044dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dcb0()
    ADD ESP,0x8                         ; 005023ac
    PUSH 0x0                            ; 005023af
    SUB EAX,0x398                       ; 005023b1
    PUSH EAX                            ; 005023b6
    CALL FUN_0044dcb0                   ; 005023b7
        ;   XREF to: 0044dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dcb0()
    ADD ESP,0x8                         ; 005023bc
    PUSH 0x0                            ; 005023bf
    SUB EAX,0x398                       ; 005023c1
    PUSH EAX                            ; 005023c6
    CALL FUN_0044dcb0                   ; 005023c7
        ;   XREF to: 0044dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dcb0()
    ADD ESP,0x8                         ; 005023cc
    SUB EAX,0x8                         ; 005023cf
    POP EBX                             ; 005023d2
    RET                                 ; 005023d3

