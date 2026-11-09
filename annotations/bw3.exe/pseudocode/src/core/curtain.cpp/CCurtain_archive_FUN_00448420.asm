; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_archive_FUN_00448420(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_curtainSize_005b9ab8+1
;   TerminatedCString s_curtainTexture_005b9ac5
;   TerminatedCString s_opacity_005b9ad4
;   TerminatedCString s_cinched_005b9adc
;   TerminatedCString s_weight_005b9ae4
;   TerminatedCString s_dampen_005b9aeb
;   TerminatedCString s_spring_005b9af2
;   TerminatedCString s_friction_005b9af9
;   TerminatedCString s_gravity_005b9b02
;   TerminatedCString s_hitFloor_005b9b0a
;   TerminatedCString s_simulateMe_005b9b13
;   TerminatedCString s_cinchedTop_005b9b1e
;   TerminatedCString s_cinchedBottom_005b9b29
;   TerminatedCString s_cinchedLeft_005b9b37
;   TerminatedCString s_cinchedRight_005b9b43
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448420
        ;   Label: core_curtain.cpp_CCurtain_archive_FUN_00448420
    SUB ESP,0x4                         ; 00448421
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448424
    PUSH EBX                            ; 00448428
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00448429
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044842e
    PUSH 0x5b9ab9                       ; 00448431 | s_curtainSize_005b9ab8+1
    LEA EAX,[EBX + 0x158]               ; 00448436
    PUSH EAX                            ; 0044843c
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0044843d
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 00448442
    PUSH 0x5b9ac5                       ; 00448445 | = "curtainTexture"
    LEA EAX,[EBX + 0x16c]               ; 0044844a
    PUSH EAX                            ; 00448450
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00448451
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00448456
    PUSH 0x5b9ad4                       ; 00448459 | = "opacity"
    LEA EAX,[EBX + 0x17c]               ; 0044845e
    PUSH EAX                            ; 00448464
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00448465
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044846a
    XOR EDX,EDX                         ; 0044846d
    MOV ECX,dword ptr [0x005f1784]      ; 0044846f | g_CCurtainClassVersion
    MOV dword ptr [ESP],EDX             ; 00448475
    CMP ECX,0x2                         ; 00448478
    JL 0x00448558                       ; 0044847b
        ;   XREF to: 00448558 (CONDITIONAL_JUMP)  ; LAB_00448558
    CMP ECX,0x4                         ; 00448481
    JGE 0x004484e0                      ; 00448484
        ;   XREF to: 004484e0 (CONDITIONAL_JUMP)  ; LAB_004484e0
    PUSH 0x5b9adc                       ; 00448486 | = "cinched"
    LEA EAX,[ESP + 0x4]                 ; 0044848b
    PUSH EAX                            ; 0044848f
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00448490
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00448495
    TEST byte ptr [ESP],0x1             ; 00448498
    SETNZ AL                            ; 0044849c
    AND EAX,0xff                        ; 0044849f
    MOV dword ptr [EBX + 0x180],EAX     ; 004484a4
    TEST byte ptr [ESP],0x2             ; 004484aa
    SETNZ AL                            ; 004484ae
    AND EAX,0xff                        ; 004484b1
    MOV dword ptr [EBX + 0x18c],EAX     ; 004484b6
    TEST byte ptr [ESP],0x4             ; 004484bc
    SETNZ AL                            ; 004484c0
    AND EAX,0xff                        ; 004484c3
    MOV dword ptr [EBX + 0x184],EAX     ; 004484c8
    TEST byte ptr [ESP],0x8             ; 004484ce
    SETNZ AL                            ; 004484d2
    AND EAX,0xff                        ; 004484d5
    MOV dword ptr [EBX + 0x188],EAX     ; 004484da
    PUSH 0x5b9ae4                       ; 004484e0 | = "weight"
        ;   Label: LAB_004484e0
    LEA EAX,[EBX + 0x65b14]             ; 004484e5
    PUSH EAX                            ; 004484eb
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004484ec
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004484f1
    PUSH 0x5b9aeb                       ; 004484f4 | = "dampen"
    LEA EAX,[EBX + 0x65b18]             ; 004484f9
    PUSH EAX                            ; 004484ff
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00448500
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00448505
    PUSH 0x5b9af2                       ; 00448508 | = "spring"
    LEA EAX,[EBX + 0x65b1c]             ; 0044850d
    PUSH EAX                            ; 00448513
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00448514
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00448519
    PUSH 0x5b9af9                       ; 0044851c | = "friction"
    LEA EAX,[EBX + 0x65b20]             ; 00448521
    PUSH EAX                            ; 00448527
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00448528
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0044852d
    PUSH 0x5b9b02                       ; 00448530 | = "gravity"
    LEA EAX,[EBX + 0x65b24]             ; 00448535
    PUSH EAX                            ; 0044853b
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0044853c
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00448541
    PUSH 0x5b9b0a                       ; 00448544 | = "hitFloor"
    LEA EAX,[EBX + 0x65b2c]             ; 00448549
    PUSH EAX                            ; 0044854f
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00448550
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00448555
    CMP dword ptr [0x005f1784],0x3      ; 00448558 | g_CCurtainClassVersion
        ;   Label: LAB_00448558
    JL 0x00448575                       ; 0044855f
        ;   XREF to: 00448575 (CONDITIONAL_JUMP)  ; LAB_00448575
    PUSH 0x5b9b13                       ; 00448561 | = "simulateMe"
    LEA EAX,[EBX + 0x1f8]               ; 00448566
    PUSH EAX                            ; 0044856c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0044856d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00448572
    CMP dword ptr [0x005f1784],0x4      ; 00448575 | g_CCurtainClassVersion
        ;   Label: LAB_00448575
    JL 0x004485f6                       ; 0044857c
        ;   XREF to: 004485f6 (CONDITIONAL_JUMP)  ; LAB_004485f6
    PUSH 0x5b9b1e                       ; 0044857e | = "cinchedTop"
    LEA EAX,[EBX + 0x180]               ; 00448583
    PUSH EAX                            ; 00448589
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0044858a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044858f
    PUSH 0x5b9b29                       ; 00448592 | = "cinchedBottom"
    LEA EAX,[EBX + 0x18c]               ; 00448597
    PUSH EAX                            ; 0044859d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0044859e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004485a3
    PUSH 0x5b9b37                       ; 004485a6 | = "cinchedLeft"
    LEA EAX,[EBX + 0x184]               ; 004485ab
    PUSH EAX                            ; 004485b1
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004485b2
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004485b7
    PUSH 0x5b9b43                       ; 004485ba | = "cinchedRight"
    LEA EAX,[EBX + 0x188]               ; 004485bf
    PUSH EAX                            ; 004485c5
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004485c6
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004485cb
    PUSH 0x5b9b50                       ; 004485ce | = "falling"
    LEA EAX,[EBX + 0x190]               ; 004485d3
    PUSH EAX                            ; 004485d9
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004485da
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004485df
    PUSH 0x5b9b58                       ; 004485e2 | = "letGoEvent"
    LEA EAX,[EBX + 0x194]               ; 004485e7
    PUSH EAX                            ; 004485ed
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004485ee
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004485f3
    CMP dword ptr [0x005f1784],0x5      ; 004485f6 | g_CCurtainClassVersion
        ;   Label: LAB_004485f6
    JL 0x00448613                       ; 004485fd
        ;   XREF to: 00448613 (CONDITIONAL_JUMP)  ; LAB_00448613
    PUSH 0x5b9b63                       ; 004485ff | = "patchSize"
    LEA EAX,[EBX + 0x1fc]               ; 00448604
    PUSH EAX                            ; 0044860a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0044860b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00448610
    CMP dword ptr [0x005f1784],0x6      ; 00448613 | g_CCurtainClassVersion
        ;   Label: LAB_00448613
    JGE 0x00448621                      ; 0044861a
        ;   XREF to: 00448621 (CONDITIONAL_JUMP)  ; LAB_00448621
    ADD ESP,0x4                         ; 0044861c
    POP EBX                             ; 0044861f
    RET                                 ; 00448620
    PUSH 0x5b9b6d                       ; 00448621 | = "blockVirtualDirectorFlag"
        ;   Label: LAB_00448621
    ADD EBX,0x200                       ; 00448626
    PUSH EBX                            ; 0044862c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0044862d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00448632
    ADD ESP,0x4                         ; 00448635
    POP EBX                             ; 00448638
    RET                                 ; 00448639

