; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00584ee0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_destActor_005f6389
;
; Called Functions:
;   FUN_0040b6f0
;   FUN_00422760
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00584ee0
        ;   Label: FUN_00584ee0
    PUSH EDX                            ; 00584ee4
    CALL FUN_00422760                   ; 00584ee5
        ;   XREF to: 00422760 (UNCONDITIONAL_CALL)  ; undefined FUN_00422760()
    ADD ESP,0x4                         ; 00584eea
    MOV EAX,dword ptr [ESP + 0x4]       ; 00584eed
    PUSH 0x5f6389                       ; 00584ef1 | = "destActor"
    ADD EAX,0x678                       ; 00584ef6
    PUSH EAX                            ; 00584efb
    CALL FUN_0040b6f0                   ; 00584efc
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 00584f01
    RET                                 ; 00584f04

