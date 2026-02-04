; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_simbox_cpp_CSimBox_FUN_005893c0(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005893c0
        ;   Label: core_simbox.cpp_CSimBox_FUN_005893c0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005893c4
    PUSH EDX                            ; 005893c8
    ADD EAX,0x158                       ; 005893c9
    PUSH EAX                            ; 005893ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 005893cf
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005893d4
    RET                                 ; 005893d7

