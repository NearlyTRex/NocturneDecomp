; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f09f0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_killEvent_005e5245
;
; Called Functions:
;   FUN_0040b440
;   FUN_00531bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f09f0
        ;   Label: FUN_004f09f0
    PUSH EDX                            ; 004f09f4
    CALL FUN_00531bf0                   ; 004f09f5
        ;   XREF to: 00531bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531bf0()
    ADD ESP,0x4                         ; 004f09fa
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f09fd
    PUSH 0x5e5245                       ; 004f0a01 | = "killEvent"
    ADD EAX,0x1fab8                     ; 004f0a06
    PUSH EAX                            ; 004f0a0b
    CALL FUN_0040b440                   ; 004f0a0c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004f0a11
    RET                                 ; 004f0a14

