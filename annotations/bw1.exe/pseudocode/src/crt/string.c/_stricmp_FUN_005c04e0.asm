; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__stricmp_FUN_005c04e0(char *str1,char *str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[111]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0 at 005380ef
;   core_actor.cpp_CDemonActor_load_FUN_0040aed0 at 0040af1a
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_0041ac60 at 0041ac80
;   core_carved.cpp_FUN_0042b290 at 0042b2aa
;   core_charactr.cpp_FUN_0042c510 at 0042c60d
;   core_charactr.cpp_FUN_00431c30 at 00431c9e
;   core_demnfolk.cpp_FUN_00458bc0 at 00458e68
;   core_dmodel.cpp_loadModel_FUN_00468780 at 0046879c
;   core_dracbrid.cpp_FUN_0047b1b0 at 0047b1df
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a72d9
;   ... and 101 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c04e0
        ;   Label: crt_string.c__stricmp_FUN_005c04e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c04e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c04e5
    MOV AL,byte ptr [EBX]               ; 005c04e9
        ;   Label: LAB_005c04e9
    MOV AH,byte ptr [EDX]               ; 005c04eb
    CMP AL,0x41                         ; 005c04ed
    JC 0x005c04f7                       ; 005c04ef
        ;   XREF to: 005c04f7 (CONDITIONAL_JUMP)  ; LAB_005c04f7
    CMP AL,0x5a                         ; 005c04f1
    JA 0x005c04f7                       ; 005c04f3
        ;   XREF to: 005c04f7 (CONDITIONAL_JUMP)  ; LAB_005c04f7
    ADD AL,0x20                         ; 005c04f5
    CMP AH,0x41                         ; 005c04f7
        ;   Label: LAB_005c04f7
    JC 0x005c0504                       ; 005c04fa
        ;   XREF to: 005c0504 (CONDITIONAL_JUMP)  ; LAB_005c0504
    CMP AH,0x5a                         ; 005c04fc
    JA 0x005c0504                       ; 005c04ff
        ;   XREF to: 005c0504 (CONDITIONAL_JUMP)  ; LAB_005c0504
    ADD AH,0x20                         ; 005c0501
    CMP AL,AH                           ; 005c0504
        ;   Label: LAB_005c0504
    JNZ 0x005c0510                      ; 005c0506
        ;   XREF to: 005c0510 (CONDITIONAL_JUMP)  ; LAB_005c0510
    TEST AH,AH                          ; 005c0508
    JZ 0x005c0510                       ; 005c050a
        ;   XREF to: 005c0510 (CONDITIONAL_JUMP)  ; LAB_005c0510
    INC EBX                             ; 005c050c
    INC EDX                             ; 005c050d
    JMP 0x005c04e9                      ; 005c050e
        ;   XREF to: 005c04e9 (UNCONDITIONAL_JUMP)  ; LAB_005c04e9
    XOR EDX,EDX                         ; 005c0510
        ;   Label: LAB_005c0510
    MOV DL,AL                           ; 005c0512
    MOV AL,AH                           ; 005c0514
    AND EAX,0xff                        ; 005c0516
    SUB EDX,EAX                         ; 005c051b
    MOV EAX,EDX                         ; 005c051d
    POP EBX                             ; 005c051f
    RET                                 ; 005c0520

