; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_health.cpp_FUN_004f2040()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_0062ea39
;   TerminatedCString s_Number_of_uses_0062ea4b
;   TerminatedCString s_HP_restored_0062ea5a
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2040
        ;   Label: core_health.cpp_FUN_004f2040
    PUSH ESI                            ; 004f2041
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f2042
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f2046
    PUSH ESI                            ; 004f204a
    PUSH EBX                            ; 004f204b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004f204c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004f2051
    PUSH 0x0                            ; 004f2054
    LEA EAX,[EBX + 0x158]               ; 004f2056
    PUSH EAX                            ; 004f205c
    PUSH 0x62ea39                       ; 004f205d | = "Model file (.kfm)"
    PUSH ESI                            ; 004f2062
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 004f2063
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004f2068
    PUSH 0x0                            ; 004f206b
    LEA EAX,[EBX + 0x2d4]               ; 004f206d
    PUSH EAX                            ; 004f2073
    PUSH 0x62ea4b                       ; 004f2074 | = "Number of uses"
    PUSH ESI                            ; 004f2079
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 004f207a
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004f207f
    PUSH 0x0                            ; 004f2082
    PUSH 0x42c80000                     ; 004f2084
    ADD EBX,0x2d8                       ; 004f2089
    PUSH 0x0                            ; 004f208f
    PUSH EBX                            ; 004f2091
    PUSH 0x62ea5a                       ; 004f2092 | = "HP restored"
    PUSH ESI                            ; 004f2097
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 004f2098
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 004f209d
    POP ESI                             ; 004f20a0
    POP EBX                             ; 004f20a1
    RET                                 ; 004f20a2

