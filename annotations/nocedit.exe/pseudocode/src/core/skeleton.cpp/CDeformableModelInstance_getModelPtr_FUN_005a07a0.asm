; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[57]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 004097ec
;   core_batcreat.cpp_CBatCreature_setup_FUN_00415150 at 004152e0
;   core_batman.cpp_CBatman_setup_FUN_00416510 at 004166a0
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b2f3
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041d680 at 0041d6b2
;   core_boneguy.cpp_CBoneGuy_setup_FUN_0041bd90 at 0041bf02
;   core_bride.cpp_CBride_setup_FUN_00423810 at 0042391c
;   core_bugs.cpp_CBugs_FUN_004268e0 at 00426b5d
;   core_bugs.cpp_CBugs_FUN_00427400 at 00427500
;   core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0 at 0042ba1d
;   ... and 47 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064eef0
;   TerminatedCString s_CDeformableModelInstance_0064ef05
;   TerminatedCString s_core_skeleton_cpp_0064ef53
;   TerminatedCString s_Tried_to_do_something_wi_0064ef68
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a07a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
    PUSH EDI                            ; 005a07a1
    PUSH EBP                            ; 005a07a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a07a3
    CMP dword ptr [EBX + 0x22b0],0x0    ; 005a07a7
    JNZ 0x005a07dc                      ; 005a07ae
        ;   XREF to: 005a07dc (CONDITIONAL_JUMP)  ; LAB_005a07dc
    CMP byte ptr [EBX + 0x2260],0x0     ; 005a07b0
    JNZ 0x005a07e6                      ; 005a07b7
        ;   XREF to: 005a07e6 (CONDITIONAL_JUMP)  ; LAB_005a07e6
    MOV EDI,0x64eef0                    ; 005a07b9 | = "..\\core\\skeleton.cpp"
    MOV EBP,0xdd1                       ; 005a07be
    PUSH 0x64ef05                       ; 005a07c3 | = "CDeformableModelInstance::getModelPtr..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005a07c8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005a07ce | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a07d4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a07d9
    MOV EAX,dword ptr [EBX + 0x22b0]    ; 005a07dc
        ;   Label: LAB_005a07dc
    POP EBP                             ; 005a07e2
    POP EDI                             ; 005a07e3
    POP EBX                             ; 005a07e4
    RET                                 ; 005a07e5
    PUSH ESI                            ; 005a07e6
        ;   Label: LAB_005a07e6
    LEA EAX,[EBX + 0x2260]              ; 005a07e7
    PUSH EAX                            ; 005a07ed
    MOV ECX,0x64ef53                    ; 005a07ee | = "..\\core\\skeleton.cpp"
    MOV ESI,0xdd3                       ; 005a07f3
    PUSH 0x64ef68                       ; 005a07f8 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a07fd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a0803 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a0809
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a080e
    POP ESI                             ; 005a0811
    MOV EAX,dword ptr [EBX + 0x22b0]    ; 005a0812
    POP EBP                             ; 005a0818
    POP EDI                             ; 005a0819
    POP EBX                             ; 005a081a
    RET                                 ; 005a081b

