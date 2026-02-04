; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ammobox_cpp_CAmmoBox_addFilesToExtract_FUN_00411c00(CAmmoBox *this_ptr,_FILE *file_handle)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00411c00
        ;   Label: core_ammobox.cpp_CAmmoBox_addFilesToExtract_FUN_00411c00
    MOV EAX,dword ptr [ESP + 0x4]       ; 00411c04
    PUSH EDX                            ; 00411c08
    ADD EAX,0x158                       ; 00411c09
    PUSH EAX                            ; 00411c0e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 00411c0f
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00411c14
    RET                                 ; 00411c17

