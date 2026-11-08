; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c1a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005ef5c7
;
; Called Functions:
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c1a0
        ;   Label: FUN_0059c1a0
    PUSH EDX                            ; 0059c1a4
    CALL FUN_0040c330                   ; 0059c1a5
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 0059c1aa
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c1ad
    PUSH 0x5ef5c7                       ; 0059c1b1 | = "modelName"
    ADD EAX,0x2b4                       ; 0059c1b6
    PUSH EAX                            ; 0059c1bb
    CALL FUN_0040ba60                   ; 0059c1bc
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 0059c1c1
    RET                                 ; 0059c1c4

