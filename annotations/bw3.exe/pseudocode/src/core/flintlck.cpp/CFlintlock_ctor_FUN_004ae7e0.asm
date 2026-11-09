; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlintlock * core_flintlck_cpp_CFlintlock_ctor_FUN_004ae7e0(CFlintlock *this_ptr)
;
; Parameters:
; CFlintlock *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flintlck.cpp_factoryFuncFlintlock_FUN_004ae7b0 at 004ae7c3
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae7e0
        ;   Label: core_flintlck.cpp_CFlintlock_ctor_FUN_004ae7e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ae7e1
    PUSH EDX                            ; 004ae7e5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 004ae7e6
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004ae7eb
    PUSH 0x5c1ca0                       ; 004ae7ee
    MOV EBX,EAX                         ; 004ae7f3
    ADD EAX,0x158                       ; 004ae7f5
    PUSH EAX                            ; 004ae7fa
    MOV dword ptr [EAX + -0x4],0x5e0564 ; 004ae7fb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004ae802
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004ae807
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004ae811
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004ae81b
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 004ae825
    ADD ESP,0x8                         ; 004ae82f
    MOV dword ptr [EBX + 0x574],0x0     ; 004ae832
    MOV EAX,EBX                         ; 004ae83c
    MOV dword ptr [EBX + 0x56c],0xb     ; 004ae83e
    POP EBX                             ; 004ae848
    RET                                 ; 004ae849

