; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_0050b810()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b810
        ;   Label: core_manpuz.cpp_FUN_0050b810
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050b811
    PUSH EDX                            ; 0050b815
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050b816
    PUSH ECX                            ; 0050b81a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 0050b81b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 0050b820
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050b823
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050b827
    PUSH EBX                            ; 0050b82b
    ADD EAX,0x158                       ; 0050b82c
    PUSH EAX                            ; 0050b831
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 0050b832
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 0050b837
    POP EBX                             ; 0050b83a
    RET                                 ; 0050b83b

