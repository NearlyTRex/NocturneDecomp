; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb2f0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004bd570 at 004bd5af
;
; Referenced Globals:
;   undefined4 DAT_005d83f3
;   undefined4 DAT_005d83fb
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01cb80e0
;   undefined4 DAT_01cb810c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004bb2f0
        ;   Label: FUN_004bb2f0
    MOV EBP,ESP                         ; 004bb2f1
    SUB ESP,0xc                         ; 004bb2f3
    AND ESP,0xfffffff8                  ; 004bb2f6
    MOV EDX,dword ptr [0x01cb80e0]      ; 004bb2f9 | DAT_01cb80e0
    MOV ECX,dword ptr [EBP + 0x8]       ; 004bb2ff
    TEST EDX,EDX                        ; 004bb302
    JZ 0x004bb360                       ; 004bb304
        ;   XREF to: 004bb360 (CONDITIONAL_JUMP)  ; LAB_004bb360
    CMP EDX,0x4                         ; 004bb306
    JGE 0x004bb36a                      ; 004bb309
        ;   XREF to: 004bb36a (CONDITIONAL_JUMP)  ; LAB_004bb36a
    FILD dword ptr [0x006141bc]         ; 004bb30b | DAT_006141bc
    FDIVR double ptr [0x005d83f3]       ; 004bb311 | DAT_005d83f3
    FSTP float ptr [ESP]                ; 004bb317
    CMP EDX,0x2                         ; 004bb31a
    JZ 0x004bb371                       ; 004bb31d
        ;   XREF to: 004bb371 (CONDITIONAL_JUMP)  ; LAB_004bb371
    CMP EDX,0x3                         ; 004bb31f
        ;   Label: LAB_004bb31f
    JNZ 0x004bb356                      ; 004bb322
        ;   XREF to: 004bb356 (CONDITIONAL_JUMP)  ; LAB_004bb356
    FILD dword ptr [ECX + 0x280]        ; 004bb324
    FMUL double ptr [0x005d83fb]        ; 004bb32a | DAT_005d83fb
    FDIV float ptr [ESP]                ; 004bb330
    FLD float ptr [0x01cb810c]          ; 004bb333 | DAT_01cb810c
    FXCH                                ; 004bb339
    FSUBR ST0,ST1                       ; 004bb33b
    FLDZ                                ; 004bb33d
    FXCH                                ; 004bb33f
    FSTP ST2                            ; 004bb341
    FXCH                                ; 004bb343
    FSTP float ptr [0x01cb810c]         ; 004bb345 | DAT_01cb810c
    FCOMP float ptr [0x01cb810c]        ; 004bb34b | DAT_01cb810c
    FNSTSW AX                           ; 004bb351
    SAHF                                ; 004bb353
    JA 0x004bb3af                       ; 004bb354
        ;   XREF to: 004bb3af (CONDITIONAL_JUMP)  ; LAB_004bb3af
    CMP EDX,0x1                         ; 004bb356
        ;   Label: LAB_004bb356
    JNZ 0x004bb360                      ; 004bb359
        ;   XREF to: 004bb360 (CONDITIONAL_JUMP)  ; LAB_004bb360
    MOV EDX,0x2                         ; 004bb35b
    MOV dword ptr [0x01cb80e0],EDX      ; 004bb360 | DAT_01cb80e0
        ;   Label: LAB_004bb360
    MOV ESP,EBP                         ; 004bb366
    POP EBP                             ; 004bb368
    RET                                 ; 004bb369
    MOV EDX,0x5                         ; 004bb36a
        ;   Label: LAB_004bb36a
    JMP 0x004bb360                      ; 004bb36f
        ;   XREF to: 004bb360 (UNCONDITIONAL_JUMP)  ; LAB_004bb360
    FILD dword ptr [ECX + 0x280]        ; 004bb371
        ;   Label: LAB_004bb371
    FMUL double ptr [0x005d83fb]        ; 004bb377 | DAT_005d83fb
    FDIV float ptr [ESP]                ; 004bb37d
    FLD float ptr [0x01cb810c]          ; 004bb380 | DAT_01cb810c
    FXCH                                ; 004bb386
    FADD ST0,ST1                        ; 004bb388
    FILD dword ptr [0x006141b8]         ; 004bb38a | DAT_006141b8
    FXCH                                ; 004bb390
    FSTP ST2                            ; 004bb392
    FXCH                                ; 004bb394
    FSTP float ptr [0x01cb810c]         ; 004bb396 | DAT_01cb810c
    FCOMP float ptr [0x01cb810c]        ; 004bb39c | DAT_01cb810c
    FNSTSW AX                           ; 004bb3a2
    SAHF                                ; 004bb3a4
    JNC 0x004bb31f                      ; 004bb3a5
        ;   XREF to: 004bb31f (CONDITIONAL_JUMP)  ; LAB_004bb31f
    XOR EDX,EDX                         ; 004bb3ab
    JMP 0x004bb360                      ; 004bb3ad
        ;   XREF to: 004bb360 (UNCONDITIONAL_JUMP)  ; LAB_004bb360
    XOR EDX,EDX                         ; 004bb3af
        ;   Label: LAB_004bb3af
    MOV dword ptr [0x01cb810c],EDX      ; 004bb3b1 | DAT_01cb810c
    MOV EDX,0x4                         ; 004bb3b7
    MOV dword ptr [0x01cb80e0],EDX      ; 004bb3bc | DAT_01cb80e0
    MOV ESP,EBP                         ; 004bb3c2
    POP EBP                             ; 004bb3c4
    RET                                 ; 004bb3c5

