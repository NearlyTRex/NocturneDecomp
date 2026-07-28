; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[44]:
;   core_ammo.cpp_FUN_0040ec00 at 0040ec17
;   core_ammobox.cpp_FUN_0040f0f0 at 0040f105
;   core_anvil.cpp_FUN_0040f5f0 at 0040f5f5
;   core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30 at 0040ff45
;   core_barrier.cpp_CBarrier_setup_FUN_00411760 at 00411766
;   core_bat.cpp_CBat_setup_FUN_00411ae0 at 00411b0e
;   core_battery.cpp_FUN_00414de0 at 00414de6
;   core_bodypart.cpp_CBodyPart_setup_FUN_00416500 at 00416508
;   core_boxactor.cpp_CBoxActor_setup_FUN_0041e430 at 0041e43a
;   core_chain.cpp_CChain_setup_FUN_0042b8f0 at 0042b8fc
;   ... and 34 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409fc0
        ;   Label: core_actor.cpp_CDemonActor_setup_FUN_00409fc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00409fc1
    PUSH EBX                            ; 00409fc5
    MOV dword ptr [EBX + 0x114],0x0     ; 00409fc6
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00409fd0
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00409fd5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00409fd8
    PUSH EBX                            ; 00409fde
    CALL dword ptr [EAX + 0xbc]         ; 00409fdf
    ADD ESP,0x4                         ; 00409fe5
    TEST EAX,EAX                        ; 00409fe8
    JNZ 0x00409fee                      ; 00409fea
        ;   XREF to: 00409fee (CONDITIONAL_JUMP)  ; LAB_00409fee
    POP EBX                             ; 00409fec
    RET                                 ; 00409fed
    PUSH 0x1                            ; 00409fee
        ;   Label: LAB_00409fee
    ADD EBX,0x20                        ; 00409ff0
    PUSH EBX                            ; 00409ff3
    PUSH EAX                            ; 00409ff4
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360 ; 00409ff5
        ;   XREF to: 004f0360 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 00409ffa
    POP EBX                             ; 00409ffd
    RET                                 ; 00409ffe

