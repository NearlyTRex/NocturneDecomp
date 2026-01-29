; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_dracbrid_cpp_FUN_00486d00(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486d00
        ;   Label: core_dracbrid.cpp_FUN_00486d00
    MOV EDX,dword ptr [ESP + 0xc]       ; 00486d01
    PUSH EDX                            ; 00486d05
    MOV ECX,dword ptr [ESP + 0xc]       ; 00486d06
    PUSH ECX                            ; 00486d0a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00486d0b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00486d10
    MOV EBX,dword ptr [ESP + 0xc]       ; 00486d13
    MOV EAX,dword ptr [ESP + 0x8]       ; 00486d17
    PUSH EBX                            ; 00486d1b
    ADD EAX,0x158                       ; 00486d1c
    PUSH EAX                            ; 00486d21
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00486d22
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 00486d27
    POP EBX                             ; 00486d2a
    RET                                 ; 00486d2b

