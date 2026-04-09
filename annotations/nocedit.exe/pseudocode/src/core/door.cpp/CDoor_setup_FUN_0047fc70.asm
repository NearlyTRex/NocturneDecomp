; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_setup_FUN_0047fc70(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_defaultDoorOpen_006210d5
;   TerminatedCString s_sOpen_006210e5
;   TerminatedCString s_defaultDoorClose_006210ec
;   TerminatedCString s_sClose_006210fd
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c__strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fc70
        ;   Label: core_door.cpp_CDoor_setup_FUN_0047fc70
    PUSH ESI                            ; 0047fc71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047fc72
    LEA EAX,[EBX + 0x158]               ; 0047fc76
    PUSH EAX                            ; 0047fc7c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0047fc7d
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047fc82
    PUSH EBX                            ; 0047fc85
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0047fc86
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047fc8b
    PUSH 0x6210d5                       ; 0047fc8e | = "defaultDoorOpen"
    LEA ESI,[EBX + 0x2e8]               ; 0047fc93
    PUSH ESI                            ; 0047fc99
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0047fc9a
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047fc9f
    TEST EAX,EAX                        ; 0047fca2
    JNZ 0x0047fcb5                      ; 0047fca4
        ;   XREF to: 0047fcb5 (CONDITIONAL_JUMP)  ; LAB_0047fcb5
    PUSH EBX                            ; 0047fca6
    PUSH 0x6210e5                       ; 0047fca7 | = "%sOpen"
    PUSH ESI                            ; 0047fcac
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0047fcad
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047fcb2
    PUSH 0x6210ec                       ; 0047fcb5 | = "defaultDoorClose"
        ;   Label: LAB_0047fcb5
    LEA ESI,[EBX + 0x34c]               ; 0047fcba
    PUSH ESI                            ; 0047fcc0
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0047fcc1
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047fcc6
    TEST EAX,EAX                        ; 0047fcc9
    JZ 0x0047fcd0                       ; 0047fccb
        ;   XREF to: 0047fcd0 (CONDITIONAL_JUMP)  ; LAB_0047fcd0
    POP ESI                             ; 0047fccd
    POP EBX                             ; 0047fcce
    RET                                 ; 0047fccf
    PUSH EBX                            ; 0047fcd0
        ;   Label: LAB_0047fcd0
    PUSH 0x6210fd                       ; 0047fcd1 | = "%sClose"
    PUSH ESI                            ; 0047fcd6
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0047fcd7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047fcdc
    POP ESI                             ; 0047fcdf
    POP EBX                             ; 0047fce0
    RET                                 ; 0047fce1

