; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005215c0(int param_1)
;
;
; XREF[1]:
;   FUN_00520f90 at 00520faf
;
; Called Functions:
;   FUN_00480d20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005215c0
        ;   Label: FUN_005215c0
    ADD EAX,0x34                        ; 005215c4
    PUSH EAX                            ; 005215c7
    CALL FUN_00480d20                   ; 005215c8
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d20()
    MOV dword ptr [EAX + -0x8],0x0      ; 005215cd
    MOV dword ptr [EAX + -0x4],0x0      ; 005215d4
    MOV dword ptr [EAX + -0x14],0x0     ; 005215db
    MOV dword ptr [EAX + -0x10],0x0     ; 005215e2
    ADD ESP,0x4                         ; 005215e9
    MOV dword ptr [EAX + -0xc],0x0      ; 005215ec
    SUB EAX,0x34                        ; 005215f3
    RET                                 ; 005215f6

