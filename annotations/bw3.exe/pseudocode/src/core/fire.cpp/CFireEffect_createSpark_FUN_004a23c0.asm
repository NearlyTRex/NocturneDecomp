; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)
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
; XREF[21]:
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 0041103c
;   core_burncrss.cpp_CBurncross_fire_FUN_00424550 at 00424bda
;   core_dynamite.cpp_CDynamite_process_FUN_0047b270 at 0047b455
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 00487fe0
;   core_fire.cpp_CFireball_onCollision_FUN_00499eb0 at 00499f00
;   core_fire.cpp_CFireball_process_FUN_00499350 at 00499461
;   core_fire.cpp_CRing_process_FUN_0049fdf0 at 004a0364
;   core_fire.cpp_FUN_0049d090 at 0049d41d
;   core_fire.cpp_FUN_004a2090 at 004a227c
;   core_flame.cpp_CFlame_process_FUN_004a5b10 at 004a5b89
;   ... and 11 more
;
; Referenced Globals:
;   undefined4 DAT_01cb4eb0
;   undefined4 g_SparkPool[0].base.vtable
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a23c0
        ;   Label: core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
    PUSH EDI                            ; 004a23c1
    PUSH EBP                            ; 004a23c2
    MOV EDX,dword ptr [0x01cb4eb0]      ; 004a23c3 | DAT_01cb4eb0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a23c9
    ADD EAX,EDX                         ; 004a23d0
    SHL EAX,0x2                         ; 004a23d2
    MOV EBX,0x1cb4eb4                   ; 004a23d5
    ADD EAX,EDX                         ; 004a23da
    INC EDX                             ; 004a23dc
    SHL EAX,0x2                         ; 004a23dd
    MOV dword ptr [0x01cb4eb0],EDX      ; 004a23e0 | DAT_01cb4eb0
    ADD EBX,EAX                         ; 004a23e6
    CMP EDX,0x100                       ; 004a23e8
    JL 0x004a23fa                       ; 004a23ee
        ;   XREF to: 004a23fa (CONDITIONAL_JUMP)  ; LAB_004a23fa
    PUSH ESI                            ; 004a23f0
    XOR ESI,ESI                         ; 004a23f1
    MOV dword ptr [0x01cb4eb0],ESI      ; 004a23f3 | DAT_01cb4eb0
    POP ESI                             ; 004a23f9
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a23fa
        ;   Label: LAB_004a23fa
    PUSH EDI                            ; 004a23fe
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a23ff
    PUSH EBP                            ; 004a2403
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a2404 | g_SparkPool[0].base.vtable
    PUSH EBX                            ; 004a2407
    CALL dword ptr [EAX]                ; 004a2408
    ADD ESP,0xc                         ; 004a240a
    PUSH 0xffff                         ; 004a240d
    PUSH 0xc000                         ; 004a2412
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004a2417
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004a241c
    MOV EDX,EAX                         ; 004a241f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a2421
    IMUL EDX                            ; 004a2425
    SHRD EAX,EDX,0x10                   ; 004a2427
    MOV dword ptr [EBX + 0x48],0x0      ; 004a242b
    MOV dword ptr [EBX + 0x40],EAX      ; 004a2432
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2435
    MOV dword ptr [EBX + 0x44],EAX      ; 004a2439
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a243c
    MOV dword ptr [EBX + 0x4c],EAX      ; 004a2440
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a2443
    MOV dword ptr [EBX + 0x50],EAX      ; 004a2447
    POP EBP                             ; 004a244a
    POP EDI                             ; 004a244b
    POP EBX                             ; 004a244c
    RET                                 ; 004a244d

