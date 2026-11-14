; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoBullet * __cdecl core_ammo_cpp_CAmmoBullet_ctor_FUN_0040e3d0(CAmmoBullet *this_ptr)
;
; Parameters:
; CAmmoBullet *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ammo.cpp_FUN_0040e3a0 at 0040e3b3
;
; Referenced Globals:
;   undefined4 s_ammopouch_kfm_005b6124+1
;   CDemonActor_vtable g_CAmmoBulletVTable
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040de60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e3d0
        ;   Label: core_ammo.cpp_CAmmoBullet_ctor_FUN_0040e3d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040e3d1
    PUSH EDX                            ; 0040e3d5
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040de60 ; 0040e3d6
        ;   XREF to: 0040de60 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040de60(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 0040e3db
    PUSH 0x5b6125                       ; 0040e3de | s_ammopouch_kfm_005b6124+1
    MOV EBX,EAX                         ; 0040e3e3
    ADD EAX,0x158                       ; 0040e3e5
    PUSH EAX                            ; 0040e3ea
    MOV dword ptr [EAX + -0x4],0x5db3d4 ; 0040e3eb | g_CAmmoBulletVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0040e3f2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e3f7
    MOV dword ptr [EBX + 0x318],0xb     ; 0040e3fa
    MOV EAX,EBX                         ; 0040e404
    MOV dword ptr [EBX + 0x314],0x14    ; 0040e406
    POP EBX                             ; 0040e410
    RET                                 ; 0040e411

