; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog1_cpp_CDog_archive_FUN_005ac6d0(CDog *this_ptr)
;
; Parameters:
; CDog *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f0e7e
;   TerminatedCString s_EatTime_005f0e83
;   int g_CDogClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac6d0
        ;   Label: core_dog1.cpp_CDog_archive_FUN_005ac6d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ac6d1
    PUSH EBX                            ; 005ac6d5
    CALL core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 ; 005ac6d6
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy * this_ptr)
    MOV EDX,dword ptr [0x0061eccc]      ; 005ac6db | g_CDogClassVersion
    ADD ESP,0x4                         ; 005ac6e1
    CMP EDX,0x2                         ; 005ac6e4
    JGE 0x005ac6eb                      ; 005ac6e7
        ;   XREF to: 005ac6eb (CONDITIONAL_JUMP)  ; LAB_005ac6eb
    POP EBX                             ; 005ac6e9
    RET                                 ; 005ac6ea
    PUSH 0x5f0e7e                       ; 005ac6eb | DAT_005f0e7e
        ;   Label: LAB_005ac6eb
    LEA EAX,[EBX + 0x1185c]             ; 005ac6f0
    PUSH EAX                            ; 005ac6f6
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 005ac6f7
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 005ac6fc
    PUSH 0x5f0e83                       ; 005ac6ff | = "EatTime"
    LEA EAX,[EBX + 0x11864]             ; 005ac704
    PUSH EAX                            ; 005ac70a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005ac70b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 005ac710
    POP EBX                             ; 005ac713
    RET                                 ; 005ac714

