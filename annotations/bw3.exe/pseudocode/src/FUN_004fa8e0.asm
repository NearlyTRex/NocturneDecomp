; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa8e0(int param_1)
;
;
; XREF[1]:
;   FUN_004fa8c0 at 004fa8c5
;
; Called Functions:
;   FUN_004f9a70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fa8e0
        ;   Label: FUN_004fa8e0
    PUSH EDX                            ; 004fa8e4
    CALL FUN_004f9a70                   ; 004fa8e5
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9a70()
    ADD ESP,0x4                         ; 004fa8ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fa8ed
    ADD EAX,0x608                       ; 004fa8f1
    PUSH EAX                            ; 004fa8f6
    CALL FUN_004f9a70                   ; 004fa8f7
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9a70()
    ADD ESP,0x4                         ; 004fa8fc
    RET                                 ; 004fa8ff

