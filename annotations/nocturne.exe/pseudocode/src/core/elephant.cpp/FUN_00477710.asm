; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * core_elephant_cpp_FUN_00477710(CWeapon *param_1)
;
;
; XREF[1]:
;   core_elephant.cpp_FUN_004776e0 at 004776f3
;
; Referenced Globals:
;   TerminatedCString s_elephantgun_kfm_0057f109
;   undefined4 DAT_0059cb2c
;   CWeapon_full_vtable g_CElephantGunVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477710
        ;   Label: core_elephant.cpp_FUN_00477710
    MOV EDX,dword ptr [ESP + 0x8]       ; 00477711
    PUSH EDX                            ; 00477715
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 00477716
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_00553d90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0047771b
    PUSH 0x57f109                       ; 0047771e | = "elephantgun.kfm"
    MOV EBX,EAX                         ; 00477723
    ADD EAX,0x150                       ; 00477725
    PUSH EAX                            ; 0047772a
    MOV dword ptr [EAX + -0x4],0x59cb34 ; 0047772b | g_CElephantGunVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00477732
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x570],0x41200000 ; 00477737
    MOV dword ptr [EBX + 0x2d0],0x1     ; 00477741
    MOV dword ptr [EBX + 0x2d4],0x2     ; 0047774b
    MOV dword ptr [EBX + 0x2d8],0x1     ; 00477755
    MOV dword ptr [EBX + 0x2dc],0x1     ; 0047775f
    MOV dword ptr [EBX + 0x2e0],0x41700000 ; 00477769
    FLD float ptr [0x0059cb2c]          ; 00477773 | DAT_0059cb2c
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00477779
    ADD ESP,0x8                         ; 00477783
    MOV dword ptr [EBX + 0x574],0x0     ; 00477786
    MOV EAX,EBX                         ; 00477790
    FSTP float ptr [EBX + 0x55c]        ; 00477792
    POP EBX                             ; 00477798
    RET                                 ; 00477799

