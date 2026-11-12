; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_archive_FUN_004cf5e0(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_model_name_005c47c1
;   undefined4 DAT_005c47cc
;   TerminatedCString s_active_005c47d0
;   TerminatedCString s_graveState_005c47d7
;   TerminatedCString s_curFrame_005c47e2
;   TerminatedCString s_hideOnFirstFrame_005c47eb
;   TerminatedCString s_startCondition_005c47fc
;   TerminatedCString s_startSound_005c480b
;   int g_CGraveClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf5e0
        ;   Label: core_grave.cpp_CGrave_archive_FUN_004cf5e0
    PUSH ESI                            ; 004cf5e1
    SUB ESP,0x4                         ; 004cf5e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cf5e5
    PUSH EBX                            ; 004cf5e9
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004cf5ea
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cf5ef
    PUSH 0x5c47c1                       ; 004cf5f2 | = "model name"
    LEA EAX,[EBX + 0x158]               ; 004cf5f7
    PUSH EAX                            ; 004cf5fd
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 004cf5fe
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cf603
    PUSH 0x5c47cc                       ; 004cf606 | DAT_005c47cc
    LEA EAX,[EBX + 0x2d8]               ; 004cf60b
    PUSH EAX                            ; 004cf611
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004cf612
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x005fff28]      ; 004cf617 | g_CGraveClassVersion
    ADD ESP,0x8                         ; 004cf61d
    CMP EDX,0x2                         ; 004cf620
    JL 0x004cf68f                       ; 004cf623
        ;   XREF to: 004cf68f (CONDITIONAL_JUMP)  ; LAB_004cf68f
    PUSH 0x5c47d7                       ; 004cf625 | = "graveState"
    LEA EAX,[EBX + 0x2e0]               ; 004cf62a
    PUSH EAX                            ; 004cf630
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004cf631
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cf636
    PUSH 0x5c47e2                       ; 004cf639 | = "curFrame"
        ;   Label: LAB_004cf639
    LEA EAX,[EBX + 0x2d4]               ; 004cf63e
    PUSH EAX                            ; 004cf644
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004cf645
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV ESI,dword ptr [0x005fff28]      ; 004cf64a | g_CGraveClassVersion
    ADD ESP,0x8                         ; 004cf650
    CMP ESI,0x3                         ; 004cf653
    JL 0x004cf680                       ; 004cf656
        ;   XREF to: 004cf680 (CONDITIONAL_JUMP)  ; LAB_004cf680
    PUSH 0x5c47eb                       ; 004cf658 | = "hideOnFirstFrame"
    LEA EAX,[EBX + 0x2e4]               ; 004cf65d
    PUSH EAX                            ; 004cf663
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004cf664
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cf669
    PUSH 0x5c47fc                       ; 004cf66c | = "startCondition"
    LEA EAX,[EBX + 0x2e8]               ; 004cf671
    PUSH EAX                            ; 004cf677
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004cf678
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cf67d
    CMP dword ptr [0x005fff28],0x4      ; 004cf680 | g_CGraveClassVersion
        ;   Label: LAB_004cf680
    JGE 0x004cf6c0                      ; 004cf687
        ;   XREF to: 004cf6c0 (CONDITIONAL_JUMP)  ; LAB_004cf6c0
    ADD ESP,0x4                         ; 004cf689
    POP ESI                             ; 004cf68c
    POP EBX                             ; 004cf68d
    RET                                 ; 004cf68e
    PUSH 0x5c47d0                       ; 004cf68f | = "active"
        ;   Label: LAB_004cf68f
    LEA EAX,[ESP + 0x4]                 ; 004cf694
    PUSH EAX                            ; 004cf698
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004cf699
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cf69e
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004cf6a1
    CMP dword ptr [ESP],0x0             ; 004cf6ab
    JZ 0x004cf639                       ; 004cf6af
        ;   XREF to: 004cf639 (CONDITIONAL_JUMP)  ; LAB_004cf639
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004cf6b1
    JMP 0x004cf639                      ; 004cf6bb
        ;   XREF to: 004cf639 (UNCONDITIONAL_JUMP)  ; LAB_004cf639
    PUSH 0x5c480b                       ; 004cf6c0 | = "startSound"
        ;   Label: LAB_004cf6c0
    ADD EBX,0x34c                       ; 004cf6c5
    PUSH EBX                            ; 004cf6cb
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004cf6cc
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cf6d1
    ADD ESP,0x4                         ; 004cf6d4
    POP ESI                             ; 004cf6d7
    POP EBX                             ; 004cf6d8
    RET                                 ; 004cf6d9

