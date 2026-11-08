; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00465b80(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_00482a70 at 00482c2a
;   FUN_00482c70 at 00482e29
;   FUN_00482ea0 at 00482f54
;   FUN_00483020 at 0048312f
;   FUN_005152e0 at 00515371
;
; Called Functions:
;   FUN_00465ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465b80
        ;   Label: FUN_00465b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465b81
    PUSH EBX                            ; 00465b85
    CALL FUN_00465ca0                   ; 00465b86
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ca0()
    ADD ESP,0x4                         ; 00465b8b
    MOV EAX,EBX                         ; 00465b8e
    POP EBX                             ; 00465b90
    RET                                 ; 00465b91

