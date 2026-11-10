; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005848a0(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005edd35+2
;   TerminatedCString s_tireCount_005edd41
;   TerminatedCString s_static_bpos_005edd4b
;   TerminatedCString s_radius_005edd57
;   TerminatedCString s_width_005edd5e
;   TerminatedCString s_curTime_005edd64
;   TerminatedCString s_totalTime_005edd6c
;   TerminatedCString s_courseName_005edd76
;   TerminatedCString s_lastMobsterLeft_005edd81
;   TerminatedCString s_lastMobsterRight_005edd91
;   int g_CVehicleClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005848a0
        ;   Label: core_vehicle.cpp_CVehicle_archive_FUN_005848a0
    PUSH EBP                            ; 005848a1
    SUB ESP,0x8                         ; 005848a2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005848a5
    PUSH EDX                            ; 005848a9
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 005848aa
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005848af
    MOV EAX,dword ptr [ESP + 0x14]      ; 005848b2
    PUSH 0x5edd37                       ; 005848b6 | s_modelName_005edd35+2
    ADD EAX,0x2b4                       ; 005848bb
    PUSH EAX                            ; 005848c0
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 005848c1
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 005848c6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005848c9
    PUSH 0x5edd41                       ; 005848cd | = "tireCount"
    ADD EAX,0xa94                       ; 005848d2
    PUSH EAX                            ; 005848d7
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 005848d8
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005848dd
    MOV EAX,dword ptr [ESP + 0x14]      ; 005848e0
    MOV ECX,dword ptr [EAX + 0xa94]     ; 005848e4
    XOR EBX,EBX                         ; 005848ea
    TEST ECX,ECX                        ; 005848ec
    JLE 0x00584989                      ; 005848ee
        ;   XREF to: 00584989 (CONDITIONAL_JUMP)  ; LAB_00584989
    PUSH EDI                            ; 005848f4
    PUSH ESI                            ; 005848f5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005848f6
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005848fa
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005848fe
    ADD EAX,0xa98                       ; 00584902
    ADD ESI,0xaa8                       ; 00584907
    ADD EBP,0xaa4                       ; 0058490d
    ADD EDI,0xaac                       ; 00584913
    MOV dword ptr [ESP + 0xc],EAX       ; 00584919
    IMUL EAX,EBX,0x1b4                  ; 0058491d
        ;   Label: LAB_0058491d
    MOV EDX,dword ptr [ESP + 0xc]       ; 00584923
    PUSH 0x0                            ; 00584927
    ADD EDX,EAX                         ; 00584929
    PUSH EDI                            ; 0058492b
    MOV dword ptr [ESP + 0x10],EDX      ; 0058492c
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 00584930
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 00584935
    PUSH 0x5edd4b                       ; 00584938 | = "static_bpos"
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058493d
    PUSH EAX                            ; 00584941
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00584942
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 00584947
    PUSH 0x5edd57                       ; 0058494a | = "radius"
    PUSH EBP                            ; 0058494f
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00584950
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00584955
    PUSH 0x5edd5e                       ; 00584958 | = "width"
    PUSH ESI                            ; 0058495d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0058495e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00584963
    ADD EDI,0x1b4                       ; 00584966
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058496c
    INC EBX                             ; 00584970
    ADD EBP,0x1b4                       ; 00584971
    MOV EDX,dword ptr [EAX + 0xa94]     ; 00584977
    ADD ESI,0x1b4                       ; 0058497d
    CMP EBX,EDX                         ; 00584983
    JL 0x0058491d                       ; 00584985
        ;   XREF to: 0058491d (CONDITIONAL_JUMP)  ; LAB_0058491d
    POP ESI                             ; 00584987
    POP EDI                             ; 00584988
    CMP dword ptr [0x0061e4d4],0x2      ; 00584989 | g_CVehicleClassVersion
        ;   Label: LAB_00584989
    JGE 0x005849a1                      ; 00584990
        ;   XREF to: 005849a1 (CONDITIONAL_JUMP)  ; LAB_005849a1
    CMP dword ptr [0x0061e4d4],0x3      ; 00584992 | g_CVehicleClassVersion
    JGE 0x005849f5                      ; 00584999
        ;   XREF to: 005849f5 (CONDITIONAL_JUMP)  ; LAB_005849f5
    ADD ESP,0x8                         ; 0058499b
    POP EBP                             ; 0058499e
    POP EBX                             ; 0058499f
    RET                                 ; 005849a0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005849a1
        ;   Label: LAB_005849a1
    PUSH 0x5edd64                       ; 005849a5 | = "curTime"
    ADD EAX,0x1188                      ; 005849aa
    PUSH EAX                            ; 005849af
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005849b0
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 005849b5
    MOV EAX,dword ptr [ESP + 0x14]      ; 005849b8
    PUSH 0x5edd6c                       ; 005849bc | = "totalTime"
    ADD EAX,0x118c                      ; 005849c1
    PUSH EAX                            ; 005849c6
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005849c7
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 005849cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 005849cf
    PUSH 0x5edd76                       ; 005849d3 | = "courseName"
    ADD EAX,0x1190                      ; 005849d8
    PUSH EAX                            ; 005849dd
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005849de
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005849e3
    CMP dword ptr [0x0061e4d4],0x3      ; 005849e6 | g_CVehicleClassVersion
    JGE 0x005849f5                      ; 005849ed
        ;   XREF to: 005849f5 (CONDITIONAL_JUMP)  ; LAB_005849f5
    ADD ESP,0x8                         ; 005849ef
    POP EBP                             ; 005849f2
    POP EBX                             ; 005849f3
    RET                                 ; 005849f4
    MOV EBX,dword ptr [ESP + 0x14]      ; 005849f5
        ;   Label: LAB_005849f5
    PUSH 0x5edd81                       ; 005849f9 | = "lastMobsterLeft"
    ADD EBX,0x11cc                      ; 005849fe
    PUSH EBX                            ; 00584a04
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00584a05
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 00584a0a
    PUSH 0x5edd91                       ; 00584a0d | = "lastMobsterRight"
    PUSH EBX                            ; 00584a12
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00584a13
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 00584a18
    ADD ESP,0x8                         ; 00584a1b
    POP EBP                             ; 00584a1e
    POP EBX                             ; 00584a1f
    RET                                 ; 00584a20

