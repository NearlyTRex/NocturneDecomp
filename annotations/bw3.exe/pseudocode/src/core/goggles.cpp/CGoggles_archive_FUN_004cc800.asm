; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_goggles_cpp_CGoggles_archive_FUN_004cc800(CGoggles *this_ptr)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005c4617
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cc800
        ;   Label: core_goggles.cpp_CGoggles_archive_FUN_004cc800
    PUSH EDX                            ; 004cc804
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004cc805
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cc80a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc80d
    PUSH 0x5c4617                       ; 004cc811 | = "modelName"
    ADD EAX,0x158                       ; 004cc816
    PUSH EAX                            ; 004cc81b
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 004cc81c
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cc821
    RET                                 ; 004cc824

