; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a9930(int param_1)
;
;
; XREF[1]:
;   FUN_004a9bc0 at 004a9c12
;
; Called Functions:
;   FUN_00481f40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9930
        ;   Label: FUN_004a9930
    PUSH 0x0                            ; 004a9934
    ADD EAX,0x148                       ; 004a9936
    PUSH EAX                            ; 004a993b
    CALL FUN_00481f40                   ; 004a993c
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00481f40()
    ADD ESP,0x8                         ; 004a9941
    SUB EAX,0x148                       ; 004a9944
    RET                                 ; 004a9949

