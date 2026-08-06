; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004beb40(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40 at 004c0c72
;   core_inv.cpp_getItemDisplayName_FUN_004beca0 at 004becb1
;   core_inv.cpp_getItemIconName_FUN_004bed10 at 004bed21
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_00586cb9
;   TerminatedCString s_CAmmo_00586cc1
;   TerminatedCString s_CKeyActor_00586cc7
;   TerminatedCString s_CBoxActor_00586cd1
;   TerminatedCString s_CHealthItem_00586cdb
;   TerminatedCString s_CGasMask_00586ce7
;   TerminatedCString s_CFilmReel_00586cf0
;   TerminatedCString s_CTrap_00586cfa
;   TerminatedCString s_CBattery_00586d00
;   TerminatedCString s_core_inv_cpp_00586d09
;   TerminatedCString s_getModel_Can_t_classify_00586d19
;   undefined4 g_CAmmoActorType_007641bc.name_hash
;   undefined4 g_CBatteryActorType_00764674.name_hash
;   undefined4 g_CBoxActorActorType_00764800.name_hash
;   undefined4 g_CFilmReelActorType_01c08c8c.name_hash
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004beb40
        ;   Label: core_inv.cpp_getItemModel_FUN_004beb40
    PUSH ESI                            ; 004beb41
    PUSH EDI                            ; 004beb42
    PUSH EBP                            ; 004beb43
    MOV EBX,dword ptr [ESP + 0x14]      ; 004beb44
    PUSH 0x586cb9                       ; 004beb48 | = "CWeapon"
    PUSH EBX                            ; 004beb4d
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004beb4e
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004beb53
    TEST EAX,EAX                        ; 004beb56
    JNZ 0x004bec24                      ; 004beb58
        ;   XREF to: 004bec24 (CONDITIONAL_JUMP)  ; LAB_004bec24
    PUSH 0x586cc1                       ; 004beb5e | = "CAmmo"
    PUSH EBX                            ; 004beb63
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004beb64
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004beb69
    TEST EAX,EAX                        ; 004beb6c
    JNZ 0x004bec2d                      ; 004beb6e
        ;   XREF to: 004bec2d (CONDITIONAL_JUMP)  ; LAB_004bec2d
    PUSH 0x586cc7                       ; 004beb74 | = "CKeyActor"
    PUSH EBX                            ; 004beb79
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004beb7a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004beb7f
    TEST EAX,EAX                        ; 004beb82
    JNZ 0x004bec36                      ; 004beb84
        ;   XREF to: 004bec36 (CONDITIONAL_JUMP)  ; LAB_004bec36
    PUSH 0x586cd1                       ; 004beb8a | = "CBoxActor"
    PUSH EBX                            ; 004beb8f
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004beb90
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004beb95
    TEST EAX,EAX                        ; 004beb98
    JNZ 0x004bec3e                      ; 004beb9a
        ;   XREF to: 004bec3e (CONDITIONAL_JUMP)  ; LAB_004bec3e
    PUSH 0x586cdb                       ; 004beba0 | = "CHealthItem"
    PUSH EBX                            ; 004beba5
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004beba6
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bebab
    TEST EAX,EAX                        ; 004bebae
    JNZ 0x004bec47                      ; 004bebb0
        ;   XREF to: 004bec47 (CONDITIONAL_JUMP)  ; LAB_004bec47
    PUSH 0x586ce7                       ; 004bebb6 | = "CGasMask"
    PUSH EBX                            ; 004bebbb
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bebbc
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bebc1
    TEST EAX,EAX                        ; 004bebc4
    JNZ 0x004bec50                      ; 004bebc6
        ;   XREF to: 004bec50 (CONDITIONAL_JUMP)  ; LAB_004bec50
    PUSH 0x586cf0                       ; 004bebcc | = "CFilmReel"
    PUSH EBX                            ; 004bebd1
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bebd2
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bebd7
    TEST EAX,EAX                        ; 004bebda
    JNZ 0x004bec58                      ; 004bebdc
        ;   XREF to: 004bec58 (CONDITIONAL_JUMP)  ; LAB_004bec58
    PUSH 0x586cfa                       ; 004bebe2 | = "CTrap"
    PUSH EBX                            ; 004bebe7
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bebe8
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bebed
    TEST EAX,EAX                        ; 004bebf0
    JNZ 0x004bec61                      ; 004bebf2
        ;   XREF to: 004bec61 (CONDITIONAL_JUMP)  ; LAB_004bec61
    PUSH 0x586d00                       ; 004bebf8 | = "CBattery"
    PUSH EBX                            ; 004bebfd
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bebfe
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bec03
    TEST EAX,EAX                        ; 004bec06
    JZ 0x004bec6a                       ; 004bec08
        ;   XREF to: 004bec6a (CONDITIONAL_JUMP)  ; LAB_004bec6a
    MOV ESI,dword ptr [0x007646ac]      ; 004bec0a | g_CBatteryActorType_00764674.name_hash
    PUSH ESI                            ; 004bec10
        ;   Label: LAB_004bec10
    PUSH EBX                            ; 004bec11
        ;   Label: LAB_004bec11
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004bec12
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004bec17
    ADD EAX,0x150                       ; 004bec1a
    POP EBP                             ; 004bec1f
    POP EDI                             ; 004bec20
    POP ESI                             ; 004bec21
    POP EBX                             ; 004bec22
    RET                                 ; 004bec23
    MOV EBP,dword ptr [0x02ddf9a8]      ; 004bec24 | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_004bec24
    PUSH EBP                            ; 004bec2a
    JMP 0x004bec11                      ; 004bec2b
        ;   XREF to: 004bec11 (UNCONDITIONAL_JUMP)  ; LAB_004bec11
    MOV EDI,dword ptr [0x007641f4]      ; 004bec2d | g_CAmmoActorType_007641bc.name_hash
        ;   Label: LAB_004bec2d
    PUSH EDI                            ; 004bec33
    JMP 0x004bec11                      ; 004bec34
        ;   XREF to: 004bec11 (UNCONDITIONAL_JUMP)  ; LAB_004bec11
    MOV ESI,dword ptr [0x01cc30e0]      ; 004bec36 | g_CKeyActorActorType_01cc30a8.name_hash
        ;   Label: LAB_004bec36
    JMP 0x004bec10                      ; 004bec3c
        ;   XREF to: 004bec10 (UNCONDITIONAL_JUMP)  ; LAB_004bec10
    MOV ECX,dword ptr [0x00764838]      ; 004bec3e | g_CBoxActorActorType_00764800.name_hash
        ;   Label: LAB_004bec3e
    PUSH ECX                            ; 004bec44
    JMP 0x004bec11                      ; 004bec45
        ;   XREF to: 004bec11 (UNCONDITIONAL_JUMP)  ; LAB_004bec11
    MOV EDX,dword ptr [0x01cae0d0]      ; 004bec47 | g_CHealthItemActorType_01cae098.name_hash
        ;   Label: LAB_004bec47
    PUSH EDX                            ; 004bec4d
    JMP 0x004bec11                      ; 004bec4e
        ;   XREF to: 004bec11 (UNCONDITIONAL_JUMP)  ; LAB_004bec11
    MOV EAX,[0x01c78bbc]                ; 004bec50 | g_CGasMaskActorType_01c78b84.name_hash
        ;   Label: LAB_004bec50
    PUSH EAX                            ; 004bec55
    JMP 0x004bec11                      ; 004bec56
        ;   XREF to: 004bec11 (UNCONDITIONAL_JUMP)  ; LAB_004bec11
    MOV EBP,dword ptr [0x01c08cc4]      ; 004bec58 | g_CFilmReelActorType_01c08c8c.name_hash
        ;   Label: LAB_004bec58
    PUSH EBP                            ; 004bec5e
    JMP 0x004bec11                      ; 004bec5f
        ;   XREF to: 004bec11 (UNCONDITIONAL_JUMP)  ; LAB_004bec11
    MOV EDI,dword ptr [0x02dd1044]      ; 004bec61 | g_CTrapActorType_02dd100c.name_hash
        ;   Label: LAB_004bec61
    PUSH EDI                            ; 004bec67
    JMP 0x004bec11                      ; 004bec68
        ;   XREF to: 004bec11 (UNCONDITIONAL_JUMP)  ; LAB_004bec11
    PUSH EBX                            ; 004bec6a
        ;   Label: LAB_004bec6a
    MOV EDX,0x586d09                    ; 004bec6b | = "..\\core\\inv.cpp"
    MOV ECX,0x9d                        ; 004bec70
    PUSH 0x586d19                       ; 004bec75 | = "getModel - Can't classify : %s"
    MOV dword ptr [0x01cc4800],EDX      ; 004bec7a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 004bec80 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004bec86
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 004bec8b
    XOR EAX,EAX                         ; 004bec8e
    POP EBP                             ; 004bec90
    POP EDI                             ; 004bec91
    POP ESI                             ; 004bec92
    POP EBX                             ; 004bec93
    RET                                 ; 004bec94

