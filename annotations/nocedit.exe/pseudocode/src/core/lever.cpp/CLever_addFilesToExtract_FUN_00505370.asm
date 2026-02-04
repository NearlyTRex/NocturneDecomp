; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_lever_cpp_CLever_addFilesToExtract_FUN_00505370(CLever *this_ptr,_FILE *file_handle)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00505370
        ;   Label: core_lever.cpp_CLever_addFilesToExtract_FUN_00505370
    MOV EAX,dword ptr [ESP + 0x4]       ; 00505374
    PUSH EDX                            ; 00505378
    ADD EAX,0x158                       ; 00505379
    PUSH EAX                            ; 0050537e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 0050537f
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00505384
    RET                                 ; 00505387

