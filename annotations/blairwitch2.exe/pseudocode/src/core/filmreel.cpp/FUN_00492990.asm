; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_FUN_00492990(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5275
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492990
        ;   Label: core_filmreel.cpp_FUN_00492990
    PUSH ESI                            ; 00492991
    PUSH EDI                            ; 00492992
    SUB ESP,0x38                        ; 00492993
    MOV EBX,dword ptr [ESP + 0x48]      ; 00492996
    PUSH EBX                            ; 0049299a
    CALL core_actor.cpp_FUN_00408a80    ; 0049299b
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004929a0
    LEA ESI,[EBX + 0x2b4]               ; 004929a3
    PUSH ESI                            ; 004929a9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004929aa
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004929af
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004929b2
    PUSH EBX                            ; 004929b8
    LEA ESI,[ESP + 0x1c]                ; 004929b9
    LEA EDI,[ESP + 0x4]                 ; 004929bd
    CALL dword ptr [EAX + 0x24]         ; 004929c1
    MOV ECX,0x6                         ; 004929c4
    LEA ESI,[ESP + 0x1c]                ; 004929c9
    ADD ESP,0x4                         ; 004929cd
    MOVSD.REP ES:EDI,ESI                ; 004929d0
    FLD float ptr [ESP + 0x14]          ; 004929d2
    FLD float ptr [ESP + 0xc]           ; 004929d6
    FSUB float ptr [ESP]                ; 004929da
    FXCH                                ; 004929dd
    FSUB float ptr [ESP + 0x8]          ; 004929df
    FXCH                                ; 004929e3
    FLD double ptr [0x005d5275]         ; 004929e5 | DAT_005d5275
    FXCH                                ; 004929eb
    FMUL ST1                            ; 004929ed
    FXCH ST2                            ; 004929ef
    FMULP                               ; 004929f1
    FXCH                                ; 004929f3
    FSTP float ptr [ESP + 0x34]         ; 004929f5
    FST float ptr [ESP + 0x30]          ; 004929f9
    FCOMP float ptr [ESP + 0x34]        ; 004929fd
    FNSTSW AX                           ; 00492a01
    SAHF                                ; 00492a03
    JBE 0x00492a21                      ; 00492a04
        ;   XREF to: 00492a21 (CONDITIONAL_JUMP)  ; LAB_00492a21
    MOV EAX,dword ptr [ESP + 0x34]      ; 00492a06
    MOV dword ptr [EBX + 0x454],EAX     ; 00492a0a
        ;   Label: LAB_00492a0a
    MOV dword ptr [EBX + 0x430],0x0     ; 00492a10
    ADD ESP,0x38                        ; 00492a1a
    POP EDI                             ; 00492a1d
    POP ESI                             ; 00492a1e
    POP EBX                             ; 00492a1f
    RET                                 ; 00492a20
    MOV EAX,dword ptr [ESP + 0x30]      ; 00492a21
        ;   Label: LAB_00492a21
    JMP 0x00492a0a                      ; 00492a25
        ;   XREF to: 00492a0a (UNCONDITIONAL_JUMP)  ; LAB_00492a0a

