; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[14]:
;   core_cloth.cpp_FUN_00439710 at 00439a1f
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005968f5
;   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 at 0058e6a6
;   core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120 at 0058f136
;   core_skeledit.cpp_FUN_0058c190 at 0058c24e
;   core_skeledit.cpp_FUN_0058d790 at 0058d7ad
;   core_skeledit.cpp_FUN_0058e600 at 0058e617
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 at 005a16db
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 at 005a082e
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0 at 0059d9ec
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064e7f7
;   TerminatedCString s_Tried_to_do_something_wi_0064e80c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059a810
        ;   Label: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
    CMP dword ptr [EAX + 0x8fac],0x0    ; 0059a814
    JZ 0x0059a828                       ; 0059a81b | LAB_0059a828
        ;   XREF to: 0059a828 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059a81d
    MOV EAX,dword ptr [EAX + 0x8fac]    ; 0059a821
    RET                                 ; 0059a827
    PUSH EBX                            ; 0059a828
        ;   Label: LAB_0059a828
    MOV ECX,0x64e7f7                    ; 0059a829 | = "..\\core\\skeleton.cpp" | s_core_skeleton_cpp_0064e7f7 = ..\core\skeleton.cpp
    MOV EBX,0x2e6                       ; 0059a82e
    PUSH 0x64e80c                       ; 0059a833 | = "Tried to do something with the skelet..." | s_Tried_to_do_something_wi_0064e80c = Tried to do something with the skeleton, but skeleton ptr not set!
    MOV dword ptr [0x02f0ca48],ECX      ; 0059a838 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0059a83e | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059a844 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0059a849
    POP EBX                             ; 0059a84c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059a84d
    MOV EAX,dword ptr [EAX + 0x8fac]    ; 0059a851
    RET                                 ; 0059a857

