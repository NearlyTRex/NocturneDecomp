; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042f340(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_0042f730 at 0042f780
;
; Referenced Globals:
;   TerminatedCString s_none_006176ae
;   undefined4 DAT_006176af
;   undefined4 DAT_006176b0
;   undefined4 DAT_006176b1
;   TerminatedCString s_anon_006176b5
;   TerminatedCString s_s_006176b8
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f340
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042f340
    PUSH ESI                            ; 0042f341
    PUSH EDI                            ; 0042f342
    PUSH EBP                            ; 0042f343
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0042f344
    MOV EDX,dword ptr [0x00823c4c]      ; 0042f348 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0042f34e
    MOV ECX,dword ptr [ESP + 0x18]      ; 0042f34f
    PUSH ECX                            ; 0042f353
    MOV ESI,0x6176ae                    ; 0042f354 | = "(none)"
    MOV EDI,EBP                         ; 0042f359
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042f35b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0042f360
    MOV EBX,EBP                         ; 0042f363
    MOV EDX,EAX                         ; 0042f365
    PUSH EDI                            ; 0042f367
    MOV AL,byte ptr [ESI]               ; 0042f368 | = "(none)" | DAT_006176b0
        ;   Label: LAB_0042f368
    MOV byte ptr [EDI],AL               ; 0042f36a
    CMP AL,0x0                          ; 0042f36c
    JZ 0x0042f380                       ; 0042f36e
        ;   XREF to: 0042f380 (CONDITIONAL_JUMP)  ; LAB_0042f380
    MOV AL,byte ptr [ESI + 0x1]         ; 0042f370 | DAT_006176af | DAT_006176b1
    ADD ESI,0x2                         ; 0042f373
    MOV byte ptr [EDI + 0x1],AL         ; 0042f376
    ADD EDI,0x2                         ; 0042f379
    CMP AL,0x0                          ; 0042f37c
    JNZ 0x0042f368                      ; 0042f37e
        ;   XREF to: 0042f368 (CONDITIONAL_JUMP)  ; LAB_0042f368
    POP EDI                             ; 0042f380
        ;   Label: LAB_0042f380
    MOV ESI,EDX                         ; 0042f381
    LEA EDI,[EDX + 0x88]                ; 0042f383
    CMP dword ptr [ESI + 0x24b4],0x0    ; 0042f389
        ;   Label: LAB_0042f389
    JNZ 0x0042f39e                      ; 0042f390
        ;   XREF to: 0042f39e (CONDITIONAL_JUMP)  ; LAB_0042f39e
    ADD ESI,0x44                        ; 0042f392
    CMP ESI,EDI                         ; 0042f395
    JNZ 0x0042f389                      ; 0042f397
        ;   XREF to: 0042f389 (CONDITIONAL_JUMP)  ; LAB_0042f389
    POP EBP                             ; 0042f399
    POP EDI                             ; 0042f39a
    POP ESI                             ; 0042f39b
    POP EBX                             ; 0042f39c
    RET                                 ; 0042f39d
    CMP EBX,EBP                         ; 0042f39e
        ;   Label: LAB_0042f39e
    JBE 0x0042f3b2                      ; 0042f3a0
        ;   XREF to: 0042f3b2 (CONDITIONAL_JUMP)  ; LAB_0042f3b2
    PUSH 0x6176b5                       ; 0042f3a2 | = ", "
    PUSH EBX                            ; 0042f3a7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0042f3a8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0042f3ad
    ADD EBX,EAX                         ; 0042f3b0
    MOV EDX,dword ptr [ESI + 0x24b4]    ; 0042f3b2
        ;   Label: LAB_0042f3b2
    PUSH EDX                            ; 0042f3b8
    PUSH 0x6176b8                       ; 0042f3b9 | = "%s"
    PUSH EBX                            ; 0042f3be
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0042f3bf
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0042f3c4
    ADD EBX,EAX                         ; 0042f3c7
    ADD ESI,0x44                        ; 0042f3c9
    CMP ESI,EDI                         ; 0042f3cc
    JNZ 0x0042f389                      ; 0042f3ce
        ;   XREF to: 0042f389 (CONDITIONAL_JUMP)  ; LAB_0042f389
    POP EBP                             ; 0042f3d0
    POP EDI                             ; 0042f3d1
    POP ESI                             ; 0042f3d2
    POP EBX                             ; 0042f3d3
    RET                                 ; 0042f3d4

