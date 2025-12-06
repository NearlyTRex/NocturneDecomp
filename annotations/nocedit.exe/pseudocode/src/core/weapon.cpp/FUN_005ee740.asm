; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_weapon.cpp_FUN_005ee740()
;
;
; XREF[1]:
;   core_weapon.cpp_CWeapon_FUN_005ee3f0 at 005ee408
;
; Referenced Globals:
;   float FLOAT_00657b2d = 0.5
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_box.cpp_CBox_setupCorners_FUN_0041dd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee740
        ;   Label: core_weapon.cpp_FUN_005ee740
    SUB ESP,0x48                        ; 005ee741
    MOV EBX,dword ptr [ESP + 0x50]      ; 005ee744
    LEA EAX,[EBX + 0x158]               ; 005ee748
    CMP dword ptr [EAX + 0x178],0x0     ; 005ee74e
    JZ 0x005ee760                       ; 005ee755 | LAB_005ee760
        ;   XREF to: 005ee760 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x68],0x78a123 ; 005ee757 | DAT_0078a123
    JZ 0x005ee765                       ; 005ee75e | LAB_005ee765
        ;   XREF to: 005ee765 (CONDITIONAL_JUMP)
    ADD ESP,0x48                        ; 005ee760
        ;   Label: LAB_005ee760
    POP EBX                             ; 005ee763
    RET                                 ; 005ee764
    MOV EAX,ESP                         ; 005ee765
        ;   Label: LAB_005ee765
    PUSH EAX                            ; 005ee767
    MOV EDX,dword ptr [EBX + 0x154]     ; 005ee768
    PUSH EBX                            ; 005ee76e
    CALL dword ptr [EDX + 0x14]         ; 005ee76f
    ADD ESP,0x8                         ; 005ee772
    FLD float ptr [ESP + 0x4]           ; 005ee775
    FLD float ptr [ESP]                 ; 005ee779
    FADD float ptr [ESP + 0xc]          ; 005ee77c
    FXCH                                ; 005ee780
    FADD float ptr [ESP + 0x10]         ; 005ee782
    FXCH                                ; 005ee786
    FST float ptr [ESP + 0x3c]          ; 005ee788
    FLD float ptr [0x00657b2d]          ; 005ee78c | float FLOAT_00657b2d
    FXCH                                ; 005ee792
    FMUL ST1                            ; 005ee794
    FXCH ST2                            ; 005ee796
    FST float ptr [ESP + 0x40]          ; 005ee798
    FMUL ST1                            ; 005ee79c
    LEA EAX,[ESP + 0x30]                ; 005ee79e
    FLD float ptr [ESP + 0x8]           ; 005ee7a2
    PUSH EAX                            ; 005ee7a6
    FADD float ptr [ESP + 0x18]         ; 005ee7a7
    LEA EAX,[ESP + 0x1c]                ; 005ee7ab
    FST float ptr [ESP + 0x48]          ; 005ee7af
    PUSH EAX                            ; 005ee7b3
    FMULP ST2                           ; 005ee7b4
    PUSH EBX                            ; 005ee7b6
    FXCH ST2                            ; 005ee7b7
    FSTP float ptr [ESP + 0x3c]         ; 005ee7b9
    FXCH                                ; 005ee7bd
    FSTP float ptr [ESP + 0x40]         ; 005ee7bf
    FSTP float ptr [ESP + 0x44]         ; 005ee7c3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005ee7c7 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005ee7cc
    LEA EAX,[ESP + 0x24]                ; 005ee7cf
    FLD float ptr [ESP + 0xc]           ; 005ee7d3
    FLD float ptr [ESP + 0x10]          ; 005ee7d7
    FLD float ptr [ESP + 0x14]          ; 005ee7db
    FXCH ST2                            ; 005ee7df
    FSUB float ptr [ESP]                ; 005ee7e1
    FXCH                                ; 005ee7e4
    FSUB float ptr [ESP + 0x4]          ; 005ee7e6
    FXCH ST2                            ; 005ee7ea
    FSUB float ptr [ESP + 0x8]          ; 005ee7ec
    FXCH                                ; 005ee7f0
    FSTP float ptr [ESP + 0x24]         ; 005ee7f2
    FXCH                                ; 005ee7f6
    FSTP float ptr [ESP + 0x28]         ; 005ee7f8
    FSTP float ptr [ESP + 0x2c]         ; 005ee7fc
    PUSH dword ptr [EBX + 0x564]        ; 005ee800
    PUSH EAX                            ; 005ee806
    LEA EAX,[EBX + 0x30]                ; 005ee807
    PUSH EAX                            ; 005ee80a
    LEA EAX,[ESP + 0x24]                ; 005ee80b
    PUSH EAX                            ; 005ee80f
    ADD EBX,0x308                       ; 005ee810
    PUSH EBX                            ; 005ee816
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20 ; 005ee817 | void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
        ;   XREF to: 0041dd20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005ee81c
    ADD ESP,0x48                        ; 005ee81f
    POP EBX                             ; 005ee822
    RET                                 ; 005ee823

