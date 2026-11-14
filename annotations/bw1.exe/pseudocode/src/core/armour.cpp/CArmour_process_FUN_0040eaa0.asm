; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_armour_cpp_CArmour_process_FUN_0040eaa0(CArmour *this_ptr,float delta_time)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_armour_wav_005d32d9
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_00435320
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eaa0
        ;   Label: core_armour.cpp_CArmour_process_FUN_0040eaa0
    PUSH ESI                            ; 0040eaa1
    PUSH EDI                            ; 0040eaa2
    PUSH EBP                            ; 0040eaa3
    MOV EBP,ESP                         ; 0040eaa4
    SUB ESP,0x10                        ; 0040eaa6
    AND ESP,0xfffffff8                  ; 0040eaa9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040eaac
    PUSH dword ptr [EBP + 0x18]         ; 0040eaaf
    PUSH ESI                            ; 0040eab2
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0040eab3
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040eab8
    TEST EAX,EAX                        ; 0040eabb
    JZ 0x0040eb87                       ; 0040eabd
        ;   XREF to: 0040eb87 (CONDITIONAL_JUMP)  ; LAB_0040eb87
    LEA EAX,[ESI + 0x249c]              ; 0040eac3
    MOV dword ptr [EAX + 0x8],0x0       ; 0040eac9
    FLD float ptr [EBP + 0x18]          ; 0040ead0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040ead3
    MOV dword ptr [EAX + 0x4],EDX       ; 0040ead6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040ead9
    MOV dword ptr [EAX],EDX             ; 0040eadc
    FMUL float ptr [ESI + 0xc1d0]       ; 0040eade
    LEA EBX,[ESI + 0x158]               ; 0040eae4
    FSTP float ptr [ESP]                ; 0040eaea
    FLD float ptr [ESP]                 ; 0040eaed
        ;   Label: LAB_0040eaed
    FLDZ                                ; 0040eaf0
    FCOMPP                              ; 0040eaf2
    FNSTSW AX                           ; 0040eaf4
    SAHF                                ; 0040eaf6
    JC 0x0040eb8e                       ; 0040eaf7
        ;   XREF to: 0040eb8e (CONDITIONAL_JUMP)  ; LAB_0040eb8e
    FLD float ptr [EBP + 0x18]          ; 0040eafd
    FMUL float ptr [ESI + 0xc1d0]       ; 0040eb00
    FLD float ptr [ESI + 0x24a4]        ; 0040eb06
    SUB ESP,0x4                         ; 0040eb0c
    FSTP float ptr [ESI + 0x2524]       ; 0040eb0f
    FSTP float ptr [ESP]                ; 0040eb15
    PUSH ESI                            ; 0040eb18
    CALL core_charactr.cpp_FUN_00435320 ; 0040eb19
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 0040eb1e
    PUSH EBX                            ; 0040eb21
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0040eb22
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0040eb27
    PUSH dword ptr [EBP + 0x18]         ; 0040eb2a
    PUSH ESI                            ; 0040eb2d
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0040eb2e
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040eb33
    TEST EAX,EAX                        ; 0040eb36
    JZ 0x0040eb52                       ; 0040eb38
        ;   XREF to: 0040eb52 (CONDITIONAL_JUMP)  ; LAB_0040eb52
    LEA EAX,[ESI + 0x249c]              ; 0040eb3a
    MOV dword ptr [EAX + 0x8],0x0       ; 0040eb40
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040eb47
    MOV dword ptr [EAX + 0x4],EDX       ; 0040eb4a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040eb4d
    MOV dword ptr [EAX],EDX             ; 0040eb50
    LEA EAX,[ESI + 0x158]               ; 0040eb52
        ;   Label: LAB_0040eb52
    PUSH EAX                            ; 0040eb58
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 0040eb59
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040eb5e
    PUSH dword ptr [EBP + 0x18]         ; 0040eb61
    PUSH ESI                            ; 0040eb64
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 0040eb65
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040eb6a
    LEA EAX,[ESI + 0xc268]              ; 0040eb6d
    PUSH EAX                            ; 0040eb73
    MOV EDX,dword ptr [0x0061b4d0]      ; 0040eb74 | DAT_0061b4d0
    PUSH EDX                            ; 0040eb7a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0040eb7b
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0040eb80
    TEST EAX,EAX                        ; 0040eb83
    JNZ 0x0040eb9f                      ; 0040eb85
        ;   XREF to: 0040eb9f (CONDITIONAL_JUMP)  ; LAB_0040eb9f
    MOV ESP,EBP                         ; 0040eb87
        ;   Label: LAB_0040eb87
    POP EBP                             ; 0040eb89
    POP EDI                             ; 0040eb8a
    POP ESI                             ; 0040eb8b
    POP EBX                             ; 0040eb8c
    RET                                 ; 0040eb8d
    MOV EAX,ESP                         ; 0040eb8e
        ;   Label: LAB_0040eb8e
    PUSH EAX                            ; 0040eb90
    PUSH EBX                            ; 0040eb91
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0040eb92
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0040eb97
    JMP 0x0040eaed                      ; 0040eb9a
        ;   XREF to: 0040eaed (UNCONDITIONAL_JUMP)  ; LAB_0040eaed
    PUSH 0x5d32d9                       ; 0040eb9f | = "armour.wav"
        ;   Label: LAB_0040eb9f
    MOV EAX,dword ptr [ESI + 0x154]     ; 0040eba4
    PUSH ESI                            ; 0040ebaa
    CALL dword ptr [EAX + 0x2c]         ; 0040ebab
    ADD ESP,0x8                         ; 0040ebae
    PUSH 0x1                            ; 0040ebb1
    LEA EAX,[ESP + 0x8]                 ; 0040ebb3
    PUSH 0xbf800000                     ; 0040ebb7
    XOR ECX,ECX                         ; 0040ebbc
    PUSH EAX                            ; 0040ebbe
    MOV EDI,0x40a00000                  ; 0040ebbf
    MOV dword ptr [ESP + 0x10],ECX      ; 0040ebc4
    PUSH ESI                            ; 0040ebc8
    MOV dword ptr [ESP + 0x18],ECX      ; 0040ebc9
    MOV dword ptr [ESP + 0x1c],EDI      ; 0040ebcd
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00430d90 ; 0040ebd1
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00430d90(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 0040ebd6
    MOV ESP,EBP                         ; 0040ebd9
    POP EBP                             ; 0040ebdb
    POP EDI                             ; 0040ebdc
    POP ESI                             ; 0040ebdd
    POP EBX                             ; 0040ebde
    RET                                 ; 0040ebdf

