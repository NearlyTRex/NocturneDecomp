; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_fire_cpp_safeAcos_FUN_004933c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5332
;
; Called Functions:
;   crt_math.c_acos_FUN_005b9924
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004933c0
        ;   Label: core_fire.cpp_safeAcos_FUN_004933c0
    MOV EBP,ESP                         ; 004933c1
    SUB ESP,0xc                         ; 004933c3
    AND ESP,0xfffffff8                  ; 004933c6
    FLD float ptr [EBP + 0x8]           ; 004933c9
    FST double ptr [ESP]                ; 004933cc
    FCOMP double ptr [0x005d5332]       ; 004933cf | DAT_005d5332
    FNSTSW AX                           ; 004933d5
    SAHF                                ; 004933d7
    JBE 0x004933f2                      ; 004933d8
        ;   XREF to: 004933f2 (CONDITIONAL_JUMP)  ; LAB_004933f2
    FLD1                                ; 004933da
    FCOMP double ptr [ESP]              ; 004933dc
    FNSTSW AX                           ; 004933df
    SAHF                                ; 004933e1
    JA 0x004933fc                       ; 004933e2
        ;   XREF to: 004933fc (CONDITIONAL_JUMP)  ; LAB_004933fc
    XOR EDX,EDX                         ; 004933e4
    MOV dword ptr [ESP + 0x8],EDX       ; 004933e6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004933ea
        ;   Label: LAB_004933ea
    MOV ESP,EBP                         ; 004933ee
    POP EBP                             ; 004933f0
    RET                                 ; 004933f1
    MOV dword ptr [ESP + 0x8],0x40490fdb ; 004933f2
        ;   Label: LAB_004933f2
    JMP 0x004933ea                      ; 004933fa
        ;   XREF to: 004933ea (UNCONDITIONAL_JUMP)  ; LAB_004933ea
    FLD double ptr [ESP]                ; 004933fc
        ;   Label: LAB_004933fc
    CALL crt_math.c_acos_FUN_005b9924   ; 004933ff
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP + 0x8]          ; 00493404
    MOV EAX,dword ptr [ESP + 0x8]       ; 00493408
    MOV ESP,EBP                         ; 0049340c
    POP EBP                             ; 0049340e
    RET                                 ; 0049340f

