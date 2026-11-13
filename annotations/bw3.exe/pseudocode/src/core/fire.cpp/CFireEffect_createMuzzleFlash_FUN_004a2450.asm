; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
;
; XREF[6]:
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 00410e08
;   core_elephant.cpp_CElephantGun_fire_FUN_00486d40 at 004870c0
;   core_flintlck.cpp_CFlintlock_fire_FUN_004ae850 at 004aec06
;   core_gun.cpp_CGun_fire_FUN_004d0fc0 at 004d124f
;   core_rifle.cpp_CRifle_fire_FUN_00527d70 at 0052819a
;   core_tommygun.cpp_CTommyGun_fire_FUN_0056b410 at 0056b6f4
;
; Referenced Globals:
;   undefined4 DAT_01cbb9b8
;
; Called Functions:
;   core_fire.cpp_CMuzzleFlash_init_FUN_0049a390
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a2450
        ;   Label: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
    PUSH EDI                            ; 004a2451
    MOV EDX,dword ptr [0x01cbb9b8]      ; 004a2452 | DAT_01cbb9b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a2458
    SUB EAX,EDX                         ; 004a245f
    SHL EAX,0x3                         ; 004a2461
    SUB EAX,EDX                         ; 004a2464
    SHL EAX,0x2                         ; 004a2466
    INC EDX                             ; 004a2469
    ADD EAX,0x1cbb9bc                   ; 004a246a
    MOV dword ptr [0x01cbb9b8],EDX      ; 004a246f | DAT_01cbb9b8
    CMP EDX,0x14                        ; 004a2475
    JL 0x004a2484                       ; 004a2478
        ;   XREF to: 004a2484 (CONDITIONAL_JUMP)  ; LAB_004a2484
    PUSH EBX                            ; 004a247a
    XOR EBX,EBX                         ; 004a247b
    MOV dword ptr [0x01cbb9b8],EBX      ; 004a247d | DAT_01cbb9b8
    POP EBX                             ; 004a2483
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a2484
        ;   Label: LAB_004a2484
    PUSH ESI                            ; 004a2488
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a2489
    PUSH EDI                            ; 004a248d
    PUSH EAX                            ; 004a248e
    CALL core_fire.cpp_CMuzzleFlash_init_FUN_0049a390 ; 004a248f
        ;   XREF to: 0049a390 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_init_FUN_0049a390(CMuzzleFlash * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004a2494
    POP EDI                             ; 004a2497
    POP ESI                             ; 004a2498
    RET                                 ; 004a2499

