; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoMana * core_ammo_cpp_CAmmoMana_ctor_FUN_0040e0f0(CAmmoMana *this_ptr)
;
; Parameters:
; CAmmoMana *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ammo.cpp_FUN_0040e0c0 at 0040e0d3
;
; Referenced Globals:
;   TerminatedCString s_mana_sm_kfm_005b60fa
;   void* g_CAmmo_ManaVTable = 0040def0
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040de60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e0f0
        ;   Label: core_ammo.cpp_CAmmoMana_ctor_FUN_0040e0f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040e0f1
    PUSH EDX                            ; 0040e0f5
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040de60 ; 0040e0f6
        ;   XREF to: 0040de60 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040de60(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 0040e0fb
    PUSH 0x5b60fa                       ; 0040e0fe | = "mana_sm.kfm"
    MOV EBX,EAX                         ; 0040e103
    ADD EAX,0x158                       ; 0040e105
    PUSH EAX                            ; 0040e10a
    MOV dword ptr [EAX + -0x4],0x5db214 ; 0040e10b | g_CAmmo_ManaVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0040e112
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e117
    MOV dword ptr [EBX + 0x318],0xa     ; 0040e11a
    MOV EAX,EBX                         ; 0040e124
    MOV dword ptr [EBX + 0x314],0x14    ; 0040e126
    POP EBX                             ; 0040e130
    RET                                 ; 0040e131

