; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ladder_cpp_CLadder_addFilesToExtract_FUN_00502eb0(CLadder *this_ptr,_FILE *file_handle)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00502eb0
        ;   Label: core_ladder.cpp_CLadder_addFilesToExtract_FUN_00502eb0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00502eb4
    PUSH EDX                            ; 00502eb8
    ADD EAX,0x158                       ; 00502eb9
    PUSH EAX                            ; 00502ebe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 00502ebf
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00502ec4
    RET                                 ; 00502ec7

