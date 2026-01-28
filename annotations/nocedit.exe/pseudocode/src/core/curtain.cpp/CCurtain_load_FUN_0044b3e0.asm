; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_curtain_cpp_CCurtain_load_FUN_0044b3e0(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   TerminatedCString s_curtainSize_00619c5a
;   TerminatedCString s_curtainTexture_00619c66
;   TerminatedCString s_opacity_00619c75
;   TerminatedCString s_cinched_00619c7d
;   TerminatedCString s_weight_00619c85
;   TerminatedCString s_dampen_00619c8c
;   TerminatedCString s_spring_00619c93
;   TerminatedCString s_friction_00619c9a
;   TerminatedCString s_gravity_00619ca3
;   TerminatedCString s_hitFloor_00619cab
;   TerminatedCString s_simulateMe_00619cb4
;   TerminatedCString s_cinchedTop_00619cbf
;   TerminatedCString s_cinchedBottom_00619cca
;   TerminatedCString s_cinchedLeft_00619cd8
;   TerminatedCString s_cinchedRight_00619ce4
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b3e0
        ;   Label: core_curtain.cpp_CCurtain_load_FUN_0044b3e0
    SUB ESP,0x4                         ; 0044b3e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044b3e4
    PUSH EBX                            ; 0044b3e8
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 0044b3e9
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044b3ee
    PUSH 0x619c5a                       ; 0044b3f1 | = "curtainSize"
    LEA EAX,[EBX + 0x158]               ; 0044b3f6
    PUSH EAX                            ; 0044b3fc
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0044b3fd
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b402
    PUSH 0x619c66                       ; 0044b405 | = "curtainTexture"
    LEA EAX,[EBX + 0x16c]               ; 0044b40a
    PUSH EAX                            ; 0044b410
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0044b411
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0044b416
    PUSH 0x619c75                       ; 0044b419 | = "opacity"
    LEA EAX,[EBX + 0x17c]               ; 0044b41e
    PUSH EAX                            ; 0044b424
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b425
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b42a
    XOR EDX,EDX                         ; 0044b42d
    MOV ECX,dword ptr [0x0066eca4]      ; 0044b42f | g_CCurtainClassVersion
    MOV dword ptr [ESP],EDX             ; 0044b435
    CMP ECX,0x2                         ; 0044b438
    JL 0x0044b518                       ; 0044b43b
        ;   XREF to: 0044b518 (CONDITIONAL_JUMP)  ; LAB_0044b518
    CMP ECX,0x4                         ; 0044b441
    JGE 0x0044b4a0                      ; 0044b444
        ;   XREF to: 0044b4a0 (CONDITIONAL_JUMP)  ; LAB_0044b4a0
    PUSH 0x619c7d                       ; 0044b446 | = "cinched"
    LEA EAX,[ESP + 0x4]                 ; 0044b44b
    PUSH EAX                            ; 0044b44f
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b450
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b455
    TEST byte ptr [ESP],0x1             ; 0044b458
    SETNZ AL                            ; 0044b45c
    AND EAX,0xff                        ; 0044b45f
    MOV dword ptr [EBX + 0x180],EAX     ; 0044b464
    TEST byte ptr [ESP],0x2             ; 0044b46a
    SETNZ AL                            ; 0044b46e
    AND EAX,0xff                        ; 0044b471
    MOV dword ptr [EBX + 0x18c],EAX     ; 0044b476
    TEST byte ptr [ESP],0x4             ; 0044b47c
    SETNZ AL                            ; 0044b480
    AND EAX,0xff                        ; 0044b483
    MOV dword ptr [EBX + 0x184],EAX     ; 0044b488
    TEST byte ptr [ESP],0x8             ; 0044b48e
    SETNZ AL                            ; 0044b492
    AND EAX,0xff                        ; 0044b495
    MOV dword ptr [EBX + 0x188],EAX     ; 0044b49a
    PUSH 0x619c85                       ; 0044b4a0 | = "weight"
        ;   Label: LAB_0044b4a0
    LEA EAX,[EBX + 0x65b14]             ; 0044b4a5
    PUSH EAX                            ; 0044b4ab
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0044b4ac
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b4b1
    PUSH 0x619c8c                       ; 0044b4b4 | = "dampen"
    LEA EAX,[EBX + 0x65b18]             ; 0044b4b9
    PUSH EAX                            ; 0044b4bf
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0044b4c0
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b4c5
    PUSH 0x619c93                       ; 0044b4c8 | = "spring"
    LEA EAX,[EBX + 0x65b1c]             ; 0044b4cd
    PUSH EAX                            ; 0044b4d3
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0044b4d4
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b4d9
    PUSH 0x619c9a                       ; 0044b4dc | = "friction"
    LEA EAX,[EBX + 0x65b20]             ; 0044b4e1
    PUSH EAX                            ; 0044b4e7
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0044b4e8
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b4ed
    PUSH 0x619ca3                       ; 0044b4f0 | = "gravity"
    LEA EAX,[EBX + 0x65b24]             ; 0044b4f5
    PUSH EAX                            ; 0044b4fb
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0044b4fc
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b501
    PUSH 0x619cab                       ; 0044b504 | = "hitFloor"
    LEA EAX,[EBX + 0x65b2c]             ; 0044b509
    PUSH EAX                            ; 0044b50f
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b510
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b515
    CMP dword ptr [0x0066eca4],0x3      ; 0044b518 | g_CCurtainClassVersion
        ;   Label: LAB_0044b518
    JL 0x0044b535                       ; 0044b51f
        ;   XREF to: 0044b535 (CONDITIONAL_JUMP)  ; LAB_0044b535
    PUSH 0x619cb4                       ; 0044b521 | = "simulateMe"
    LEA EAX,[EBX + 0x1f8]               ; 0044b526
    PUSH EAX                            ; 0044b52c
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b52d
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b532
    CMP dword ptr [0x0066eca4],0x4      ; 0044b535 | g_CCurtainClassVersion
        ;   Label: LAB_0044b535
    JL 0x0044b5b6                       ; 0044b53c
        ;   XREF to: 0044b5b6 (CONDITIONAL_JUMP)  ; LAB_0044b5b6
    PUSH 0x619cbf                       ; 0044b53e | = "cinchedTop"
    LEA EAX,[EBX + 0x180]               ; 0044b543
    PUSH EAX                            ; 0044b549
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b54a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b54f
    PUSH 0x619cca                       ; 0044b552 | = "cinchedBottom"
    LEA EAX,[EBX + 0x18c]               ; 0044b557
    PUSH EAX                            ; 0044b55d
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b55e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b563
    PUSH 0x619cd8                       ; 0044b566 | = "cinchedLeft"
    LEA EAX,[EBX + 0x184]               ; 0044b56b
    PUSH EAX                            ; 0044b571
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b572
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b577
    PUSH 0x619ce4                       ; 0044b57a | = "cinchedRight"
    LEA EAX,[EBX + 0x188]               ; 0044b57f
    PUSH EAX                            ; 0044b585
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b586
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b58b
    PUSH 0x619cf1                       ; 0044b58e | = "falling"
    LEA EAX,[EBX + 0x190]               ; 0044b593
    PUSH EAX                            ; 0044b599
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b59a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b59f
    PUSH 0x619cf9                       ; 0044b5a2 | = "letGoEvent"
    LEA EAX,[EBX + 0x194]               ; 0044b5a7
    PUSH EAX                            ; 0044b5ad
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0044b5ae
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0044b5b3
    CMP dword ptr [0x0066eca4],0x5      ; 0044b5b6 | g_CCurtainClassVersion
        ;   Label: LAB_0044b5b6
    JL 0x0044b5d3                       ; 0044b5bd
        ;   XREF to: 0044b5d3 (CONDITIONAL_JUMP)  ; LAB_0044b5d3
    PUSH 0x619d04                       ; 0044b5bf | = "patchSize"
    LEA EAX,[EBX + 0x1fc]               ; 0044b5c4
    PUSH EAX                            ; 0044b5ca
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0044b5cb
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b5d0
    CMP dword ptr [0x0066eca4],0x6      ; 0044b5d3 | g_CCurtainClassVersion
        ;   Label: LAB_0044b5d3
    JGE 0x0044b5e1                      ; 0044b5da
        ;   XREF to: 0044b5e1 (CONDITIONAL_JUMP)  ; LAB_0044b5e1
    ADD ESP,0x4                         ; 0044b5dc
    POP EBX                             ; 0044b5df
    RET                                 ; 0044b5e0
    PUSH 0x619d0e                       ; 0044b5e1 | = "blockVirtualDirectorFlag"
        ;   Label: LAB_0044b5e1
    ADD EBX,0x200                       ; 0044b5e6
    PUSH EBX                            ; 0044b5ec
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044b5ed
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044b5f2
    ADD ESP,0x4                         ; 0044b5f5
    POP EBX                             ; 0044b5f8
    RET                                 ; 0044b5f9

