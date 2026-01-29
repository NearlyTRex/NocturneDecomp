; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_lever_cpp_FUN_00505370(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00505370
        ;   Label: core_lever.cpp_FUN_00505370
    MOV EAX,dword ptr [ESP + 0x4]       ; 00505374
    PUSH EDX                            ; 00505378
    ADD EAX,0x158                       ; 00505379
    PUSH EAX                            ; 0050537e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 0050537f
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00505384
    RET                                 ; 00505387

