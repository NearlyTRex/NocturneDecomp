; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_0040e860(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005cb29d
;   TerminatedCString s_weaponClassName_005cb2a7
;   TerminatedCString s_ammoCount_005cb2b7
;   TerminatedCString s_ammoType_005cb2c1
;   undefined4 DAT_005cb2ca
;   TerminatedCString s_hasCollision_005cb2cf
;   TerminatedCString s_openSound_005cb2dc
;   int g_CAmmoBoxClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e860
        ;   Label: core_ammobox.cpp_CAmmoBox_archive_FUN_0040e860
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e861
    PUSH EBX                            ; 0040e865
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 0040e866
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e86b
    PUSH 0x5cb29d                       ; 0040e86e | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 0040e873
    PUSH EAX                            ; 0040e879
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 0040e87a
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040e87f
    PUSH 0x5cb2a7                       ; 0040e882 | = "weaponClassName"
    LEA EAX,[EBX + 0x430]               ; 0040e887
    PUSH EAX                            ; 0040e88d
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0040e88e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040e893
    PUSH 0x5cb2b7                       ; 0040e896 | = "ammoCount"
    LEA EAX,[EBX + 0x470]               ; 0040e89b
    PUSH EAX                            ; 0040e8a1
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0040e8a2
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040e8a7
    PUSH 0x5cb2c1                       ; 0040e8aa | = "ammoType"
    LEA EAX,[EBX + 0x474]               ; 0040e8af
    PUSH EAX                            ; 0040e8b5
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0040e8b6
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040e8bb
    PUSH 0x0                            ; 0040e8be
    LEA EAX,[EBX + 0x478]               ; 0040e8c0
    PUSH EAX                            ; 0040e8c6
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0040e8c7
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x00609794]      ; 0040e8cc | g_CAmmoBoxClassVersion
    ADD ESP,0x8                         ; 0040e8d2
    CMP EDX,0x2                         ; 0040e8d5
    JGE 0x0040e902                      ; 0040e8d8
        ;   XREF to: 0040e902 (CONDITIONAL_JUMP)  ; LAB_0040e902
    CMP dword ptr [0x00609794],0x3      ; 0040e8da | g_CAmmoBoxClassVersion
        ;   Label: LAB_0040e8da
    JL 0x0040e8f7                       ; 0040e8e1
        ;   XREF to: 0040e8f7 (CONDITIONAL_JUMP)  ; LAB_0040e8f7
    PUSH 0x5cb2cf                       ; 0040e8e3 | = "hasCollision"
    LEA EAX,[EBX + 0x480]               ; 0040e8e8
    PUSH EAX                            ; 0040e8ee
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0040e8ef
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040e8f4
    CMP dword ptr [0x00609794],0x4      ; 0040e8f7 | g_CAmmoBoxClassVersion
        ;   Label: LAB_0040e8f7
    JGE 0x0040e918                      ; 0040e8fe
        ;   XREF to: 0040e918 (CONDITIONAL_JUMP)  ; LAB_0040e918
    POP EBX                             ; 0040e900
    RET                                 ; 0040e901
    PUSH 0x5cb2ca                       ; 0040e902 | DAT_005cb2ca
        ;   Label: LAB_0040e902
    LEA EAX,[EBX + 0x47c]               ; 0040e907
    PUSH EAX                            ; 0040e90d
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0040e90e
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040e913
    JMP 0x0040e8da                      ; 0040e916
        ;   XREF to: 0040e8da (UNCONDITIONAL_JUMP)  ; LAB_0040e8da
    PUSH 0x5cb2dc                       ; 0040e918 | = "openSound"
        ;   Label: LAB_0040e918
    ADD EBX,0x484                       ; 0040e91d
    PUSH EBX                            ; 0040e923
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0040e924
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040e929
    POP EBX                             ; 0040e92c
    RET                                 ; 0040e92d

