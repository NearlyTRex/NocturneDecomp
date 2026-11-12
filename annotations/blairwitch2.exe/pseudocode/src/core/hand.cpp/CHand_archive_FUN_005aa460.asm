; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hand_cpp_CHand_archive_FUN_005aa460(CHand *this_ptr)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_SleepTime_005f0ad5
;   int g_CHandClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005aa460
        ;   Label: core_hand.cpp_CHand_archive_FUN_005aa460
    PUSH EDX                            ; 005aa464
    CALL core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 ; 005aa465
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy * this_ptr)
    MOV ECX,dword ptr [0x0061eca8]      ; 005aa46a | g_CHandClassVersion
    ADD ESP,0x4                         ; 005aa470
    CMP ECX,0x2                         ; 005aa473
    JGE 0x005aa479                      ; 005aa476
        ;   XREF to: 005aa479 (CONDITIONAL_JUMP)  ; LAB_005aa479
    RET                                 ; 005aa478
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa479
        ;   Label: LAB_005aa479
    PUSH 0x5f0ad5                       ; 005aa47d | = "SleepTime"
    ADD EAX,0x11860                     ; 005aa482
    PUSH EAX                            ; 005aa487
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005aa488
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005aa48d
    RET                                 ; 005aa490

