; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004b9910(CFlashlight *this_ptr)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flashlit.cpp_factoryFuncFlashlight_FUN_004b98e0 at 004b98f3
;
; Referenced Globals:
;   undefined4 DAT_0060070c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9910
        ;   Label: core_flashlit.cpp_CFlashlight_ctor_FUN_004b9910
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b9911
    PUSH EDX                            ; 004b9915
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 ; 004b9916
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004b991b
    PUSH 0x5df806                       ; 004b991e
    MOV EBX,EAX                         ; 004b9923
    ADD EAX,0x158                       ; 004b9925
    PUSH EAX                            ; 004b992a
    MOV dword ptr [EAX + -0x4],0x600714 ; 004b992b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004b9932
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004b9937
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004b9941
    MOV dword ptr [EBX + 0x2e0],0x5     ; 004b994b
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004b9955
    MOV dword ptr [EBX + 0x2e8],0x0     ; 004b995f
    FLD float ptr [0x0060070c]          ; 004b9969 | DAT_0060070c
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004b996f
    ADD ESP,0x8                         ; 004b9979
    MOV dword ptr [EBX + 0x568],0x0     ; 004b997c
    MOV EAX,EBX                         ; 004b9986
    FSTP float ptr [EBX + 0x564]        ; 004b9988
    POP EBX                             ; 004b998e
    RET                                 ; 004b998f

