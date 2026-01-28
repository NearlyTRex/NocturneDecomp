; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vehicle_cpp_CVehicle_serialize_FUN_005e8720(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_modelName_00656efe
;   TerminatedCString s_tireCount_00656f08
;   TerminatedCString s_static_bpos_00656f12
;   TerminatedCString s_radius_00656f1e
;   TerminatedCString s_width_00656f25
;   TerminatedCString s_curTime_00656f2b
;   TerminatedCString s_totalTime_00656f33
;   TerminatedCString s_courseName_00656f3d
;   TerminatedCString s_lastMobsterLeft_00656f48
;   TerminatedCString s_lastMobsterRight_00656f58
;   int g_CVehicleClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e8720
        ;   Label: core_vehicle.cpp_CVehicle_serialize_FUN_005e8720
    PUSH EBP                            ; 005e8721
    SUB ESP,0x8                         ; 005e8722
    MOV EDX,dword ptr [ESP + 0x14]      ; 005e8725
    PUSH EDX                            ; 005e8729
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 005e872a
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e872f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005e8732
    PUSH 0x656efe                       ; 005e8736 | = "modelName"
    ADD EAX,0x158                       ; 005e873b
    PUSH EAX                            ; 005e8740
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 005e8741
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e8746
    MOV EAX,dword ptr [ESP + 0x14]      ; 005e8749
    PUSH 0x656f08                       ; 005e874d | = "tireCount"
    ADD EAX,0x938                       ; 005e8752
    PUSH EAX                            ; 005e8757
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e8758
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e875d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005e8760
    MOV ECX,dword ptr [EAX + 0x938]     ; 005e8764
    XOR EBX,EBX                         ; 005e876a
    TEST ECX,ECX                        ; 005e876c
    JLE 0x005e8809                      ; 005e876e
        ;   XREF to: 005e8809 (CONDITIONAL_JUMP)  ; LAB_005e8809
    PUSH EDI                            ; 005e8774
    PUSH ESI                            ; 005e8775
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005e8776
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005e877a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005e877e
    ADD EAX,0x93c                       ; 005e8782
    ADD ESI,0x94c                       ; 005e8787
    ADD EBP,0x948                       ; 005e878d
    ADD EDI,0x950                       ; 005e8793
    MOV dword ptr [ESP + 0xc],EAX       ; 005e8799
    IMUL EAX,EBX,0x1b4                  ; 005e879d
        ;   Label: LAB_005e879d
    MOV EDX,dword ptr [ESP + 0xc]       ; 005e87a3
    PUSH 0x0                            ; 005e87a7
    ADD EDX,EAX                         ; 005e87a9
    PUSH EDI                            ; 005e87ab
    MOV dword ptr [ESP + 0x10],EDX      ; 005e87ac
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 005e87b0
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e87b5
    PUSH 0x656f12                       ; 005e87b8 | = "static_bpos"
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e87bd
    PUSH EAX                            ; 005e87c1
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 005e87c2
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e87c7
    PUSH 0x656f1e                       ; 005e87ca | = "radius"
    PUSH EBP                            ; 005e87cf
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e87d0
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e87d5
    PUSH 0x656f25                       ; 005e87d8 | = "width"
    PUSH ESI                            ; 005e87dd
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e87de
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e87e3
    ADD EDI,0x1b4                       ; 005e87e6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005e87ec
    INC EBX                             ; 005e87f0
    ADD EBP,0x1b4                       ; 005e87f1
    MOV EDX,dword ptr [EAX + 0x938]     ; 005e87f7
    ADD ESI,0x1b4                       ; 005e87fd
    CMP EBX,EDX                         ; 005e8803
    JL 0x005e879d                       ; 005e8805
        ;   XREF to: 005e879d (CONDITIONAL_JUMP)  ; LAB_005e879d
    POP ESI                             ; 005e8807
    POP EDI                             ; 005e8808
    CMP dword ptr [0x0068447c],0x2      ; 005e8809 | g_CVehicleClassVersion
        ;   Label: LAB_005e8809
    JGE 0x005e8821                      ; 005e8810
        ;   XREF to: 005e8821 (CONDITIONAL_JUMP)  ; LAB_005e8821
    CMP dword ptr [0x0068447c],0x3      ; 005e8812 | g_CVehicleClassVersion
    JGE 0x005e8875                      ; 005e8819
        ;   XREF to: 005e8875 (CONDITIONAL_JUMP)  ; LAB_005e8875
    ADD ESP,0x8                         ; 005e881b
    POP EBP                             ; 005e881e
    POP EBX                             ; 005e881f
    RET                                 ; 005e8820
    MOV EAX,dword ptr [ESP + 0x14]      ; 005e8821
        ;   Label: LAB_005e8821
    PUSH 0x656f2b                       ; 005e8825 | = "curTime"
    ADD EAX,0x102c                      ; 005e882a
    PUSH EAX                            ; 005e882f
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e8830
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e8835
    MOV EAX,dword ptr [ESP + 0x14]      ; 005e8838
    PUSH 0x656f33                       ; 005e883c | = "totalTime"
    ADD EAX,0x1030                      ; 005e8841
    PUSH EAX                            ; 005e8846
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e8847
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e884c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005e884f
    PUSH 0x656f3d                       ; 005e8853 | = "courseName"
    ADD EAX,0x1034                      ; 005e8858
    PUSH EAX                            ; 005e885d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e885e
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005e8863
    CMP dword ptr [0x0068447c],0x3      ; 005e8866 | g_CVehicleClassVersion
    JGE 0x005e8875                      ; 005e886d
        ;   XREF to: 005e8875 (CONDITIONAL_JUMP)  ; LAB_005e8875
    ADD ESP,0x8                         ; 005e886f
    POP EBP                             ; 005e8872
    POP EBX                             ; 005e8873
    RET                                 ; 005e8874
    MOV EBX,dword ptr [ESP + 0x14]      ; 005e8875
        ;   Label: LAB_005e8875
    PUSH 0x656f48                       ; 005e8879 | = "lastMobsterLeft"
    ADD EBX,0x1070                      ; 005e887e
    PUSH EBX                            ; 005e8884
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005e8885
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e888a
    PUSH 0x656f58                       ; 005e888d | = "lastMobsterRight"
    PUSH EBX                            ; 005e8892
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005e8893
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e8898
    ADD ESP,0x8                         ; 005e889b
    POP EBP                             ; 005e889e
    POP EBX                             ; 005e889f
    RET                                 ; 005e88a0

