; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0410(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0428 at 005c0475
;
; Called Functions:
;   crt_stdio.c_ungetc_FUN_005c0700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0410
        ;   Label: crt_unknown.c_FUN_005c0410
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c0411
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c0415
    PUSH EDX                            ; 005c0418
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c0419
    PUSH EBX                            ; 005c041d
    CALL crt_stdio.c_ungetc_FUN_005c0700 ; 005c041e
        ;   XREF to: 005c0700 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_005c0700()
    ADD ESP,0x8                         ; 005c0423
    POP EBX                             ; 005c0426
    RET                                 ; 005c0427

