; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ammobox_cpp_CAmmoBox_serialize_FUN_00411900(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00614c20
;   TerminatedCString s_weaponClassName_00614c2a
;   TerminatedCString s_ammoCount_00614c3a
;   TerminatedCString s_ammoType_00614c44
;   TerminatedCString s_item_00614c4d
;   TerminatedCString s_hasCollision_00614c52
;   TerminatedCString s_openSound_00614c5f
;   int g_CAmmoBoxClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411900
        ;   Label: core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411901
    PUSH EBX                            ; 00411905
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00411906
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041190b
    PUSH 0x614c20                       ; 0041190e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00411913
    PUSH EAX                            ; 00411919
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 0041191a
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041191f
    PUSH 0x614c2a                       ; 00411922 | = "weaponClassName"
    LEA EAX,[EBX + 0x2d4]               ; 00411927
    PUSH EAX                            ; 0041192d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0041192e
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00411933
    PUSH 0x614c3a                       ; 00411936 | = "ammoCount"
    LEA EAX,[EBX + 0x314]               ; 0041193b
    PUSH EAX                            ; 00411941
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00411942
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00411947
    PUSH 0x614c44                       ; 0041194a | = "ammoType"
    LEA EAX,[EBX + 0x318]               ; 0041194f
    PUSH EAX                            ; 00411955
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00411956
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041195b
    PUSH 0x0                            ; 0041195e
    LEA EAX,[EBX + 0x31c]               ; 00411960
    PUSH EAX                            ; 00411966
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00411967
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0066e3d4]      ; 0041196c | g_CAmmoBoxClassVersion
    ADD ESP,0x8                         ; 00411972
    CMP EDX,0x2                         ; 00411975
    JGE 0x004119a2                      ; 00411978
        ;   XREF to: 004119a2 (CONDITIONAL_JUMP)  ; LAB_004119a2
    CMP dword ptr [0x0066e3d4],0x3      ; 0041197a | g_CAmmoBoxClassVersion
        ;   Label: LAB_0041197a
    JL 0x00411997                       ; 00411981
        ;   XREF to: 00411997 (CONDITIONAL_JUMP)  ; LAB_00411997
    PUSH 0x614c52                       ; 00411983 | = "hasCollision"
    LEA EAX,[EBX + 0x324]               ; 00411988
    PUSH EAX                            ; 0041198e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0041198f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00411994
    CMP dword ptr [0x0066e3d4],0x4      ; 00411997 | g_CAmmoBoxClassVersion
        ;   Label: LAB_00411997
    JGE 0x004119b8                      ; 0041199e
        ;   XREF to: 004119b8 (CONDITIONAL_JUMP)  ; LAB_004119b8
    POP EBX                             ; 004119a0
    RET                                 ; 004119a1
    PUSH 0x614c4d                       ; 004119a2 | = "item"
        ;   Label: LAB_004119a2
    LEA EAX,[EBX + 0x320]               ; 004119a7
    PUSH EAX                            ; 004119ad
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 004119ae
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004119b3
    JMP 0x0041197a                      ; 004119b6
        ;   XREF to: 0041197a (UNCONDITIONAL_JUMP)  ; LAB_0041197a
    PUSH 0x614c5f                       ; 004119b8 | = "openSound"
        ;   Label: LAB_004119b8
    ADD EBX,0x328                       ; 004119bd
    PUSH EBX                            ; 004119c3
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004119c4
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004119c9
    POP EBX                             ; 004119cc
    RET                                 ; 004119cd

