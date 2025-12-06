; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_ammobox.cpp_CAmmoBox_FUN_00411c00(CAmmoBox * this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00411c00
        ;   Label: core_ammobox.cpp_CAmmoBox_FUN_00411c00
    MOV EAX,dword ptr [ESP + 0x4]       ; 00411c04
    PUSH EDX                            ; 00411c08
    ADD EAX,0x158                       ; 00411c09
    PUSH EAX                            ; 00411c0e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 00411c0f | void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411c14
    RET                                 ; 00411c17

