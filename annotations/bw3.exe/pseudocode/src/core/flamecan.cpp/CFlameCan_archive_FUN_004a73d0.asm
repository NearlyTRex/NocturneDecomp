; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_004a73d0(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005c0cb7+1
;   TerminatedCString s_onFire_005c0cc2
;   TerminatedCString s_timeToExplode_005c0cc9
;   TerminatedCString s_onFireCondition_005c0cd7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a73d0
        ;   Label: core_flamecan.cpp_CFlameCan_archive_FUN_004a73d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a73d1
    PUSH EBX                            ; 004a73d5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004a73d6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a73db
    PUSH 0x5c0cb8                       ; 004a73de | s_modelName_005c0cb7+1
    LEA EAX,[EBX + 0x158]               ; 004a73e3
    PUSH EAX                            ; 004a73e9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 004a73ea
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a73ef
    PUSH 0x5c0cc2                       ; 004a73f2 | = "onFire"
    LEA EAX,[EBX + 0x2d4]               ; 004a73f7
    PUSH EAX                            ; 004a73fd
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004a73fe
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a7403
    PUSH 0x5c0cc9                       ; 004a7406 | = "timeToExplode"
    LEA EAX,[EBX + 0x2d8]               ; 004a740b
    PUSH EAX                            ; 004a7411
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004a7412
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a7417
    PUSH 0x5c0cd7                       ; 004a741a | = "onFireCondition"
    ADD EBX,0x2dc                       ; 004a741f
    PUSH EBX                            ; 004a7425
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004a7426
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004a742b
    POP EBX                             ; 004a742e
    RET                                 ; 004a742f

