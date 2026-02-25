; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(CBoundingBox3D *this_ptr,CBoundingBox3D *other)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   other
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 0040966c
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 005719d6
;   core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00573470 at 00573787
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00421010
        ;   Label: core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
    MOV ECX,dword ptr [ESP + 0x8]       ; 00421014
    FLD float ptr [EDX]                 ; 00421018
    FCOMP float ptr [ECX + 0xc]         ; 0042101a
    FNSTSW AX                           ; 0042101d
    SAHF                                ; 0042101f
    JA 0x00421058                       ; 00421020
        ;   XREF to: 00421058 (CONDITIONAL_JUMP)  ; LAB_00421058
    FLD float ptr [EDX + 0xc]           ; 00421022
    FCOMP float ptr [ECX]               ; 00421025
    FNSTSW AX                           ; 00421027
    SAHF                                ; 00421029
    JC 0x00421058                       ; 0042102a
        ;   XREF to: 00421058 (CONDITIONAL_JUMP)  ; LAB_00421058
    FLD float ptr [EDX + 0x4]           ; 0042102c
    FCOMP float ptr [ECX + 0x10]        ; 0042102f
    FNSTSW AX                           ; 00421032
    SAHF                                ; 00421034
    JA 0x00421058                       ; 00421035
        ;   XREF to: 00421058 (CONDITIONAL_JUMP)  ; LAB_00421058
    FLD float ptr [EDX + 0x10]          ; 00421037
    FCOMP float ptr [ECX + 0x4]         ; 0042103a
    FNSTSW AX                           ; 0042103d
    SAHF                                ; 0042103f
    JC 0x00421058                       ; 00421040
        ;   XREF to: 00421058 (CONDITIONAL_JUMP)  ; LAB_00421058
    FLD float ptr [EDX + 0x8]           ; 00421042
    FCOMP float ptr [ECX + 0x14]        ; 00421045
    FNSTSW AX                           ; 00421048
    SAHF                                ; 0042104a
    JA 0x00421058                       ; 0042104b
        ;   XREF to: 00421058 (CONDITIONAL_JUMP)  ; LAB_00421058
    FLD float ptr [EDX + 0x14]          ; 0042104d
    FCOMP float ptr [ECX + 0x8]         ; 00421050
    FNSTSW AX                           ; 00421053
    SAHF                                ; 00421055
    JNC 0x00421004                      ; 00421056
        ;   XREF to: 00421004 (CONDITIONAL_JUMP)  ; LAB_00421004
    XOR EAX,EAX                         ; 00421058
        ;   Label: LAB_00421058
    RET                                 ; 0042105a

