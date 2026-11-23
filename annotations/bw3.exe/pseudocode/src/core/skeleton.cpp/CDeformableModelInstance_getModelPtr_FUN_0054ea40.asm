; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[48]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_004091b0 at 0040966c
;   core_boneguy.cpp_CBoneGuy_explode_FUN_00419550 at 004195a3
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00417630 at 004177a5
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423cd0 at 00423d87
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00423050 at 0042335b
;   core_carved.cpp_CCarved_setup_FUN_00425ab0 at 00425bc4
;   core_charactr.cpp_CCharacter_dismember_FUN_004300e0 at 0043025c
;   core_charactr.cpp_CCharacter_getPartDominantBone_FUN_0042e370 at 0042e37f
;   core_charactr.cpp_CCharacter_processFire_FUN_0042e8c0 at 0042e916
;   core_charactr.cpp_CCharacter_renderBurn_FUN_0042f010 at 0042f06b
;   ... and 38 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d20f4
;   TerminatedCString s_CDeformableModelInstance_005d2109
;   TerminatedCString s_core_skeleton_cpp_005d2157
;   TerminatedCString s_Tried_to_do_something_wi_005d216c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ea40
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
    PUSH EDI                            ; 0054ea41
    PUSH EBP                            ; 0054ea42
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054ea43
    CMP dword ptr [EBX + 0x23a0],0x0    ; 0054ea47
    JNZ 0x0054ea7c                      ; 0054ea4e
        ;   XREF to: 0054ea7c (CONDITIONAL_JUMP)  ; LAB_0054ea7c
    CMP byte ptr [EBX + 0x2350],0x0     ; 0054ea50
    JNZ 0x0054ea86                      ; 0054ea57
        ;   XREF to: 0054ea86 (CONDITIONAL_JUMP)  ; LAB_0054ea86
    MOV EDI,0x5d20f4                    ; 0054ea59 | = "..\\core\\skeleton.cpp"
    MOV EBP,0xde7                       ; 0054ea5e
    PUSH 0x5d2109                       ; 0054ea63 | = "CDeformableModelInstance::getModelPtr..."
    MOV dword ptr [0x01d71de0],EDI      ; 0054ea68 | g_CurrentFilename
    MOV dword ptr [0x01d71de4],EBP      ; 0054ea6e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 0054ea74
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 0054ea79
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 0054ea7c
        ;   Label: LAB_0054ea7c
    POP EBP                             ; 0054ea82
    POP EDI                             ; 0054ea83
    POP EBX                             ; 0054ea84
    RET                                 ; 0054ea85
    PUSH ESI                            ; 0054ea86
        ;   Label: LAB_0054ea86
    LEA EAX,[EBX + 0x2350]              ; 0054ea87
    PUSH EAX                            ; 0054ea8d
    MOV ECX,0x5d2157                    ; 0054ea8e | = "..\\core\\skeleton.cpp"
    MOV ESI,0xde9                       ; 0054ea93
    PUSH 0x5d216c                       ; 0054ea98 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0054ea9d | g_CurrentFilename
    MOV dword ptr [0x01d71de4],ESI      ; 0054eaa3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 0054eaa9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x8                         ; 0054eaae
    POP ESI                             ; 0054eab1
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 0054eab2
    POP EBP                             ; 0054eab8
    POP EDI                             ; 0054eab9
    POP EBX                             ; 0054eaba
    RET                                 ; 0054eabb

