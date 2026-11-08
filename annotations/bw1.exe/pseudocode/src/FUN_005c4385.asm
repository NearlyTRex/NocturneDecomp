; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c4385(double *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fab44
;   undefined4 DAT_005fab4c
;   undefined4 DAT_005fab54
;   undefined4 DAT_005fab5c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005c4385
        ;   Label: FUN_005c4385
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c4388
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c438c
    MOV EAX,dword ptr [EAX]             ; 005c4390
    MOV dword ptr [ESP],EAX             ; 005c4392
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c4395
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c4399
    MOV ECX,dword ptr [ESP]             ; 005c439c
    MOV dword ptr [ESP + 0x4],EAX       ; 005c439f
    TEST EAX,0x7fffffff                 ; 005c43a3
    JNZ 0x005c43b9                      ; 005c43a8
        ;   XREF to: 005c43b9 (CONDITIONAL_JUMP)  ; LAB_005c43b9
    TEST ECX,ECX                        ; 005c43aa
    JNZ 0x005c43b9                      ; 005c43ac
        ;   XREF to: 005c43b9 (CONDITIONAL_JUMP)  ; LAB_005c43b9
    FLD double ptr [ESP]                ; 005c43ae
        ;   Label: LAB_005c43ae
    XOR EAX,EAX                         ; 005c43b1
    FSTP float ptr [EDX]                ; 005c43b3
    ADD ESP,0x8                         ; 005c43b5
    RET                                 ; 005c43b8
    FLDZ                                ; 005c43b9
        ;   Label: LAB_005c43b9
    FCOMP double ptr [ESP]              ; 005c43bb
    FNSTSW AX                           ; 005c43be
    SAHF                                ; 005c43c0
    JNC 0x005c43df                      ; 005c43c1
        ;   XREF to: 005c43df (CONDITIONAL_JUMP)  ; LAB_005c43df
    FLD double ptr [ESP]                ; 005c43c3
    FCOMP double ptr [0x005fab44]       ; 005c43c6 | DAT_005fab44
    FNSTSW AX                           ; 005c43cc
    SAHF                                ; 005c43ce
    JA 0x005c43df                       ; 005c43cf
        ;   XREF to: 005c43df (CONDITIONAL_JUMP)  ; LAB_005c43df
    FLD double ptr [ESP]                ; 005c43d1
    FCOMP double ptr [0x005fab4c]       ; 005c43d4 | DAT_005fab4c
    FNSTSW AX                           ; 005c43da
    SAHF                                ; 005c43dc
    JNC 0x005c43ae                      ; 005c43dd
        ;   XREF to: 005c43ae (CONDITIONAL_JUMP)  ; LAB_005c43ae
    FLD double ptr [ESP]                ; 005c43df
        ;   Label: LAB_005c43df
    FCOMP double ptr [0x005fab54]       ; 005c43e2 | DAT_005fab54
    FNSTSW AX                           ; 005c43e8
    SAHF                                ; 005c43ea
    JC 0x005c43fb                       ; 005c43eb
        ;   XREF to: 005c43fb (CONDITIONAL_JUMP)  ; LAB_005c43fb
    FLD double ptr [ESP]                ; 005c43ed
    FCOMP double ptr [0x005fab5c]       ; 005c43f0 | DAT_005fab5c
    FNSTSW AX                           ; 005c43f6
    SAHF                                ; 005c43f8
    JBE 0x005c43ae                      ; 005c43f9
        ;   XREF to: 005c43ae (CONDITIONAL_JUMP)  ; LAB_005c43ae
    MOV EAX,0x1                         ; 005c43fb
        ;   Label: LAB_005c43fb
    ADD ESP,0x8                         ; 005c4400
    RET                                 ; 005c4403

