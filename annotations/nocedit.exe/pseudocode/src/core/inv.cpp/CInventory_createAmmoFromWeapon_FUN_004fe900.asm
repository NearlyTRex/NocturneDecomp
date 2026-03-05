; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory *this_ptr,CWeapon *weapon)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CWeapon *        Stack[0x8]:4   weapon
;
; Referenced Globals:
;   TerminatedCString s_core_inv_cpp_006307ea
;   TerminatedCString s_core_inv_cpp_006307fa
;   TerminatedCString s_Out_of_memory_0063080a
;   TerminatedCString s_Some_ammo_00630818
;   undefined4 s_ome_ammo_00630819
;   undefined4 s_me_ammo_0063081a
;   undefined4 s_e_ammo_0063081b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_00410fd0
;   core_inv.cpp_CInventory_addItem_FUN_004fd600
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fe900
        ;   Label: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900
    PUSH EBP                            ; 004fe901
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fe902
    CMP dword ptr [ESI + 0x56c],-0x1    ; 004fe906
    JNZ 0x004fe912                      ; 004fe90d
        ;   XREF to: 004fe912 (CONDITIONAL_JUMP)  ; LAB_004fe912
    POP EBP                             ; 004fe90f
    POP ESI                             ; 004fe910
    RET                                 ; 004fe911
    PUSH 0x2fc                          ; 004fe912
        ;   Label: LAB_004fe912
    PUSH 0x6307ea                       ; 004fe917 | = "..\\core\\inv.cpp"
    PUSH 0x31c                          ; 004fe91c
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004fe921
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004fe926
    TEST EAX,EAX                        ; 004fe929
    JZ 0x004fe936                       ; 004fe92b
        ;   XREF to: 004fe936 (CONDITIONAL_JUMP)  ; LAB_004fe936
    PUSH EAX                            ; 004fe92d
    CALL core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 ; 004fe92e
        ;   XREF to: 00410dc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_00410dc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004fe933
    PUSH EDI                            ; 004fe936
        ;   Label: LAB_004fe936
    PUSH EBX                            ; 004fe937
    MOV EBX,EAX                         ; 004fe938
    TEST EAX,EAX                        ; 004fe93a
    JNZ 0x004fe961                      ; 004fe93c
        ;   XREF to: 004fe961 (CONDITIONAL_JUMP)  ; LAB_004fe961
    MOV ECX,0x6307fa                    ; 004fe93e | = "..\\core\\inv.cpp"
    MOV EDI,0x2fd                       ; 004fe943
    PUSH 0x63080a                       ; 004fe948 | = "Out of memory"
    MOV dword ptr [0x02f0ca48],ECX      ; 004fe94d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004fe953 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fe959
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fe95e
    MOV EAX,dword ptr [ESI + 0x568]     ; 004fe961
        ;   Label: LAB_004fe961
    MOV dword ptr [EBX + 0x314],EAX     ; 004fe967
    MOV EAX,dword ptr [ESI + 0x56c]     ; 004fe96d
    PUSH ESI                            ; 004fe973
    MOV dword ptr [EBX + 0x318],EAX     ; 004fe974
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fe97a
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fe97f
    PUSH EAX                            ; 004fe982
    PUSH EBX                            ; 004fe983
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_00410fd0 ; 004fe984
        ;   XREF to: 00410fd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_00410fd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004fe989
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe98c
    PUSH EBX                            ; 004fe992
    CALL dword ptr [EAX]                ; 004fe993
    ADD ESP,0x4                         ; 004fe995
    MOV EDI,EBX                         ; 004fe998
    MOV ESI,0x630818                    ; 004fe99a | = "Some_ammo"
    PUSH EDI                            ; 004fe99f
    MOV AL,byte ptr [ESI]               ; 004fe9a0 | = "Some_ammo" | s_me_ammo_0063081a
        ;   Label: LAB_004fe9a0
    MOV byte ptr [EDI],AL               ; 004fe9a2
    CMP AL,0x0                          ; 004fe9a4
    JZ 0x004fe9b8                       ; 004fe9a6
        ;   XREF to: 004fe9b8 (CONDITIONAL_JUMP)  ; LAB_004fe9b8
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe9a8 | s_ome_ammo_00630819 | s_e_ammo_0063081b
    ADD ESI,0x2                         ; 004fe9ab
    MOV byte ptr [EDI + 0x1],AL         ; 004fe9ae
    ADD EDI,0x2                         ; 004fe9b1
    CMP AL,0x0                          ; 004fe9b4
    JNZ 0x004fe9a0                      ; 004fe9b6
        ;   XREF to: 004fe9a0 (CONDITIONAL_JUMP)  ; LAB_004fe9a0
    POP EDI                             ; 004fe9b8
        ;   Label: LAB_004fe9b8
    PUSH 0x0                            ; 004fe9b9
    PUSH EBX                            ; 004fe9bb
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004fe9bc
    PUSH EBP                            ; 004fe9c0
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004fe9c1
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004fe9c6
    POP EBX                             ; 004fe9c9
    POP EDI                             ; 004fe9ca
    POP EBP                             ; 004fe9cb
    POP ESI                             ; 004fe9cc
    RET                                 ; 004fe9cd

