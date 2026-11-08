; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c1480(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d8e7d
;
; Called Functions:
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c1480
        ;   Label: FUN_004c1480
    PUSH EDX                            ; 004c1484
    CALL FUN_0040c330                   ; 004c1485
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 004c148a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c148d
    PUSH 0x5d8e7d                       ; 004c1491 | = "modelName"
    ADD EAX,0x2b4                       ; 004c1496
    PUSH EAX                            ; 004c149b
    CALL FUN_0040ba60                   ; 004c149c
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 004c14a1
    RET                                 ; 004c14a4

