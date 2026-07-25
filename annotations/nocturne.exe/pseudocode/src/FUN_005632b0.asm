; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005632b0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005632c8 at 00563315
;
; Called Functions:
;   crt_stdio.c_ungetc_FUN_00564740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005632b0
        ;   Label: FUN_005632b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005632b1
    MOV EDX,dword ptr [EAX + 0x8]       ; 005632b5
    PUSH EDX                            ; 005632b8
    MOV EBX,dword ptr [ESP + 0xc]       ; 005632b9
    PUSH EBX                            ; 005632bd
    CALL crt_stdio.c_ungetc_FUN_00564740 ; 005632be
        ;   XREF to: 00564740 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_00564740()
    ADD ESP,0x8                         ; 005632c3
    POP EBX                             ; 005632c6
    RET                                 ; 005632c7

