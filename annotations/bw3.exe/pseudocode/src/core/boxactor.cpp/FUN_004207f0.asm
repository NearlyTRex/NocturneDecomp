; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_004207f0(CBoxActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_lightType_005b7675
;   TerminatedCString s_bLightPos_005b767f
;   TerminatedCString s_lightOrient_005b7689
;   TerminatedCString s_lightFov_005b7695
;   TerminatedCString s_lightFov_005b769e
;   TerminatedCString s_light_status_005b76a7
;   TerminatedCString s_light_falloff_005b76b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveOrientation_FUN_0040b4a0
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004207f0
        ;   Label: core_boxactor.cpp_FUN_004207f0
    PUSH ESI                            ; 004207f1
    SUB ESP,0x4                         ; 004207f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004207f5
    PUSH EBX                            ; 004207f9
    CALL core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90 ; 004207fa
        ;   XREF to: 0041fb90 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 004207ff
    PUSH 0x5b7675                       ; 00420802 | = "lightType"
    LEA EAX,[EBX + 0x6e8]               ; 00420807
    PUSH EAX                            ; 0042080d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042080e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [EBX + 0x6e8]     ; 00420813
    ADD ESP,0x8                         ; 00420819
    TEST EDX,EDX                        ; 0042081c
    JNZ 0x00420871                      ; 0042081e
        ;   XREF to: 00420871 (CONDITIONAL_JUMP)  ; LAB_00420871
    PUSH 0x5b767f                       ; 00420820 | = "bLightPos"
    LEA EAX,[EBX + 0x3698]              ; 00420825
    PUSH EAX                            ; 0042082b
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0042082c
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 00420831
    PUSH 0x5b7689                       ; 00420834 | = "lightOrient"
    LEA EAX,[EBX + 0x36a4]              ; 00420839
    PUSH EAX                            ; 0042083f
    LEA ESI,[EBX + 0x6ec]               ; 00420840
    CALL core_actor.cpp_archiveOrientation_FUN_0040b4a0 ; 00420846
        ;   XREF to: 0040b4a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b4a0()
    MOV ECX,dword ptr [0x007df9b8]      ; 0042084b | DAT_007df9b8
    ADD ESP,0x8                         ; 00420851
    CMP ECX,0x1                         ; 00420854
    JNZ 0x00420895                      ; 00420857
        ;   XREF to: 00420895 (CONDITIONAL_JUMP)  ; LAB_00420895
    PUSH 0x5b7695                       ; 00420859 | = "lightFov"
    LEA EAX,[ESP + 0x4]                 ; 0042085e
    PUSH EAX                            ; 00420862
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00420863
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00420868
    MOV EAX,dword ptr [ESP]             ; 0042086b
    MOV dword ptr [ESI + 0x38],EAX      ; 0042086e
    PUSH 0x5b76a7                       ; 00420871 | = "light status"
        ;   Label: LAB_00420871
    LEA EAX,[EBX + 0x23a0]              ; 00420876
    PUSH EAX                            ; 0042087c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042087d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [EBX + 0x6e8]     ; 00420882
    ADD ESP,0x8                         ; 00420888
    TEST ESI,ESI                        ; 0042088b
    JZ 0x004208b0                       ; 0042088d
        ;   XREF to: 004208b0 (CONDITIONAL_JUMP)  ; LAB_004208b0
    ADD ESP,0x4                         ; 0042088f
    POP ESI                             ; 00420892
    POP EBX                             ; 00420893
    RET                                 ; 00420894
    PUSH 0x5b769e                       ; 00420895 | = "lightFov"
        ;   Label: LAB_00420895
    LEA EAX,[ESP + 0x4]                 ; 0042089a
    FLD float ptr [ESI + 0x38]          ; 0042089e
    PUSH EAX                            ; 004208a1
    FSTP float ptr [ESP + 0x8]          ; 004208a2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004208a6
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004208ab
    JMP 0x00420871                      ; 004208ae
        ;   XREF to: 00420871 (UNCONDITIONAL_JUMP)  ; LAB_00420871
    PUSH 0x5b76b4                       ; 004208b0 | = "light falloff"
        ;   Label: LAB_004208b0
    ADD EBX,0x82c                       ; 004208b5
    PUSH EBX                            ; 004208bb
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004208bc
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004208c1
    ADD ESP,0x4                         ; 004208c4
    POP ESI                             ; 004208c7
    POP EBX                             ; 004208c8
    RET                                 ; 004208c9

