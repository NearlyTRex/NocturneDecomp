; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0 (CKeyFramedModelInstance *model_ptr,char *property_name)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   model_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined1       Stack[-0xd0]:1  model_filename_buffer
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[29]:
;   core_ammo.cpp_CAmmo_serialize_FUN_00410f40 at 00410f5a
;   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 at 0041191a
;   core_anvil.cpp_CAnvil_serialize_FUN_00411f50 at 00411f6a
;   core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990 at 004129aa
;   core_bat.cpp_CBat_serialize_FUN_00414910 at 0041498e
;   core_battery.cpp_CBattery_serialize_FUN_00418000 at 0041801a
;   core_boxactor.cpp_CBoxActor_serialize_FUN_00422060 at 00422084
;   core_bugs.cpp_CBugs_load_FUN_004254f0 at 00425579
;   core_crate.cpp_CCrate_load_FUN_00448910 at 0044892a
;   core_door.cpp_CDoor_serialize_FUN_00480aa0 at 00480abb
;   ... and 19 more
;
; Referenced Globals:
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b8f0
        ;   Label: core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
    PUSH EDI                            ; 0040b8f1
    SUB ESP,0xc8                        ; 0040b8f2
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040b8f8
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040b8ff
    CMP dword ptr [0x00822038],0x1      ; 0040b906 | g_ActorReadingMode
    JNZ 0x0040b932                      ; 0040b90d
        ;   XREF to: 0040b932 (CONDITIONAL_JUMP)  ; LAB_0040b932
    PUSH EDX                            ; 0040b90f
    LEA ESI,[ESP + 0x4]                 ; 0040b910
    PUSH ESI                            ; 0040b914
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0040b915
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b91a
    MOV ESI,ESP                         ; 0040b91d
    PUSH ESI                            ; 0040b91f
    PUSH EDI                            ; 0040b920
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0040b921
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040b926
    ADD ESP,0xc8                        ; 0040b929
    POP EDI                             ; 0040b92f
    POP ESI                             ; 0040b930
    RET                                 ; 0040b931
    LEA ESI,[EDI + 0x78]                ; 0040b932
        ;   Label: LAB_0040b932
    MOV EDI,ESP                         ; 0040b935
    PUSH EDI                            ; 0040b937
    MOV AL,byte ptr [ESI]               ; 0040b938
        ;   Label: LAB_0040b938
    MOV byte ptr [EDI],AL               ; 0040b93a
    CMP AL,0x0                          ; 0040b93c
    JZ 0x0040b950                       ; 0040b93e
        ;   XREF to: 0040b950 (CONDITIONAL_JUMP)  ; LAB_0040b950
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b940
    ADD ESI,0x2                         ; 0040b943
    MOV byte ptr [EDI + 0x1],AL         ; 0040b946
    ADD EDI,0x2                         ; 0040b949
    CMP AL,0x0                          ; 0040b94c
    JNZ 0x0040b938                      ; 0040b94e
        ;   XREF to: 0040b938 (CONDITIONAL_JUMP)  ; LAB_0040b938
    POP EDI                             ; 0040b950
        ;   Label: LAB_0040b950
    PUSH EDX                            ; 0040b951
    LEA ESI,[ESP + 0x4]                 ; 0040b952
    PUSH ESI                            ; 0040b956
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0040b957
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b95c
    ADD ESP,0xc8                        ; 0040b95f
    POP EDI                             ; 0040b965
    POP ESI                             ; 0040b966
    RET                                 ; 0040b967

