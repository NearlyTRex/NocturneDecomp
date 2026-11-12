; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00410dc0(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005cb62f
;   TerminatedCString s_effectClassNameList_005cb634
;   TerminatedCString s_addToPathGrid_005cb648
;   int g_CBarrierClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410dc0
        ;   Label: core_barrier.cpp_CBarrier_archive_FUN_00410dc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410dc1
    PUSH EBX                            ; 00410dc5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00410dc6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410dcb
    PUSH 0x5cb62f                       ; 00410dce | DAT_005cb62f
    LEA EAX,[EBX + 0x2b4]               ; 00410dd3
    PUSH EAX                            ; 00410dd9
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00410dda
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b4b0(CVector3f * vector_ptr, char * property_name)
    MOV EDX,dword ptr [0x00609850]      ; 00410ddf | g_CBarrierClassVersion
    ADD ESP,0x8                         ; 00410de5
    CMP EDX,0x2                         ; 00410de8
    JGE 0x00410def                      ; 00410deb
        ;   XREF to: 00410def (CONDITIONAL_JUMP)  ; LAB_00410def
    POP EBX                             ; 00410ded
    RET                                 ; 00410dee
    PUSH 0x5cb634                       ; 00410def | = "effectClassNameList"
        ;   Label: LAB_00410def
    LEA EAX,[EBX + 0x2c4]               ; 00410df4
    PUSH EAX                            ; 00410dfa
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00410dfb
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00410e00
    PUSH 0x5cb648                       ; 00410e03 | = "addToPathGrid"
    ADD EBX,0x2c0                       ; 00410e08
    PUSH EBX                            ; 00410e0e
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00410e0f
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00410e14
    POP EBX                             ; 00410e17
    RET                                 ; 00410e18

