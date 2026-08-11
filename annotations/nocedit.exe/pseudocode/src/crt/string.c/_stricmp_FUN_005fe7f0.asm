; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__stricmp_FUN_005fe7f0(char *str1,char *str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[144]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0 at 0054b4df
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 at 0054c58c
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 at 0040d2fe
;   core_actor.cpp_CDemonActor_load_FUN_0040b050 at 0040b1ce
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90 at 0041afb0
;   core_chain.cpp_CChain_addFilesToExtract_FUN_00431250 at 0043126a
;   core_charactr.cpp_CCharacter_getDeathState_FUN_0042c580 at 0042c5ca
;   core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10 at 0047ebfa
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479c9e
;   core_dmodel.cpp_loadModel_FUN_00478c00 at 00478c1c
;   ... and 134 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe7f0
        ;   Label: crt_string.c__stricmp_FUN_005fe7f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005fe7f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005fe7f5
    MOV AL,byte ptr [EBX]               ; 005fe7f9
        ;   Label: LAB_005fe7f9
    MOV AH,byte ptr [EDX]               ; 005fe7fb
    CMP AL,0x41                         ; 005fe7fd
    JC 0x005fe807                       ; 005fe7ff
        ;   XREF to: 005fe807 (CONDITIONAL_JUMP)  ; LAB_005fe807
    CMP AL,0x5a                         ; 005fe801
    JA 0x005fe807                       ; 005fe803
        ;   XREF to: 005fe807 (CONDITIONAL_JUMP)  ; LAB_005fe807
    ADD AL,0x20                         ; 005fe805
    CMP AH,0x41                         ; 005fe807
        ;   Label: LAB_005fe807
    JC 0x005fe814                       ; 005fe80a
        ;   XREF to: 005fe814 (CONDITIONAL_JUMP)  ; LAB_005fe814
    CMP AH,0x5a                         ; 005fe80c
    JA 0x005fe814                       ; 005fe80f
        ;   XREF to: 005fe814 (CONDITIONAL_JUMP)  ; LAB_005fe814
    ADD AH,0x20                         ; 005fe811
    CMP AL,AH                           ; 005fe814
        ;   Label: LAB_005fe814
    JNZ 0x005fe820                      ; 005fe816
        ;   XREF to: 005fe820 (CONDITIONAL_JUMP)  ; LAB_005fe820
    TEST AH,AH                          ; 005fe818
    JZ 0x005fe820                       ; 005fe81a
        ;   XREF to: 005fe820 (CONDITIONAL_JUMP)  ; LAB_005fe820
    INC EBX                             ; 005fe81c
    INC EDX                             ; 005fe81d
    JMP 0x005fe7f9                      ; 005fe81e
        ;   XREF to: 005fe7f9 (UNCONDITIONAL_JUMP)  ; LAB_005fe7f9
    XOR EDX,EDX                         ; 005fe820
        ;   Label: LAB_005fe820
    MOV DL,AL                           ; 005fe822
    MOV AL,AH                           ; 005fe824
    AND EAX,0xff                        ; 005fe826
    SUB EDX,EAX                         ; 005fe82b
    MOV EAX,EDX                         ; 005fe82d
    POP EBX                             ; 005fe82f
    RET                                 ; 005fe830

