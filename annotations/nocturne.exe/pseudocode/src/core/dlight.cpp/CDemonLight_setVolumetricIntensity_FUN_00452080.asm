; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(CDemonLight *this_ptr,float intensity)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[6]:
;   core_elephant.cpp_CElephantGun_process_FUN_004777a0 at 00477860
;   core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0 at 004c7091
;   core_set.cpp_FUN_0050a260 at 0050a36d
;   core_setutil.cpp_C3DSLight_apply_FUN_00515350 at 005153bf
;   core_shotgun.cpp_CShotgun_process_FUN_00515db0 at 00515e70
;   core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0 at 005544d7
;
; Referenced Globals:
;   double DOUBLE_0057c946 = 7
;   double DOUBLE_0057c94e = 3
;   undefined4 DAT_005ad51c
;   undefined4 DAT_005ad53c
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00452080
        ;   Label: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
    MOV EAX,dword ptr [ESP + 0x8]       ; 00452083
    MOV EDX,dword ptr [ESP + 0xc]       ; 00452087
    MOV dword ptr [EAX + 0x2fa8],EDX    ; 0045208b
    CMP dword ptr [EAX + 0x1cc0],0x100  ; 00452091
    JLE 0x004520d3                      ; 0045209b
        ;   XREF to: 004520d3 (CONDITIONAL_JUMP)  ; LAB_004520d3
    PUSH EBX                            ; 0045209d
    FLD float ptr [EAX + 0x2fa8]        ; 0045209e
    PUSH 0x0                            ; 004520a4
    FMUL double ptr [0x0057c94e]        ; 004520a6 | DOUBLE_0057c94e
    PUSH 0x0                            ; 004520ac
    CALL crt_math.c_round_FUN_00563a30  ; 004520ae
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0xc]         ; 004520b3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004520b7
    PUSH 0x0                            ; 004520bb
    MOV EBX,dword ptr [EDX*0x4 + 0x5ad53c] ; 004520bd | DAT_005ad53c
    PUSH EBX                            ; 004520c4
    PUSH EAX                            ; 004520c5
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 004520c6
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 004520cb
    POP EBX                             ; 004520ce
    ADD ESP,0x4                         ; 004520cf
    RET                                 ; 004520d2
    FLD float ptr [EAX + 0x2fa8]        ; 004520d3
        ;   Label: LAB_004520d3
    PUSH 0x0                            ; 004520d9
    FMUL double ptr [0x0057c946]        ; 004520db | DOUBLE_0057c946
    PUSH 0x0                            ; 004520e1
    CALL crt_math.c_round_FUN_00563a30  ; 004520e3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x8]         ; 004520e8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004520ec
    PUSH 0x0                            ; 004520f0
    MOV ECX,dword ptr [EDX*0x4 + 0x5ad51c] ; 004520f2 | DAT_005ad51c
    PUSH ECX                            ; 004520f9
    PUSH EAX                            ; 004520fa
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 004520fb
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00452100
    ADD ESP,0x4                         ; 00452103
    RET                                 ; 00452106

