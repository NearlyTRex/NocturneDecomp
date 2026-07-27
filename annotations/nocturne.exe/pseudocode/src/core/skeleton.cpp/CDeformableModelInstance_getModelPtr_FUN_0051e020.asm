; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(int param_1)
;
;
; XREF[50]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040aabc
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 004122f0
;   core_batman.cpp_CBatman_setup_FUN_004134a0 at 00413630
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0 at 0041a122
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00418800 at 00418972
;   core_bride.cpp_CBride_setup_FUN_0041fc20 at 0041fd2c
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70 at 00422eed
;   core_bugs.cpp_FUN_00423790 at 0042384b
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60 at 00427b9d
;   core_charactr.cpp_CCharacter_getPartDominantBone_FUN_00426570 at 0042657f
;   ... and 40 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591c8b
;   TerminatedCString s_CDeformableModelInstance_00591ca0
;   TerminatedCString s_core_skeleton_cpp_00591cee
;   TerminatedCString s_Tried_to_do_something_wi_00591d03
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e020
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
    PUSH EDI                            ; 0051e021
    PUSH EBP                            ; 0051e022
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051e023
    CMP dword ptr [EBX + 0x22b0],0x0    ; 0051e027
    JNZ 0x0051e05c                      ; 0051e02e
        ;   XREF to: 0051e05c (CONDITIONAL_JUMP)  ; LAB_0051e05c
    CMP byte ptr [EBX + 0x2260],0x0     ; 0051e030
    JNZ 0x0051e066                      ; 0051e037
        ;   XREF to: 0051e066 (CONDITIONAL_JUMP)  ; LAB_0051e066
    MOV EDI,0x591c8b                    ; 0051e039 | = "..\\core\\skeleton.cpp"
    MOV EBP,0xdd1                       ; 0051e03e
    PUSH 0x591ca0                       ; 0051e043 | = "CDeformableModelInstance::getModelPtr..."
    MOV dword ptr [0x01cc4800],EDI      ; 0051e048 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0051e04e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051e054
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051e059
    MOV EAX,dword ptr [EBX + 0x22b0]    ; 0051e05c
        ;   Label: LAB_0051e05c
    POP EBP                             ; 0051e062
    POP EDI                             ; 0051e063
    POP EBX                             ; 0051e064
    RET                                 ; 0051e065
    PUSH ESI                            ; 0051e066
        ;   Label: LAB_0051e066
    LEA EAX,[EBX + 0x2260]              ; 0051e067
    PUSH EAX                            ; 0051e06d
    MOV ECX,0x591cee                    ; 0051e06e | = "..\\core\\skeleton.cpp"
    MOV ESI,0xdd3                       ; 0051e073
    PUSH 0x591d03                       ; 0051e078 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0051e07d | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0051e083 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051e089
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0051e08e
    POP ESI                             ; 0051e091
    MOV EAX,dword ptr [EBX + 0x22b0]    ; 0051e092
    POP EBP                             ; 0051e098
    POP EDI                             ; 0051e099
    POP EBX                             ; 0051e09a
    RET                                 ; 0051e09b

