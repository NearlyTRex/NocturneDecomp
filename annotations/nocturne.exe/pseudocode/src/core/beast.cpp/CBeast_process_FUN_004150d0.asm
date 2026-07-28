; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_beast_cpp_CBeast_process_FUN_004150d0(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_0042a150
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004150d0
        ;   Label: core_beast.cpp_CBeast_process_FUN_004150d0
    PUSH ESI                            ; 004150d1
    PUSH EBP                            ; 004150d2
    MOV EBP,ESP                         ; 004150d3
    SUB ESP,0x4                         ; 004150d5
    AND ESP,0xfffffff8                  ; 004150d8
    MOV ESI,dword ptr [EBP + 0x10]      ; 004150db
    PUSH dword ptr [EBP + 0x14]         ; 004150de
    PUSH ESI                            ; 004150e1
    CALL core_charactr.cpp_FUN_004259f0 ; 004150e2
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 004150e7
    TEST EAX,EAX                        ; 004150ea
    JZ 0x00415150                       ; 004150ec
        ;   XREF to: 00415150 (CONDITIONAL_JUMP)  ; LAB_00415150
    LEA EAX,[ESI + 0x23a4]              ; 004150ee
    MOV dword ptr [EAX + 0x8],0x0       ; 004150f4
    FLD float ptr [EBP + 0x14]          ; 004150fb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004150fe
    MOV dword ptr [EAX + 0x4],EDX       ; 00415101
    MOV EDX,dword ptr [EAX + 0x4]       ; 00415104
    MOV dword ptr [EAX],EDX             ; 00415107
    FMUL float ptr [ESI + 0xbc8c]       ; 00415109
    LEA EBX,[ESI + 0x150]               ; 0041510f
    FSTP float ptr [ESP]                ; 00415115
    FLD float ptr [ESP]                 ; 00415118
        ;   Label: LAB_00415118
    FLDZ                                ; 0041511b
    FCOMPP                              ; 0041511d
    FNSTSW AX                           ; 0041511f
    SAHF                                ; 00415121
    JNC 0x00415132                      ; 00415122
        ;   XREF to: 00415132 (CONDITIONAL_JUMP)  ; LAB_00415132
    MOV EAX,ESP                         ; 00415124
    PUSH EAX                            ; 00415126
    PUSH EBX                            ; 00415127
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00415128
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0041512d
    JMP 0x00415118                      ; 00415130
        ;   XREF to: 00415118 (UNCONDITIONAL_JUMP)  ; LAB_00415118
    PUSH ESI                            ; 00415132
        ;   Label: LAB_00415132
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00415133
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00415138
    PUSH EBX                            ; 0041513b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0041513c
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00415141
    PUSH dword ptr [EBP + 0x14]         ; 00415144
    PUSH ESI                            ; 00415147
    CALL core_charactr.cpp_FUN_0042a150 ; 00415148
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 0041514d
    MOV ESP,EBP                         ; 00415150
        ;   Label: LAB_00415150
    POP EBP                             ; 00415152
    POP ESI                             ; 00415153
    POP EBX                             ; 00415154
    RET                                 ; 00415155

