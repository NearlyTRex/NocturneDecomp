; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00524790(int param_1)
;
;
; XREF[1]:
;   FUN_005241d0 at 005241e7
;
; Called Functions:
;   FUN_00524b70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00524790
        ;   Label: FUN_00524790
    MOV dword ptr [EAX + 0x4],0x0       ; 00524794
    MOV dword ptr [EAX + 0x8],0x0       ; 0052479b
    MOV dword ptr [EAX + 0x2c],0x0      ; 005247a2
    PUSH EAX                            ; 005247a9
    MOV dword ptr [EAX + 0x28],0xffffffff ; 005247aa
    CALL FUN_00524b70                   ; 005247b1
        ;   XREF to: 00524b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00524b70()
    ADD ESP,0x4                         ; 005247b6
    RET                                 ; 005247b9

