; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b9284(undefined4 *param_1)
;
;
; XREF[1]:
;   crt_stdio.c_fseek_FUN_005b929c at 005b93af
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b9284
        ;   Label: crt_unknown.c_FUN_005b9284
    AND byte ptr [EAX + 0xc],0xef       ; 005b9288
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b928c
    MOV EDX,dword ptr [EDX + 0x8]       ; 005b928f
    MOV dword ptr [EAX + 0x4],0x0       ; 005b9292
    MOV dword ptr [EAX],EDX             ; 005b9299
    RET                                 ; 005b929b

