; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00550450(char *param_1)
;
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_markResourcesInUse_FUN_0042b400 at 0042b422
;
; Referenced Globals:
;   undefined4 g_DeformableModelPool[0].model_filename[0]
;   undefined4 DAT_02802f5c
;   undefined4 DAT_02cd28bc
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550450
        ;   Label: core_skeleton.cpp_FUN_00550450
    PUSH ESI                            ; 00550451
    PUSH EDI                            ; 00550452
    PUSH EBP                            ; 00550453
    MOV EBP,ESP                         ; 00550454
    MOV ESI,0x272af5c                   ; 00550456
    XOR EBX,EBX                         ; 0055045b
    ADD ESI,0x35b0                      ; 0055045d
    IMUL EAX,EBX,0x3600                 ; 00550463
        ;   Label: LAB_00550463
    MOV EDX,dword ptr [EBP + 0x14]      ; 00550469
    PUSH EDX                            ; 0055046c
    MOV EDI,0x272af5c                   ; 0055046d
    PUSH ESI                            ; 00550472 | g_DeformableModelPool[0].model_filename[0]
    ADD EDI,EAX                         ; 00550473
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00550475
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055047a
    TEST EAX,EAX                        ; 0055047d
    JZ 0x00550492                       ; 0055047f
        ;   XREF to: 00550492 (CONDITIONAL_JUMP)  ; LAB_00550492
    INC EBX                             ; 00550481
    ADD ESI,0x3600                      ; 00550482
    CMP EBX,0x40                        ; 00550488
    JL 0x00550463                       ; 0055048b
        ;   XREF to: 00550463 (CONDITIONAL_JUMP)  ; LAB_00550463
    POP EBP                             ; 0055048d
    POP EDI                             ; 0055048e
    POP ESI                             ; 0055048f
    POP EBX                             ; 00550490
    RET                                 ; 00550491
    MOV ECX,0x1                         ; 00550492
        ;   Label: LAB_00550492
    MOV ESI,0x280305c                   ; 00550497
    ADD EDI,0x355c                      ; 0055049c
    ADD ESI,0x1de28                     ; 005504a2
    MOV dword ptr [EBX*0x4 + 0x2802f5c],ECX ; 005504a8 | DAT_02802f5c
    XOR EBX,EBX                         ; 005504af
    PUSH ESI                            ; 005504b1
        ;   Label: LAB_005504b1
    PUSH EDI                            ; 005504b2
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005504b3
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005504b8
    TEST EAX,EAX                        ; 005504bb
    JZ 0x005504d0                       ; 005504bd
        ;   XREF to: 005504d0 (CONDITIONAL_JUMP)  ; LAB_005504d0
    INC EBX                             ; 005504bf
    ADD ESI,0x1ec9c                     ; 005504c0
    CMP EBX,0x28                        ; 005504c6
    JL 0x005504b1                       ; 005504c9
        ;   XREF to: 005504b1 (CONDITIONAL_JUMP)  ; LAB_005504b1
    POP EBP                             ; 005504cb
    POP EDI                             ; 005504cc
    POP ESI                             ; 005504cd
    POP EBX                             ; 005504ce
    RET                                 ; 005504cf
    MOV dword ptr [EBX*0x4 + 0x2cd28bc],0x1 ; 005504d0 | DAT_02cd28bc
        ;   Label: LAB_005504d0
    POP EBP                             ; 005504db
    POP EDI                             ; 005504dc
    POP ESI                             ; 005504dd
    POP EBX                             ; 005504de
    RET                                 ; 005504df

