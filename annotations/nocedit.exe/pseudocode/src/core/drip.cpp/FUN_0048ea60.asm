; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_drip_cpp_FUN_0048ea60(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ea60
        ;   Label: core_drip.cpp_FUN_0048ea60
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ea61
    PUSH EDX                            ; 0048ea65
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048ea66
    PUSH ECX                            ; 0048ea6a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 0048ea6b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 0048ea70
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048ea73
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048ea77
    PUSH EBX                            ; 0048ea7b
    ADD EAX,0x158                       ; 0048ea7c
    PUSH EAX                            ; 0048ea81
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 0048ea82
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 0048ea87
    POP EBX                             ; 0048ea8a
    RET                                 ; 0048ea8b

