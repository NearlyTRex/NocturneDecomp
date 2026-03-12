; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_activate_FUN_004c3970(CExplosion *this_ptr,CVector3f *position,float scale,int damage_amount)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   scale
; int              Stack[0x10]:4   damage_amount
; Local Variables:
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f[2]     Stack[-0x44]:24  local_44
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10 at 004c8c35
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3970
        ;   Label: core_fire.cpp_CExplosion_activate_FUN_004c3970
    PUSH ESI                            ; 004c3971
    PUSH EDI                            ; 004c3972
    PUSH EBP                            ; 004c3973
    SUB ESP,0x40                        ; 004c3974
    MOV ESI,dword ptr [ESP + 0x54]      ; 004c3977
    MOV EAX,dword ptr [ESP + 0x58]      ; 004c397b
    CMP ESI,EAX                         ; 004c397f
    JZ 0x004c3993                       ; 004c3981
        ;   XREF to: 004c3993 (CONDITIONAL_JUMP)  ; LAB_004c3993
    MOV EDX,dword ptr [EAX]             ; 004c3983
    MOV dword ptr [ESI],EDX             ; 004c3985
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c3987
    MOV dword ptr [ESI + 0x4],EDX       ; 004c398a
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c398d
    MOV dword ptr [ESI + 0x8],EDX       ; 004c3990
    PUSH 0x40000000                     ; 004c3993
        ;   Label: LAB_004c3993
    PUSH 0x0                            ; 004c3998
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c399a
    PUSH 0x0                            ; 004c399e
    MOV EDX,dword ptr [0x006810c8]      ; 004c39a0 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH 0x43480000                     ; 004c39a6
    MOV dword ptr [ESI + 0xc],0x3f800000 ; 004c39ab
    PUSH EDX                            ; 004c39b2 | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x10],EAX      ; 004c39b3
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0 ; 004c39b6
        ;   XREF to: 00570fa0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004c39bb
    LEA EDI,[ESI + 0x4]                 ; 004c39be
    PUSH 0x3f000000                     ; 004c39c1
    XOR EBX,EBX                         ; 004c39c6
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004c39c8
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004c39cd
    MOV dword ptr [ESI + 0x18],EAX      ; 004c39d0
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c39d3
    LEA EBP,[ESI + 0x8]                 ; 004c39d7
    MOV dword ptr [ESI + 0x14],EAX      ; 004c39da
    PUSH 0x3fc90fdb                     ; 004c39dd
        ;   Label: LAB_004c39dd
    PUSH 0x3f490fdb                     ; 004c39e2
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004c39e7
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

