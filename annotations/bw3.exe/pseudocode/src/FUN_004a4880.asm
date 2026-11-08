; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a4880(int param_1)
;
;
; Called Functions:
;   FUN_0041ad40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4880
        ;   Label: FUN_004a4880
    ADD EAX,0x4                         ; 004a4884
    PUSH EAX                            ; 004a4887
    CALL FUN_0041ad40                   ; 004a4888
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ad40()
    ADD ESP,0x4                         ; 004a488d
    SUB EAX,0x4                         ; 004a4890
    RET                                 ; 004a4893

