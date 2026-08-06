; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 at 0051ef6e
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280 at 0051b2b1
;   core_spike.cpp_CSpike_FUN_00533750 at 005337f7
;   core_turret.cpp_CTurret_updateTargeting_FUN_0054a110 at 0054a150
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041dbc0
        ;   Label: core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0
    MOV dword ptr [EAX + 0x8],0x7cf0bdc2 ; 0041dbc4
    MOV dword ptr [EAX + 0x14],0xfcf0bdc2 ; 0041dbcb
    FLD float ptr [EAX + 0x14]          ; 0041dbd2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041dbd5
    MOV dword ptr [EAX + 0x4],EDX       ; 0041dbd8
    FST float ptr [EAX + 0x10]          ; 0041dbdb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041dbde
    MOV dword ptr [EAX],EDX             ; 0041dbe1
    FSTP float ptr [EAX + 0xc]          ; 0041dbe3
    RET                                 ; 0041dbe6

