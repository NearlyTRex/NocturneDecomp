; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051dcd0(int param_1)
;
;
; XREF[2]:
;   FUN_00424260 at 004242e4
;   FUN_004b48d0 at 004b48dc
;
; Called Functions:
;   FUN_0051dd00
;   FUN_0051f570
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051dcd0
        ;   Label: FUN_0051dcd0
    ADD EAX,0x2260                      ; 0051dcd4
    PUSH EAX                            ; 0051dcd9
    CALL FUN_0051f570                   ; 0051dcda
        ;   XREF to: 0051f570 (UNCONDITIONAL_CALL)  ; undefined FUN_0051f570()
    ADD ESP,0x4                         ; 0051dcdf
    PUSH EAX                            ; 0051dce2
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051dce3
    PUSH EDX                            ; 0051dce7
    CALL FUN_0051dd00                   ; 0051dce8
        ;   XREF to: 0051dd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dd00()
    ADD ESP,0x8                         ; 0051dced
    RET                                 ; 0051dcf0

