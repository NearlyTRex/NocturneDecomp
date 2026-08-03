; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040ecf0(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005781fb
;   TerminatedCString s_weaponClassName_00578205
;   TerminatedCString s_ammoCount_00578215
;   TerminatedCString s_ammoType_0057821f
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ecf0
        ;   Label: core_ammo.cpp_CAmmo_archive_FUN_0040ecf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ecf1
    PUSH EBX                            ; 0040ecf5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0040ecf6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ecfb
    PUSH 0x5781fb                       ; 0040ecfe | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 0040ed03
    PUSH EAX                            ; 0040ed09
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0040ed0a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ed0f
    PUSH 0x578205                       ; 0040ed12 | = "weaponClassName"
    LEA EAX,[EBX + 0x2cc]               ; 0040ed17
    PUSH EAX                            ; 0040ed1d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040ed1e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040ed23
    PUSH 0x578215                       ; 0040ed26 | = "ammoCount"
    LEA EAX,[EBX + 0x30c]               ; 0040ed2b
    PUSH EAX                            ; 0040ed31
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0040ed32
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ed37
    PUSH 0x57821f                       ; 0040ed3a | = "ammoType"
    ADD EBX,0x310                       ; 0040ed3f
    PUSH EBX                            ; 0040ed45
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0040ed46
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ed4b
    POP EBX                             ; 0040ed4e
    RET                                 ; 0040ed4f

