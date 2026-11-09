; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00515530(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_00515850 at 00515912
;   engine_mini3d.cpp_FUN_005159c0 at 00515a55
;   engine_mini3d.cpp_FUN_00517240 at 00517333
;
; Referenced Globals:
;   undefined4 DAT_01d227f8
;   undefined4 DAT_01d247fc
;   undefined4 DAT_01d24804
;   undefined4 DAT_01d2483c
;   undefined4 DAT_01d24840
;   undefined4 DAT_01d24844
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515530
        ;   Label: engine_mini3d.cpp_FUN_00515530
    SUB ESP,0x4                         ; 00515531
    MOV EBX,dword ptr [0x01d227f8]      ; 00515534 | DAT_01d227f8
    MOV EDX,0x1d247fc                   ; 0051553a
    XOR ECX,ECX                         ; 0051553f
    TEST EBX,EBX                        ; 00515541
    JLE 0x00515565                      ; 00515543
        ;   XREF to: 00515565 (CONDITIONAL_JUMP)  ; LAB_00515565
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 00515545 | DAT_01d24804 | DAT_01d24844
        ;   Label: LAB_00515545
    JZ 0x00515570                       ; 0051554c
        ;   XREF to: 00515570 (CONDITIONAL_JUMP)  ; LAB_00515570
    FLD float ptr [EDX]                 ; 0051554e | DAT_01d247fc | DAT_01d2483c
    FCOMP float ptr [EDX + 0x8]         ; 00515550 | DAT_01d24804 | DAT_01d24844
    FNSTSW AX                           ; 00515553
    SAHF                                ; 00515555
    JBE 0x00515586                      ; 00515556
        ;   XREF to: 00515586 (CONDITIONAL_JUMP)  ; LAB_00515586
    MOV EAX,dword ptr [EDX + 0x8]       ; 00515558 | DAT_01d24804 | DAT_01d24844
    MOV dword ptr [EDX],EAX             ; 0051555b | DAT_01d247fc | DAT_01d2483c
        ;   Label: LAB_0051555b
    INC ECX                             ; 0051555d
        ;   Label: LAB_0051555d
    ADD EDX,0x40                        ; 0051555e
    CMP ECX,EBX                         ; 00515561
    JL 0x00515545                       ; 00515563
        ;   XREF to: 00515545 (CONDITIONAL_JUMP)  ; LAB_00515545
    MOV dword ptr [0x01d227f8],EBX      ; 00515565 | DAT_01d227f8
        ;   Label: LAB_00515565
    ADD ESP,0x4                         ; 0051556b
    POP EBX                             ; 0051556e
    RET                                 ; 0051556f
    MOV dword ptr [EDX],0x0             ; 00515570 | DAT_01d2483c
        ;   Label: LAB_00515570
    MOV dword ptr [EDX + 0x4],0x0       ; 00515576 | DAT_01d24840
    MOV dword ptr [EDX + 0x8],0x3f800000 ; 0051557d | DAT_01d24844
    JMP 0x0051555d                      ; 00515584
        ;   XREF to: 0051555d (UNCONDITIONAL_JUMP)  ; LAB_0051555d
    FLD float ptr [EDX]                 ; 00515586 | DAT_01d2483c
        ;   Label: LAB_00515586
    FLD float ptr [EDX + 0x8]           ; 00515588 | DAT_01d24844
    FCHS                                ; 0051558b
    FSTP float ptr [ESP]                ; 0051558d
    FCOMP float ptr [ESP]               ; 00515590
    FNSTSW AX                           ; 00515593
    SAHF                                ; 00515595
    JNC 0x0051559d                      ; 00515596
        ;   XREF to: 0051559d (CONDITIONAL_JUMP)  ; LAB_0051559d
    MOV EAX,dword ptr [ESP]             ; 00515598
    JMP 0x0051555b                      ; 0051559b
        ;   XREF to: 0051555b (UNCONDITIONAL_JUMP)  ; LAB_0051555b
    FLD float ptr [EDX + 0x4]           ; 0051559d | DAT_01d24840
        ;   Label: LAB_0051559d
    FCOMP float ptr [EDX + 0x8]         ; 005155a0 | DAT_01d24844
    FNSTSW AX                           ; 005155a3
    SAHF                                ; 005155a5
    JBE 0x005155b0                      ; 005155a6
        ;   XREF to: 005155b0 (CONDITIONAL_JUMP)  ; LAB_005155b0
    MOV EAX,dword ptr [EDX + 0x8]       ; 005155a8 | DAT_01d24844
    MOV dword ptr [EDX + 0x4],EAX       ; 005155ab | DAT_01d24840
    JMP 0x0051555d                      ; 005155ae
        ;   XREF to: 0051555d (UNCONDITIONAL_JUMP)  ; LAB_0051555d
    FLD float ptr [EDX + 0x4]           ; 005155b0 | DAT_01d24840
        ;   Label: LAB_005155b0
    FCOMP float ptr [ESP]               ; 005155b3
    FNSTSW AX                           ; 005155b6
    SAHF                                ; 005155b8
    JNC 0x0051555d                      ; 005155b9
        ;   XREF to: 0051555d (CONDITIONAL_JUMP)  ; LAB_0051555d
    MOV EAX,dword ptr [ESP]             ; 005155bb
    MOV dword ptr [EDX + 0x4],EAX       ; 005155be | DAT_01d24840
    JMP 0x0051555d                      ; 005155c1
        ;   XREF to: 0051555d (UNCONDITIONAL_JUMP)  ; LAB_0051555d

