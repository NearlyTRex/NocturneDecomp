; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 at 005a16ee
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0 at 0059da11
;   core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_005b8950 at 005b89f7
;   core_turret.cpp_CTurret_updateTargeting_FUN_005e2d50 at 005e2d90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00420fb0
        ;   Label: core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
    MOV dword ptr [EAX + 0x8],0x7cf0bdc2 ; 00420fb4
    MOV dword ptr [EAX + 0x14],0xfcf0bdc2 ; 00420fbb
    FLD float ptr [EAX + 0x14]          ; 00420fc2
    MOV EDX,dword ptr [EAX + 0x8]       ; 00420fc5
    MOV dword ptr [EAX + 0x4],EDX       ; 00420fc8
    FST float ptr [EAX + 0x10]          ; 00420fcb
    MOV EDX,dword ptr [EAX + 0x4]       ; 00420fce
    MOV dword ptr [EAX],EDX             ; 00420fd1
    FSTP float ptr [EAX + 0xc]          ; 00420fd3
    RET                                 ; 00420fd6

