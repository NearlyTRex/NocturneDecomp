; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_zombie_cpp_getObjectGrabPointWorld_FUN_005f8da0(CVector3f *out_point,CDemonActor *actor)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out_point
; CDemonActor *    Stack[0x8]:4   actor
;
; Referenced Globals:
;   float FLOAT_0065844d = 0.5
;   double DOUBLE_00658455 = 0.400000000000000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CVector_ctor_FUN_00410340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f8da0
        ;   Label: core_zombie.cpp_getObjectGrabPointWorld_FUN_005f8da0
    PUSH ESI                            ; 005f8da1
    PUSH EBP                            ; 005f8da2
    MOV EBP,ESP                         ; 005f8da3
    SUB ESP,0x30                        ; 005f8da5
    AND ESP,0xfffffff8                  ; 005f8da8
    MOV EBX,dword ptr [EBP + 0x10]      ; 005f8dab
    MOV ESI,dword ptr [EBP + 0x14]      ; 005f8dae
    MOV EAX,ESP                         ; 005f8db1
    PUSH EAX                            ; 005f8db3
    MOV EDX,dword ptr [ESI + 0x154]     ; 005f8db4
    PUSH ESI                            ; 005f8dba
    CALL dword ptr [EDX + 0x14]         ; 005f8dbb
    ADD ESP,0x8                         ; 005f8dbe
    LEA EAX,[ESP + 0x24]                ; 005f8dc1
    PUSH EAX                            ; 005f8dc5
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 005f8dc6
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 005f8dcb
    LEA EAX,[ESP + 0x18]                ; 005f8dce
    FLD float ptr [ESP]                 ; 005f8dd2
    FLD float ptr [ESP + 0x4]           ; 005f8dd5
    FLD float ptr [ESP + 0x8]           ; 005f8dd9
    PUSH EAX                            ; 005f8ddd
    FXCH ST2                            ; 005f8dde
    FADD float ptr [ESP + 0x10]         ; 005f8de0
    FXCH                                ; 005f8de4
    FADD float ptr [ESP + 0x14]         ; 005f8de6
    FXCH ST2                            ; 005f8dea
    FADD float ptr [ESP + 0x18]         ; 005f8dec
    FXCH                                ; 005f8df0
    FSTP float ptr [ESP + 0x28]         ; 005f8df2
    FXCH                                ; 005f8df6
    FSTP float ptr [ESP + 0x2c]         ; 005f8df8
    FSTP float ptr [ESP + 0x30]         ; 005f8dfc
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 005f8e00
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 005f8e05
    FLD float ptr [0x0065844d]          ; 005f8e08 | FLOAT_0065844d
    FLD float ptr [ESP + 0x24]          ; 005f8e0e
    FMUL ST1                            ; 005f8e12
    LEA EAX,[ESP + 0x18]                ; 005f8e14
    FLD float ptr [ESP + 0x28]          ; 005f8e18
    FMULP ST2                           ; 005f8e1c
    PUSH EAX                            ; 005f8e1e
    FLD float ptr [ESP + 0xc]           ; 005f8e1f
    PUSH EBX                            ; 005f8e23
    FADD double ptr [0x00658455]        ; 005f8e24 | DOUBLE_00658455
    FXCH                                ; 005f8e2a
    FSTP float ptr [ESP + 0x20]         ; 005f8e2c
    FXCH                                ; 005f8e30
    FSTP float ptr [ESP + 0x24]         ; 005f8e32
    PUSH ESI                            ; 005f8e36
    FSTP float ptr [ESP + 0x2c]         ; 005f8e37
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f8e3b
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005f8e40
    MOV EAX,EBX                         ; 005f8e43
    MOV ESP,EBP                         ; 005f8e45
    POP EBP                             ; 005f8e47
    POP ESI                             ; 005f8e48
    POP EBX                             ; 005f8e49
    RET                                 ; 005f8e4a

