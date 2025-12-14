; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
;
; Parameters:
; char *           Stack[0x4]:4   haystack_str
; char *           Stack[0x8]:4   needle_str
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040fe68
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdb57
;   core_script.cpp_FUN_005592c0 at 00559305
;   core_skeledit.cpp_FUN_0058c190 at 0058c8e7
;   core_skeledit.cpp_FUN_00592690 at 0059496b
;   core_skeledit.cpp_readNonEmptyLine_FUN_005895f0 at 0058967f
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 at 005a47ad
;   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 at 005ad2ad
;   sound_sndmain.cpp_trimLineAndRemoveComments_FUN_005a4530 at 005a453d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fedd0
        ;   Label: crt_string.c_strstr_FUN_005fedd0
    PUSH ESI                            ; 005fedd1
    PUSH EDI                            ; 005fedd2
    PUSH EBP                            ; 005fedd3
    SUB ESP,0x4                         ; 005fedd4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005fedd7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005feddb
    MOV AH,byte ptr [EBX]               ; 005feddf
    TEST AH,AH                          ; 005fede1
    JNZ 0x005fedec                      ; 005fede3
        ;   XREF to: 005fedec (CONDITIONAL_JUMP)  ; LAB_005fedec
    MOV EAX,ESI                         ; 005fede5
    JMP 0x005fee97                      ; 005fede7
        ;   XREF to: 005fee97 (UNCONDITIONAL_JUMP)  ; LAB_005fee97
    CMP byte ptr [EBX + 0x1],0x0        ; 005fedec
        ;   Label: LAB_005fedec
    JNZ 0x005fee16                      ; 005fedf0
        ;   XREF to: 005fee16 (CONDITIONAL_JUMP)  ; LAB_005fee16
    MOV DL,AH                           ; 005fedf2
    MOV AL,byte ptr [ESI]               ; 005fedf4
        ;   Label: LAB_005fedf4
    CMP AL,DL                           ; 005fedf6
    JZ 0x005fee0c                       ; 005fedf8
        ;   XREF to: 005fee0c (CONDITIONAL_JUMP)  ; LAB_005fee0c
    CMP AL,0x0                          ; 005fedfa
    JZ 0x005fee0a                       ; 005fedfc
        ;   XREF to: 005fee0a (CONDITIONAL_JUMP)  ; LAB_005fee0a
    INC ESI                             ; 005fedfe
    MOV AL,byte ptr [ESI]               ; 005fedff
    CMP AL,DL                           ; 005fee01
    JZ 0x005fee0c                       ; 005fee03
        ;   XREF to: 005fee0c (CONDITIONAL_JUMP)  ; LAB_005fee0c
    INC ESI                             ; 005fee05
    CMP AL,0x0                          ; 005fee06
    JNZ 0x005fedf4                      ; 005fee08
        ;   XREF to: 005fedf4 (CONDITIONAL_JUMP)  ; LAB_005fedf4
    SUB ESI,ESI                         ; 005fee0a
        ;   Label: LAB_005fee0a
    MOV EAX,ESI                         ; 005fee0c
        ;   Label: LAB_005fee0c
    ADD ESP,0x4                         ; 005fee0e
    POP EBP                             ; 005fee11
    POP EDI                             ; 005fee12
    POP ESI                             ; 005fee13
    POP EBX                             ; 005fee14
    RET                                 ; 005fee15
    MOV ECX,0xffffffff                  ; 005fee16
        ;   Label: LAB_005fee16
    MOV EDI,ESI                         ; 005fee1b
    XOR AL,AL                           ; 005fee1d
    PUSH ES                             ; 005fee1f
    JECXZ 0x005fee2d                    ; 005fee20
        ;   XREF to: 005fee2d (CONDITIONAL_JUMP)  ; LAB_005fee2b+2
    MOV DX,DS                           ; 005fee22
    MOV ES,DX                           ; 005fee24
    SCASB.REPNE ES:EDI                  ; 005fee26
    JNZ 0x005fee2d                      ; 005fee28
        ;   XREF to: 005fee2d (CONDITIONAL_JUMP)  ; LAB_005fee2b+2
    DEC EDI                             ; 005fee2a
    TEST AX,0xcf89                      ; 005fee2b
    POP ES                              ; 005fee2f
    MOV dword ptr [ESP],EDI             ; 005fee30
    MOV EDI,EBX                         ; 005fee33
    PUSH ES                             ; 005fee35
    MOV AX,DS                           ; 005fee36
    MOV ES,AX                           ; 005fee38
    SUB ECX,ECX                         ; 005fee3a
    DEC ECX                             ; 005fee3c
    XOR EAX,EAX                         ; 005fee3d
    SCASB.REPNE ES:EDI                  ; 005fee3f
    NOT ECX                             ; 005fee41
    DEC ECX                             ; 005fee43
    POP ES                              ; 005fee44
    MOV EBP,ECX                         ; 005fee45
    MOV ECX,dword ptr [ESP]             ; 005fee47
        ;   Label: LAB_005fee47
    SUB ECX,ESI                         ; 005fee4a
    CMP ECX,EBP                         ; 005fee4c
    JC 0x005fee95                       ; 005fee4e
        ;   XREF to: 005fee95 (CONDITIONAL_JUMP)  ; LAB_005fee95
    MOV EDI,ESI                         ; 005fee50
    MOV AL,byte ptr [EBX]               ; 005fee52
    PUSH ES                             ; 005fee54
    JECXZ 0x005fee62                    ; 005fee55
        ;   XREF to: 005fee62 (CONDITIONAL_JUMP)  ; LAB_005fee60+2
    MOV DX,DS                           ; 005fee57
    MOV ES,DX                           ; 005fee59
    SCASB.REPNE ES:EDI                  ; 005fee5b
    JNZ 0x005fee62                      ; 005fee5d
        ;   XREF to: 005fee62 (CONDITIONAL_JUMP)  ; LAB_005fee60+2
    DEC EDI                             ; 005fee5f
    TEST AX,0xcf89                      ; 005fee60
    POP ES                              ; 005fee64
    MOV EDX,EDI                         ; 005fee65
    TEST EDI,EDI                        ; 005fee67
    JZ 0x005fee95                       ; 005fee69
        ;   XREF to: 005fee95 (CONDITIONAL_JUMP)  ; LAB_005fee95
    MOV ECX,EBP                         ; 005fee6b
    MOV EDI,EBX                         ; 005fee6d
    MOV ESI,EDX                         ; 005fee6f
    PUSH ES                             ; 005fee71
    MOV AX,DS                           ; 005fee72
    MOV ES,AX                           ; 005fee74
    XOR EAX,EAX                         ; 005fee76
    CMPSB.REPE ES:EDI,ESI               ; 005fee78
    JZ 0x005fee81                       ; 005fee7a
        ;   XREF to: 005fee81 (CONDITIONAL_JUMP)  ; LAB_005fee81
    SBB EAX,EAX                         ; 005fee7c
    SBB EAX,-0x1                        ; 005fee7e
    POP ES                              ; 005fee81
        ;   Label: LAB_005fee81
    TEST EAX,EAX                        ; 005fee82
    JNZ 0x005fee90                      ; 005fee84
        ;   XREF to: 005fee90 (CONDITIONAL_JUMP)  ; LAB_005fee90
    MOV EAX,EDX                         ; 005fee86
    ADD ESP,0x4                         ; 005fee88
    POP EBP                             ; 005fee8b
    POP EDI                             ; 005fee8c
    POP ESI                             ; 005fee8d
    POP EBX                             ; 005fee8e
    RET                                 ; 005fee8f
    LEA ESI,[EDX + 0x1]                 ; 005fee90
        ;   Label: LAB_005fee90
    JMP 0x005fee47                      ; 005fee93
        ;   XREF to: 005fee47 (UNCONDITIONAL_JUMP)  ; LAB_005fee47
    XOR EAX,EAX                         ; 005fee95
        ;   Label: LAB_005fee95
    ADD ESP,0x4                         ; 005fee97
        ;   Label: LAB_005fee97
    POP EBP                             ; 005fee9a
    POP EDI                             ; 005fee9b
    POP ESI                             ; 005fee9c
    POP EBX                             ; 005fee9d
    RET                                 ; 005fee9e

