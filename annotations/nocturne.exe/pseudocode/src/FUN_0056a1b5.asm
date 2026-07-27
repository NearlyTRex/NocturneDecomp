; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056a1b5(double *param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; Referenced Globals:
;   undefined4 DAT_00598b54
;   undefined4 DAT_00598b5c
;   undefined4 DAT_00598b64
;   undefined4 DAT_00598b6c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0056a1b5
        ;   Label: FUN_0056a1b5
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056a1b8
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056a1bc
    MOV EAX,dword ptr [EAX]             ; 0056a1c0
    MOV dword ptr [ESP],EAX             ; 0056a1c2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056a1c5
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056a1c9
    MOV ECX,dword ptr [ESP]             ; 0056a1cc
    MOV dword ptr [ESP + 0x4],EAX       ; 0056a1cf
    TEST EAX,0x7fffffff                 ; 0056a1d3
    JNZ 0x0056a1e9                      ; 0056a1d8
        ;   XREF to: 0056a1e9 (CONDITIONAL_JUMP)  ; LAB_0056a1e9
    TEST ECX,ECX                        ; 0056a1da
    JNZ 0x0056a1e9                      ; 0056a1dc
        ;   XREF to: 0056a1e9 (CONDITIONAL_JUMP)  ; LAB_0056a1e9
    FLD double ptr [ESP]                ; 0056a1de
        ;   Label: LAB_0056a1de
    XOR EAX,EAX                         ; 0056a1e1
    FSTP float ptr [EDX]                ; 0056a1e3
    ADD ESP,0x8                         ; 0056a1e5
    RET                                 ; 0056a1e8
    FLDZ                                ; 0056a1e9
        ;   Label: LAB_0056a1e9
    FCOMP double ptr [ESP]              ; 0056a1eb
    FNSTSW AX                           ; 0056a1ee
    SAHF                                ; 0056a1f0
    JNC 0x0056a20f                      ; 0056a1f1
        ;   XREF to: 0056a20f (CONDITIONAL_JUMP)  ; LAB_0056a20f
    FLD double ptr [ESP]                ; 0056a1f3
    FCOMP double ptr [0x00598b54]       ; 0056a1f6 | DAT_00598b54
    FNSTSW AX                           ; 0056a1fc
    SAHF                                ; 0056a1fe
    JA 0x0056a20f                       ; 0056a1ff
        ;   XREF to: 0056a20f (CONDITIONAL_JUMP)  ; LAB_0056a20f
    FLD double ptr [ESP]                ; 0056a201
    FCOMP double ptr [0x00598b5c]       ; 0056a204 | DAT_00598b5c
    FNSTSW AX                           ; 0056a20a
    SAHF                                ; 0056a20c
    JNC 0x0056a1de                      ; 0056a20d
        ;   XREF to: 0056a1de (CONDITIONAL_JUMP)  ; LAB_0056a1de
    FLD double ptr [ESP]                ; 0056a20f
        ;   Label: LAB_0056a20f
    FCOMP double ptr [0x00598b64]       ; 0056a212 | DAT_00598b64
    FNSTSW AX                           ; 0056a218
    SAHF                                ; 0056a21a
    JC 0x0056a22b                       ; 0056a21b
        ;   XREF to: 0056a22b (CONDITIONAL_JUMP)  ; LAB_0056a22b
    FLD double ptr [ESP]                ; 0056a21d
    FCOMP double ptr [0x00598b6c]       ; 0056a220 | DAT_00598b6c
    FNSTSW AX                           ; 0056a226
    SAHF                                ; 0056a228
    JBE 0x0056a1de                      ; 0056a229
        ;   XREF to: 0056a1de (CONDITIONAL_JUMP)  ; LAB_0056a1de
    MOV EAX,0x1                         ; 0056a22b
        ;   Label: LAB_0056a22b
    ADD ESP,0x8                         ; 0056a230
    RET                                 ; 0056a233

