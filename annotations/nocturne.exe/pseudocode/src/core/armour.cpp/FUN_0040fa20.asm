; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_FUN_0040fa20(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   TerminatedCString s_armour_wav_0057846a
;   double DOUBLE_0057847a = 3.14159265350000
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fa20
        ;   Label: core_armour.cpp_FUN_0040fa20
    PUSH ESI                            ; 0040fa21
    PUSH EDI                            ; 0040fa22
    PUSH EBP                            ; 0040fa23
    MOV EBP,ESP                         ; 0040fa24
    SUB ESP,0x10                        ; 0040fa26
    AND ESP,0xfffffff8                  ; 0040fa29
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040fa2c
    PUSH dword ptr [EBP + 0x18]         ; 0040fa2f
    PUSH ESI                            ; 0040fa32
    CALL core_charactr.cpp_FUN_004259f0 ; 0040fa33
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040fa38
    TEST EAX,EAX                        ; 0040fa3b
    JZ 0x0040fb06                       ; 0040fa3d
        ;   XREF to: 0040fb06 (CONDITIONAL_JUMP)  ; LAB_0040fb06
    LEA EAX,[ESI + 0x23a4]              ; 0040fa43
    MOV dword ptr [EAX + 0x8],0x0       ; 0040fa49
    FLD float ptr [EBP + 0x18]          ; 0040fa50
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040fa53
    MOV dword ptr [EAX + 0x4],EDX       ; 0040fa56
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040fa59
    MOV dword ptr [EAX],EDX             ; 0040fa5c
    FMUL float ptr [ESI + 0xbc8c]       ; 0040fa5e
    LEA EBX,[ESI + 0x150]               ; 0040fa64
    FSTP float ptr [ESP]                ; 0040fa6a
    FLD float ptr [ESP]                 ; 0040fa6d
        ;   Label: LAB_0040fa6d
    FLDZ                                ; 0040fa70
    FCOMPP                              ; 0040fa72
    FNSTSW AX                           ; 0040fa74
    SAHF                                ; 0040fa76
    JC 0x0040fb0d                       ; 0040fa77
        ;   XREF to: 0040fb0d (CONDITIONAL_JUMP)  ; LAB_0040fb0d
    FLD float ptr [ESI + 0xbc8c]        ; 0040fa7d
    FLD float ptr [EBP + 0x18]          ; 0040fa83
    FMUL double ptr [0x0057847a]        ; 0040fa86 | DOUBLE_0057847a
    FMULP                               ; 0040fa8c
    FLD float ptr [ESI + 0x23ac]        ; 0040fa8e
    PUSH EBX                            ; 0040fa94
    FSTP float ptr [ESI + 0x242c]       ; 0040fa95
    FSTP float ptr [ESI + 0x2430]       ; 0040fa9b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0040faa1
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0040faa6
    PUSH dword ptr [EBP + 0x18]         ; 0040faa9
    PUSH ESI                            ; 0040faac
    CALL core_charactr.cpp_FUN_00428c00 ; 0040faad
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040fab2
    TEST EAX,EAX                        ; 0040fab5
    JZ 0x0040fad1                       ; 0040fab7
        ;   XREF to: 0040fad1 (CONDITIONAL_JUMP)  ; LAB_0040fad1
    LEA EAX,[ESI + 0x23a4]              ; 0040fab9
    MOV dword ptr [EAX + 0x8],0x0       ; 0040fabf
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040fac6
    MOV dword ptr [EAX + 0x4],EDX       ; 0040fac9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040facc
    MOV dword ptr [EAX],EDX             ; 0040facf
    LEA EAX,[ESI + 0x150]               ; 0040fad1
        ;   Label: LAB_0040fad1
    PUSH EAX                            ; 0040fad7
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0040fad8
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040fadd
    PUSH dword ptr [EBP + 0x18]         ; 0040fae0
    PUSH ESI                            ; 0040fae3
    CALL core_charactr.cpp_FUN_0042a150 ; 0040fae4
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040fae9
    LEA EAX,[ESI + 0xbd24]              ; 0040faec
    PUSH EAX                            ; 0040faf2
    MOV EDX,dword ptr [0x005b7650]      ; 0040faf3 | DAT_005b7650
    PUSH EDX                            ; 0040faf9
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0040fafa
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0040faff
    TEST EAX,EAX                        ; 0040fb02
    JNZ 0x0040fb1e                      ; 0040fb04
        ;   XREF to: 0040fb1e (CONDITIONAL_JUMP)  ; LAB_0040fb1e
    MOV ESP,EBP                         ; 0040fb06
        ;   Label: LAB_0040fb06
    POP EBP                             ; 0040fb08
    POP EDI                             ; 0040fb09
    POP ESI                             ; 0040fb0a
    POP EBX                             ; 0040fb0b
    RET                                 ; 0040fb0c
    MOV EAX,ESP                         ; 0040fb0d
        ;   Label: LAB_0040fb0d
    PUSH EAX                            ; 0040fb0f
    PUSH EBX                            ; 0040fb10
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 0040fb11
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0040fb16
    JMP 0x0040fa6d                      ; 0040fb19
        ;   XREF to: 0040fa6d (UNCONDITIONAL_JUMP)  ; LAB_0040fa6d
    PUSH 0x57846a                       ; 0040fb1e | = "armour.wav"
        ;   Label: LAB_0040fb1e
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0040fb23
    PUSH ESI                            ; 0040fb29
    CALL dword ptr [EAX + 0x24]         ; 0040fb2a
    ADD ESP,0x8                         ; 0040fb2d
    PUSH 0x1                            ; 0040fb30
    LEA EAX,[ESP + 0x8]                 ; 0040fb32
    PUSH 0xbf800000                     ; 0040fb36
    XOR ECX,ECX                         ; 0040fb3b
    PUSH EAX                            ; 0040fb3d
    MOV EDI,0x40a00000                  ; 0040fb3e
    MOV dword ptr [ESP + 0x10],ECX      ; 0040fb43
    PUSH ESI                            ; 0040fb47
    MOV dword ptr [ESP + 0x18],ECX      ; 0040fb48
    MOV dword ptr [ESP + 0x1c],EDI      ; 0040fb4c
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427b60 ; 0040fb50
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00427b60(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 0040fb55
    MOV ESP,EBP                         ; 0040fb58
    POP EBP                             ; 0040fb5a
    POP EDI                             ; 0040fb5b
    POP ESI                             ; 0040fb5c
    POP EBX                             ; 0040fb5d
    RET                                 ; 0040fb5e

