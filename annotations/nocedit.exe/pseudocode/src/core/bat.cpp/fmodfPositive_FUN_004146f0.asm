; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_bat_cpp_fmodfPositive_FUN_004146f0(float value,float modulus)
;
; Parameters:
; float            Stack[0x4]:4   value
; float            Stack[0x8]:4   modulus
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004146f0
        ;   Label: core_bat.cpp_fmodfPositive_FUN_004146f0
    MOV EBP,ESP                         ; 004146f1
    SUB ESP,0x10                        ; 004146f3
    AND ESP,0xfffffff8                  ; 004146f6
    FLD float ptr [EBP + 0x8]           ; 004146f9
    FLDZ                                ; 004146fc
    FXCH                                ; 004146fe
    FSTP double ptr [ESP]               ; 00414700
    FCOMP double ptr [ESP]              ; 00414703
    FNSTSW AX                           ; 00414706
    SAHF                                ; 00414708
    JBE 0x00414751                      ; 00414709
        ;   XREF to: 00414751 (CONDITIONAL_JUMP)  ; LAB_00414751
    FLD float ptr [EBP + 0x8]           ; 0041470b
    FCHS                                ; 0041470e
    FDIV float ptr [EBP + 0xc]          ; 00414710
    SUB ESP,0x8                         ; 00414713
    FSTP double ptr [ESP]               ; 00414716
    CALL crt_math.c_floor_FUN_005feb90  ; 00414719
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 0041471e
    MOV dword ptr [ESP + 0x14],EDX      ; 00414722
    FLD double ptr [ESP + 0x10]         ; 00414726
    ADD ESP,0x8                         ; 0041472a
    FMUL float ptr [EBP + 0xc]          ; 0041472d
    FADD double ptr [ESP]               ; 00414730
    FST float ptr [EBP + 0x8]           ; 00414733
    FLDZ                                ; 00414736
    FCOMPP                              ; 00414738
    FNSTSW AX                           ; 0041473a
    SAHF                                ; 0041473c
    JA 0x00414746                       ; 0041473d
        ;   XREF to: 00414746 (CONDITIONAL_JUMP)  ; LAB_00414746
    MOV EAX,dword ptr [EBP + 0x8]       ; 0041473f
        ;   Label: LAB_0041473f
    MOV ESP,EBP                         ; 00414742
    POP EBP                             ; 00414744
    RET                                 ; 00414745
    FLD float ptr [EBP + 0x8]           ; 00414746
        ;   Label: LAB_00414746
    FADD float ptr [EBP + 0xc]          ; 00414749
    FSTP float ptr [EBP + 0x8]          ; 0041474c
    JMP 0x0041473f                      ; 0041474f
        ;   XREF to: 0041473f (UNCONDITIONAL_JUMP)  ; LAB_0041473f
    FLD float ptr [EBP + 0x8]           ; 00414751
        ;   Label: LAB_00414751
    FDIV float ptr [EBP + 0xc]          ; 00414754
    SUB ESP,0x8                         ; 00414757
    FSTP double ptr [ESP]               ; 0041475a
    CALL crt_math.c_floor_FUN_005feb90  ; 0041475d
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 00414762
    MOV dword ptr [ESP + 0x14],EDX      ; 00414766
    FLD double ptr [ESP + 0x10]         ; 0041476a
    ADD ESP,0x8                         ; 0041476e
    FMUL float ptr [EBP + 0xc]          ; 00414771
    FSUBR double ptr [ESP]              ; 00414774
    FSTP float ptr [EBP + 0x8]          ; 00414777
    MOV EAX,dword ptr [EBP + 0x8]       ; 0041477a
    MOV ESP,EBP                         ; 0041477d
    POP EBP                             ; 0041477f
    RET                                 ; 00414780

