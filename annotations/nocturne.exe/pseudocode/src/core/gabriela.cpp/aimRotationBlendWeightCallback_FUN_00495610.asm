; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_00495610(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 00497fe2
;
; Referenced Globals:
;   double DOUBLE_00581e2a = 0.800000000000000
;   double DOUBLE_00581e32 = 0.600000000000000
;   double DOUBLE_00581e3a = 0.400000000000000
;   double DOUBLE_00581e42 = 0.200000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00495610
        ;   Label: core_gabriela.cpp_aimRotationBlendWeightCallback_FUN_00495610
    MOV EAX,dword ptr [ESP + 0x14]      ; 00495613
    TEST EAX,EAX                        ; 00495617
    JLE 0x0049563e                      ; 00495619
        ;   XREF to: 0049563e (CONDITIONAL_JUMP)  ; LAB_0049563e
    CMP EAX,0x1                         ; 0049561b
    JZ 0x0049564a                       ; 0049561e
        ;   XREF to: 0049564a (CONDITIONAL_JUMP)  ; LAB_0049564a
    CMP EAX,0x2                         ; 00495620
    JZ 0x00495656                       ; 00495623
        ;   XREF to: 00495656 (CONDITIONAL_JUMP)  ; LAB_00495656
    CMP EAX,0x3                         ; 00495625
    JNZ 0x00495662                      ; 00495628
        ;   XREF to: 00495662 (CONDITIONAL_JUMP)  ; LAB_00495662
    FLD float ptr [ESP + 0x10]          ; 0049562a
    FMUL double ptr [0x00581e2a]        ; 0049562e | DOUBLE_00581e2a
    FSTP float ptr [ESP]                ; 00495634
        ;   Label: LAB_00495634
    MOV EAX,dword ptr [ESP]             ; 00495637
    ADD ESP,0x4                         ; 0049563a
    RET                                 ; 0049563d
    FLD float ptr [ESP + 0x10]          ; 0049563e
        ;   Label: LAB_0049563e
    FMUL double ptr [0x00581e42]        ; 00495642 | DOUBLE_00581e42
    JMP 0x00495634                      ; 00495648
        ;   XREF to: 00495634 (UNCONDITIONAL_JUMP)  ; LAB_00495634
    FLD float ptr [ESP + 0x10]          ; 0049564a
        ;   Label: LAB_0049564a
    FMUL double ptr [0x00581e3a]        ; 0049564e | DOUBLE_00581e3a
    JMP 0x00495634                      ; 00495654
        ;   XREF to: 00495634 (UNCONDITIONAL_JUMP)  ; LAB_00495634
    FLD float ptr [ESP + 0x10]          ; 00495656
        ;   Label: LAB_00495656
    FMUL double ptr [0x00581e32]        ; 0049565a | DOUBLE_00581e32
    JMP 0x00495634                      ; 00495660
        ;   XREF to: 00495634 (UNCONDITIONAL_JUMP)  ; LAB_00495634
    MOV EAX,dword ptr [ESP + 0x10]      ; 00495662
        ;   Label: LAB_00495662
    MOV dword ptr [ESP],EAX             ; 00495666
    MOV EAX,dword ptr [ESP]             ; 00495669
    ADD ESP,0x4                         ; 0049566c
    RET                                 ; 0049566f

