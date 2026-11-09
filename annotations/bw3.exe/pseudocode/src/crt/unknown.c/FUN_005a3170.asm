; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a3170(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a31a8 at 005a3208
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005a32b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3170
        ;   Label: crt_unknown.c_FUN_005a3170
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3171
    MOV EDX,dword ptr [EBX + 0x8]       ; 005a3175
    PUSH EDX                            ; 005a3178
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 005a3179
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 005a317e
    MOV EDX,EAX                         ; 005a3181
    CMP EAX,-0x1                        ; 005a3183
    JNZ 0x005a318c                      ; 005a3186
        ;   XREF to: 005a318c (CONDITIONAL_JUMP)  ; LAB_005a318c
    OR byte ptr [EBX + 0x10],0x2        ; 005a3188
    MOV EAX,EDX                         ; 005a318c
        ;   Label: LAB_005a318c
    POP EBX                             ; 005a318e
    RET                                 ; 005a318f

