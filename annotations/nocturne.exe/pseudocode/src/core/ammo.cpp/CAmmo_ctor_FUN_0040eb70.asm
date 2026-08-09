; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_ammo.cpp_factoryFuncAmmo_FUN_0040eb40 at 0040eb53
;   core_ammobox.cpp_CAmmoBox_FUN_0040f1a0 at 0040f1f5
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a1b25
;   core_game.cpp_FUN_004a03a0 at 004a03bb
;   core_inv.cpp_CInventory_FUN_004c0640 at 004c0664
;
; Referenced Globals:
;   TerminatedCString s_bullet_kfm_005781eb
;   TerminatedCString s_CGun_005781f6
;   undefined4 s_Gun_005781f6+1
;   undefined4 s_un_005781f6+2
;   undefined4 s_n_005781f6+3
;   CDemonActor_vtable g_CAmmoVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eb70
        ;   Label: core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
    PUSH ESI                            ; 0040eb71
    PUSH EDI                            ; 0040eb72
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040eb73
    PUSH EBX                            ; 0040eb77
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 0040eb78
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040eb7d
    ADD EAX,0x150                       ; 0040eb80
    PUSH EAX                            ; 0040eb85
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0040eb86
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040eb8b
    LEA EBX,[EAX + 0xfffffeb0]          ; 0040eb8e
    PUSH 0x5781eb                       ; 0040eb94 | = "bullet.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040eb99
    PUSH EAX                            ; 0040eb9f
    MOV dword ptr [EBX + 0x14c],0x599454 ; 0040eba0 | g_CAmmoVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ebaa
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040ebaf
    MOV ESI,0x5781f6                    ; 0040ebb2 | = "CGun"
    LEA EDI,[EBX + 0x2cc]               ; 0040ebb7
    PUSH EDI                            ; 0040ebbd
    MOV AL,byte ptr [ESI]               ; 0040ebbe | = "CGun" | s_un_005781f6+2
        ;   Label: LAB_0040ebbe
    MOV byte ptr [EDI],AL               ; 0040ebc0
    CMP AL,0x0                          ; 0040ebc2
    JZ 0x0040ebd6                       ; 0040ebc4
        ;   XREF to: 0040ebd6 (CONDITIONAL_JUMP)  ; LAB_0040ebd6
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ebc6 | s_Gun_005781f6+1 | s_n_005781f6+3
    ADD ESI,0x2                         ; 0040ebc9
    MOV byte ptr [EDI + 0x1],AL         ; 0040ebcc
    ADD EDI,0x2                         ; 0040ebcf
    CMP AL,0x0                          ; 0040ebd2
    JNZ 0x0040ebbe                      ; 0040ebd4
        ;   XREF to: 0040ebbe (CONDITIONAL_JUMP)  ; LAB_0040ebbe
    POP EDI                             ; 0040ebd6
        ;   Label: LAB_0040ebd6
    MOV dword ptr [EBX + 0x30c],0x14    ; 0040ebd7
    MOV EAX,EBX                         ; 0040ebe1
    MOV dword ptr [EBX + 0x310],0x0     ; 0040ebe3
    POP EDI                             ; 0040ebed
    POP ESI                             ; 0040ebee
    POP EBX                             ; 0040ebef
    RET                                 ; 0040ebf0

