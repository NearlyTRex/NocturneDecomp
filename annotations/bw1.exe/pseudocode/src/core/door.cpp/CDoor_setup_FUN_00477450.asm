; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_setup_FUN_00477450(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   crt_string.c__strcmp_FUN_005c0f80
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477450
        ;   Label: core_door.cpp_CDoor_setup_FUN_00477450
    PUSH ESI                            ; 00477451
    MOV EBX,dword ptr [ESP + 0xc]       ; 00477452
    LEA EAX,[EBX + 0x158]               ; 00477456
    PUSH EAX                            ; 0047745c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0047745d
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00477462
    PUSH EBX                            ; 00477465
    CALL core_actor.cpp_FUN_00408850    ; 00477466
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047746b
    PUSH 0x5da79a                       ; 0047746e
    LEA ESI,[EBX + 0x2e8]               ; 00477473
    PUSH ESI                            ; 00477479
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0047747a
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047747f
    TEST EAX,EAX                        ; 00477482
    JNZ 0x00477495                      ; 00477484
        ;   XREF to: 00477495 (CONDITIONAL_JUMP)  ; LAB_00477495
    PUSH EBX                            ; 00477486
    PUSH 0x5da7aa                       ; 00477487
    PUSH ESI                            ; 0047748c
    CALL crt_unknown.c_FUN_005bfb40     ; 0047748d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00477492
    PUSH 0x5da7b1                       ; 00477495
        ;   Label: LAB_00477495
    LEA ESI,[EBX + 0x34c]               ; 0047749a
    PUSH ESI                            ; 004774a0
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004774a1
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004774a6
    TEST EAX,EAX                        ; 004774a9
    JZ 0x004774b0                       ; 004774ab
        ;   XREF to: 004774b0 (CONDITIONAL_JUMP)  ; LAB_004774b0
    POP ESI                             ; 004774ad
    POP EBX                             ; 004774ae
    RET                                 ; 004774af
    PUSH EBX                            ; 004774b0
        ;   Label: LAB_004774b0
    PUSH 0x5da7c2                       ; 004774b1
    PUSH ESI                            ; 004774b6
    CALL crt_unknown.c_FUN_005bfb40     ; 004774b7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004774bc
    POP ESI                             ; 004774bf
    POP EBX                             ; 004774c0
    RET                                 ; 004774c1

