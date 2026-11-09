; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_FUN_00408890(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[39]:
;   core_ammo.cpp_FUN_0040def0 at 0040df07
;   core_ammobox.cpp_FUN_0040e670 at 0040e685
;   core_barrier.cpp_FUN_0040eb10 at 0040eb16
;   core_bat.cpp_CBat_setup_FUN_0040eeb0 at 0040eede
;   core_battery.cpp_CBattery_setup_FUN_0040f500 at 0040f506
;   core_bodypart.cpp_CBodyPart_setup_FUN_00414f60 at 00414f68
;   core_boxactor.cpp_FUN_0041f130 at 0041f13a
;   core_chain.cpp_FUN_004294a0 at 004294ac
;   core_charactr.cpp_FUN_0042b0e0 at 0042b0ed
;   core_crate.cpp_FUN_00445c30 at 00445c3b
;   ... and 29 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_path.cpp_FUN_0050b1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408890
        ;   Label: core_actor.cpp_FUN_00408890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408891
    MOV dword ptr [EBX + 0x114],0x0     ; 00408895
    PUSH EBX                            ; 0040889f
    MOV dword ptr [EBX + 0x11c],0x0     ; 004088a0
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 004088aa
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004088af
    MOV EAX,dword ptr [EBX + 0x154]     ; 004088b2
    PUSH EBX                            ; 004088b8
    CALL dword ptr [EAX + 0xc4]         ; 004088b9
    ADD ESP,0x4                         ; 004088bf
    TEST EAX,EAX                        ; 004088c2
    JNZ 0x004088d1                      ; 004088c4
        ;   XREF to: 004088d1 (CONDITIONAL_JUMP)  ; LAB_004088d1
    POP EBX                             ; 004088c6
    LEA EAX,[EAX]                       ; 004088c7
    LEA EDX,[EDX]                       ; 004088cd
    PUSH 0x1                            ; 004088d1
        ;   Label: LAB_004088d1
    ADD EBX,0x20                        ; 004088d3
    PUSH EBX                            ; 004088d6
    PUSH EAX                            ; 004088d7
    CALL core_path.cpp_FUN_0050b1d0     ; 004088d8
        ;   XREF to: 0050b1d0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_FUN_0050b1d0(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 004088dd
    POP EBX                             ; 004088e0
    RET                                 ; 004088e1

