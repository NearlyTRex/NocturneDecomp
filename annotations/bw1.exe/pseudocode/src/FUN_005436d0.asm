; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005436d0(int param_1)
;
;
; XREF[1]:
;   FUN_005430c0 at 005430df
;
; Called Functions:
;   FUN_00499380
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005436d0
        ;   Label: FUN_005436d0
    ADD EAX,0x34                        ; 005436d4
    PUSH EAX                            ; 005436d7
    CALL FUN_00499380                   ; 005436d8
        ;   XREF to: 00499380 (UNCONDITIONAL_CALL)  ; undefined FUN_00499380()
    MOV dword ptr [EAX + -0x8],0x0      ; 005436dd
    MOV dword ptr [EAX + -0x4],0x0      ; 005436e4
    MOV dword ptr [EAX + -0x14],0x0     ; 005436eb
    MOV dword ptr [EAX + -0x10],0x0     ; 005436f2
    ADD ESP,0x4                         ; 005436f9
    MOV dword ptr [EAX + -0xc],0x0      ; 005436fc
    SUB EAX,0x34                        ; 00543703
    RET                                 ; 00543706

