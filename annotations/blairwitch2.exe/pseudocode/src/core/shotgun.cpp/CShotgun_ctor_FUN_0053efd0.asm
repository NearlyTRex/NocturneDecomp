; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_0053efd0(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shotgun.cpp_factoryFuncShotgun_FUN_0053efa0 at 0053efb3
;
; Referenced Globals:
;   undefined4 DAT_005fb5bc
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_weapon.cpp_CWeapon_ctor_FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053efd0
        ;   Label: core_shotgun.cpp_CShotgun_ctor_FUN_0053efd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053efd1
    PUSH EDX                            ; 0053efd5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005899d0 ; 0053efd6
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005899d0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0053efdb
    PUSH 0x5e67c6                       ; 0053efde
    MOV EBX,EAX                         ; 0053efe3
    ADD EAX,0x2b4                       ; 0053efe5
    PUSH EAX                            ; 0053efea
    MOV dword ptr [EAX + -0x4],0x5fb5c4 ; 0053efeb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0053eff2
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x6d4],0x41200000 ; 0053eff7
    MOV dword ptr [EBX + 0x434],0x1     ; 0053f001
    MOV dword ptr [EBX + 0x438],0x2     ; 0053f00b
    MOV dword ptr [EBX + 0x43c],0x1     ; 0053f015
    MOV dword ptr [EBX + 0x440],0x1     ; 0053f01f
    MOV dword ptr [EBX + 0x444],0x41700000 ; 0053f029
    FLD float ptr [0x005fb5bc]          ; 0053f033 | DAT_005fb5bc
    MOV dword ptr [EBX + 0x448],0x0     ; 0053f039
    ADD ESP,0x8                         ; 0053f043
    MOV dword ptr [EBX + 0x6d8],0x0     ; 0053f046
    MOV EAX,EBX                         ; 0053f050
    FSTP float ptr [EBX + 0x6c0]        ; 0053f052
    POP EBX                             ; 0053f058
    RET                                 ; 0053f059

