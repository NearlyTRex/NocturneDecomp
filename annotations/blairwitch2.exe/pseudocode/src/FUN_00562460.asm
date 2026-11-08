; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562460(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_destActor_005eb185
;
; Called Functions:
;   FUN_0040b9e0
;   FUN_0041c7f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00562460
        ;   Label: FUN_00562460
    PUSH EDX                            ; 00562464
    CALL FUN_0041c7f0                   ; 00562465
        ;   XREF to: 0041c7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041c7f0()
    ADD ESP,0x4                         ; 0056246a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056246d
    PUSH 0x5eb185                       ; 00562471 | = "destActor"
    ADD EAX,0x7d4                       ; 00562476
    PUSH EAX                            ; 0056247b
    CALL FUN_0040b9e0                   ; 0056247c
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00562481
    RET                                 ; 00562484

