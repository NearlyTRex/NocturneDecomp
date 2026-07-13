; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b09d0(int param_1)
;
;
; Called Functions:
;   FUN_0045b410
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b09d0
        ;   Label: FUN_004b09d0
    PUSH 0x0                            ; 004b09d4
    ADD EAX,0x8                         ; 004b09d6
    PUSH EAX                            ; 004b09d9
    CALL FUN_0045b410                   ; 004b09da
        ;   XREF to: 0045b410 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b410()
    ADD ESP,0x8                         ; 004b09df
    SUB EAX,0x8                         ; 004b09e2
    RET                                 ; 004b09e5

