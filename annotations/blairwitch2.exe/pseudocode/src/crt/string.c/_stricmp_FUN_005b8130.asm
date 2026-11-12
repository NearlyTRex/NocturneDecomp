; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__stricmp_FUN_005b8130(char *str1,char *str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[106]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70 at 00516d9f
;   core_actor.cpp_CDemonActor_load_FUN_0040b1c0 at 0040b20a
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_004177e0 at 00417800
;   core_charactr.cpp_CCharacter_getDeathState_FUN_004281d0 at 0042821a
;   core_charactr.cpp_CCharacter_setup_FUN_00422930 at 00422a2f
;   core_dmodel.cpp_loadModel_FUN_0044fba0 at 0044fbbc
;   core_dracbrid.cpp_CDraculaBride_setup_FUN_00462c90 at 00462cbf
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048e9e9
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 at 0048e358
;   core_event.cpp_CEventList_findActorVariable_FUN_004918d0 at 004918f0
;   ... and 96 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8130
        ;   Label: crt_string.c__stricmp_FUN_005b8130
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b8131
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b8135
    MOV AL,byte ptr [EBX]               ; 005b8139
        ;   Label: LAB_005b8139
    MOV AH,byte ptr [EDX]               ; 005b813b
    CMP AL,0x41                         ; 005b813d
    JC 0x005b8147                       ; 005b813f
        ;   XREF to: 005b8147 (CONDITIONAL_JUMP)  ; LAB_005b8147
    CMP AL,0x5a                         ; 005b8141
    JA 0x005b8147                       ; 005b8143
        ;   XREF to: 005b8147 (CONDITIONAL_JUMP)  ; LAB_005b8147
    ADD AL,0x20                         ; 005b8145
    CMP AH,0x41                         ; 005b8147
        ;   Label: LAB_005b8147
    JC 0x005b8154                       ; 005b814a
        ;   XREF to: 005b8154 (CONDITIONAL_JUMP)  ; LAB_005b8154
    CMP AH,0x5a                         ; 005b814c
    JA 0x005b8154                       ; 005b814f
        ;   XREF to: 005b8154 (CONDITIONAL_JUMP)  ; LAB_005b8154
    ADD AH,0x20                         ; 005b8151
    CMP AL,AH                           ; 005b8154
        ;   Label: LAB_005b8154
    JNZ 0x005b8160                      ; 005b8156
        ;   XREF to: 005b8160 (CONDITIONAL_JUMP)  ; LAB_005b8160
    TEST AH,AH                          ; 005b8158
    JZ 0x005b8160                       ; 005b815a
        ;   XREF to: 005b8160 (CONDITIONAL_JUMP)  ; LAB_005b8160
    INC EBX                             ; 005b815c
    INC EDX                             ; 005b815d
    JMP 0x005b8139                      ; 005b815e
        ;   XREF to: 005b8139 (UNCONDITIONAL_JUMP)  ; LAB_005b8139
    XOR EDX,EDX                         ; 005b8160
        ;   Label: LAB_005b8160
    MOV DL,AL                           ; 005b8162
    MOV AL,AH                           ; 005b8164
    AND EAX,0xff                        ; 005b8166
    SUB EDX,EAX                         ; 005b816b
    MOV EAX,EDX                         ; 005b816d
    POP EBX                             ; 005b816f
    RET                                 ; 005b8170

