; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_keyactor_cpp_CKeyActor_addFilesToExtract_FUN_00501990(CKeyActor *this_ptr,_FILE *file_handle)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00501990
        ;   Label: core_keyactor.cpp_CKeyActor_addFilesToExtract_FUN_00501990
    MOV EAX,dword ptr [ESP + 0x4]       ; 00501994
    PUSH EDX                            ; 00501998
    ADD EAX,0x158                       ; 00501999
    PUSH EAX                            ; 0050199e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 0050199f
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005019a4
    RET                                 ; 005019a7

