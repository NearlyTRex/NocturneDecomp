; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_testPointInCylinder_FUN_0040a390(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SCollisionReturnInfo * Stack[0x8]:4   collision_info
; float            Stack[0xc]:4   tolerance
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[1]:
;   core_hero.cpp_CHero_testCylinderCollision_FUN_004b4910 at 004b493c
;
; Called Functions:
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a390
        ;   Label: core_actor.cpp_CDemonActor_testPointInCylinder_FUN_0040a390
    SUB ESP,0x2c                        ; 0040a391
    MOV EBX,dword ptr [ESP + 0x38]      ; 0040a394
    MOV EAX,ESP                         ; 0040a398
    PUSH EAX                            ; 0040a39a
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 0040a39b
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo * this_ptr)
    LEA EAX,[ESP + 0x4]                 ; 0040a3a0
    ADD ESP,0x4                         ; 0040a3a4
    XOR EDX,EDX                         ; 0040a3a7
    MOV ECX,dword ptr [ESP + 0x34]      ; 0040a3a9
    PUSH EAX                            ; 0040a3ad
    MOV dword ptr [ESP + 0x4],EDX       ; 0040a3ae
    MOV EDX,dword ptr [ESP + 0x38]      ; 0040a3b2
    PUSH ECX                            ; 0040a3b6
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0040a3b7
    CALL dword ptr [EDX + 0x34]         ; 0040a3bd
    ADD ESP,0x8                         ; 0040a3c0
    CMP EAX,0x2                         ; 0040a3c3
    JNZ 0x0040a408                      ; 0040a3c6
        ;   XREF to: 0040a408 (CONDITIONAL_JUMP)  ; LAB_0040a408
    FLD float ptr [ESP + 0x14]          ; 0040a3c8
    FSUB float ptr [ESP + 0x3c]         ; 0040a3cc
    FCOMP float ptr [EBX + 0x4]         ; 0040a3d0
    FNSTSW AX                           ; 0040a3d3
    SAHF                                ; 0040a3d5
    JA 0x0040a408                       ; 0040a3d6
        ;   XREF to: 0040a408 (CONDITIONAL_JUMP)  ; LAB_0040a408
    FLD float ptr [ESP + 0x18]          ; 0040a3d8
    FADD float ptr [ESP + 0x3c]         ; 0040a3dc
    FCOMP float ptr [EBX + 0x4]         ; 0040a3e0
    FNSTSW AX                           ; 0040a3e3
    SAHF                                ; 0040a3e5
    JC 0x0040a408                       ; 0040a3e6
        ;   XREF to: 0040a408 (CONDITIONAL_JUMP)  ; LAB_0040a408
    FLD float ptr [EBX + 0x8]           ; 0040a3e8
    FMUL ST0                            ; 0040a3eb
    FLD float ptr [ESP + 0x1c]          ; 0040a3ed
    FADD float ptr [ESP + 0x3c]         ; 0040a3f1
    FLD float ptr [EBX]                 ; 0040a3f5
    FMUL ST0                            ; 0040a3f7
    FXCH                                ; 0040a3f9
    FMUL ST0                            ; 0040a3fb
    FXCH                                ; 0040a3fd
    FADDP ST2,ST0                       ; 0040a3ff
    FCOMPP                              ; 0040a401
    FNSTSW AX                           ; 0040a403
    SAHF                                ; 0040a405
    JNC 0x0040a40f                      ; 0040a406
        ;   XREF to: 0040a40f (CONDITIONAL_JUMP)  ; LAB_0040a40f
    XOR EAX,EAX                         ; 0040a408
        ;   Label: LAB_0040a408
    ADD ESP,0x2c                        ; 0040a40a
    POP EBX                             ; 0040a40d
    RET                                 ; 0040a40e
    MOV EAX,0x1                         ; 0040a40f
        ;   Label: LAB_0040a40f
    ADD ESP,0x2c                        ; 0040a414
    POP EBX                             ; 0040a417
    RET                                 ; 0040a418

