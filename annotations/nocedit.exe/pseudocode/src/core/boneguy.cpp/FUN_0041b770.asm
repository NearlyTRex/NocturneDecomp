; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boneguy.cpp_FUN_0041b770()
;
;
; Referenced Globals:
;   float FLOAT_00615f1d = 0.5
;   double DOUBLE_00615f25 = 0.400000000000000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CVector_ctor_FUN_00410340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b770
        ;   Label: core_boneguy.cpp_FUN_0041b770
    PUSH ESI                            ; 0041b771
    PUSH EBP                            ; 0041b772
    MOV EBP,ESP                         ; 0041b773
    SUB ESP,0x30                        ; 0041b775
    AND ESP,0xfffffff8                  ; 0041b778
    MOV EBX,dword ptr [EBP + 0x10]      ; 0041b77b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041b77e
    MOV EAX,ESP                         ; 0041b781
    PUSH EAX                            ; 0041b783
    MOV EDX,dword ptr [ESI + 0x154]     ; 0041b784
    PUSH ESI                            ; 0041b78a
    CALL dword ptr [EDX + 0x14]         ; 0041b78b
    ADD ESP,0x8                         ; 0041b78e
    LEA EAX,[ESP + 0x24]                ; 0041b791
    PUSH EAX                            ; 0041b795
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0041b796 | CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041b79b
    LEA EAX,[ESP + 0x18]                ; 0041b79e
    FLD float ptr [ESP]                 ; 0041b7a2
    FLD float ptr [ESP + 0x4]           ; 0041b7a5
    FLD float ptr [ESP + 0x8]           ; 0041b7a9
    PUSH EAX                            ; 0041b7ad
    FXCH ST2                            ; 0041b7ae
    FADD float ptr [ESP + 0x10]         ; 0041b7b0
    FXCH                                ; 0041b7b4
    FADD float ptr [ESP + 0x14]         ; 0041b7b6
    FXCH ST2                            ; 0041b7ba
    FADD float ptr [ESP + 0x18]         ; 0041b7bc
    FXCH                                ; 0041b7c0
    FSTP float ptr [ESP + 0x28]         ; 0041b7c2
    FXCH                                ; 0041b7c6
    FSTP float ptr [ESP + 0x2c]         ; 0041b7c8
    FSTP float ptr [ESP + 0x30]         ; 0041b7cc
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0041b7d0 | CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041b7d5
    FLD float ptr [0x00615f1d]          ; 0041b7d8 | float FLOAT_00615f1d
    FLD float ptr [ESP + 0x24]          ; 0041b7de
    FMUL ST1                            ; 0041b7e2
    LEA EAX,[ESP + 0x18]                ; 0041b7e4
    FLD float ptr [ESP + 0x28]          ; 0041b7e8
    FMULP ST2                           ; 0041b7ec
    PUSH EAX                            ; 0041b7ee
    FLD float ptr [ESP + 0xc]           ; 0041b7ef
    PUSH EBX                            ; 0041b7f3
    FADD double ptr [0x00615f25]        ; 0041b7f4 | double DOUBLE_00615f25
    FXCH                                ; 0041b7fa
    FSTP float ptr [ESP + 0x20]         ; 0041b7fc
    FXCH                                ; 0041b800
    FSTP float ptr [ESP + 0x24]         ; 0041b802
    PUSH ESI                            ; 0041b806
    FSTP float ptr [ESP + 0x2c]         ; 0041b807
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041b80b | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041b810
    MOV EAX,EBX                         ; 0041b813
    MOV ESP,EBP                         ; 0041b815
    POP EBP                             ; 0041b817
    POP ESI                             ; 0041b818
    POP EBX                             ; 0041b819
    RET                                 ; 0041b81a

