; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(CDemonSet *this_ptr,CDemonGlobe *globe)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
;
; XREF[6]:
;   core_boxactor.cpp_FUN_0041f3d0 at 0041f4f4
;   core_emitter.cpp_FUN_00478790 at 00478919
;   core_fire.cpp_CFireball_process_FUN_00484050 at 00484101
;   core_fire.cpp_CMuzzleFlash_init_FUN_00484e10 at 00484e53
;   core_keyactor.cpp_CKeyActor_process_FUN_004c34e0 at 004c3576
;   core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0 at 00554541
;
; Referenced Globals:
;   undefined4 DAT_01fba2ec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01fba2ec]      ; 0050a9f0 | DAT_01fba2ec
        ;   Label: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050a9f6
    CMP dword ptr [ECX + 0xc],0x100     ; 0050a9fa
    JL 0x0050aa08                       ; 0050aa01
        ;   XREF to: 0050aa08 (CONDITIONAL_JUMP)  ; LAB_0050aa08
    CMP EDX,0x64                        ; 0050aa03
    JL 0x0050aa0f                       ; 0050aa06
        ;   XREF to: 0050aa0f (CONDITIONAL_JUMP)  ; LAB_0050aa0f
    MOV dword ptr [0x01fba2ec],EDX      ; 0050aa08 | DAT_01fba2ec
        ;   Label: LAB_0050aa08
    RET                                 ; 0050aa0e
    INC EDX                             ; 0050aa0f
        ;   Label: LAB_0050aa0f
    MOV dword ptr [EDX*0x4 + 0x1fba2ec],ECX ; 0050aa10 | DAT_01fba2ec
    MOV dword ptr [0x01fba2ec],EDX      ; 0050aa17 | DAT_01fba2ec
    RET                                 ; 0050aa1d

