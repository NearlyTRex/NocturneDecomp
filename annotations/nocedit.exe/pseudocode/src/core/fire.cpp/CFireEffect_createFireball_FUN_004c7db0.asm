; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_004c7db0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; int              Stack[0x10]:4   lighting_active
; uint             Stack[0x14]:4   sfx_handle
;
; XREF[1]:
;   core_fire.cpp_CFireball_onCollision_FUN_004c1690 at 004c16be
;
; Referenced Globals:
;   int g_FireballAllocIndex
;   CFireball[64] g_FireballPool
;   undefined4 DAT_02d62edc
;   undefined4 DAT_02d62ee0
;   undefined4 DAT_02d62ee4
;   undefined4 DAT_02d62ee8
;   undefined4 DAT_02d62eec
;   undefined4 DAT_02d62f00
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0
;   sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7db0
        ;   Label: core_fire.cpp_CFireEffect_createFireball_FUN_004c7db0
    PUSH EDI                            ; 004c7db1
    PUSH EBP                            ; 004c7db2
    MOV EAX,[0x02d62ea4]                ; 004c7db3 | g_FireballAllocIndex
    LEA EBX,[EAX*0x4 + 0x0]             ; 004c7db8
    ADD EBX,EAX                         ; 004c7dbf
    SHL EBX,0x3                         ; 004c7dc1
    SUB EBX,EAX                         ; 004c7dc4
    SHL EBX,0x2                         ; 004c7dc6
    LEA EDX,[EAX + 0x1]                 ; 004c7dc9
    ADD EBX,0x2d62ea8                   ; 004c7dcc | g_FireballPool
    MOV dword ptr [0x02d62ea4],EDX      ; 004c7dd2 | g_FireballAllocIndex
    CMP EDX,0x40                        ; 004c7dd8
    JL 0x004c7de7                       ; 004c7ddb
        ;   XREF to: 004c7de7 (CONDITIONAL_JUMP)  ; LAB_004c7de7
    PUSH ESI                            ; 004c7ddd
    XOR ESI,ESI                         ; 004c7dde
    MOV dword ptr [0x02d62ea4],ESI      ; 004c7de0 | g_FireballAllocIndex
    POP ESI                             ; 004c7de6
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c7de7
        ;   Label: LAB_004c7de7
    PUSH EDI                            ; 004c7deb
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c7dec
    PUSH EBP                            ; 004c7df0
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7df1 | DAT_02d62edc
    PUSH EBX                            ; 004c7df4
    CALL dword ptr [EAX]                ; 004c7df5
    ADD ESP,0xc                         ; 004c7df7
    PUSH 0xffff                         ; 004c7dfa
    PUSH 0xc000                         ; 004c7dff
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004c7e04
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c7e09
    MOV dword ptr [EBX + 0x38],EAX      ; 004c7e0c | DAT_02d62ee0
    CMP dword ptr [ESP + 0x1c],0x0      ; 004c7e0f
    JNZ 0x004c7e50                      ; 004c7e14
        ;   XREF to: 004c7e50 (CONDITIONAL_JUMP)  ; LAB_004c7e50
    MOV dword ptr [EBX + 0x3c],0x2000   ; 004c7e16 | DAT_02d62ee4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c7e1d
        ;   Label: LAB_004c7e1d
    PUSH EBX                            ; 004c7e21
    MOV dword ptr [EBX + 0x44],EAX      ; 004c7e22 | DAT_02d62eec
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c7e25
    MOV dword ptr [EBX + 0x40],0x0      ; 004c7e29 | DAT_02d62ee8
    PUSH EAX                            ; 004c7e30
    MOV dword ptr [EBX + 0x58],EAX      ; 004c7e31 | DAT_02d62f00
    CALL sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0 ; 004c7e34
        ;   XREF to: 005a98b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0(uint sfx_handle, CVector3f * position_source_ptr)
    ADD ESP,0x8                         ; 004c7e39
    LEA EAX,[EBX + 0xc]                 ; 004c7e3c
    PUSH EAX                            ; 004c7e3f
    MOV ECX,dword ptr [EBX + 0x58]      ; 004c7e40 | DAT_02d62f00
    PUSH ECX                            ; 004c7e43
    CALL sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00 ; 004c7e44
        ;   XREF to: 005a9a00 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00(uint sfx_handle, CVector3f * velocity_source_ptr)
    ADD ESP,0x8                         ; 004c7e49
    POP EBP                             ; 004c7e4c
    POP EDI                             ; 004c7e4d
    POP EBX                             ; 004c7e4e
    RET                                 ; 004c7e4f
    MOV dword ptr [EBX + 0x3c],0x8000   ; 004c7e50 | DAT_02d62ee4
        ;   Label: LAB_004c7e50
    JMP 0x004c7e1d                      ; 004c7e57
        ;   XREF to: 004c7e1d (UNCONDITIONAL_JUMP)  ; LAB_004c7e1d

