; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545910(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d136d+1
;   TerminatedCString s_modelName_005d1374
;   TerminatedCString s_guardDistance_005d137e
;   TerminatedCString s_motion_state_005d138c
;   TerminatedCString s_lightUpEyes_005d1399
;   TerminatedCString s_scaredByLight_005d13a5
;   int g_CShadowClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_FUN_0040ba30
;   core_actor.cpp_FUN_0040bab0
;   core_enemy.cpp_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545910
        ;   Label: core_shadow.cpp_FUN_00545910
    PUSH ESI                            ; 00545911
    MOV EBX,dword ptr [ESP + 0xc]       ; 00545912
    PUSH EBX                            ; 00545916
    CALL core_enemy.cpp_FUN_00489120    ; 00545917
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489120()
    ADD ESP,0x4                         ; 0054591c
    PUSH 0x5d136e                       ; 0054591f | s_speed_005d136d+1
    LEA ESI,[EBX + 0xcdcc]              ; 00545924
    PUSH ESI                            ; 0054592a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0054592b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00545930
    PUSH 0x5d1374                       ; 00545933 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00545938
    PUSH ESI                            ; 0054593e
    CALL core_actor.cpp_FUN_0040ba30    ; 0054593f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00545944
    PUSH 0x5d137e                       ; 00545947 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 0054594c
    PUSH EAX                            ; 00545952
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00545953
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00545958
    PUSH 0x5d138c                       ; 0054595b | = "motion state"
    PUSH ESI                            ; 00545960
    CALL core_actor.cpp_FUN_0040bab0    ; 00545961
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    MOV EDX,dword ptr [0x006040b4]      ; 00545966 | g_CShadowClassVersion
    ADD ESP,0x8                         ; 0054596c
    CMP EDX,0x2                         ; 0054596f
    JGE 0x00545977                      ; 00545972
        ;   XREF to: 00545977 (CONDITIONAL_JUMP)  ; LAB_00545977
    POP ESI                             ; 00545974
    POP EBX                             ; 00545975
    RET                                 ; 00545976
    PUSH 0x5d1399                       ; 00545977 | = "lightUpEyes"
        ;   Label: LAB_00545977
    LEA ESI,[EBX + 0xd074]              ; 0054597c
    PUSH ESI                            ; 00545982
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00545983
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00545988
    PUSH 0x5d13a5                       ; 0054598b | = "scaredByLight"
    ADD EBX,0xd0e0                      ; 00545990
    PUSH EBX                            ; 00545996
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00545997
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054599c
    POP ESI                             ; 0054599f
    POP EBX                             ; 005459a0
    RET                                 ; 005459a1

