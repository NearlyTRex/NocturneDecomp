; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c03f0(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0428 at 005c0488
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005c0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c03f0
        ;   Label: crt_unknown.c_FUN_005c03f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c03f1
    MOV EDX,dword ptr [EBX + 0x8]       ; 005c03f5
    PUSH EDX                            ; 005c03f8
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005c03f9
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 005c03fe
    MOV EDX,EAX                         ; 005c0401
    CMP EAX,-0x1                        ; 005c0403
    JNZ 0x005c040c                      ; 005c0406
        ;   XREF to: 005c040c (CONDITIONAL_JUMP)  ; LAB_005c040c
    OR byte ptr [EBX + 0x10],0x2        ; 005c0408
    MOV EAX,EDX                         ; 005c040c
        ;   Label: LAB_005c040c
    POP EBX                             ; 005c040e
    RET                                 ; 005c040f

