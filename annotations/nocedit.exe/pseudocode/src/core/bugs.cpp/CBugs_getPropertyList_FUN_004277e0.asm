; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_getPropertyList_FUN_004277e0(CBugs *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
; Local Variables:
; char[100]        Stack[-0x70]:100  local_70
;
; Referenced Globals:
;   TerminatedCString s_bugCount_00616e80
;   TerminatedCString s_Bug_model_d_00616e89
;   TerminatedCString s_allowChaseEvent_00616e96
;   TerminatedCString s_allowSwarmvent_00616ea6
;   TerminatedCString s_animateEvent_00616eb5
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004277e0
        ;   Label: core_bugs.cpp_CBugs_getPropertyList_FUN_004277e0
    PUSH EDI                            ; 004277e1
    PUSH EBP                            ; 004277e2
    SUB ESP,0x64                        ; 004277e3
    MOV EDI,dword ptr [ESP + 0x78]      ; 004277e6
    PUSH EDI                            ; 004277ea
    MOV EDX,dword ptr [ESP + 0x78]      ; 004277eb
    PUSH EDX                            ; 004277ef
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 004277f0
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004277f5
    PUSH 0x0                            ; 004277f8
    PUSH 0x190                          ; 004277fa
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004277ff
    PUSH 0x0                            ; 00427803
    ADD EAX,0xbec0                      ; 00427805
    PUSH EAX                            ; 0042780a
    PUSH 0x616e80                       ; 0042780b | = "bugCount"
    PUSH EDI                            ; 00427810
    CALL core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220 ; 00427811
        ;   XREF to: 0040e220 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, int min_value, ...)
    ADD ESP,0x18                        ; 00427816
    MOV EBP,dword ptr [ESP + 0x74]      ; 00427819
    MOV dword ptr [EAX + 0x58],0x1      ; 0042781d
    MOV EBP,dword ptr [EBP + 0x122c4]   ; 00427824
    INC EBP                             ; 0042782a
    CMP EBP,0x4                         ; 0042782b
    JLE 0x00427835                      ; 0042782e
        ;   XREF to: 00427835 (CONDITIONAL_JUMP)  ; LAB_00427835
    MOV EBP,0x4                         ; 00427830
    XOR EBX,EBX                         ; 00427835
        ;   Label: LAB_00427835
    TEST EBP,EBP                        ; 00427837
    JLE 0x00427876                      ; 00427839
        ;   XREF to: 00427876 (CONDITIONAL_JUMP)  ; LAB_00427876
    PUSH ESI                            ; 0042783b
    MOV ESI,dword ptr [ESP + 0x78]      ; 0042783c
    ADD ESI,0x122c8                     ; 00427840
    PUSH EBX                            ; 00427846
        ;   Label: LAB_00427846
    PUSH 0x616e89                       ; 00427847 | = "Bug model %d"
    LEA EAX,[ESP + 0xc]                 ; 0042784c
    PUSH EAX                            ; 00427850
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00427851
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00427856
    PUSH 0x1                            ; 00427859
    PUSH ESI                            ; 0042785b
    LEA EAX,[ESP + 0xc]                 ; 0042785c
    PUSH EAX                            ; 00427860
    PUSH EDI                            ; 00427861
    INC EBX                             ; 00427862
    ADD ESI,0x17c                       ; 00427863
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 00427869
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 0042786e
    CMP EBX,EBP                         ; 00427871
    JL 0x00427846                       ; 00427873
        ;   XREF to: 00427846 (CONDITIONAL_JUMP)  ; LAB_00427846
    POP ESI                             ; 00427875
    MOV EAX,dword ptr [ESP + 0x74]      ; 00427876
        ;   Label: LAB_00427876
    ADD EAX,0x198a0                     ; 0042787a
    PUSH EAX                            ; 0042787f
    PUSH 0x616e96                       ; 00427880 | = "allowChaseEvent"
    PUSH EDI                            ; 00427885
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00427886
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0042788b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042788e
    ADD EAX,0x19904                     ; 00427892
    PUSH EAX                            ; 00427897
    PUSH 0x616ea6                       ; 00427898 | = "allowSwarmvent"
    PUSH EDI                            ; 0042789d
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0042789e
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 004278a3
    MOV EAX,dword ptr [ESP + 0x74]      ; 004278a6
    ADD EAX,0x19968                     ; 004278aa
    PUSH EAX                            ; 004278af
    PUSH 0x616eb5                       ; 004278b0 | = "animateEvent"
    PUSH EDI                            ; 004278b5
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 004278b6
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 004278bb
    ADD ESP,0x64                        ; 004278be
    POP EBP                             ; 004278c1
    POP EDI                             ; 004278c2
    POP EBX                             ; 004278c3
    RET                                 ; 004278c4

