; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005035f0(int param_1)
;
;
; XREF[1]:
;   FUN_00503020 at 00503037
;
; Called Functions:
;   FUN_005039e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005035f0
        ;   Label: FUN_005035f0
    MOV dword ptr [EAX + 0x4],0x0       ; 005035f4
    MOV dword ptr [EAX + 0x8],0x0       ; 005035fb
    MOV dword ptr [EAX + 0x2c],0x0      ; 00503602
    PUSH EAX                            ; 00503609
    MOV dword ptr [EAX + 0x28],0xffffffff ; 0050360a
    CALL FUN_005039e0                   ; 00503611
        ;   XREF to: 005039e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005039e0()
    ADD ESP,0x4                         ; 00503616
    RET                                 ; 00503619

