; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_addFilesToExtract_FUN_005e9d10(CCryptVessel *this_ptr,_FILE *file_handle)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005e9d10
        ;   Label: core_vessel.cpp_CCryptVessel_addFilesToExtract_FUN_005e9d10
    PUSH EDX                            ; 005e9d14
    MOV ECX,dword ptr [ESP + 0x8]       ; 005e9d15
    PUSH ECX                            ; 005e9d19
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 005e9d1a
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005e9d1f
    RET                                 ; 005e9d22

