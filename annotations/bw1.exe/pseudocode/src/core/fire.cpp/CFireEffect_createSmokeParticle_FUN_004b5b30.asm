; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   drag_factor
; CVector3f *      Stack[0x10]:4   wind_influence
; int              Stack[0x14]:4   alpha_value
;
; XREF[12]:
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f765
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412ff4
;   core_charactr.cpp_FUN_00434790 at 00434a73
;   core_construc.cpp_CConstruct_process_FUN_00445cb0 at 00446395
;   core_dracbrid.cpp_CDraculaBride_process_FUN_0047b510 at 0047bb9e
;   core_drip.cpp_CDrip_process_FUN_00485610 at 004858be
;   core_emitter.cpp_CEmitter_process_FUN_0049f310 at 0049f758
;   core_fire.cpp_CCrater_process_FUN_004b22d0 at 004b2351
;   core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004b5620 at 004b5638
;   core_fire.cpp_CFireball_process_FUN_004ae300 at 004ae3ef
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_01c58a9c
;
; Called Functions:
;   core_fire.cpp_CSmokeParticle_init_FUN_004abeb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b5b30
        ;   Label: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
    PUSH EDI                            ; 004b5b31
    PUSH EBP                            ; 004b5b32
    MOV EDX,dword ptr [0x01c58a9c]      ; 004b5b33 | DAT_01c58a9c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5b39
    SUB EAX,EDX                         ; 004b5b40
    SHL EAX,0x2                         ; 004b5b42
    SUB EAX,EDX                         ; 004b5b45
    SHL EAX,0x2                         ; 004b5b47
    INC EDX                             ; 004b5b4a
    ADD EAX,0x1c58aa0                   ; 004b5b4b
    MOV dword ptr [0x01c58a9c],EDX      ; 004b5b50 | DAT_01c58a9c
    CMP EDX,0x800                       ; 004b5b56
    JL 0x004b5b68                       ; 004b5b5c
        ;   XREF to: 004b5b68 (CONDITIONAL_JUMP)  ; LAB_004b5b68
    PUSH EBX                            ; 004b5b5e
    XOR EBX,EBX                         ; 004b5b5f
    MOV dword ptr [0x01c58a9c],EBX      ; 004b5b61 | DAT_01c58a9c
    POP EBX                             ; 004b5b67
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b5b68
        ;   Label: LAB_004b5b68
    PUSH ESI                            ; 004b5b6c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b5b6d
    PUSH EDI                            ; 004b5b71
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b5b72
    PUSH dword ptr [ESP + 0x20]         ; 004b5b76
    PUSH EBP                            ; 004b5b7a
    PUSH EAX                            ; 004b5b7b
    CALL core_fire.cpp_CSmokeParticle_init_FUN_004abeb0 ; 004b5b7c
        ;   XREF to: 004abeb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_init_FUN_004abeb0(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004b5b81
    POP EBP                             ; 004b5b84
    POP EDI                             ; 004b5b85
    POP ESI                             ; 004b5b86
    RET                                 ; 004b5b87

