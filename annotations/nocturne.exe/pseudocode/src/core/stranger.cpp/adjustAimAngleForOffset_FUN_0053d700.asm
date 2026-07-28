; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_adjustAimAngleForOffset_FUN_0053d700(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_00595ca7 = 0.0100000000000000
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   crt_math.c_acos_FUN_00565ca4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d700
        ;   Label: core_stranger.cpp_adjustAimAngleForOffset_FUN_0053d700
    PUSH EBP                            ; 0053d701
    MOV EBP,ESP                         ; 0053d702
    SUB ESP,0x18                        ; 0053d704
    AND ESP,0xfffffff8                  ; 0053d707
    MOV EBX,dword ptr [EBP + 0xc]       ; 0053d70a
    FLD float ptr [EBP + 0x10]          ; 0053d70d
    FST double ptr [ESP + 0x8]          ; 0053d710
    FCOMP double ptr [0x00595ca7]       ; 0053d714 | DOUBLE_00595ca7
    FNSTSW AX                           ; 0053d71a
    SAHF                                ; 0053d71c
    JC 0x0053d77e                       ; 0053d71d
        ;   XREF to: 0053d77e (CONDITIONAL_JUMP)  ; LAB_0053d77e
    FLD float ptr [EBP + 0x10]          ; 0053d71f
    FMUL ST0                            ; 0053d722
    FLD float ptr [EBP + 0x14]          ; 0053d724
    FMUL ST0                            ; 0053d727
    FSUBP                               ; 0053d729
    FSQRT                               ; 0053d72b
    FDIV double ptr [ESP + 0x8]         ; 0053d72d
    FLD1                                ; 0053d731
    FXCH                                ; 0053d733
    FSTP double ptr [ESP]               ; 0053d735
    FCOMP double ptr [ESP]              ; 0053d738
    FNSTSW AX                           ; 0053d73b
    SAHF                                ; 0053d73d
    JBE 0x0053d77e                      ; 0053d73e
        ;   XREF to: 0053d77e (CONDITIONAL_JUMP)  ; LAB_0053d77e
    FLDZ                                ; 0053d740
    FCOMP double ptr [ESP]              ; 0053d742
    FNSTSW AX                           ; 0053d745
    SAHF                                ; 0053d747
    JA 0x0053d77e                       ; 0053d748
        ;   XREF to: 0053d77e (CONDITIONAL_JUMP)  ; LAB_0053d77e
    FLD double ptr [ESP]                ; 0053d74a
    CALL crt_math.c_acos_FUN_00565ca4   ; 0053d74d
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FLDZ                                ; 0053d752
    FXCH                                ; 0053d754
    FSTP float ptr [ESP + 0x10]         ; 0053d756
    FCOMP float ptr [EBP + 0x14]        ; 0053d75a
    FNSTSW AX                           ; 0053d75d
    SAHF                                ; 0053d75f
    JA 0x0053d783                       ; 0053d760
        ;   XREF to: 0053d783 (CONDITIONAL_JUMP)  ; LAB_0053d783
    FLD float ptr [EBX]                 ; 0053d762
    FADD float ptr [ESP + 0x10]         ; 0053d764
    FSTP float ptr [EBX]                ; 0053d768
        ;   Label: LAB_0053d768
    PUSH dword ptr [EBX]                ; 0053d76a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053d76c
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x18],EAX      ; 0053d771
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053d775
    MOV dword ptr [EBX],EAX             ; 0053d779
    ADD ESP,0x4                         ; 0053d77b
    MOV ESP,EBP                         ; 0053d77e
        ;   Label: LAB_0053d77e
    POP EBP                             ; 0053d780
    POP EBX                             ; 0053d781
    RET                                 ; 0053d782
    FLD float ptr [EBX]                 ; 0053d783
        ;   Label: LAB_0053d783
    FSUB float ptr [ESP + 0x10]         ; 0053d785
    JMP 0x0053d768                      ; 0053d789
        ;   XREF to: 0053d768 (UNCONDITIONAL_JUMP)  ; LAB_0053d768

