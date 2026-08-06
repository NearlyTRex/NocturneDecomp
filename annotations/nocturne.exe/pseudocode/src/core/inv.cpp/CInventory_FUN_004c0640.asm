; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_FUN_004c0640(CInventory *this_ptr,int param_2)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   TerminatedCString s_core_inv_cpp_00587169
;   TerminatedCString s_Out_of_memory_00587179
;   TerminatedCString s_Some_ammo_00587187
;   undefined4 s_Some_ammo_00587187+1
;   undefined4 s_Some_ammo_00587187+2
;   undefined4 s_Some_ammo_00587187+3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
;   core_inv.cpp_CInventory_addItem_FUN_004bf360
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c0640
        ;   Label: core_inv.cpp_CInventory_FUN_004c0640
    PUSH EBP                            ; 004c0641
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c0642
    CMP dword ptr [ESI + 0x564],-0x1    ; 004c0646
    JNZ 0x004c0652                      ; 004c064d
        ;   XREF to: 004c0652 (CONDITIONAL_JUMP)  ; LAB_004c0652
    POP EBP                             ; 004c064f
    POP ESI                             ; 004c0650
    RET                                 ; 004c0651
    PUSH 0x314                          ; 004c0652
        ;   Label: LAB_004c0652
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004c0657
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004c065c
    TEST EAX,EAX                        ; 004c065f
    JZ 0x004c066c                       ; 004c0661
        ;   XREF to: 004c066c (CONDITIONAL_JUMP)  ; LAB_004c066c
    PUSH EAX                            ; 004c0663
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004c0664
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004c0669
    PUSH EDI                            ; 004c066c
        ;   Label: LAB_004c066c
    PUSH EBX                            ; 004c066d
    MOV EBX,EAX                         ; 004c066e
    TEST EAX,EAX                        ; 004c0670
    JNZ 0x004c0697                      ; 004c0672
        ;   XREF to: 004c0697 (CONDITIONAL_JUMP)  ; LAB_004c0697
    MOV ECX,0x587169                    ; 004c0674 | = "..\\core\\inv.cpp"
    MOV EDI,0x2fd                       ; 004c0679
    PUSH 0x587179                       ; 004c067e | = "Out of memory"
    MOV dword ptr [0x01cc4800],ECX      ; 004c0683 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 004c0689 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004c068f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004c0694
    MOV EAX,dword ptr [ESI + 0x560]     ; 004c0697
        ;   Label: LAB_004c0697
    MOV dword ptr [EBX + 0x30c],EAX     ; 004c069d
    MOV EAX,dword ptr [ESI + 0x564]     ; 004c06a3
    PUSH ESI                            ; 004c06a9
    MOV dword ptr [EBX + 0x310],EAX     ; 004c06aa
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c06b0
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c06b5
    PUSH EAX                            ; 004c06b8
    PUSH EBX                            ; 004c06b9
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004c06ba
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004c06bf
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c06c2
    PUSH EBX                            ; 004c06c8
    CALL dword ptr [EAX]                ; 004c06c9
    ADD ESP,0x4                         ; 004c06cb
    MOV EDI,EBX                         ; 004c06ce
    MOV ESI,0x587187                    ; 004c06d0 | = "Some_ammo"
    PUSH EDI                            ; 004c06d5
    MOV AL,byte ptr [ESI]               ; 004c06d6 | = "Some_ammo" | s_Some_ammo_00587187+2
        ;   Label: LAB_004c06d6
    MOV byte ptr [EDI],AL               ; 004c06d8
    CMP AL,0x0                          ; 004c06da
    JZ 0x004c06ee                       ; 004c06dc
        ;   XREF to: 004c06ee (CONDITIONAL_JUMP)  ; LAB_004c06ee
    MOV AL,byte ptr [ESI + 0x1]         ; 004c06de | s_Some_ammo_00587187+1 | s_Some_ammo_00587187+3
    ADD ESI,0x2                         ; 004c06e1
    MOV byte ptr [EDI + 0x1],AL         ; 004c06e4
    ADD EDI,0x2                         ; 004c06e7
    CMP AL,0x0                          ; 004c06ea
    JNZ 0x004c06d6                      ; 004c06ec
        ;   XREF to: 004c06d6 (CONDITIONAL_JUMP)  ; LAB_004c06d6
    POP EDI                             ; 004c06ee
        ;   Label: LAB_004c06ee
    PUSH 0x0                            ; 004c06ef
    PUSH EBX                            ; 004c06f1
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004c06f2
    PUSH EBP                            ; 004c06f6
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004c06f7
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004c06fc
    POP EBX                             ; 004c06ff
    POP EDI                             ; 004c0700
    POP EBP                             ; 004c0701
    POP ESI                             ; 004c0702
    RET                                 ; 004c0703

