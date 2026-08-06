; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_FUN_0040f1a0(CAmmoBox *this_ptr,CInventory *inventory)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; CInventory *     Stack[0x8]:4   inventory
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_collectAmmo_FUN_00498790 at 004987bd
;   core_stranger.cpp_CStranger_processPickupComplete_FUN_0053beb0 at 0053beec
;
; Referenced Globals:
;   TerminatedCString s_core_ammobox_cpp_0057836d
;   TerminatedCString s_Out_of_memory_00578381
;   TerminatedCString s_Some_ammo_0057838f
;   undefined4 s_ome_ammo_0057838f+1
;   undefined4 s_me_ammo_0057838f+2
;   undefined4 s_e_ammo_0057838f+3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
;   core_ammo.cpp_CAmmo_setWeaponAmmo_FUN_0040ef60
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
;   core_inv.cpp_CInventory_addItem_FUN_004bf360
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f1a0
        ;   Label: core_ammobox.cpp_CAmmoBox_FUN_0040f1a0
    PUSH EBP                            ; 0040f1a1
    MOV EBP,dword ptr [ESP + 0xc]       ; 0040f1a2
    MOV EDX,dword ptr [EBP + 0x318]     ; 0040f1a6
    TEST EDX,EDX                        ; 0040f1ac
    JNZ 0x0040f1bc                      ; 0040f1ae
        ;   XREF to: 0040f1bc (CONDITIONAL_JUMP)  ; LAB_0040f1bc
    CMP dword ptr [EBP + 0x30c],0x0     ; 0040f1b0
    JNZ 0x0040f1e3                      ; 0040f1b7
        ;   XREF to: 0040f1e3 (CONDITIONAL_JUMP)  ; LAB_0040f1e3
    POP EBP                             ; 0040f1b9
    POP EBX                             ; 0040f1ba
    RET                                 ; 0040f1bb
    PUSH 0x1                            ; 0040f1bc
        ;   Label: LAB_0040f1bc
    PUSH EDX                            ; 0040f1be
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040f1bf
    PUSH EBX                            ; 0040f1c3
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 0040f1c4
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    MOV dword ptr [EBP + 0x318],0x0     ; 0040f1c9
    ADD ESP,0xc                         ; 0040f1d3
    MOV dword ptr [EBP + 0x30c],0x0     ; 0040f1d6
    POP EBP                             ; 0040f1e0
    POP EBX                             ; 0040f1e1
    RET                                 ; 0040f1e2
    PUSH 0x314                          ; 0040f1e3
        ;   Label: LAB_0040f1e3
    CALL crt_memory.c_operator_new_FUN_0056497c ; 0040f1e8
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0040f1ed
    TEST EAX,EAX                        ; 0040f1f0
    JZ 0x0040f1fd                       ; 0040f1f2
        ;   XREF to: 0040f1fd (CONDITIONAL_JUMP)  ; LAB_0040f1fd
    PUSH EAX                            ; 0040f1f4
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 0040f1f5
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 0040f1fa
    PUSH EDI                            ; 0040f1fd
        ;   Label: LAB_0040f1fd
    PUSH ESI                            ; 0040f1fe
    MOV EBX,EAX                         ; 0040f1ff
    TEST EAX,EAX                        ; 0040f201
    JNZ 0x0040f228                      ; 0040f203
        ;   XREF to: 0040f228 (CONDITIONAL_JUMP)  ; LAB_0040f228
    MOV ESI,0x57836d                    ; 0040f205 | = "..\\core\\ammobox.cpp"
    MOV EDI,0xa2                        ; 0040f20a
    PUSH 0x578381                       ; 0040f20f | = "Out of memory"
    MOV dword ptr [0x01cc4800],ESI      ; 0040f214 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 0040f21a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040f220
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0040f225
    LEA ESI,[EBP + 0x2cc]               ; 0040f228
        ;   Label: LAB_0040f228
    PUSH ESI                            ; 0040f22e
    PUSH EBX                            ; 0040f22f
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 0040f230
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 0040f235
    MOV EAX,dword ptr [EBP + 0x30c]     ; 0040f238
    PUSH EAX                            ; 0040f23e
    PUSH EBX                            ; 0040f23f
    CALL core_ammo.cpp_CAmmo_setWeaponAmmo_FUN_0040ef60 ; 0040f240
        ;   XREF to: 0040ef60 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponAmmo_FUN_0040ef60(CAmmo * this_ptr, int ammo_count)
    MOV EAX,dword ptr [EBP + 0x310]     ; 0040f245
    ADD ESP,0x8                         ; 0040f24b
    MOV dword ptr [EBX + 0x310],EAX     ; 0040f24e
    PUSH EBX                            ; 0040f254
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040f255
    CALL dword ptr [EAX]                ; 0040f25b
    ADD ESP,0x4                         ; 0040f25d
    PUSH ESI                            ; 0040f260
    PUSH EBX                            ; 0040f261
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 0040f262
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 0040f267
    MOV EDI,EBX                         ; 0040f26a
    MOV ESI,0x57838f                    ; 0040f26c | = "Some_ammo"
    PUSH EDI                            ; 0040f271
    MOV AL,byte ptr [ESI]               ; 0040f272 | = "Some_ammo" | s_me_ammo_0057838f+2
        ;   Label: LAB_0040f272
    MOV byte ptr [EDI],AL               ; 0040f274
    CMP AL,0x0                          ; 0040f276
    JZ 0x0040f28a                       ; 0040f278
        ;   XREF to: 0040f28a (CONDITIONAL_JUMP)  ; LAB_0040f28a
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f27a | s_ome_ammo_0057838f+1 | s_e_ammo_0057838f+3
    ADD ESI,0x2                         ; 0040f27d
    MOV byte ptr [EDI + 0x1],AL         ; 0040f280
    ADD EDI,0x2                         ; 0040f283
    CMP AL,0x0                          ; 0040f286
    JNZ 0x0040f272                      ; 0040f288
        ;   XREF to: 0040f272 (CONDITIONAL_JUMP)  ; LAB_0040f272
    POP EDI                             ; 0040f28a
        ;   Label: LAB_0040f28a
    PUSH 0x1                            ; 0040f28b
    PUSH EBX                            ; 0040f28d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040f28e
    PUSH EDX                            ; 0040f292
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 0040f293
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 0040f298
    MOV dword ptr [EBP + 0x30c],0x0     ; 0040f29b
    POP ESI                             ; 0040f2a5
    POP EDI                             ; 0040f2a6
    POP EBP                             ; 0040f2a7
    POP EBX                             ; 0040f2a8
    RET                                 ; 0040f2a9

