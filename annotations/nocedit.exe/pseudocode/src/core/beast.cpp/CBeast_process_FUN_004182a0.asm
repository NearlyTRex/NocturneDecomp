; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_CBeast_process_FUN_004182a0(CBeast *this_ptr,float delta_time)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004182a0
        ;   Label: core_beast.cpp_CBeast_process_FUN_004182a0
    PUSH ESI                            ; 004182a1
    PUSH EBP                            ; 004182a2
    MOV EBP,ESP                         ; 004182a3
    SUB ESP,0x4                         ; 004182a5
    AND ESP,0xfffffff8                  ; 004182a8
    MOV ESI,dword ptr [EBP + 0x10]      ; 004182ab
    PUSH dword ptr [EBP + 0x14]         ; 004182ae
    PUSH ESI                            ; 004182b1
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004182b2
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004182b7
    TEST EAX,EAX                        ; 004182ba
    JZ 0x00418320                       ; 004182bc
        ;   XREF to: 00418320 (CONDITIONAL_JUMP)  ; LAB_00418320
    LEA EAX,[ESI + 0x23ac]              ; 004182be
    MOV dword ptr [EAX + 0x8],0x0       ; 004182c4
    FLD float ptr [EBP + 0x14]          ; 004182cb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004182ce
    MOV dword ptr [EAX + 0x4],EDX       ; 004182d1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004182d4
    MOV dword ptr [EAX],EDX             ; 004182d7
    FMUL float ptr [ESI + 0xbe24]       ; 004182d9
    LEA EBX,[ESI + 0x158]               ; 004182df
    FSTP float ptr [ESP]                ; 004182e5
    FLD float ptr [ESP]                 ; 004182e8
        ;   Label: LAB_004182e8
    FLDZ                                ; 004182eb
    FCOMPP                              ; 004182ed
    FNSTSW AX                           ; 004182ef
    SAHF                                ; 004182f1
    JNC 0x00418302                      ; 004182f2
        ;   XREF to: 00418302 (CONDITIONAL_JUMP)  ; LAB_00418302
    MOV EAX,ESP                         ; 004182f4
    PUSH EAX                            ; 004182f6
    PUSH EBX                            ; 004182f7
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004182f8
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 004182fd
    JMP 0x004182e8                      ; 00418300
        ;   XREF to: 004182e8 (UNCONDITIONAL_JUMP)  ; LAB_004182e8
    PUSH ESI                            ; 00418302
        ;   Label: LAB_00418302
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 00418303
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00418308
    PUSH EBX                            ; 0041830b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0041830c
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00418311
    PUSH dword ptr [EBP + 0x14]         ; 00418314
    PUSH ESI                            ; 00418317
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 00418318
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041831d
    MOV ESP,EBP                         ; 00418320
        ;   Label: LAB_00418320
    POP EBP                             ; 00418322
    POP ESI                             ; 00418323
    POP EBX                             ; 00418324
    RET                                 ; 00418325

