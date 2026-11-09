; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bc0b5(double *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f199c
;   undefined4 DAT_005f19a4
;   undefined4 DAT_005f19ac
;   undefined4 DAT_005f19b4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005bc0b5
        ;   Label: crt_unknown.c_FUN_005bc0b5
    MOV EDX,dword ptr [ESP + 0x10]      ; 005bc0b8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bc0bc
    MOV EAX,dword ptr [EAX]             ; 005bc0c0
    MOV dword ptr [ESP],EAX             ; 005bc0c2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bc0c5
    MOV EAX,dword ptr [EAX + 0x4]       ; 005bc0c9
    MOV ECX,dword ptr [ESP]             ; 005bc0cc
    MOV dword ptr [ESP + 0x4],EAX       ; 005bc0cf
    TEST EAX,0x7fffffff                 ; 005bc0d3
    JNZ 0x005bc0e9                      ; 005bc0d8
        ;   XREF to: 005bc0e9 (CONDITIONAL_JUMP)  ; LAB_005bc0e9
    TEST ECX,ECX                        ; 005bc0da
    JNZ 0x005bc0e9                      ; 005bc0dc
        ;   XREF to: 005bc0e9 (CONDITIONAL_JUMP)  ; LAB_005bc0e9
    FLD double ptr [ESP]                ; 005bc0de
        ;   Label: LAB_005bc0de
    XOR EAX,EAX                         ; 005bc0e1
    FSTP float ptr [EDX]                ; 005bc0e3
    ADD ESP,0x8                         ; 005bc0e5
    RET                                 ; 005bc0e8
    FLDZ                                ; 005bc0e9
        ;   Label: LAB_005bc0e9
    FCOMP double ptr [ESP]              ; 005bc0eb
    FNSTSW AX                           ; 005bc0ee
    SAHF                                ; 005bc0f0
    JNC 0x005bc10f                      ; 005bc0f1
        ;   XREF to: 005bc10f (CONDITIONAL_JUMP)  ; LAB_005bc10f
    FLD double ptr [ESP]                ; 005bc0f3
    FCOMP double ptr [0x005f199c]       ; 005bc0f6 | DAT_005f199c
    FNSTSW AX                           ; 005bc0fc
    SAHF                                ; 005bc0fe
    JA 0x005bc10f                       ; 005bc0ff
        ;   XREF to: 005bc10f (CONDITIONAL_JUMP)  ; LAB_005bc10f
    FLD double ptr [ESP]                ; 005bc101
    FCOMP double ptr [0x005f19a4]       ; 005bc104 | DAT_005f19a4
    FNSTSW AX                           ; 005bc10a
    SAHF                                ; 005bc10c
    JNC 0x005bc0de                      ; 005bc10d
        ;   XREF to: 005bc0de (CONDITIONAL_JUMP)  ; LAB_005bc0de
    FLD double ptr [ESP]                ; 005bc10f
        ;   Label: LAB_005bc10f
    FCOMP double ptr [0x005f19ac]       ; 005bc112 | DAT_005f19ac
    FNSTSW AX                           ; 005bc118
    SAHF                                ; 005bc11a
    JC 0x005bc12b                       ; 005bc11b
        ;   XREF to: 005bc12b (CONDITIONAL_JUMP)  ; LAB_005bc12b
    FLD double ptr [ESP]                ; 005bc11d
    FCOMP double ptr [0x005f19b4]       ; 005bc120 | DAT_005f19b4
    FNSTSW AX                           ; 005bc126
    SAHF                                ; 005bc128
    JBE 0x005bc0de                      ; 005bc129
        ;   XREF to: 005bc0de (CONDITIONAL_JUMP)  ; LAB_005bc0de
    MOV EAX,0x1                         ; 005bc12b
        ;   Label: LAB_005bc12b
    ADD ESP,0x8                         ; 005bc130
    RET                                 ; 005bc133

