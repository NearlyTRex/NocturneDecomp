; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00502350(int param_1)
;
;
; XREF[1]:
;   FUN_004eae70 at 004eae96
;
; Called Functions:
;   FUN_0044dc10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00502350
        ;   Label: FUN_00502350
    ADD EAX,0x8                         ; 00502354
    PUSH EAX                            ; 00502357
    CALL FUN_0044dc10                   ; 00502358
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dc10()
    ADD ESP,0x4                         ; 0050235d
    ADD EAX,0x398                       ; 00502360
    PUSH EAX                            ; 00502365
    CALL FUN_0044dc10                   ; 00502366
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dc10()
    ADD ESP,0x4                         ; 0050236b
    ADD EAX,0x398                       ; 0050236e
    PUSH EAX                            ; 00502373
    CALL FUN_0044dc10                   ; 00502374
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dc10()
    SUB EAX,0x738                       ; 00502379
    ADD ESP,0x4                         ; 0050237e
    MOV dword ptr [EAX],0x0             ; 00502381
    RET                                 ; 00502387

