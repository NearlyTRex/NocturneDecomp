; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_conveyor.cpp_CConveyor_setup_FUN_00441d60 at 00441dc2
;   core_minecar.cpp_CMineCar_setup_FUN_00520e90 at 00520e95
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ca20
        ;   Label: core_platfrm.cpp_CPlatform_setup_FUN_0054ca20
    PUSH ESI                            ; 0054ca21
    PUSH EDI                            ; 0054ca22
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054ca23
    PUSH ESI                            ; 0054ca27
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0054ca28
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    MOV AH,byte ptr [ESI + 0x2f0]       ; 0054ca2d
    ADD ESP,0x4                         ; 0054ca33
    TEST AH,AH                          ; 0054ca36
    JNZ 0x0054ca6f                      ; 0054ca38
        ;   XREF to: 0054ca6f (CONDITIONAL_JUMP)  ; LAB_0054ca6f
    PUSH ESI                            ; 0054ca3a
        ;   Label: LAB_0054ca3a
    CALL core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0 ; 0054ca3b
        ;   XREF to: 0054cab0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 0054ca40
    LEA EAX,[ESI + 0x158]               ; 0054ca43
    PUSH EAX                            ; 0054ca49
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0054ca4a
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    MOV EBX,ESI                         ; 0054ca4f
    ADD ESP,0x4                         ; 0054ca51
    LEA EDI,[ESI + 0x208]               ; 0054ca54
    MOV EAX,dword ptr [EBX + 0x51c]     ; 0054ca5a
        ;   Label: LAB_0054ca5a
    TEST EAX,EAX                        ; 0054ca60
    JNZ 0x0054ca8e                      ; 0054ca62
        ;   XREF to: 0054ca8e (CONDITIONAL_JUMP)  ; LAB_0054ca8e
    ADD EBX,0x34                        ; 0054ca64
    CMP EBX,EDI                         ; 0054ca67
    JNZ 0x0054ca5a                      ; 0054ca69
        ;   XREF to: 0054ca5a (CONDITIONAL_JUMP)  ; LAB_0054ca5a
    POP EDI                             ; 0054ca6b
    POP ESI                             ; 0054ca6c
    POP EBX                             ; 0054ca6d
    RET                                 ; 0054ca6e
    LEA EAX,[ESI + 0x2f0]               ; 0054ca6f
        ;   Label: LAB_0054ca6f
    PUSH EAX                            ; 0054ca75
    LEA EBX,[ESI + 0x310]               ; 0054ca76
    PUSH EBX                            ; 0054ca7c
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 0054ca7d
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054ca82
    MOV dword ptr [EBX + 0x8],0x0       ; 0054ca85
    JMP 0x0054ca3a                      ; 0054ca8c
        ;   XREF to: 0054ca3a (UNCONDITIONAL_JUMP)  ; LAB_0054ca3a
    PUSH EAX                            ; 0054ca8e
        ;   Label: LAB_0054ca8e
    PUSH ESI                            ; 0054ca8f
    MOV dword ptr [EBX + 0x51c],0x0     ; 0054ca90
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0 ; 0054ca9a
        ;   XREF to: 0054e1e0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0054ca9f
    ADD EBX,0x34                        ; 0054caa2
    CMP EBX,EDI                         ; 0054caa5
    JNZ 0x0054ca5a                      ; 0054caa7
        ;   XREF to: 0054ca5a (CONDITIONAL_JUMP)  ; LAB_0054ca5a
    POP EDI                             ; 0054caa9
    POP ESI                             ; 0054caaa
    POP EBX                             ; 0054caab
    RET                                 ; 0054caac

