; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ammo_cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00614aca
;   TerminatedCString s_Weapon_00614adc
;   TerminatedCString s_Amount_of_ammo_00614ae3
;   TerminatedCString s_Ammo_type_00614af2
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e670
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411360
        ;   Label: core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360
    PUSH ESI                            ; 00411361
    MOV ESI,dword ptr [ESP + 0xc]       ; 00411362
    MOV EBX,dword ptr [ESP + 0x10]      ; 00411366
    PUSH EBX                            ; 0041136a
    PUSH ESI                            ; 0041136b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0041136c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00411371
    PUSH 0x0                            ; 00411374
    LEA EAX,[ESI + 0x158]               ; 00411376
    PUSH EAX                            ; 0041137c
    PUSH 0x614aca                       ; 0041137d | = "Model file (.kfm)"
    PUSH EBX                            ; 00411382
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00411383
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00411388
    PUSH 0x0                            ; 0041138b
    PUSH 0x40                           ; 0041138d
    LEA EAX,[ESI + 0x2d4]               ; 0041138f
    PUSH EAX                            ; 00411395
    PUSH 0x614adc                       ; 00411396 | = "Weapon"
    PUSH EBX                            ; 0041139b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 0041139c
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 004113a1
    PUSH 0x0                            ; 004113a4
    ADD ESI,0x314                       ; 004113a6
    PUSH ESI                            ; 004113ac
    PUSH 0x614ae3                       ; 004113ad | = "Amount of ammo"
    PUSH EBX                            ; 004113b2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 004113b3
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004113b8
    PUSH 0x4112b0                       ; 004113bb
    PUSH 0x411200                       ; 004113c0
    PUSH 0x614af2                       ; 004113c5 | = "Ammo type"
    PUSH EBX                            ; 004113ca
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e670 ; 004113cb
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004113d0
    POP ESI                             ; 004113d3
    POP EBX                             ; 004113d4
    RET                                 ; 004113d5

