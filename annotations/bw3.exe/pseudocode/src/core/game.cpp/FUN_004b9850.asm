; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b9850(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004b9850
        ;   Label: core_game.cpp_FUN_004b9850
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b9853
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b9857
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004b985b
    JNZ 0x004b98a0                      ; 004b9862
        ;   XREF to: 004b98a0 (CONDITIONAL_JUMP)  ; LAB_004b98a0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b9864
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004b9868
    JZ 0x004b989c                       ; 004b986f
        ;   XREF to: 004b989c (CONDITIONAL_JUMP)  ; LAB_004b989c
    FLD float ptr [EDX]                 ; 004b9871
    FCOMP float ptr [ESP + 0x18]        ; 004b9873
    FNSTSW AX                           ; 004b9877
    SAHF                                ; 004b9879
    JNC 0x004b989c                      ; 004b987a
        ;   XREF to: 004b989c (CONDITIONAL_JUMP)  ; LAB_004b989c
    MOV EAX,[0x005fe9dc]                ; 004b987c | g_CGamePtr
    FLD float ptr [ESP + 0x18]          ; 004b9881
    FLD float ptr [EAX + 0x314]         ; 004b9885
    FMUL ST1                            ; 004b988b
    FDIV float ptr [ESP + 0x14]         ; 004b988d
    FADD float ptr [EDX]                ; 004b9891
    FST float ptr [EDX]                 ; 004b9893
    FCOMPP                              ; 004b9895
    FNSTSW AX                           ; 004b9897
    SAHF                                ; 004b9899
    JA 0x004b98db                       ; 004b989a
        ;   XREF to: 004b98db (CONDITIONAL_JUMP)  ; LAB_004b98db
    ADD ESP,0x4                         ; 004b989c
        ;   Label: LAB_004b989c
    RET                                 ; 004b989f
    FLD float ptr [EDX]                 ; 004b98a0
        ;   Label: LAB_004b98a0
    FLD float ptr [ESP + 0x18]          ; 004b98a2
    FCHS                                ; 004b98a6
    FSTP float ptr [ESP]                ; 004b98a8
    FCOMP float ptr [ESP]               ; 004b98ab
    FNSTSW AX                           ; 004b98ae
    SAHF                                ; 004b98b0
    JBE 0x004b989c                      ; 004b98b1
        ;   XREF to: 004b989c (CONDITIONAL_JUMP)  ; LAB_004b989c
    MOV EAX,[0x005fe9dc]                ; 004b98b3 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004b98b8
    FMUL float ptr [ESP + 0x18]         ; 004b98be
    FDIV float ptr [ESP + 0x14]         ; 004b98c2
    FSUBR float ptr [EDX]               ; 004b98c6
    FST float ptr [EDX]                 ; 004b98c8
    FCOMP float ptr [ESP]               ; 004b98ca
    FNSTSW AX                           ; 004b98cd
    SAHF                                ; 004b98cf
    JNC 0x004b989c                      ; 004b98d0
        ;   XREF to: 004b989c (CONDITIONAL_JUMP)  ; LAB_004b989c
    MOV EAX,dword ptr [ESP]             ; 004b98d2
    MOV dword ptr [EDX],EAX             ; 004b98d5
    ADD ESP,0x4                         ; 004b98d7
    RET                                 ; 004b98da
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b98db
        ;   Label: LAB_004b98db
    MOV dword ptr [EDX],EAX             ; 004b98df
    ADD ESP,0x4                         ; 004b98e1
    RET                                 ; 004b98e4

