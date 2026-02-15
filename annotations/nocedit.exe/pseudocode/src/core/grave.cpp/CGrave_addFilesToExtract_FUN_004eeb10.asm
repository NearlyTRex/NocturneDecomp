; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_addFilesToExtract_FUN_004eeb10(CGrave *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eeb10
        ;   Label: core_grave.cpp_CGrave_addFilesToExtract_FUN_004eeb10
    MOV EDX,dword ptr [ESP + 0xc]       ; 004eeb11
    PUSH EDX                            ; 004eeb15
    MOV ECX,dword ptr [ESP + 0xc]       ; 004eeb16
    PUSH ECX                            ; 004eeb1a
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 004eeb1b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004eeb20
    MOV EBX,dword ptr [ESP + 0xc]       ; 004eeb23
    MOV EAX,dword ptr [ESP + 0x8]       ; 004eeb27
    PUSH EBX                            ; 004eeb2b
    ADD EAX,0x158                       ; 004eeb2c
    PUSH EAX                            ; 004eeb31
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 004eeb32
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004eeb37
    POP EBX                             ; 004eeb3a
    RET                                 ; 004eeb3b

