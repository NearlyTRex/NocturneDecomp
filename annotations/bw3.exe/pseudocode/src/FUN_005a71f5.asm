; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a71f5(double *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005da800
;   undefined4 DAT_005da808
;   undefined4 DAT_005da810
;   undefined4 DAT_005da818
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005a71f5
        ;   Label: FUN_005a71f5
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a71f8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a71fc
    MOV EAX,dword ptr [EAX]             ; 005a7200
    MOV dword ptr [ESP],EAX             ; 005a7202
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a7205
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a7209
    MOV ECX,dword ptr [ESP]             ; 005a720c
    MOV dword ptr [ESP + 0x4],EAX       ; 005a720f
    TEST EAX,0x7fffffff                 ; 005a7213
    JNZ 0x005a7229                      ; 005a7218
        ;   XREF to: 005a7229 (CONDITIONAL_JUMP)  ; LAB_005a7229
    TEST ECX,ECX                        ; 005a721a
    JNZ 0x005a7229                      ; 005a721c
        ;   XREF to: 005a7229 (CONDITIONAL_JUMP)  ; LAB_005a7229
    FLD double ptr [ESP]                ; 005a721e
        ;   Label: LAB_005a721e
    XOR EAX,EAX                         ; 005a7221
    FSTP float ptr [EDX]                ; 005a7223
    ADD ESP,0x8                         ; 005a7225
    RET                                 ; 005a7228
    FLDZ                                ; 005a7229
        ;   Label: LAB_005a7229
    FCOMP double ptr [ESP]              ; 005a722b
    FNSTSW AX                           ; 005a722e
    SAHF                                ; 005a7230
    JNC 0x005a724f                      ; 005a7231
        ;   XREF to: 005a724f (CONDITIONAL_JUMP)  ; LAB_005a724f
    FLD double ptr [ESP]                ; 005a7233
    FCOMP double ptr [0x005da800]       ; 005a7236 | DAT_005da800
    FNSTSW AX                           ; 005a723c
    SAHF                                ; 005a723e
    JA 0x005a724f                       ; 005a723f
        ;   XREF to: 005a724f (CONDITIONAL_JUMP)  ; LAB_005a724f
    FLD double ptr [ESP]                ; 005a7241
    FCOMP double ptr [0x005da808]       ; 005a7244 | DAT_005da808
    FNSTSW AX                           ; 005a724a
    SAHF                                ; 005a724c
    JNC 0x005a721e                      ; 005a724d
        ;   XREF to: 005a721e (CONDITIONAL_JUMP)  ; LAB_005a721e
    FLD double ptr [ESP]                ; 005a724f
        ;   Label: LAB_005a724f
    FCOMP double ptr [0x005da810]       ; 005a7252 | DAT_005da810
    FNSTSW AX                           ; 005a7258
    SAHF                                ; 005a725a
    JC 0x005a726b                       ; 005a725b
        ;   XREF to: 005a726b (CONDITIONAL_JUMP)  ; LAB_005a726b
    FLD double ptr [ESP]                ; 005a725d
    FCOMP double ptr [0x005da818]       ; 005a7260 | DAT_005da818
    FNSTSW AX                           ; 005a7266
    SAHF                                ; 005a7268
    JBE 0x005a721e                      ; 005a7269
        ;   XREF to: 005a721e (CONDITIONAL_JUMP)  ; LAB_005a721e
    MOV EAX,0x1                         ; 005a726b
        ;   Label: LAB_005a726b
    ADD ESP,0x8                         ; 005a7270
    RET                                 ; 005a7273

