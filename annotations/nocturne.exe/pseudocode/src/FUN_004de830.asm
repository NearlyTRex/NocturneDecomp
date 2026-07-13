; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004de830(int param_1)
;
;
; Called Functions:
;   FUN_00452630
;   FUN_004dea60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de830
        ;   Label: FUN_004de830
    MOV EBX,dword ptr [ESP + 0x8]       ; 004de831
    PUSH EBX                            ; 004de835
    CALL FUN_004dea60                   ; 004de836
        ;   XREF to: 004dea60 (UNCONDITIONAL_CALL)  ; undefined FUN_004dea60()
    ADD ESP,0x4                         ; 004de83b
    PUSH 0x0                            ; 004de83e
    ADD EBX,0x8                         ; 004de840
    PUSH EBX                            ; 004de843
    CALL FUN_00452630                   ; 004de844
        ;   XREF to: 00452630 (UNCONDITIONAL_CALL)  ; undefined FUN_00452630()
    ADD ESP,0x8                         ; 004de849
    SUB EAX,0x8                         ; 004de84c
    POP EBX                             ; 004de84f
    RET                                 ; 004de850

