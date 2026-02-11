; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_scat_cpp_CScat_createDefaultGun_FUN_00557150(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_scat.cpp_CScat_ctor_FUN_00556ed0 at 00556f27
;
; Referenced Globals:
;   TerminatedCString s_CBaronWeapon_00641357
;   TerminatedCString s_BaronProxy_00641364
;   undefined4 s_aronProxy_00641365
;   undefined4 s_ronProxy_00641366
;   undefined4 s_onProxy_00641367
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_inv.cpp_CInventory_addItem_FUN_004fd600
;   core_inv.cpp_CInventory_initialize_FUN_004fd190
;   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557150
        ;   Label: core_scat.cpp_CScat_createDefaultGun_FUN_00557150
    PUSH ESI                            ; 00557151
    PUSH EDI                            ; 00557152
    MOV EBX,dword ptr [ESP + 0x10]      ; 00557153
    ADD EBX,0x1f738                     ; 00557157
    PUSH EBX                            ; 0055715d
    CALL core_inv.cpp_CInventory_initialize_FUN_004fd190 ; 0055715e
        ;   XREF to: 004fd190 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004fd190(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00557163
    PUSH 0x641357                       ; 00557166 | = "CBaronWeapon"
    MOV ESI,0x641364                    ; 0055716b | = "BaronProxy"
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 00557170
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 00557175
    MOV EDI,EAX                         ; 00557178
    MOV EDX,EAX                         ; 0055717a
    PUSH EDI                            ; 0055717c
    MOV AL,byte ptr [ESI]               ; 0055717d | = "BaronProxy" | s_ronProxy_00641366
        ;   Label: LAB_0055717d
    MOV byte ptr [EDI],AL               ; 0055717f
    CMP AL,0x0                          ; 00557181
    JZ 0x00557195                       ; 00557183
        ;   XREF to: 00557195 (CONDITIONAL_JUMP)  ; LAB_00557195
    MOV AL,byte ptr [ESI + 0x1]         ; 00557185 | s_aronProxy_00641365 | s_onProxy_00641367
    ADD ESI,0x2                         ; 00557188
    MOV byte ptr [EDI + 0x1],AL         ; 0055718b
    ADD EDI,0x2                         ; 0055718e
    CMP AL,0x0                          ; 00557191
    JNZ 0x0055717d                      ; 00557193
        ;   XREF to: 0055717d (CONDITIONAL_JUMP)  ; LAB_0055717d
    POP EDI                             ; 00557195
        ;   Label: LAB_00557195
    PUSH 0x1                            ; 00557196
    PUSH EDX                            ; 00557198
    PUSH EBX                            ; 00557199
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 0055719a
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 0055719f
    PUSH 0x1                            ; 005571a2
    PUSH 0x5                            ; 005571a4
    PUSH 0x0                            ; 005571a6
    PUSH EBX                            ; 005571a8
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 005571a9
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 005571ae
    POP EDI                             ; 005571b1
    POP ESI                             ; 005571b2
    POP EBX                             ; 005571b3
    RET                                 ; 005571b4

