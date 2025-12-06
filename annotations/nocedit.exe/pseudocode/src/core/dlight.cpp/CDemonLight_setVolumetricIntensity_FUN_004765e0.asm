; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[7]:
;   core_elephant.cpp_FUN_004a7070 at 004a7130
;   core_lightgun.cpp_FUN_00505ac0 at 00505b61
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056ca95
;   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 at 0057b00f
;   core_setutil.cpp_C3DSLight_apply_FUN_00586bf0 at 00586c56
;   core_shotgun.cpp_FUN_00587f70 at 00588030
;   core_weapon.cpp_CWeapon_FUN_005ee4a0 at 005ee5b7
;
; Referenced Globals:
;   double g_VolumetricFilterScaleLowRes = 7
;   double g_VolumetricFilterScaleHighRes = 3
;   CDemonFilter* g_GlobalFilters = 020a4878
;   CDemonFilter* g_PlayerFilters = 020a4878
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004765e0
        ;   Label: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004765e3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004765e7
    MOV dword ptr [EAX + 0x2fa8],EDX    ; 004765eb
    CMP dword ptr [EAX + 0x1cc0],0x100  ; 004765f1
    JLE 0x00476633                      ; 004765fb | LAB_00476633
        ;   XREF to: 00476633 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004765fd
    FLD float ptr [EAX + 0x2fa8]        ; 004765fe
    PUSH 0x0                            ; 00476604
    FMUL double ptr [0x0061f2d3]        ; 00476606 | double g_VolumetricFilterScaleHighRes
    PUSH 0x0                            ; 0047660c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047660e | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0xc]         ; 00476613
    MOV EDX,dword ptr [ESP + 0xc]       ; 00476617
    PUSH 0x0                            ; 0047661b
    MOV EBX,dword ptr [EDX*0x4 + 0x66efbc] ; 0047661d | CDemonFilter * g_PlayerFilters
    PUSH EBX                            ; 00476624
    PUSH EAX                            ; 00476625
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 00476626 | void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0047662b
    POP EBX                             ; 0047662e
    ADD ESP,0x4                         ; 0047662f
    RET                                 ; 00476632
    FLD float ptr [EAX + 0x2fa8]        ; 00476633
        ;   Label: LAB_00476633
    PUSH 0x0                            ; 00476639
    FMUL double ptr [0x0061f2cb]        ; 0047663b | double g_VolumetricFilterScaleLowRes
    PUSH 0x0                            ; 00476641
    CALL crt_math.c_round_FUN_005fe6b0  ; 00476643 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x8]         ; 00476648
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047664c
    PUSH 0x0                            ; 00476650
    MOV ECX,dword ptr [EDX*0x4 + 0x66ef9c] ; 00476652 | CDemonFilter * g_GlobalFilters
    PUSH ECX                            ; 00476659
    PUSH EAX                            ; 0047665a
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 0047665b | void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00476660
    ADD ESP,0x4                         ; 00476663
    RET                                 ; 00476666

