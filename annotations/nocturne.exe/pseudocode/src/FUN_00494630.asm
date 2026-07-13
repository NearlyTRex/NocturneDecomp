; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00494630(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059db84 = 004946c0
;
; Called Functions:
;   FUN_00409d30
;   FUN_0043b5d0
;   FUN_00454490
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00494630
        ;   Label: FUN_00494630
    PUSH EAX                            ; 00494634
    CALL FUN_00409d30                   ; 00494635
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0049463a
    ADD EAX,0x17c                       ; 0049463d
    PUSH EAX                            ; 00494642
    CALL FUN_00454490                   ; 00494643
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined FUN_00454490()
    ADD ESP,0x4                         ; 00494648
    ADD EAX,0x17c                       ; 0049464b
    PUSH EAX                            ; 00494650
    CALL FUN_0043b5d0                   ; 00494651
        ;   XREF to: 0043b5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b5d0()
    ADD ESP,0x4                         ; 00494656
    ADD EAX,0xc                         ; 00494659
    PUSH EAX                            ; 0049465c
    CALL FUN_00454490                   ; 0049465d
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined FUN_00454490()
    MOV dword ptr [EAX + 0xfffffe48],0x59db84 ; 00494662 | PTR_FUN_0059db84
    MOV dword ptr [EAX + 0xfffffe50],0x0 ; 0049466c
    MOV byte ptr [EAX + 0xfffffe54],0x0 ; 00494676
    MOV dword ptr [EAX + 0xfffffe74],0x0 ; 0049467d
    ADD ESP,0x4                         ; 00494687
    MOV dword ptr [EAX + 0x180],0x0     ; 0049468a
    SUB EAX,0x304                       ; 00494694
    RET                                 ; 00494699

