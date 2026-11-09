; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004d0dce(int param_1,int param_2,float *param_3,float param_4,float param_5)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004d0dce
        ;   Label: core_game.cpp_FUN_004d0dce
    SUB ESP,0x4                         ; 004d0dd0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d0dd3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d0dd7
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d0ddb
    JNZ 0x004d0e20                      ; 004d0de2
        ;   XREF to: 004d0e20 (CONDITIONAL_JUMP)  ; LAB_004d0e20
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d0de4
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d0de8
    JZ 0x004d0e1c                       ; 004d0def
        ;   XREF to: 004d0e1c (CONDITIONAL_JUMP)  ; LAB_004d0e1c
    FLD float ptr [EDX]                 ; 004d0df1
    FCOMP float ptr [ESP + 0x18]        ; 004d0df3
    FNSTSW AX                           ; 004d0df7
    SAHF                                ; 004d0df9
    JNC 0x004d0e1c                      ; 004d0dfa
        ;   XREF to: 004d0e1c (CONDITIONAL_JUMP)  ; LAB_004d0e1c
    MOV EAX,[0x0061d95c]                ; 004d0dfc | g_CGamePtr
    FLD float ptr [ESP + 0x18]          ; 004d0e01
    FLD float ptr [EAX + 0x294]         ; 004d0e05
    FMUL ST1                            ; 004d0e0b
    FDIV float ptr [ESP + 0x14]         ; 004d0e0d
    FADD float ptr [EDX]                ; 004d0e11
    FST float ptr [EDX]                 ; 004d0e13
    FCOMPP                              ; 004d0e15
    FNSTSW AX                           ; 004d0e17
    SAHF                                ; 004d0e19
    JA 0x004d0e5b                       ; 004d0e1a
        ;   XREF to: 004d0e5b (CONDITIONAL_JUMP)  ; LAB_004d0e5b
    ADD ESP,0x4                         ; 004d0e1c
        ;   Label: LAB_004d0e1c
    RET                                 ; 004d0e1f
    FLD float ptr [EDX]                 ; 004d0e20
        ;   Label: LAB_004d0e20
    FLD float ptr [ESP + 0x18]          ; 004d0e22
    FCHS                                ; 004d0e26
    FSTP float ptr [ESP]                ; 004d0e28
    FCOMP float ptr [ESP]               ; 004d0e2b
    FNSTSW AX                           ; 004d0e2e
    SAHF                                ; 004d0e30
    JBE 0x004d0e1c                      ; 004d0e31
        ;   XREF to: 004d0e1c (CONDITIONAL_JUMP)  ; LAB_004d0e1c
    MOV EAX,[0x0061d95c]                ; 004d0e33 | g_CGamePtr
    FLD float ptr [EAX + 0x294]         ; 004d0e38
    FMUL float ptr [ESP + 0x18]         ; 004d0e3e
    FDIV float ptr [ESP + 0x14]         ; 004d0e42
    FSUBR float ptr [EDX]               ; 004d0e46
    FST float ptr [EDX]                 ; 004d0e48
    FCOMP float ptr [ESP]               ; 004d0e4a
    FNSTSW AX                           ; 004d0e4d
    SAHF                                ; 004d0e4f
    JNC 0x004d0e1c                      ; 004d0e50
        ;   XREF to: 004d0e1c (CONDITIONAL_JUMP)  ; LAB_004d0e1c
    MOV EAX,dword ptr [ESP]             ; 004d0e52
    MOV dword ptr [EDX],EAX             ; 004d0e55
    ADD ESP,0x4                         ; 004d0e57
    RET                                 ; 004d0e5a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d0e5b
        ;   Label: LAB_004d0e5b
    MOV dword ptr [EDX],EAX             ; 004d0e5f
    ADD ESP,0x4                         ; 004d0e61
    RET                                 ; 004d0e64

