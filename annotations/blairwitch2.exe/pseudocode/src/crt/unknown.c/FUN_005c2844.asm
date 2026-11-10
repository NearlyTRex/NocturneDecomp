; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2844(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2ac2
;
; Called Functions:
;   crt_unknown.c_FUN_005c0900
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c2844
        ;   Label: crt_unknown.c_FUN_005c2844
    PUSH EDX                            ; 005c2848
    CALL crt_unknown.c_FUN_005c0900     ; 005c2849
        ;   XREF to: 005c0900 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0900()
    ADD ESP,0x4                         ; 005c284e
    RET                                 ; 005c2851

