; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00563290(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005632c8 at 00563328
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563290
        ;   Label: FUN_00563290
    MOV EBX,dword ptr [ESP + 0x8]       ; 00563291
    MOV EDX,dword ptr [EBX + 0x8]       ; 00563295
    PUSH EDX                            ; 00563298
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00563299
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0056329e
    MOV EDX,EAX                         ; 005632a1
    CMP EAX,-0x1                        ; 005632a3
    JNZ 0x005632ac                      ; 005632a6
        ;   XREF to: 005632ac (CONDITIONAL_JUMP)  ; LAB_005632ac
    OR byte ptr [EBX + 0x10],0x2        ; 005632a8
    MOV EAX,EDX                         ; 005632ac
        ;   Label: LAB_005632ac
    POP EBX                             ; 005632ae
    RET                                 ; 005632af

