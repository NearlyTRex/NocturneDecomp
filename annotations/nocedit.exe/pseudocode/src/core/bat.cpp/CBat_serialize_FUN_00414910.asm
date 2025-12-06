; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_bat.cpp_CBat_serialize_FUN_00414910(CBat * this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_courseFilename_006152ef
;   TerminatedCString s_param_006152fe
;   TerminatedCString s_speed_00615304
;   TerminatedCString s_flapSpeedMult_0061530a
;   TerminatedCString s_courseSpeed_00615318
;   TerminatedCString s_modelName_00615324
;   TerminatedCString s_periodicSoundTimerMin_0061532e
;   TerminatedCString s_periodicSoundTimerMax_00615344
;   double DOUBLE_0061535e = 30
;   undefined4 g_CBatClassVersion
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414910
        ;   Label: core_bat.cpp_CBat_serialize_FUN_00414910
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414911
    PUSH EBX                            ; 00414915
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00414916 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041491b
    PUSH 0x6152ef                       ; 0041491e | = "courseFilename" | s_courseFilename_006152ef = courseFilename
    LEA EAX,[EBX + 0x158]               ; 00414923
    PUSH EAX                            ; 00414929
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0041492a | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041492f
    PUSH 0x6152fe                       ; 00414932 | = "param" | s_param_006152fe = param
    LEA EAX,[EBX + 0x304]               ; 00414937
    PUSH EAX                            ; 0041493d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041493e | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0066e4b4]      ; 00414943 | undefined4 g_CBatClassVersion
    ADD ESP,0x8                         ; 00414949
    LEA EAX,[EBX + 0x30c]               ; 0041494c
    CMP EDX,0x3                         ; 00414952
    JL 0x004149a1                       ; 00414955 | LAB_004149a1
        ;   XREF to: 004149a1 (CONDITIONAL_JUMP)
    PUSH 0x61530a                       ; 00414957 | = "flapSpeedMult" | s_flapSpeedMult_0061530a = flapSpeedMult
    PUSH EAX                            ; 0041495c
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041495d | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00414962
    PUSH 0x615318                       ; 00414965 | = "courseSpeed" | s_courseSpeed_00615318 = courseSpeed
    LEA EAX,[EBX + 0x308]               ; 0041496a
    PUSH EAX                            ; 00414970
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00414971 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00414976
    CMP dword ptr [0x0066e4b4],0x2      ; 00414979 | undefined4 g_CBatClassVersion
        ;   Label: LAB_00414979
    JL 0x00414996                       ; 00414980 | LAB_00414996
        ;   XREF to: 00414996 (CONDITIONAL_JUMP)
    PUSH 0x615324                       ; 00414982 | = "modelName" | s_modelName_00615324 = modelName
    LEA EAX,[EBX + 0x188]               ; 00414987
    PUSH EAX                            ; 0041498d
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 0041498e | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00414993
    CMP dword ptr [0x0066e4b4],0x4      ; 00414996 | undefined4 g_CBatClassVersion
        ;   Label: LAB_00414996
    JGE 0x004149c3                      ; 0041499d | LAB_004149c3
        ;   XREF to: 004149c3 (CONDITIONAL_JUMP)
    POP EBX                             ; 0041499f
    RET                                 ; 004149a0
    PUSH 0x615304                       ; 004149a1 | = "speed" | s_speed_00615304 = speed
        ;   Label: LAB_004149a1
    PUSH EAX                            ; 004149a6
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004149a7 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0x30c]         ; 004149ac
    FMUL double ptr [0x0061535e]        ; 004149b2 | double DOUBLE_0061535e
    ADD ESP,0x8                         ; 004149b8
    FSTP float ptr [EBX + 0x308]        ; 004149bb
    JMP 0x00414979                      ; 004149c1 | LAB_00414979
        ;   XREF to: 00414979 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004149c3
        ;   Label: LAB_004149c3
    LEA EAX,[EBX + 0x314]               ; 004149c5
    PUSH EAX                            ; 004149cb
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004149cc | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004149d1
    PUSH 0x61532e                       ; 004149d4 | = "periodicSoundTimerMin" | s_periodicSoundTimerMin_0061532e = periodicSoundTimerMin
    LEA EAX,[EBX + 0x378]               ; 004149d9
    PUSH EAX                            ; 004149df
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004149e0 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004149e5
    PUSH 0x615344                       ; 004149e8 | = "periodicSoundTimerMax" | s_periodicSoundTimerMax_00615344 = periodicSoundTimerMax
    ADD EBX,0x37c                       ; 004149ed
    PUSH EBX                            ; 004149f3
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004149f4 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004149f9
    POP EBX                             ; 004149fc
    RET                                 ; 004149fd

