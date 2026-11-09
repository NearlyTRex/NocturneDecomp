; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b8040(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b8078 at 005b80d8
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005b8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8040
        ;   Label: crt_unknown.c_FUN_005b8040
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b8041
    MOV EDX,dword ptr [EBX + 0x8]       ; 005b8045
    PUSH EDX                            ; 005b8048
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 005b8049
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 005b804e
    MOV EDX,EAX                         ; 005b8051
    CMP EAX,-0x1                        ; 005b8053
    JNZ 0x005b805c                      ; 005b8056
        ;   XREF to: 005b805c (CONDITIONAL_JUMP)  ; LAB_005b805c
    OR byte ptr [EBX + 0x10],0x2        ; 005b8058
    MOV EAX,EDX                         ; 005b805c
        ;   Label: LAB_005b805c
    POP EBX                             ; 005b805e
    RET                                 ; 005b805f

