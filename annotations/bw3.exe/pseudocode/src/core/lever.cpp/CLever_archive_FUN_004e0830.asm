; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_CLever_archive_FUN_004e0830(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005c6921+1
;   TerminatedCString s_modelName_005c692c
;   TerminatedCString s_leverType_005c6936
;   TerminatedCString s_onEvent_005c6940
;   TerminatedCString s_offEvent_005c6948
;   TerminatedCString s_sound_005c6951
;   TerminatedCString s_param_005c6957
;   TerminatedCString s_momentaryFlag_005c695d
;   TerminatedCString s_linkedLever_005c696b
;   TerminatedCString s_endVertexIndex_005c6977
;   TerminatedCString s_moving_005c6986
;   TerminatedCString s_moveToPct_005c698d
;   TerminatedCString s_rules_005c6997
;   TerminatedCString s_allowedSides_005c699d
;   TerminatedCString s_enableCollision_005c69aa
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveRules_FUN_0040c0c0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0830
        ;   Label: core_lever.cpp_CLever_archive_FUN_004e0830
    PUSH ESI                            ; 004e0831
    PUSH EDI                            ; 004e0832
    SUB ESP,0xc8                        ; 004e0833
    MOV EBX,dword ptr [ESP + 0xd8]      ; 004e0839
    PUSH EBX                            ; 004e0840
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004e0841
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    MOV EDX,dword ptr [0x007df9b8]      ; 004e0846 | DAT_007df9b8
    ADD ESP,0x4                         ; 004e084c
    LEA EDI,[EBX + 0x158]               ; 004e084f
    CMP EDX,0x1                         ; 004e0855
    JZ 0x004e09cd                       ; 004e0858
        ;   XREF to: 004e09cd (CONDITIONAL_JUMP)  ; LAB_004e09cd
    MOV EDI,ESP                         ; 004e085e
    LEA ESI,[EBX + 0x1d0]               ; 004e0860
    PUSH EDI                            ; 004e0866
    MOV AL,byte ptr [ESI]               ; 004e0867
        ;   Label: LAB_004e0867
    MOV byte ptr [EDI],AL               ; 004e0869
    CMP AL,0x0                          ; 004e086b
    JZ 0x004e087f                       ; 004e086d
        ;   XREF to: 004e087f (CONDITIONAL_JUMP)  ; LAB_004e087f
    MOV AL,byte ptr [ESI + 0x1]         ; 004e086f
    ADD ESI,0x2                         ; 004e0872
    MOV byte ptr [EDI + 0x1],AL         ; 004e0875
    ADD EDI,0x2                         ; 004e0878
    CMP AL,0x0                          ; 004e087b
    JNZ 0x004e0867                      ; 004e087d
        ;   XREF to: 004e0867 (CONDITIONAL_JUMP)  ; LAB_004e0867
    POP EDI                             ; 004e087f
        ;   Label: LAB_004e087f
    PUSH 0x5c692c                       ; 004e0880 | = "modelName"
    LEA ESI,[ESP + 0x4]                 ; 004e0885
    PUSH ESI                            ; 004e0889
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004e088a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e088f
        ;   Label: LAB_004e088f
    PUSH 0x5c6936                       ; 004e0892 | = "leverType"
    LEA ESI,[EBX + 0x2d8]               ; 004e0897
    PUSH ESI                            ; 004e089d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e089e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e08a3
    PUSH 0x5c6940                       ; 004e08a6 | = "onEvent"
    LEA ESI,[EBX + 0x2e0]               ; 004e08ab
    PUSH ESI                            ; 004e08b1
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004e08b2
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e08b7
    PUSH 0x5c6948                       ; 004e08ba | = "offEvent"
    LEA ESI,[EBX + 0x344]               ; 004e08bf
    PUSH ESI                            ; 004e08c5
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004e08c6
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e08cb
    PUSH 0x5c6951                       ; 004e08ce | = "sound"
    LEA ESI,[EBX + 0x3a8]               ; 004e08d3
    PUSH ESI                            ; 004e08d9
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004e08da
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e08df
    PUSH 0x5c6957                       ; 004e08e2 | = "param"
    LEA ESI,[EBX + 0x2dc]               ; 004e08e7
    PUSH ESI                            ; 004e08ed
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004e08ee
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV ECX,dword ptr [0x006002b0]      ; 004e08f3 | g_CLeverClassVersion
    ADD ESP,0x8                         ; 004e08f9
    CMP ECX,0x2                         ; 004e08fc
    JL 0x004e0915                       ; 004e08ff
        ;   XREF to: 004e0915 (CONDITIONAL_JUMP)  ; LAB_004e0915
    PUSH 0x5c695d                       ; 004e0901 | = "momentaryFlag"
    LEA ESI,[EBX + 0x40c]               ; 004e0906
    PUSH ESI                            ; 004e090c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e090d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e0912
    CMP dword ptr [0x006002b0],0x3      ; 004e0915 | g_CLeverClassVersion
        ;   Label: LAB_004e0915
    JL 0x004e0932                       ; 004e091c
        ;   XREF to: 004e0932 (CONDITIONAL_JUMP)  ; LAB_004e0932
    PUSH 0x5c696b                       ; 004e091e | = "linkedLever"
    LEA ESI,[EBX + 0x410]               ; 004e0923
    PUSH ESI                            ; 004e0929
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004e092a
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e092f
    CMP dword ptr [0x006002b0],0x4      ; 004e0932 | g_CLeverClassVersion
        ;   Label: LAB_004e0932
    JL 0x004e094f                       ; 004e0939
        ;   XREF to: 004e094f (CONDITIONAL_JUMP)  ; LAB_004e094f
    PUSH 0x5c6977                       ; 004e093b | = "endVertexIndex"
    LEA ESI,[EBX + 0x414]               ; 004e0940
    PUSH ESI                            ; 004e0946
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e0947
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e094c
    CMP dword ptr [0x006002b0],0x5      ; 004e094f | g_CLeverClassVersion
        ;   Label: LAB_004e094f
    JL 0x004e0980                       ; 004e0956
        ;   XREF to: 004e0980 (CONDITIONAL_JUMP)  ; LAB_004e0980
    PUSH 0x5c6986                       ; 004e0958 | = "moving"
    LEA ESI,[EBX + 0x418]               ; 004e095d
    PUSH ESI                            ; 004e0963
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e0964
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e0969
    PUSH 0x5c698d                       ; 004e096c | = "moveToPct"
    LEA ESI,[EBX + 0x41c]               ; 004e0971
    PUSH ESI                            ; 004e0977
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004e0978
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e097d
    CMP dword ptr [0x006002b0],0x6      ; 004e0980 | g_CLeverClassVersion
        ;   Label: LAB_004e0980
    JL 0x004e099d                       ; 004e0987
        ;   XREF to: 004e099d (CONDITIONAL_JUMP)  ; LAB_004e099d
    PUSH 0x5c6997                       ; 004e0989 | = "rules"
    LEA ESI,[EBX + 0x420]               ; 004e098e
    PUSH ESI                            ; 004e0994
    CALL core_actor.cpp_archiveRules_FUN_0040c0c0 ; 004e0995
        ;   XREF to: 0040c0c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveRules_FUN_0040c0c0(CRuleList * rules, char * property_name)
    ADD ESP,0x8                         ; 004e099a
    CMP dword ptr [0x006002b0],0x7      ; 004e099d | g_CLeverClassVersion
        ;   Label: LAB_004e099d
    JL 0x004e09ba                       ; 004e09a4
        ;   XREF to: 004e09ba (CONDITIONAL_JUMP)  ; LAB_004e09ba
    PUSH 0x5c699d                       ; 004e09a6 | = "allowedSides"
    LEA ESI,[EBX + 0x80c]               ; 004e09ab
    PUSH ESI                            ; 004e09b1
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e09b2
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e09b7
    CMP dword ptr [0x006002b0],0x8      ; 004e09ba | g_CLeverClassVersion
        ;   Label: LAB_004e09ba
    JGE 0x004e09ed                      ; 004e09c1
        ;   XREF to: 004e09ed (CONDITIONAL_JUMP)  ; LAB_004e09ed
    ADD ESP,0xc8                        ; 004e09c3
    POP EDI                             ; 004e09c9
    POP ESI                             ; 004e09ca
    POP EBX                             ; 004e09cb
    RET                                 ; 004e09cc
    PUSH 0x5c6922                       ; 004e09cd | s_modelName_005c6921+1
        ;   Label: LAB_004e09cd
    LEA ESI,[ESP + 0x4]                 ; 004e09d2
    PUSH ESI                            ; 004e09d6
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004e09d7
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e09dc
    MOV ESI,ESP                         ; 004e09df
    PUSH ESI                            ; 004e09e1
    PUSH EDI                            ; 004e09e2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004e09e3
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    JMP 0x004e088f                      ; 004e09e8
        ;   XREF to: 004e088f (UNCONDITIONAL_JUMP)  ; LAB_004e088f
    PUSH 0x5c69aa                       ; 004e09ed | = "enableCollision"
        ;   Label: LAB_004e09ed
    ADD EBX,0x810                       ; 004e09f2
    PUSH EBX                            ; 004e09f8
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e09f9
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e09fe
    ADD ESP,0xc8                        ; 004e0a01
    POP EDI                             ; 004e0a07
    POP ESI                             ; 004e0a08
    POP EBX                             ; 004e0a09
    RET                                 ; 004e0a0a

