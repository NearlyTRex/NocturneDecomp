; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_keyactor.cpp_FUN_00501990()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00501990
        ;   Label: core_keyactor.cpp_FUN_00501990
    MOV EAX,dword ptr [ESP + 0x4]       ; 00501994
    PUSH EDX                            ; 00501998
    ADD EAX,0x158                       ; 00501999
    PUSH EAX                            ; 0050199e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 0050199f | void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005019a4
    RET                                 ; 005019a7

