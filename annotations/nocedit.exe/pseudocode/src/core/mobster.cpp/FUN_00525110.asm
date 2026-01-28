; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown CVector3f * core_mobster_cpp_FUN_00525110(void)
;
;
; Referenced Globals:
;   float FLOAT_006396a6 = 0.5
;   double DOUBLE_006396ae = 0.400000000000000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CVector_ctor_FUN_00410340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525110
        ;   Label: core_mobster.cpp_FUN_00525110
    PUSH ESI                            ; 00525111
    PUSH EBP                            ; 00525112
    MOV EBP,ESP                         ; 00525113
    SUB ESP,0x30                        ; 00525115
    AND ESP,0xfffffff8                  ; 00525118
    MOV EBX,dword ptr [EBP + 0x10]      ; 0052511b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052511e
    MOV EAX,ESP                         ; 00525121
    PUSH EAX                            ; 00525123
    MOV EDX,dword ptr [ESI + 0x154]     ; 00525124
    PUSH ESI                            ; 0052512a
    CALL dword ptr [EDX + 0x14]         ; 0052512b
    ADD ESP,0x8                         ; 0052512e
    LEA EAX,[ESP + 0x24]                ; 00525131
    PUSH EAX                            ; 00525135
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 00525136
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0052513b
    LEA EAX,[ESP + 0x18]                ; 0052513e
    FLD float ptr [ESP]                 ; 00525142
    FLD float ptr [ESP + 0x4]           ; 00525145
    FLD float ptr [ESP + 0x8]           ; 00525149
    PUSH EAX                            ; 0052514d
    FXCH ST2                            ; 0052514e
    FADD float ptr [ESP + 0x10]         ; 00525150
    FXCH                                ; 00525154
    FADD float ptr [ESP + 0x14]         ; 00525156
    FXCH ST2                            ; 0052515a
    FADD float ptr [ESP + 0x18]         ; 0052515c
    FXCH                                ; 00525160
    FSTP float ptr [ESP + 0x28]         ; 00525162
    FXCH                                ; 00525166
    FSTP float ptr [ESP + 0x2c]         ; 00525168
    FSTP float ptr [ESP + 0x30]         ; 0052516c
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 00525170
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00525175
    FLD float ptr [0x006396a6]          ; 00525178 | FLOAT_006396a6
    FLD float ptr [ESP + 0x24]          ; 0052517e
    FMUL ST1                            ; 00525182
    LEA EAX,[ESP + 0x18]                ; 00525184
    FLD float ptr [ESP + 0x28]          ; 00525188
    FMULP ST2                           ; 0052518c
    PUSH EAX                            ; 0052518e
    FLD float ptr [ESP + 0xc]           ; 0052518f
    PUSH EBX                            ; 00525193
    FADD double ptr [0x006396ae]        ; 00525194 | DOUBLE_006396ae
    FXCH                                ; 0052519a
    FSTP float ptr [ESP + 0x20]         ; 0052519c
    FXCH                                ; 005251a0
    FSTP float ptr [ESP + 0x24]         ; 005251a2
    PUSH ESI                            ; 005251a6
    FSTP float ptr [ESP + 0x2c]         ; 005251a7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005251ab
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005251b0
    MOV EAX,EBX                         ; 005251b3
    MOV ESP,EBP                         ; 005251b5
    POP EBP                             ; 005251b7
    POP ESI                             ; 005251b8
    POP EBX                             ; 005251b9
    RET                                 ; 005251ba

