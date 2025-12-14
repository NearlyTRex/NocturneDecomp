; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004fcda0(CDemonActor * actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004feed9
;   core_inv.cpp_getItemDisplayName_FUN_004fcf00 at 004fcf11
;   core_inv.cpp_getItemIconName_FUN_004fcf70 at 004fcf81
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_006302fa
;   TerminatedCString s_CAmmo_00630302
;   TerminatedCString s_CKeyActor_00630308
;   TerminatedCString s_CBoxActor_00630312
;   TerminatedCString s_CHealthItem_0063031c
;   TerminatedCString s_CGasMask_00630328
;   TerminatedCString s_CFilmReel_00630331
;   TerminatedCString s_CTrap_0063033b
;   TerminatedCString s_CBattery_00630341
;   TerminatedCString s_core_inv_cpp_0063034a
;   TerminatedCString s_getModel_Can_t_classify__0063035a
;   undefined4 g_CAmmoClassInfo.name_hash
;   undefined4 g_CBatteryClassInfo.name_hash
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CFilmReelClassInfo.name_hash
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcda0
        ;   Label: core_inv.cpp_getItemModel_FUN_004fcda0
    PUSH ESI                            ; 004fcda1
    PUSH EDI                            ; 004fcda2
    PUSH EBP                            ; 004fcda3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fcda4
    PUSH 0x6302fa                       ; 004fcda8 | = "CWeapon"
    PUSH EBX                            ; 004fcdad
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fcdae
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fcdb3
    TEST EAX,EAX                        ; 004fcdb6
    JNZ 0x004fce84                      ; 004fcdb8
        ;   XREF to: 004fce84 (CONDITIONAL_JUMP)  ; LAB_004fce84
    PUSH 0x630302                       ; 004fcdbe | = "CAmmo"
    PUSH EBX                            ; 004fcdc3
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fcdc4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fcdc9
    TEST EAX,EAX                        ; 004fcdcc
    JNZ 0x004fce8d                      ; 004fcdce
        ;   XREF to: 004fce8d (CONDITIONAL_JUMP)  ; LAB_004fce8d
    PUSH 0x630308                       ; 004fcdd4 | = "CKeyActor"
    PUSH EBX                            ; 004fcdd9
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fcdda
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fcddf
    TEST EAX,EAX                        ; 004fcde2
    JNZ 0x004fce96                      ; 004fcde4
        ;   XREF to: 004fce96 (CONDITIONAL_JUMP)  ; LAB_004fce96
    PUSH 0x630312                       ; 004fcdea | = "CBoxActor"
    PUSH EBX                            ; 004fcdef
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fcdf0
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fcdf5
    TEST EAX,EAX                        ; 004fcdf8
    JNZ 0x004fce9e                      ; 004fcdfa
        ;   XREF to: 004fce9e (CONDITIONAL_JUMP)  ; LAB_004fce9e
    PUSH 0x63031c                       ; 004fce00 | = "CHealthItem"
    PUSH EBX                            ; 004fce05
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fce06
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fce0b
    TEST EAX,EAX                        ; 004fce0e
    JNZ 0x004fcea7                      ; 004fce10
        ;   XREF to: 004fcea7 (CONDITIONAL_JUMP)  ; LAB_004fcea7
    PUSH 0x630328                       ; 004fce16 | = "CGasMask"
    PUSH EBX                            ; 004fce1b
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fce1c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fce21
    TEST EAX,EAX                        ; 004fce24
    JNZ 0x004fceb0                      ; 004fce26
        ;   XREF to: 004fceb0 (CONDITIONAL_JUMP)  ; LAB_004fceb0
    PUSH 0x630331                       ; 004fce2c | = "CFilmReel"
    PUSH EBX                            ; 004fce31
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fce32
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fce37
    TEST EAX,EAX                        ; 004fce3a
    JNZ 0x004fceb8                      ; 004fce3c
        ;   XREF to: 004fceb8 (CONDITIONAL_JUMP)  ; LAB_004fceb8
    PUSH 0x63033b                       ; 004fce42 | = "CTrap"
    PUSH EBX                            ; 004fce47
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fce48
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fce4d
    TEST EAX,EAX                        ; 004fce50
    JNZ 0x004fcec1                      ; 004fce52
        ;   XREF to: 004fcec1 (CONDITIONAL_JUMP)  ; LAB_004fcec1
    PUSH 0x630341                       ; 004fce58 | = "CBattery"
    PUSH EBX                            ; 004fce5d
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fce5e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fce63
    TEST EAX,EAX                        ; 004fce66
    JZ 0x004fceca                       ; 004fce68
        ;   XREF to: 004fceca (CONDITIONAL_JUMP)  ; LAB_004fceca
    MOV ESI,dword ptr [0x0082285c]      ; 004fce6a | g_CBatteryClassInfo.name_hash
    PUSH ESI                            ; 004fce70
        ;   Label: LAB_004fce70
    PUSH EBX                            ; 004fce71
        ;   Label: LAB_004fce71
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fce72
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fce77
    ADD EAX,0x158                       ; 004fce7a
    POP EBP                             ; 004fce7f
    POP EDI                             ; 004fce80
    POP ESI                             ; 004fce81
    POP EBX                             ; 004fce82
    RET                                 ; 004fce83
    MOV EBP,dword ptr [0x03f95d78]      ; 004fce84 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fce84
    PUSH EBP                            ; 004fce8a
    JMP 0x004fce71                      ; 004fce8b
        ;   XREF to: 004fce71 (UNCONDITIONAL_JUMP)  ; LAB_004fce71
    MOV EDI,dword ptr [0x008223a4]      ; 004fce8d | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004fce8d
    PUSH EDI                            ; 004fce93
    JMP 0x004fce71                      ; 004fce94
        ;   XREF to: 004fce71 (UNCONDITIONAL_JUMP)  ; LAB_004fce71
    MOV ESI,dword ptr [0x02dcd7d0]      ; 004fce96 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_004fce96
    JMP 0x004fce70                      ; 004fce9c
        ;   XREF to: 004fce70 (UNCONDITIONAL_JUMP)  ; LAB_004fce70
    MOV ECX,dword ptr [0x008229e8]      ; 004fce9e | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_004fce9e
    PUSH ECX                            ; 004fcea4
    JMP 0x004fce71                      ; 004fcea5
        ;   XREF to: 004fce71 (UNCONDITIONAL_JUMP)  ; LAB_004fce71
    MOV EDX,dword ptr [0x02db87b8]      ; 004fcea7 | DAT_02db8780.name_hash
        ;   Label: LAB_004fcea7
    PUSH EDX                            ; 004fcead
    JMP 0x004fce71                      ; 004fceae
        ;   XREF to: 004fce71 (UNCONDITIONAL_JUMP)  ; LAB_004fce71
    MOV EAX,[0x02d832a4]                ; 004fceb0 | g_CGasMaskClassInfo.name_hash
        ;   Label: LAB_004fceb0
    PUSH EAX                            ; 004fceb5
    JMP 0x004fce71                      ; 004fceb6
        ;   XREF to: 004fce71 (UNCONDITIONAL_JUMP)  ; LAB_004fce71
    MOV EBP,dword ptr [0x02d12d70]      ; 004fceb8 | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_004fceb8
    PUSH EBP                            ; 004fcebe
    JMP 0x004fce71                      ; 004fcebf
        ;   XREF to: 004fce71 (UNCONDITIONAL_JUMP)  ; LAB_004fce71
    MOV EDI,dword ptr [0x03f87418]      ; 004fcec1 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_004fcec1
    PUSH EDI                            ; 004fcec7
    JMP 0x004fce71                      ; 004fcec8
        ;   XREF to: 004fce71 (UNCONDITIONAL_JUMP)  ; LAB_004fce71
    PUSH EBX                            ; 004fceca
        ;   Label: LAB_004fceca
    MOV EDX,0x63034a                    ; 004fcecb | = "..\\core\\inv.cpp"
    MOV ECX,0x9d                        ; 004fced0
    PUSH 0x63035a                       ; 004fced5 | = "getModel - Can't classify : %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 004fceda | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004fcee0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fcee6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004fceeb
    XOR EAX,EAX                         ; 004fceee
    POP EBP                             ; 004fcef0
    POP EDI                             ; 004fcef1
    POP ESI                             ; 004fcef2
    POP EBX                             ; 004fcef3
    RET                                 ; 004fcef4

