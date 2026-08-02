; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e474(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e6f2
;
; Called Functions:
;   crt_unknown.c_FUN_0056e010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056e474
        ;   Label: crt_unknown.c_FUN_0056e474
    PUSH EDX                            ; 0056e478
    CALL crt_unknown.c_FUN_0056e010     ; 0056e479
        ;   XREF to: 0056e010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e010()
    ADD ESP,0x4                         ; 0056e47e
    RET                                 ; 0056e481

