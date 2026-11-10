; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(CDemonLight *this_ptr,float intensity)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[8]:
;   core_elephant.cpp_CElephantGun_process_FUN_0049e090 at 0049e168
;   core_lightgun.cpp_FUN_00500090 at 00500148
;   core_lightpis.cpp_FUN_005017f0 at 005018a8
;   core_set.cpp_FUN_00550da0 at 00550ec3
;   core_set.cpp_FUN_00551170 at 005512b6
;   core_setutil.cpp_C3DSLight_apply_FUN_0055d0e0 at 0055d146
;   core_shotgun.cpp_CShotgun_process_FUN_00561650 at 00561728
;   core_weapon.cpp_CWeapon_updateLighting_FUN_005adb20 at 005adcd1
;
; Referenced Globals:
;   undefined4 DAT_005d929c
;   undefined4 DAT_005d92a4
;   CDemonFilter* g_GlobalFilters = 0152c39c
;   CDemonFilter* g_PlayerFilters = 0152c39c
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00465da0
        ;   Label: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00465da3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00465da7
    MOV dword ptr [EAX + 0x2fa8],EDX    ; 00465dab
    CMP dword ptr [EAX + 0x1cc0],0x100  ; 00465db1
    JLE 0x00465df3                      ; 00465dbb
        ;   XREF to: 00465df3 (CONDITIONAL_JUMP)  ; LAB_00465df3
    PUSH EBX                            ; 00465dbd
    FLD float ptr [EAX + 0x2fa8]        ; 00465dbe
    PUSH 0x0                            ; 00465dc4
    FMUL double ptr [0x005d92a4]        ; 00465dc6 | DAT_005d92a4
    PUSH 0x0                            ; 00465dcc
    CALL crt_math.c_round_FUN_005c03a0  ; 00465dce
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 00465dd3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00465dd7
    PUSH 0x0                            ; 00465ddb
    MOV EBX,dword ptr [EDX*0x4 + 0x611348] ; 00465ddd | g_PlayerFilters
    PUSH EBX                            ; 00465de4
    PUSH EAX                            ; 00465de5
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 00465de6
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00465deb
    POP EBX                             ; 00465dee
    ADD ESP,0x4                         ; 00465def
    RET                                 ; 00465df2
    FLD float ptr [EAX + 0x2fa8]        ; 00465df3
        ;   Label: LAB_00465df3
    PUSH 0x0                            ; 00465df9
    FMUL double ptr [0x005d929c]        ; 00465dfb | DAT_005d929c
    PUSH 0x0                            ; 00465e01
    CALL crt_math.c_round_FUN_005c03a0  ; 00465e03
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 00465e08
    MOV EDX,dword ptr [ESP + 0x8]       ; 00465e0c
    PUSH 0x0                            ; 00465e10
    MOV ECX,dword ptr [EDX*0x4 + 0x611328] ; 00465e12 | g_GlobalFilters
    PUSH ECX                            ; 00465e19
    PUSH EAX                            ; 00465e1a
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 00465e1b
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00465e20
    ADD ESP,0x4                         ; 00465e23
    RET                                 ; 00465e26

