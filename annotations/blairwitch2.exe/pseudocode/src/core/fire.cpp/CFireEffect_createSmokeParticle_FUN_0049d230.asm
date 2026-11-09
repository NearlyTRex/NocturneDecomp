; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   drag_factor
; CVector3f *      Stack[0x10]:4   wind_influence
; int              Stack[0x14]:4   alpha_value
;
; XREF[15]:
;   core_baron.cpp_FUN_0040f950 at 0040fbe5
;   core_batman.cpp_FUN_00412f40 at 004132df
;   core_charactr.cpp_FUN_0042a7a0 at 0042a91e
;   core_confedrt.cpp_FUN_005a14e0 at 005a1727
;   core_dracbrid.cpp_FUN_00462ff0 at 0046367e
;   core_drip.cpp_FUN_0046d110 at 0046d3be
;   core_emitter.cpp_FUN_00486cb0 at 004870f8
;   core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0049ccd0 at 0049cce8
;   core_fire.cpp_FUN_00495960 at 00495a4f
;   core_fire.cpp_FUN_00499930 at 004999b1
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_01c3f8dc
;
; Called Functions:
;   core_fire.cpp_CSmokeParticle_init_FUN_00493510
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d230
        ;   Label: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
    PUSH EDI                            ; 0049d231
    PUSH EBP                            ; 0049d232
    MOV EDX,dword ptr [0x01c3f8dc]      ; 0049d233 | DAT_01c3f8dc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d239
    SUB EAX,EDX                         ; 0049d240
    SHL EAX,0x2                         ; 0049d242
    SUB EAX,EDX                         ; 0049d245
    SHL EAX,0x2                         ; 0049d247
    INC EDX                             ; 0049d24a
    ADD EAX,0x1c3f8e0                   ; 0049d24b
    MOV dword ptr [0x01c3f8dc],EDX      ; 0049d250 | DAT_01c3f8dc
    CMP EDX,0x800                       ; 0049d256
    JL 0x0049d268                       ; 0049d25c
        ;   XREF to: 0049d268 (CONDITIONAL_JUMP)  ; LAB_0049d268
    PUSH EBX                            ; 0049d25e
    XOR EBX,EBX                         ; 0049d25f
    MOV dword ptr [0x01c3f8dc],EBX      ; 0049d261 | DAT_01c3f8dc
    POP EBX                             ; 0049d267
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049d268
        ;   Label: LAB_0049d268
    PUSH ESI                            ; 0049d26c
    MOV EDI,dword ptr [ESP + 0x20]      ; 0049d26d
    PUSH EDI                            ; 0049d271
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049d272
    PUSH dword ptr [ESP + 0x20]         ; 0049d276
    PUSH EBP                            ; 0049d27a
    PUSH EAX                            ; 0049d27b
    CALL core_fire.cpp_CSmokeParticle_init_FUN_00493510 ; 0049d27c
        ;   XREF to: 00493510 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_init_FUN_00493510(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0049d281
    POP EBP                             ; 0049d284
    POP EDI                             ; 0049d285
    POP ESI                             ; 0049d286
    RET                                 ; 0049d287

