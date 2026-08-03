; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_0048b270(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; int              Stack[0x10]:4   lighting_active
; uint             Stack[0x14]:4   sfx_handle
;
; XREF[3]:
;   core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0 at 00478757
;   core_fire.cpp_CFireball_onCollision_FUN_00484b60 at 00484b8e
;   core_larva.cpp_CLarva_process_FUN_004c4970 at 004c4d88
;
; Referenced Globals:
;   undefined4 DAT_01c58df8
;   undefined4 g_CFireball_ARRAY_01c58dfc[0].base.vtable
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0
;   sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00526ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b270
        ;   Label: core_fire.cpp_CFireEffect_createFireball_FUN_0048b270
    PUSH EDI                            ; 0048b271
    PUSH EBP                            ; 0048b272
    MOV EAX,[0x01c58df8]                ; 0048b273 | DAT_01c58df8
    LEA EBX,[EAX*0x4 + 0x0]             ; 0048b278
    ADD EBX,EAX                         ; 0048b27f
    SHL EBX,0x3                         ; 0048b281
    SUB EBX,EAX                         ; 0048b284
    SHL EBX,0x2                         ; 0048b286
    LEA EDX,[EAX + 0x1]                 ; 0048b289
    ADD EBX,0x1c58dfc                   ; 0048b28c
    MOV dword ptr [0x01c58df8],EDX      ; 0048b292 | DAT_01c58df8
    CMP EDX,0x40                        ; 0048b298
    JL 0x0048b2a7                       ; 0048b29b
        ;   XREF to: 0048b2a7 (CONDITIONAL_JUMP)  ; LAB_0048b2a7
    PUSH ESI                            ; 0048b29d
    XOR ESI,ESI                         ; 0048b29e
    MOV dword ptr [0x01c58df8],ESI      ; 0048b2a0 | DAT_01c58df8
    POP ESI                             ; 0048b2a6
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048b2a7
        ;   Label: LAB_0048b2a7
    PUSH EDI                            ; 0048b2ab
    MOV EBP,dword ptr [ESP + 0x18]      ; 0048b2ac
    PUSH EBP                            ; 0048b2b0
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048b2b1 | g_CFireball_ARRAY_01c58dfc[0].base.vtable
    PUSH EBX                            ; 0048b2b4
    CALL dword ptr [EAX]                ; 0048b2b5
    ADD ESP,0xc                         ; 0048b2b7
    PUSH 0xffff                         ; 0048b2ba
    PUSH 0xc000                         ; 0048b2bf
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0048b2c4
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 0048b2c9
    MOV dword ptr [EBX + 0x38],EAX      ; 0048b2cc
    CMP dword ptr [ESP + 0x1c],0x0      ; 0048b2cf
    JNZ 0x0048b310                      ; 0048b2d4
        ;   XREF to: 0048b310 (CONDITIONAL_JUMP)  ; LAB_0048b310
    MOV dword ptr [EBX + 0x3c],0x2000   ; 0048b2d6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b2dd
        ;   Label: LAB_0048b2dd
    PUSH EBX                            ; 0048b2e1
    MOV dword ptr [EBX + 0x44],EAX      ; 0048b2e2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048b2e5
    MOV dword ptr [EBX + 0x40],0x0      ; 0048b2e9
    PUSH EAX                            ; 0048b2f0
    MOV dword ptr [EBX + 0x58],EAX      ; 0048b2f1
    CALL sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0 ; 0048b2f4
        ;   XREF to: 00526ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0(uint sfx_handle, CVector3f * position_source_ptr)
    ADD ESP,0x8                         ; 0048b2f9
    LEA EAX,[EBX + 0xc]                 ; 0048b2fc
    PUSH EAX                            ; 0048b2ff
    MOV ECX,dword ptr [EBX + 0x58]      ; 0048b300
    PUSH ECX                            ; 0048b303
    CALL sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00526ff0 ; 0048b304
        ;   XREF to: 00526ff0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00526ff0(uint sfx_handle, CVector3f * velocity_source_ptr)
    ADD ESP,0x8                         ; 0048b309
    POP EBP                             ; 0048b30c
    POP EDI                             ; 0048b30d
    POP EBX                             ; 0048b30e
    RET                                 ; 0048b30f
    MOV dword ptr [EBX + 0x3c],0x8000   ; 0048b310
        ;   Label: LAB_0048b310
    JMP 0x0048b2dd                      ; 0048b317
        ;   XREF to: 0048b2dd (UNCONDITIONAL_JUMP)  ; LAB_0048b2dd

