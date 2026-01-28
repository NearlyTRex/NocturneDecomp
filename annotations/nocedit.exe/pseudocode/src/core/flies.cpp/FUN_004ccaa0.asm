; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_flies_cpp_FUN_004ccaa0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_flyCount_0062a472
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e220
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccaa0
        ;   Label: core_flies.cpp_FUN_004ccaa0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ccaa1
    PUSH EDX                            ; 004ccaa5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ccaa6
    PUSH ECX                            ; 004ccaaa
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004ccaab
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004ccab0
    PUSH 0x0                            ; 004ccab3
    PUSH 0xc8                           ; 004ccab5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ccaba
    PUSH 0x0                            ; 004ccabe
    ADD EAX,0x164                       ; 004ccac0
    PUSH EAX                            ; 004ccac5
    PUSH 0x62a472                       ; 004ccac6 | = "flyCount"
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ccacb
    PUSH EBX                            ; 004ccacf
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e220 ; 004ccad0
        ;   XREF to: 0040e220 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e220(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 004ccad5
    MOV dword ptr [EAX + 0x58],0x1      ; 004ccad8
    POP EBX                             ; 004ccadf
    RET                                 ; 004ccae0

