; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightpis_cpp_FUN_005016d0(CDemonActor *param_1)
;
;
; XREF[1]:
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 00501d66
;
; Referenced Globals:
;   TerminatedCString s_CDraculaBride_005e6f34
;   TerminatedCString s_CBatman_005e6f42
;   TerminatedCString s_CBatCreature_005e6f4a
;   TerminatedCString s_CBride_005e6f57
;   TerminatedCString s_CShadow_005e6f5e
;   TerminatedCString s_CShadowsc_005e6f66
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005016d0
        ;   Label: core_lightpis.cpp_FUN_005016d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005016d1
    PUSH 0x5e6f34                       ; 005016d5 | = "CDraculaBride"
    PUSH EBX                            ; 005016da
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 005016db
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005016e0
    TEST EAX,EAX                        ; 005016e3
    JZ 0x005016ee                       ; 005016e5
        ;   XREF to: 005016ee (CONDITIONAL_JUMP)  ; LAB_005016ee
    MOV EAX,0x1                         ; 005016e7
        ;   Label: LAB_005016e7
    POP EBX                             ; 005016ec
    RET                                 ; 005016ed
    PUSH 0x5e6f42                       ; 005016ee | = "CBatman"
        ;   Label: LAB_005016ee
    PUSH EBX                            ; 005016f3
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 005016f4
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005016f9
    TEST EAX,EAX                        ; 005016fc
    JNZ 0x005016e7                      ; 005016fe
        ;   XREF to: 005016e7 (CONDITIONAL_JUMP)  ; LAB_005016e7
    PUSH 0x5e6f4a                       ; 00501700 | = "CBatCreature"
    PUSH EBX                            ; 00501705
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00501706
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050170b
    TEST EAX,EAX                        ; 0050170e
    JNZ 0x005016e7                      ; 00501710
        ;   XREF to: 005016e7 (CONDITIONAL_JUMP)  ; LAB_005016e7
    PUSH 0x5e6f57                       ; 00501712 | = "CBride"
    PUSH EBX                            ; 00501717
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00501718
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050171d
    TEST EAX,EAX                        ; 00501720
    JNZ 0x005016e7                      ; 00501722
        ;   XREF to: 005016e7 (CONDITIONAL_JUMP)  ; LAB_005016e7
    PUSH 0x5e6f5e                       ; 00501724 | = "CShadow"
    PUSH EBX                            ; 00501729
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0050172a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050172f
    TEST EAX,EAX                        ; 00501732
    JNZ 0x005016e7                      ; 00501734
        ;   XREF to: 005016e7 (CONDITIONAL_JUMP)  ; LAB_005016e7
    PUSH 0x5e6f66                       ; 00501736 | = "CShadowsc"
    PUSH EBX                            ; 0050173b
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0050173c
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00501741
    TEST EAX,EAX                        ; 00501744
    JNZ 0x005016e7                      ; 00501746
        ;   XREF to: 005016e7 (CONDITIONAL_JUMP)  ; LAB_005016e7
    POP EBX                             ; 00501748
    RET                                 ; 00501749

