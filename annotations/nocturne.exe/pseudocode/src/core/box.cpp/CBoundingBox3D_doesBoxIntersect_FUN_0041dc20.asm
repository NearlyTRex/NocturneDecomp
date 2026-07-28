; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(CBoundingBox3D *this_ptr,CBoundingBox3D *other)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   other
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a80e
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050efa6
;   core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00510a40 at 00510d57
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041dc20
        ;   Label: core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041dc24
    FLD float ptr [EDX]                 ; 0041dc28
    FCOMP float ptr [ECX + 0xc]         ; 0041dc2a
    FNSTSW AX                           ; 0041dc2d
    SAHF                                ; 0041dc2f
    JA 0x0041dc68                       ; 0041dc30
        ;   XREF to: 0041dc68 (CONDITIONAL_JUMP)  ; LAB_0041dc68
    FLD float ptr [EDX + 0xc]           ; 0041dc32
    FCOMP float ptr [ECX]               ; 0041dc35
    FNSTSW AX                           ; 0041dc37
    SAHF                                ; 0041dc39
    JC 0x0041dc68                       ; 0041dc3a
        ;   XREF to: 0041dc68 (CONDITIONAL_JUMP)  ; LAB_0041dc68
    FLD float ptr [EDX + 0x4]           ; 0041dc3c
    FCOMP float ptr [ECX + 0x10]        ; 0041dc3f
    FNSTSW AX                           ; 0041dc42
    SAHF                                ; 0041dc44
    JA 0x0041dc68                       ; 0041dc45
        ;   XREF to: 0041dc68 (CONDITIONAL_JUMP)  ; LAB_0041dc68
    FLD float ptr [EDX + 0x10]          ; 0041dc47
    FCOMP float ptr [ECX + 0x4]         ; 0041dc4a
    FNSTSW AX                           ; 0041dc4d
    SAHF                                ; 0041dc4f
    JC 0x0041dc68                       ; 0041dc50
        ;   XREF to: 0041dc68 (CONDITIONAL_JUMP)  ; LAB_0041dc68
    FLD float ptr [EDX + 0x8]           ; 0041dc52
    FCOMP float ptr [ECX + 0x14]        ; 0041dc55
    FNSTSW AX                           ; 0041dc58
    SAHF                                ; 0041dc5a
    JA 0x0041dc68                       ; 0041dc5b
        ;   XREF to: 0041dc68 (CONDITIONAL_JUMP)  ; LAB_0041dc68
    FLD float ptr [EDX + 0x14]          ; 0041dc5d
    FCOMP float ptr [ECX + 0x8]         ; 0041dc60
    FNSTSW AX                           ; 0041dc63
    SAHF                                ; 0041dc65
    JNC 0x0041dc14                      ; 0041dc66
        ;   XREF to: 0041dc14 (CONDITIONAL_JUMP)  ; LAB_0041dc14
    XOR EAX,EAX                         ; 0041dc68
        ;   Label: LAB_0041dc68
    RET                                 ; 0041dc6a

