; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_archive_FUN_0044c2e0(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_curtainSize_005d7451+1
;   TerminatedCString s_curtainTexture_005d745e
;   TerminatedCString s_opacity_005d746d
;   TerminatedCString s_cinched_005d7475
;   TerminatedCString s_weight_005d747d
;   TerminatedCString s_dampen_005d7484
;   TerminatedCString s_spring_005d748b
;   TerminatedCString s_friction_005d7492
;   TerminatedCString s_gravity_005d749b
;   TerminatedCString s_hitFloor_005d74a3
;   TerminatedCString s_simulateMe_005d74ac
;   TerminatedCString s_cinchedTop_005d74b7
;   TerminatedCString s_cinchedBottom_005d74c2
;   TerminatedCString s_cinchedLeft_005d74d0
;   TerminatedCString s_cinchedRight_005d74dc
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c2e0
        ;   Label: core_curtain.cpp_CCurtain_archive_FUN_0044c2e0
    SUB ESP,0x4                         ; 0044c2e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044c2e4
    PUSH EBX                            ; 0044c2e8
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0044c2e9
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044c2ee
    PUSH 0x5d7452                       ; 0044c2f1 | s_curtainSize_005d7451+1
    LEA EAX,[EBX + 0x158]               ; 0044c2f6
    PUSH EAX                            ; 0044c2fc
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 0044c2fd
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 0044c302
    PUSH 0x5d745e                       ; 0044c305 | = "curtainTexture"
    LEA EAX,[EBX + 0x16c]               ; 0044c30a
    PUSH EAX                            ; 0044c310
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0044c311
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0044c316
    PUSH 0x5d746d                       ; 0044c319 | = "opacity"
    LEA EAX,[EBX + 0x17c]               ; 0044c31e
    PUSH EAX                            ; 0044c324
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c325
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c32a
    XOR EDX,EDX                         ; 0044c32d
    MOV ECX,dword ptr [0x006111d0]      ; 0044c32f | g_CCurtainClassVersion
    MOV dword ptr [ESP],EDX             ; 0044c335
    CMP ECX,0x2                         ; 0044c338
    JL 0x0044c418                       ; 0044c33b
        ;   XREF to: 0044c418 (CONDITIONAL_JUMP)  ; LAB_0044c418
    CMP ECX,0x4                         ; 0044c341
    JGE 0x0044c3a0                      ; 0044c344
        ;   XREF to: 0044c3a0 (CONDITIONAL_JUMP)  ; LAB_0044c3a0
    PUSH 0x5d7475                       ; 0044c346 | = "cinched"
    LEA EAX,[ESP + 0x4]                 ; 0044c34b
    PUSH EAX                            ; 0044c34f
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c350
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c355
    TEST byte ptr [ESP],0x1             ; 0044c358
    SETNZ AL                            ; 0044c35c
    AND EAX,0xff                        ; 0044c35f
    MOV dword ptr [EBX + 0x180],EAX     ; 0044c364
    TEST byte ptr [ESP],0x2             ; 0044c36a
    SETNZ AL                            ; 0044c36e
    AND EAX,0xff                        ; 0044c371
    MOV dword ptr [EBX + 0x18c],EAX     ; 0044c376
    TEST byte ptr [ESP],0x4             ; 0044c37c
    SETNZ AL                            ; 0044c380
    AND EAX,0xff                        ; 0044c383
    MOV dword ptr [EBX + 0x184],EAX     ; 0044c388
    TEST byte ptr [ESP],0x8             ; 0044c38e
    SETNZ AL                            ; 0044c392
    AND EAX,0xff                        ; 0044c395
    MOV dword ptr [EBX + 0x188],EAX     ; 0044c39a
    PUSH 0x5d747d                       ; 0044c3a0 | = "weight"
        ;   Label: LAB_0044c3a0
    LEA EAX,[EBX + 0x65b14]             ; 0044c3a5
    PUSH EAX                            ; 0044c3ab
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0044c3ac
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0044c3b1
    PUSH 0x5d7484                       ; 0044c3b4 | = "dampen"
    LEA EAX,[EBX + 0x65b18]             ; 0044c3b9
    PUSH EAX                            ; 0044c3bf
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0044c3c0
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0044c3c5
    PUSH 0x5d748b                       ; 0044c3c8 | = "spring"
    LEA EAX,[EBX + 0x65b1c]             ; 0044c3cd
    PUSH EAX                            ; 0044c3d3
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0044c3d4
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0044c3d9
    PUSH 0x5d7492                       ; 0044c3dc | = "friction"
    LEA EAX,[EBX + 0x65b20]             ; 0044c3e1
    PUSH EAX                            ; 0044c3e7
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0044c3e8
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0044c3ed
    PUSH 0x5d749b                       ; 0044c3f0 | = "gravity"
    LEA EAX,[EBX + 0x65b24]             ; 0044c3f5
    PUSH EAX                            ; 0044c3fb
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0044c3fc
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0044c401
    PUSH 0x5d74a3                       ; 0044c404 | = "hitFloor"
    LEA EAX,[EBX + 0x65b2c]             ; 0044c409
    PUSH EAX                            ; 0044c40f
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c410
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c415
    CMP dword ptr [0x006111d0],0x3      ; 0044c418 | g_CCurtainClassVersion
        ;   Label: LAB_0044c418
    JL 0x0044c435                       ; 0044c41f
        ;   XREF to: 0044c435 (CONDITIONAL_JUMP)  ; LAB_0044c435
    PUSH 0x5d74ac                       ; 0044c421 | = "simulateMe"
    LEA EAX,[EBX + 0x1f8]               ; 0044c426
    PUSH EAX                            ; 0044c42c
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c42d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c432
    CMP dword ptr [0x006111d0],0x4      ; 0044c435 | g_CCurtainClassVersion
        ;   Label: LAB_0044c435
    JL 0x0044c4b6                       ; 0044c43c
        ;   XREF to: 0044c4b6 (CONDITIONAL_JUMP)  ; LAB_0044c4b6
    PUSH 0x5d74b7                       ; 0044c43e | = "cinchedTop"
    LEA EAX,[EBX + 0x180]               ; 0044c443
    PUSH EAX                            ; 0044c449
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c44a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c44f
    PUSH 0x5d74c2                       ; 0044c452 | = "cinchedBottom"
    LEA EAX,[EBX + 0x18c]               ; 0044c457
    PUSH EAX                            ; 0044c45d
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c45e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c463
    PUSH 0x5d74d0                       ; 0044c466 | = "cinchedLeft"
    LEA EAX,[EBX + 0x184]               ; 0044c46b
    PUSH EAX                            ; 0044c471
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c472
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c477
    PUSH 0x5d74dc                       ; 0044c47a | = "cinchedRight"
    LEA EAX,[EBX + 0x188]               ; 0044c47f
    PUSH EAX                            ; 0044c485
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c486
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c48b
    PUSH 0x5d74e9                       ; 0044c48e | = "falling"
    LEA EAX,[EBX + 0x190]               ; 0044c493
    PUSH EAX                            ; 0044c499
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c49a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c49f
    PUSH 0x5d74f1                       ; 0044c4a2 | = "letGoEvent"
    LEA EAX,[EBX + 0x194]               ; 0044c4a7
    PUSH EAX                            ; 0044c4ad
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0044c4ae
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0044c4b3
    CMP dword ptr [0x006111d0],0x5      ; 0044c4b6 | g_CCurtainClassVersion
        ;   Label: LAB_0044c4b6
    JL 0x0044c4d3                       ; 0044c4bd
        ;   XREF to: 0044c4d3 (CONDITIONAL_JUMP)  ; LAB_0044c4d3
    PUSH 0x5d74fc                       ; 0044c4bf | = "patchSize"
    LEA EAX,[EBX + 0x1fc]               ; 0044c4c4
    PUSH EAX                            ; 0044c4ca
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0044c4cb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0044c4d0
    CMP dword ptr [0x006111d0],0x6      ; 0044c4d3 | g_CCurtainClassVersion
        ;   Label: LAB_0044c4d3
    JGE 0x0044c4e1                      ; 0044c4da
        ;   XREF to: 0044c4e1 (CONDITIONAL_JUMP)  ; LAB_0044c4e1
    ADD ESP,0x4                         ; 0044c4dc
    POP EBX                             ; 0044c4df
    RET                                 ; 0044c4e0
    PUSH 0x5d7506                       ; 0044c4e1 | = "blockVirtualDirectorFlag"
        ;   Label: LAB_0044c4e1
    ADD EBX,0x200                       ; 0044c4e6
    PUSH EBX                            ; 0044c4ec
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0044c4ed
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044c4f2
    ADD ESP,0x4                         ; 0044c4f5
    POP EBX                             ; 0044c4f8
    RET                                 ; 0044c4f9

