; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_00421570(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00566fd0 at 00567001
;   core_skeleton.cpp_FUN_0056ae70 at 0056ae9f
;   core_spike.cpp_FUN_00583700 at 005837a2
;   core_turret.cpp_FUN_005a2d00 at 005a2d52
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00421570
        ;   Label: core_box.cpp_CBoundingBox3D_reset_FUN_00421570
    MOV dword ptr [EAX + 0x8],0x7cf0bdc2 ; 00421574
    MOV dword ptr [EAX + 0x14],0xfcf0bdc2 ; 0042157b
    FLD float ptr [EAX + 0x14]          ; 00421582
    MOV EDX,dword ptr [EAX + 0x8]       ; 00421585
    MOV dword ptr [EAX + 0x4],EDX       ; 00421588
    FST float ptr [EAX + 0x10]          ; 0042158b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042158e
    MOV dword ptr [EAX],EDX             ; 00421591
    FSTP float ptr [EAX + 0xc]          ; 00421593
    RET                                 ; 00421596

