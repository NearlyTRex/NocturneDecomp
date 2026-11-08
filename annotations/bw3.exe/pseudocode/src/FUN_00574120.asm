; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574120(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574120
        ;   Label: FUN_00574120
    PUSH EDX                            ; 00574124
    CALL FUN_00572530                   ; 00574125
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined FUN_00572530()
    MOV dword ptr [EAX],0x5e5ac4        ; 0057412a
    MOV dword ptr [EAX + 0x4],0x0       ; 00574130
    MOV dword ptr [EAX + 0x8],0x0       ; 00574137
    MOV dword ptr [EAX + 0xc],0x0       ; 0057413e
    ADD ESP,0x4                         ; 00574145
    MOV dword ptr [EAX + 0x10],0x0      ; 00574148
    RET                                 ; 0057414f

