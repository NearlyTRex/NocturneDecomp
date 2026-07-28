; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_stranger_cpp_calculateAimAnglesWithOffset_FUN_0053d790(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   double DOUBLE_00595caf = 0.0100000000000000
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_math.c_acos_FUN_00565ca4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d790
        ;   Label: core_stranger.cpp_calculateAimAnglesWithOffset_FUN_0053d790
    PUSH ESI                            ; 0053d791
    PUSH EDI                            ; 0053d792
    PUSH EBP                            ; 0053d793
    MOV EBP,ESP                         ; 0053d794
    SUB ESP,0x3c                        ; 0053d796
    AND ESP,0xfffffff8                  ; 0053d799
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053d79c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0053d79f
    PUSH ESI                            ; 0053d7a2
    PUSH EBX                            ; 0053d7a3
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0053d7a4
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [ESI + 0x4]           ; 0053d7a9
    FMUL ST0                            ; 0053d7ac
    FLD float ptr [ESI]                 ; 0053d7ae
    FMUL ST0                            ; 0053d7b0
    FADDP                               ; 0053d7b2
    FLD float ptr [ESI + 0x8]           ; 0053d7b4
    FMUL ST0                            ; 0053d7b7
    FADDP                               ; 0053d7b9
    FSQRT                               ; 0053d7bb
    ADD ESP,0x8                         ; 0053d7bd
    FST float ptr [ESP + 0x20]          ; 0053d7c0
    MOV ESI,dword ptr [ESP + 0x20]      ; 0053d7c4
    FST double ptr [ESP + 0x10]         ; 0053d7c8
    MOV dword ptr [ESP + 0x24],ESI      ; 0053d7cc
    FCOMP double ptr [0x00595caf]       ; 0053d7d0 | DOUBLE_00595caf
    FNSTSW AX                           ; 0053d7d6
    SAHF                                ; 0053d7d8
    JBE 0x0053d87e                      ; 0053d7d9
        ;   XREF to: 0053d87e (CONDITIONAL_JUMP)  ; LAB_0053d87e
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0053d7df
    FLD float ptr [ESI]                 ; 0053d7e2
    FCHS                                ; 0053d7e4
    LEA ESI,[EBX + 0x4]                 ; 0053d7e6
    FSTP float ptr [ESP + 0x30]         ; 0053d7e9
    MOV EDI,ESI                         ; 0053d7ed
    JNC 0x0053d887                      ; 0053d7ef
        ;   XREF to: 0053d887 (CONDITIONAL_JUMP)  ; LAB_0053d887
    FLD float ptr [ESP + 0x24]          ; 0053d7f5
        ;   Label: LAB_0053d7f5
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0053d7f9
    MOV ESI,EBX                         ; 0053d7fc
    FSTP double ptr [ESP + 0x8]         ; 0053d7fe
    MOV EDI,dword ptr [EDI + 0x4]       ; 0053d802
    FLD double ptr [ESP + 0x8]          ; 0053d805
    MOV dword ptr [ESP + 0x34],EDI      ; 0053d809
    FCOMP double ptr [0x00595caf]       ; 0053d80d | DOUBLE_00595caf
    FNSTSW AX                           ; 0053d813
    SAHF                                ; 0053d815
    JC 0x0053d87e                       ; 0053d816
        ;   XREF to: 0053d87e (CONDITIONAL_JUMP)  ; LAB_0053d87e
    FLD float ptr [ESP + 0x24]          ; 0053d818
    FMUL ST0                            ; 0053d81c
    FLD float ptr [ESP + 0x34]          ; 0053d81e
    FMUL ST0                            ; 0053d822
    FSUBP                               ; 0053d824
    FSQRT                               ; 0053d826
    FDIV double ptr [ESP + 0x8]         ; 0053d828
    FLD1                                ; 0053d82c
    FXCH                                ; 0053d82e
    FSTP double ptr [ESP]               ; 0053d830
    FCOMP double ptr [ESP]              ; 0053d833
    FNSTSW AX                           ; 0053d836
    SAHF                                ; 0053d838
    JBE 0x0053d87e                      ; 0053d839
        ;   XREF to: 0053d87e (CONDITIONAL_JUMP)  ; LAB_0053d87e
    FLDZ                                ; 0053d83b
    FCOMP double ptr [ESP]              ; 0053d83d
    FNSTSW AX                           ; 0053d840
    SAHF                                ; 0053d842
    JA 0x0053d87e                       ; 0053d843
        ;   XREF to: 0053d87e (CONDITIONAL_JUMP)  ; LAB_0053d87e
    FLD double ptr [ESP]                ; 0053d845
    CALL crt_math.c_acos_FUN_00565ca4   ; 0053d848
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FLDZ                                ; 0053d84d
    FXCH                                ; 0053d84f
    FSTP float ptr [ESP + 0x2c]         ; 0053d851
    FCOMP float ptr [ESP + 0x34]        ; 0053d855
    FNSTSW AX                           ; 0053d859
    SAHF                                ; 0053d85b
    JBE 0x0053d902                      ; 0053d85c
        ;   XREF to: 0053d902 (CONDITIONAL_JUMP)  ; LAB_0053d902
    FLD float ptr [EBX]                 ; 0053d862
    FSUB float ptr [ESP + 0x2c]         ; 0053d864
    FSTP float ptr [EBX]                ; 0053d868
        ;   Label: LAB_0053d868
    PUSH dword ptr [ESI]                ; 0053d86a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053d86c
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053d871
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053d875
    MOV dword ptr [ESI],EAX             ; 0053d879
    ADD ESP,0x4                         ; 0053d87b
    MOV EAX,EBX                         ; 0053d87e
        ;   Label: LAB_0053d87e
    MOV ESP,EBP                         ; 0053d880
    POP EBP                             ; 0053d882
    POP EDI                             ; 0053d883
    POP ESI                             ; 0053d884
    POP EBX                             ; 0053d885
    RET                                 ; 0053d886
    FLD float ptr [ESP + 0x20]          ; 0053d887
        ;   Label: LAB_0053d887
    FMUL ST0                            ; 0053d88b
    FLD float ptr [ESP + 0x30]          ; 0053d88d
    FMUL ST0                            ; 0053d891
    FSUBP                               ; 0053d893
    FSQRT                               ; 0053d895
    FDIV double ptr [ESP + 0x10]        ; 0053d897
    FLD1                                ; 0053d89b
    FXCH                                ; 0053d89d
    FSTP double ptr [ESP + 0x18]        ; 0053d89f
    FCOMP double ptr [ESP + 0x18]       ; 0053d8a3
    FNSTSW AX                           ; 0053d8a7
    SAHF                                ; 0053d8a9
    JBE 0x0053d7f5                      ; 0053d8aa
        ;   XREF to: 0053d7f5 (CONDITIONAL_JUMP)  ; LAB_0053d7f5
    FLDZ                                ; 0053d8b0
    FCOMP double ptr [ESP + 0x18]       ; 0053d8b2
    FNSTSW AX                           ; 0053d8b6
    SAHF                                ; 0053d8b8
    JA 0x0053d7f5                       ; 0053d8b9
        ;   XREF to: 0053d7f5 (CONDITIONAL_JUMP)  ; LAB_0053d7f5
    FLD double ptr [ESP + 0x18]         ; 0053d8bf
    CALL crt_math.c_acos_FUN_00565ca4   ; 0053d8c3
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FLDZ                                ; 0053d8c8
    FXCH                                ; 0053d8ca
    FSTP float ptr [ESP + 0x28]         ; 0053d8cc
    FCOMP float ptr [ESP + 0x30]        ; 0053d8d0
    FNSTSW AX                           ; 0053d8d4
    SAHF                                ; 0053d8d6
    JBE 0x0053d8fa                      ; 0053d8d7
        ;   XREF to: 0053d8fa (CONDITIONAL_JUMP)  ; LAB_0053d8fa
    FLD float ptr [ESI]                 ; 0053d8d9
    FSUB float ptr [ESP + 0x28]         ; 0053d8db
    FSTP float ptr [ESI]                ; 0053d8df
        ;   Label: LAB_0053d8df
    PUSH dword ptr [EDI]                ; 0053d8e1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053d8e3
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053d8e8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053d8ec
    MOV dword ptr [EDI],EAX             ; 0053d8f0
    ADD ESP,0x4                         ; 0053d8f2
    JMP 0x0053d7f5                      ; 0053d8f5
        ;   XREF to: 0053d7f5 (UNCONDITIONAL_JUMP)  ; LAB_0053d7f5
    FLD float ptr [ESI]                 ; 0053d8fa
        ;   Label: LAB_0053d8fa
    FADD float ptr [ESP + 0x28]         ; 0053d8fc
    JMP 0x0053d8df                      ; 0053d900
        ;   XREF to: 0053d8df (UNCONDITIONAL_JUMP)  ; LAB_0053d8df
    FLD float ptr [EBX]                 ; 0053d902
        ;   Label: LAB_0053d902
    FADD float ptr [ESP + 0x2c]         ; 0053d904
    JMP 0x0053d868                      ; 0053d908
        ;   XREF to: 0053d868 (UNCONDITIONAL_JUMP)  ; LAB_0053d868

