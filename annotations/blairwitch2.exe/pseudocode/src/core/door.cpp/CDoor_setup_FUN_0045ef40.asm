; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_setup_FUN_0045ef40(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ef40
        ;   Label: core_door.cpp_CDoor_setup_FUN_0045ef40
    PUSH ESI                            ; 0045ef41
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045ef42
    LEA EAX,[EBX + 0x2b4]               ; 0045ef46
    PUSH EAX                            ; 0045ef4c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0045ef4d
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045ef52
    PUSH EBX                            ; 0045ef55
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 0045ef56
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045ef5b
    PUSH 0x5d099e                       ; 0045ef5e
    LEA ESI,[EBX + 0x444]               ; 0045ef63
    PUSH ESI                            ; 0045ef69
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0045ef6a
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0045ef6f
    TEST EAX,EAX                        ; 0045ef72
    JNZ 0x0045ef85                      ; 0045ef74
        ;   XREF to: 0045ef85 (CONDITIONAL_JUMP)  ; LAB_0045ef85
    PUSH EBX                            ; 0045ef76
    PUSH 0x5d09ae                       ; 0045ef77
    PUSH ESI                            ; 0045ef7c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0045ef7d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045ef82
    PUSH 0x5d09b5                       ; 0045ef85
        ;   Label: LAB_0045ef85
    LEA ESI,[EBX + 0x4a8]               ; 0045ef8a
    PUSH ESI                            ; 0045ef90
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0045ef91
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0045ef96
    TEST EAX,EAX                        ; 0045ef99
    JZ 0x0045efa0                       ; 0045ef9b
        ;   XREF to: 0045efa0 (CONDITIONAL_JUMP)  ; LAB_0045efa0
    POP ESI                             ; 0045ef9d
    POP EBX                             ; 0045ef9e
    RET                                 ; 0045ef9f
    PUSH EBX                            ; 0045efa0
        ;   Label: LAB_0045efa0
    PUSH 0x5d09c6                       ; 0045efa1
    PUSH ESI                            ; 0045efa6
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0045efa7
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045efac
    POP ESI                             ; 0045efaf
    POP EBX                             ; 0045efb0
    RET                                 ; 0045efb1

