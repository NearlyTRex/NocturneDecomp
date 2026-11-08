; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fc320(int *param_1)
;
;
; XREF[4]:
;   FUN_00431000 at 00431011
;   FUN_004fcdc0 at 004fcefc
;   FUN_00509120 at 00509489
;   FUN_005a0be0 at 005a111f
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fc320
        ;   Label: FUN_004fc320
    PUSH EDX                            ; 004fc324
    CALL FUN_004fc070                   ; 004fc325
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fc32a
    ADD EAX,EAX                         ; 004fc32d
    MOV EDX,EAX                         ; 004fc32f
    SHL EAX,0x4                         ; 004fc331
    ADD ESP,0x4                         ; 004fc334
    SUB EAX,EDX                         ; 004fc337
    MOV EDX,dword ptr [ESP + 0x4]       ; 004fc339
    MOV EDX,dword ptr [EDX]             ; 004fc33d
    ADD EDX,0x4                         ; 004fc33f
    ADD EAX,EDX                         ; 004fc342
    RET                                 ; 004fc344

