; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_FUN_004fbe80(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_scat.cpp_FUN_004fbc00 at 004fbc57
;
; Referenced Globals:
;   TerminatedCString s_CBaronWeapon_0058de58
;   TerminatedCString s_BaronProxy_0058de65
;   undefined4 s_aronProxy_0058de65+1
;   undefined4 s_ronProxy_0058de65+2
;   undefined4 s_onProxy_0058de65+3
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_inv.cpp_CInventory_addItem_FUN_004bf360
;   core_inv.cpp_CInventory_initialize_FUN_004bef10
;   core_inv.cpp_CInventory_selectWeapon_FUN_004c0850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbe80
        ;   Label: core_scat.cpp_FUN_004fbe80
    PUSH ESI                            ; 004fbe81
    PUSH EDI                            ; 004fbe82
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fbe83
    ADD EBX,0x1f5a0                     ; 004fbe87
    PUSH EBX                            ; 004fbe8d
    CALL core_inv.cpp_CInventory_initialize_FUN_004bef10 ; 004fbe8e
        ;   XREF to: 004bef10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004bef10(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004fbe93
    PUSH 0x58de58                       ; 004fbe96 | = "CBaronWeapon"
    MOV ESI,0x58de65                    ; 004fbe9b | = "BaronProxy"
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004fbea0
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004fbea5
    MOV EDI,EAX                         ; 004fbea8
    MOV EDX,EAX                         ; 004fbeaa
    PUSH EDI                            ; 004fbeac
    MOV AL,byte ptr [ESI]               ; 004fbead | = "BaronProxy" | s_ronProxy_0058de65+2
        ;   Label: LAB_004fbead
    MOV byte ptr [EDI],AL               ; 004fbeaf
    CMP AL,0x0                          ; 004fbeb1
    JZ 0x004fbec5                       ; 004fbeb3
        ;   XREF to: 004fbec5 (CONDITIONAL_JUMP)  ; LAB_004fbec5
    MOV AL,byte ptr [ESI + 0x1]         ; 004fbeb5 | s_aronProxy_0058de65+1 | s_onProxy_0058de65+3
    ADD ESI,0x2                         ; 004fbeb8
    MOV byte ptr [EDI + 0x1],AL         ; 004fbebb
    ADD EDI,0x2                         ; 004fbebe
    CMP AL,0x0                          ; 004fbec1
    JNZ 0x004fbead                      ; 004fbec3
        ;   XREF to: 004fbead (CONDITIONAL_JUMP)  ; LAB_004fbead
    POP EDI                             ; 004fbec5
        ;   Label: LAB_004fbec5
    PUSH 0x1                            ; 004fbec6
    PUSH EDX                            ; 004fbec8
    PUSH EBX                            ; 004fbec9
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004fbeca
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004fbecf
    PUSH 0x1                            ; 004fbed2
    PUSH 0x5                            ; 004fbed4
    PUSH 0x0                            ; 004fbed6
    PUSH EBX                            ; 004fbed8
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 004fbed9
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004c0850(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004fbede
    POP EDI                             ; 004fbee1
    POP ESI                             ; 004fbee2
    POP EBX                             ; 004fbee3
    RET                                 ; 004fbee4

