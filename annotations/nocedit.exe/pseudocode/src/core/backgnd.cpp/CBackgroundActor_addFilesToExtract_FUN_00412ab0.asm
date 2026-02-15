; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_backgnd_cpp_CBackgroundActor_addFilesToExtract_FUN_00412ab0(CBackgroundActor *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00412ab0
        ;   Label: core_backgnd.cpp_CBackgroundActor_addFilesToExtract_FUN_00412ab0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00412ab4
    PUSH EDX                            ; 00412ab8
    ADD EAX,0x158                       ; 00412ab9
    PUSH EAX                            ; 00412abe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 00412abf
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00412ac4
    RET                                 ; 00412ac7

