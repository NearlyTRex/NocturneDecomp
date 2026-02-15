; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60(CWeapon *this_ptr,_FILE *file_handle)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005eea60
        ;   Label: core_weapon.cpp_CWeapon_addFilesToExtract_FUN_005eea60
    MOV EAX,dword ptr [ESP + 0x4]       ; 005eea64
    PUSH EDX                            ; 005eea68
    ADD EAX,0x158                       ; 005eea69
    PUSH EAX                            ; 005eea6e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 005eea6f
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005eea74
    RET                                 ; 005eea77

