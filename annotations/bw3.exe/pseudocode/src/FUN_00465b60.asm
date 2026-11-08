; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00465b60(int param_1)
;
;
; XREF[5]:
;   FUN_00482a70 at 00482ba9
;   FUN_00482c70 at 00482d9c
;   FUN_00482ea0 at 00482ef8
;   FUN_00483020 at 004830df
;   FUN_005152e0 at 00515310
;
; Called Functions:
;   FUN_00465ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465b60
        ;   Label: FUN_00465b60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465b61
    PUSH EBX                            ; 00465b65
    MOV dword ptr [EBX + 0x10c],0x0     ; 00465b66
    CALL FUN_00465ce0                   ; 00465b70
        ;   XREF to: 00465ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ce0()
    ADD ESP,0x4                         ; 00465b75
    MOV EAX,EBX                         ; 00465b78
    POP EBX                             ; 00465b7a
    RET                                 ; 00465b7b

