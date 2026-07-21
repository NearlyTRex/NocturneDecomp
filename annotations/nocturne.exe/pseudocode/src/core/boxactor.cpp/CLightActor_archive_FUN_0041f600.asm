; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_CLightActor_archive_FUN_0041f600(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   string s_lightType_0057996b
;   string s_bLightPos_00579975
;   string s_lightOrient_0057997f
;   string s_lightFov_0057998b
;   string s_lightFov_00579994
;   string s_light_status_0057999d
;   string s_light_falloff_005799aa
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveOrientation_FUN_0040c4f0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f600
        ;   Label: core_boxactor.cpp_CLightActor_archive_FUN_0041f600
    PUSH ESI                            ; 0041f601
    SUB ESP,0x4                         ; 0041f602
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041f605
    PUSH EBX                            ; 0041f609
    CALL core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60 ; 0041f60a
        ;   XREF to: 0041ec60 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60()
    ADD ESP,0x4                         ; 0041f60f
    PUSH 0x57996b                       ; 0041f612 | = "lightType"
    LEA EAX,[EBX + 0x664]               ; 0041f617
    PUSH EAX                            ; 0041f61d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0041f61e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    MOV EDX,dword ptr [EBX + 0x664]     ; 0041f623
    ADD ESP,0x8                         ; 0041f629
    TEST EDX,EDX                        ; 0041f62c
    JNZ 0x0041f684                      ; 0041f62e
        ;   XREF to: 0041f684 (CONDITIONAL_JUMP)  ; LAB_0041f684
    PUSH 0x579975                       ; 0041f630 | = "bLightPos"
    LEA EAX,[EBX + 0x3614]              ; 0041f635
    PUSH EAX                            ; 0041f63b
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0041f63c
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 0041f641
    PUSH 0x57997f                       ; 0041f644 | = "lightOrient"
    LEA EAX,[EBX + 0x3620]              ; 0041f649
    PUSH EAX                            ; 0041f64f
    LEA ESI,[EBX + 0x668]               ; 0041f650
    CALL core_actor.cpp_archiveOrientation_FUN_0040c4f0 ; 0041f656
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040c4f0()
    MOV ECX,dword ptr [0x00763e88]      ; 0041f65b | DAT_00763e88
    ADD ESP,0x8                         ; 0041f661
    CMP ECX,0x1                         ; 0041f664
    JNZ 0x0041f6a8                      ; 0041f667
        ;   XREF to: 0041f6a8 (CONDITIONAL_JUMP)  ; LAB_0041f6a8
    PUSH 0x57998b                       ; 0041f669 | = "lightFov"
    LEA EAX,[ESP + 0x4]                 ; 0041f66e
    PUSH EAX                            ; 0041f672
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0041f673
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0041f678
    MOV EAX,dword ptr [ESP]             ; 0041f67b
    MOV dword ptr [ESI + 0x138],EAX     ; 0041f67e
    PUSH 0x57999d                       ; 0041f684 | = "light status"
        ;   Label: LAB_0041f684
    LEA EAX,[EBX + 0x231c]              ; 0041f689
    PUSH EAX                            ; 0041f68f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0041f690
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    MOV ESI,dword ptr [EBX + 0x664]     ; 0041f695
    ADD ESP,0x8                         ; 0041f69b
    TEST ESI,ESI                        ; 0041f69e
    JZ 0x0041f6c6                       ; 0041f6a0
        ;   XREF to: 0041f6c6 (CONDITIONAL_JUMP)  ; LAB_0041f6c6
    ADD ESP,0x4                         ; 0041f6a2
    POP ESI                             ; 0041f6a5
    POP EBX                             ; 0041f6a6
    RET                                 ; 0041f6a7
    PUSH 0x579994                       ; 0041f6a8 | = "lightFov"
        ;   Label: LAB_0041f6a8
    LEA EAX,[ESP + 0x4]                 ; 0041f6ad
    FLD float ptr [ESI + 0x138]         ; 0041f6b1
    PUSH EAX                            ; 0041f6b7
    FSTP float ptr [ESP + 0x8]          ; 0041f6b8
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0041f6bc
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0041f6c1
    JMP 0x0041f684                      ; 0041f6c4
        ;   XREF to: 0041f684 (UNCONDITIONAL_JUMP)  ; LAB_0041f684
    PUSH 0x5799aa                       ; 0041f6c6 | = "light falloff"
        ;   Label: LAB_0041f6c6
    ADD EBX,0x768                       ; 0041f6cb
    PUSH EBX                            ; 0041f6d1
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0041f6d2
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0041f6d7
    ADD ESP,0x4                         ; 0041f6da
    POP ESI                             ; 0041f6dd
    POP EBX                             ; 0041f6de
    RET                                 ; 0041f6df

