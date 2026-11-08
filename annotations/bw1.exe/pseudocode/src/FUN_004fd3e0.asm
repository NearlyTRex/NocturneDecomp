; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd3e0(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fd3e0
        ;   Label: FUN_004fd3e0
    PUSH EDX                            ; 004fd3e4
    CALL FUN_00408850                   ; 004fd3e5
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 004fd3ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fd3ed
    ADD EAX,0x158                       ; 004fd3f1
    PUSH EAX                            ; 004fd3f6
    CALL FUN_004688e0                   ; 004fd3f7
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004fd3fc
    RET                                 ; 004fd3ff

