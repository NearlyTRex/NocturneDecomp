; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_addFilesToExtract_FUN_004a9390(CEmitter *this_ptr,_FILE *file_handle)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9390
        ;   Label: core_emitter.cpp_CEmitter_addFilesToExtract_FUN_004a9390
    CMP dword ptr [EAX + 0x158],0x4     ; 004a9394
    JZ 0x004a939e                       ; 004a939b
        ;   XREF to: 004a939e (CONDITIONAL_JUMP)  ; LAB_004a939e
    RET                                 ; 004a939d
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a939e
        ;   Label: LAB_004a939e
    PUSH ECX                            ; 004a93a2
    ADD EAX,0x248                       ; 004a93a3
    PUSH EAX                            ; 004a93a8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 004a93a9
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a93ae
    RET                                 ; 004a93b1

