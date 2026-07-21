; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_CFilmReel_setup_FUN_00481ca0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00580fa3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481ca0
        ;   Label: core_filmreel.cpp_CFilmReel_setup_FUN_00481ca0
    SUB ESP,0x20                        ; 00481ca1
    MOV EBX,dword ptr [ESP + 0x28]      ; 00481ca4
    PUSH EBX                            ; 00481ca8
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00481ca9
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 00481cae
    LEA EAX,[EBX + 0x150]               ; 00481cb1
    PUSH EAX                            ; 00481cb7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00481cb8
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 00481cbd
    MOV EAX,ESP                         ; 00481cc0
    PUSH EAX                            ; 00481cc2
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00481cc3
    PUSH EBX                            ; 00481cc9
    CALL dword ptr [EDX + 0x14]         ; 00481cca
    ADD ESP,0x8                         ; 00481ccd
    FLD float ptr [ESP + 0x14]          ; 00481cd0
    FLD float ptr [ESP + 0xc]           ; 00481cd4
    FSUB float ptr [ESP]                ; 00481cd8
    FXCH                                ; 00481cdb
    FSUB float ptr [ESP + 0x8]          ; 00481cdd
    FXCH                                ; 00481ce1
    FLD double ptr [0x00580fa3]         ; 00481ce3 | DAT_00580fa3
    FXCH                                ; 00481ce9
    FMUL ST1                            ; 00481ceb
    FXCH ST2                            ; 00481ced
    FMULP                               ; 00481cef
    FXCH                                ; 00481cf1
    FSTP float ptr [ESP + 0x1c]         ; 00481cf3
    FST float ptr [ESP + 0x18]          ; 00481cf7
    FCOMP float ptr [ESP + 0x1c]        ; 00481cfb
    FNSTSW AX                           ; 00481cff
    SAHF                                ; 00481d01
    JBE 0x00481d1d                      ; 00481d02
        ;   XREF to: 00481d1d (CONDITIONAL_JUMP)  ; LAB_00481d1d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00481d04
    MOV dword ptr [EBX + 0x2f0],EAX     ; 00481d08
        ;   Label: LAB_00481d08
    MOV dword ptr [EBX + 0x2cc],0x0     ; 00481d0e
    ADD ESP,0x20                        ; 00481d18
    POP EBX                             ; 00481d1b
    RET                                 ; 00481d1c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00481d1d
        ;   Label: LAB_00481d1d
    JMP 0x00481d08                      ; 00481d21
        ;   XREF to: 00481d08 (UNCONDITIONAL_JUMP)  ; LAB_00481d08

