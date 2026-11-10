; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; int              Stack[0x10]:4   intensity_target
; int              Stack[0x14]:4   intensity_scale
; int              Stack[0x18]:4   spark_type
; int              Stack[0x1c]:4   fade_rate
;
; XREF[20]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0 at 0041256d
;   core_batman.cpp_CBatman_processDamage_FUN_00413f90 at 0041412d
;   core_bride.cpp_CBride_processDamage_FUN_00424b10 at 00424cd2
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0047d480 at 0047d60d
;   core_dynamite.cpp_CDynamite_process_FUN_004926d0 at 004928b5
;   core_emitter.cpp_CEmitter_process_FUN_0049f310 at 0049f440
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0 at 004b58a1
;   core_fire.cpp_CFireball_onCollision_FUN_004aee60 at 004aeeb0
;   core_fire.cpp_CFireball_process_FUN_004ae300 at 004ae411
;   core_fire.cpp_CToss_process_FUN_004b1d90 at 004b1ee0
;   ... and 10 more
;
; Referenced Globals:
;   undefined4 DAT_01c986b0
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b59e0
        ;   Label: core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
    PUSH EDI                            ; 004b59e1
    PUSH EBP                            ; 004b59e2
    MOV EDX,dword ptr [0x01c986b0]      ; 004b59e3 | DAT_01c986b0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b59e9
    ADD EAX,EDX                         ; 004b59f0
    SHL EAX,0x2                         ; 004b59f2
    MOV EBX,0x1c986b4                   ; 004b59f5
    ADD EAX,EDX                         ; 004b59fa
    INC EDX                             ; 004b59fc
    SHL EAX,0x2                         ; 004b59fd
    MOV dword ptr [0x01c986b0],EDX      ; 004b5a00 | DAT_01c986b0
    ADD EBX,EAX                         ; 004b5a06
    CMP EDX,0x100                       ; 004b5a08
    JL 0x004b5a1a                       ; 004b5a0e
        ;   XREF to: 004b5a1a (CONDITIONAL_JUMP)  ; LAB_004b5a1a
    PUSH ESI                            ; 004b5a10
    XOR ESI,ESI                         ; 004b5a11
    MOV dword ptr [0x01c986b0],ESI      ; 004b5a13 | DAT_01c986b0
    POP ESI                             ; 004b5a19
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b5a1a
        ;   Label: LAB_004b5a1a
    PUSH EDI                            ; 004b5a1e
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b5a1f
    PUSH EBP                            ; 004b5a23
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5a24
    PUSH EBX                            ; 004b5a27
    CALL dword ptr [EAX]                ; 004b5a28
    ADD ESP,0xc                         ; 004b5a2a
    PUSH 0xffff                         ; 004b5a2d
    PUSH 0xc000                         ; 004b5a32
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004b5a37
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 004b5a3c
    MOV EDX,EAX                         ; 004b5a3f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b5a41
    IMUL EDX                            ; 004b5a45
    SHRD EAX,EDX,0x10                   ; 004b5a47
    MOV dword ptr [EBX + 0x48],0x0      ; 004b5a4b
    MOV dword ptr [EBX + 0x40],EAX      ; 004b5a52
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b5a55
    MOV dword ptr [EBX + 0x44],EAX      ; 004b5a59
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b5a5c
    MOV dword ptr [EBX + 0x4c],EAX      ; 004b5a60
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b5a63
    MOV dword ptr [EBX + 0x50],EAX      ; 004b5a67
    POP EBP                             ; 004b5a6a
    POP EDI                             ; 004b5a6b
    POP EBX                             ; 004b5a6c
    RET                                 ; 004b5a6d

