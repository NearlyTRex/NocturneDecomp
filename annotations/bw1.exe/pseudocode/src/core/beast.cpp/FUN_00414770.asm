; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_beast_cpp_FUN_00414770(CCharacter *param_1,float param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00433e80
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414770
        ;   Label: core_beast.cpp_FUN_00414770
    PUSH ESI                            ; 00414771
    PUSH EBP                            ; 00414772
    MOV EBP,ESP                         ; 00414773
    SUB ESP,0x4                         ; 00414775
    AND ESP,0xfffffff8                  ; 00414778
    MOV ESI,dword ptr [EBP + 0x10]      ; 0041477b
    PUSH dword ptr [EBP + 0x14]         ; 0041477e
    PUSH ESI                            ; 00414781
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00414782
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00414787
    TEST EAX,EAX                        ; 0041478a
    JZ 0x004147f0                       ; 0041478c
        ;   XREF to: 004147f0 (CONDITIONAL_JUMP)  ; LAB_004147f0
    LEA EAX,[ESI + 0x249c]              ; 0041478e
    MOV dword ptr [EAX + 0x8],0x0       ; 00414794
    FLD float ptr [EBP + 0x14]          ; 0041479b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041479e
    MOV dword ptr [EAX + 0x4],EDX       ; 004147a1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004147a4
    MOV dword ptr [EAX],EDX             ; 004147a7
    FMUL float ptr [ESI + 0xc1d0]       ; 004147a9
    LEA EBX,[ESI + 0x158]               ; 004147af
    FSTP float ptr [ESP]                ; 004147b5
    FLD float ptr [ESP]                 ; 004147b8
        ;   Label: LAB_004147b8
    FLDZ                                ; 004147bb
    FCOMPP                              ; 004147bd
    FNSTSW AX                           ; 004147bf
    SAHF                                ; 004147c1
    JNC 0x004147d2                      ; 004147c2
        ;   XREF to: 004147d2 (CONDITIONAL_JUMP)  ; LAB_004147d2
    MOV EAX,ESP                         ; 004147c4
    PUSH EAX                            ; 004147c6
    PUSH EBX                            ; 004147c7
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004147c8
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004147cd
    JMP 0x004147b8                      ; 004147d0
        ;   XREF to: 004147b8 (UNCONDITIONAL_JUMP)  ; LAB_004147b8
    PUSH ESI                            ; 004147d2
        ;   Label: LAB_004147d2
    CALL core_charactr.cpp_FUN_0042e160 ; 004147d3
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004147d8
    PUSH EBX                            ; 004147db
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004147dc
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004147e1
    PUSH dword ptr [EBP + 0x14]         ; 004147e4
    PUSH ESI                            ; 004147e7
    CALL core_charactr.cpp_FUN_00433e80 ; 004147e8
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004147ed
    MOV ESP,EBP                         ; 004147f0
        ;   Label: LAB_004147f0
    POP EBP                             ; 004147f2
    POP ESI                             ; 004147f3
    POP EBX                             ; 004147f4
    RET                                 ; 004147f5

