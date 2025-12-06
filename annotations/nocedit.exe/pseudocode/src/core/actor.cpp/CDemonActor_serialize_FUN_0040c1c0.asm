; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[50]:
;   core_ammo.cpp_CAmmo_serialize_FUN_00410f40 at 00410f46
;   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 at 00411906
;   core_anvil.cpp_CAnvil_serialize_FUN_00411f50 at 00411f56
;   core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990 at 00412996
;   core_barrier.cpp_CBarrier_serialize_FUN_00414340 at 00414346
;   core_bat.cpp_CBat_serialize_FUN_00414910 at 00414916
;   core_battery.cpp_CBattery_load_FUN_00418000 at 00418006
;   core_bodypart.cpp_CBodyPart_serialize_FUN_00419880 at 0041988c
;   core_boxactor.cpp_CBoxActor_load_FUN_00422060 at 00422070
;   core_chain.cpp_CChain_load_FUN_00430fe0 at 00430fe6
;   ... and 40 more
;
; Referenced Globals:
;   TerminatedCString s_location_006141ac
;   TerminatedCString s_orient_006141b5
;   TerminatedCString s_fov_006141bc
;   TerminatedCString s_wasCreated_006141c0
;   TerminatedCString s_createProb_006141cb
;   TerminatedCString s_createEvent_006141d6
;   int g_CDemonActorClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeLocation_FUN_0040b480
;   core_actor.cpp_serializeOrientation_FUN_0040b3e0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c1c0
        ;   Label: core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
    SUB ESP,0x4                         ; 0040c1c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040c1c4
    PUSH 0x6141ac                       ; 0040c1c8 | = "location" | s_location_006141ac = location
    LEA EAX,[EBX + 0x20]                ; 0040c1cd
    PUSH EAX                            ; 0040c1d0
    CALL core_actor.cpp_serializeLocation_FUN_0040b480 ; 0040c1d1 | void core_actor.cpp_serializeLocation_FUN_0040b480(CLocation * location_ptr, char * property_name)
        ;   XREF to: 0040b480 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c1d6
    PUSH 0x6141b5                       ; 0040c1d9 | = "orient" | s_orient_006141b5 = orient
    LEA EAX,[EBX + 0x30]                ; 0040c1de
    PUSH EAX                            ; 0040c1e1
    CALL core_actor.cpp_serializeOrientation_FUN_0040b3e0 ; 0040c1e2 | void core_actor.cpp_serializeOrientation_FUN_0040b3e0(COrientation * orient_ptr, char * property_name)
        ;   XREF to: 0040b3e0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0066e170]      ; 0040c1e7 | int g_CDemonActorClassVersion
    ADD ESP,0x8                         ; 0040c1ed
    CMP EDX,0x7                         ; 0040c1f0
    JL 0x0040c203                       ; 0040c1f3 | LAB_0040c203
        ;   XREF to: 0040c203 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0066e170],0x6      ; 0040c1f5 | int g_CDemonActorClassVersion
    JGE 0x0040c223                      ; 0040c1fc | LAB_0040c223
        ;   XREF to: 0040c223 (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 0040c1fe
    POP EBX                             ; 0040c201
    RET                                 ; 0040c202
    PUSH 0x6141bc                       ; 0040c203 | = "fov" | s_fov_006141bc = fov
        ;   Label: LAB_0040c203
    LEA EAX,[ESP + 0x4]                 ; 0040c208
    PUSH EAX                            ; 0040c20c
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0040c20d | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c212
    CMP dword ptr [0x0066e170],0x6      ; 0040c215 | int g_CDemonActorClassVersion
    JGE 0x0040c223                      ; 0040c21c | LAB_0040c223
        ;   XREF to: 0040c223 (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 0040c21e
    POP EBX                             ; 0040c221
    RET                                 ; 0040c222
    PUSH 0x6141c0                       ; 0040c223 | = "wasCreated" | s_wasCreated_006141c0 = wasCreated
        ;   Label: LAB_0040c223
    LEA EAX,[EBX + 0x70]                ; 0040c228
    PUSH EAX                            ; 0040c22b
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0040c22c | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c231
    PUSH 0x6141cb                       ; 0040c234 | = "createProb" | s_createProb_006141cb = createProb
    LEA EAX,[EBX + 0x74]                ; 0040c239
    PUSH EAX                            ; 0040c23c
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0040c23d | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c242
    PUSH 0x6141d6                       ; 0040c245 | = "createEvent" | s_createEvent_006141d6 = createEvent
    ADD EBX,0x78                        ; 0040c24a
    PUSH EBX                            ; 0040c24d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0040c24e | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c253
    ADD ESP,0x4                         ; 0040c256
    POP EBX                             ; 0040c259
    RET                                 ; 0040c25a

