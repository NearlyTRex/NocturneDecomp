; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d220(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_CDemonActor_propertyValidatorCallback_FUN_0040d270 at 0040d282
;   core_msnedit.cpp_CDemonMission_FUN_0053bd80 at 0053c077
;   core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0 at 0053bb8a
;   core_msnedit.cpp_FUN_00537410 at 00537479
;
; Referenced Globals:
;   TerminatedCString s_Actor_name_contains_inva_0063cb94
;   TerminatedCString s_Already_an_actor_named_s_0063cbbc
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   crt_string.c__stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d220
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053d220
    PUSH ESI                            ; 0053d221
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053d222
    MOV DL,0x20                         ; 0053d226
    MOV ESI,EBX                         ; 0053d228
    MOV AL,byte ptr [ESI]               ; 0053d22a
        ;   Label: LAB_0053d22a
    CMP AL,DL                           ; 0053d22c
    JZ 0x0053d242                       ; 0053d22e
        ;   XREF to: 0053d242 (CONDITIONAL_JUMP)  ; LAB_0053d242
    CMP AL,0x0                          ; 0053d230
    JZ 0x0053d240                       ; 0053d232
        ;   XREF to: 0053d240 (CONDITIONAL_JUMP)  ; LAB_0053d240
    INC ESI                             ; 0053d234
    MOV AL,byte ptr [ESI]               ; 0053d235
    CMP AL,DL                           ; 0053d237
    JZ 0x0053d242                       ; 0053d239
        ;   XREF to: 0053d242 (CONDITIONAL_JUMP)  ; LAB_0053d242
    INC ESI                             ; 0053d23b
    CMP AL,0x0                          ; 0053d23c
    JNZ 0x0053d22a                      ; 0053d23e
        ;   XREF to: 0053d22a (CONDITIONAL_JUMP)  ; LAB_0053d22a
    SUB ESI,ESI                         ; 0053d240
        ;   Label: LAB_0053d240
    TEST ESI,ESI                        ; 0053d242
        ;   Label: LAB_0053d242
    JNZ 0x0053d354                      ; 0053d244
        ;   XREF to: 0053d354 (CONDITIONAL_JUMP)  ; LAB_0053d354
    MOV DL,0x9                          ; 0053d24a
    MOV ESI,EBX                         ; 0053d24c
    MOV AL,byte ptr [ESI]               ; 0053d24e
        ;   Label: LAB_0053d24e
    CMP AL,DL                           ; 0053d250
    JZ 0x0053d266                       ; 0053d252
        ;   XREF to: 0053d266 (CONDITIONAL_JUMP)  ; LAB_0053d266
    CMP AL,0x0                          ; 0053d254
    JZ 0x0053d264                       ; 0053d256
        ;   XREF to: 0053d264 (CONDITIONAL_JUMP)  ; LAB_0053d264
    INC ESI                             ; 0053d258
    MOV AL,byte ptr [ESI]               ; 0053d259
    CMP AL,DL                           ; 0053d25b
    JZ 0x0053d266                       ; 0053d25d
        ;   XREF to: 0053d266 (CONDITIONAL_JUMP)  ; LAB_0053d266
    INC ESI                             ; 0053d25f
    CMP AL,0x0                          ; 0053d260
    JNZ 0x0053d24e                      ; 0053d262
        ;   XREF to: 0053d24e (CONDITIONAL_JUMP)  ; LAB_0053d24e
    SUB ESI,ESI                         ; 0053d264
        ;   Label: LAB_0053d264
    TEST ESI,ESI                        ; 0053d266
        ;   Label: LAB_0053d266
    JNZ 0x0053d354                      ; 0053d268
        ;   XREF to: 0053d354 (CONDITIONAL_JUMP)  ; LAB_0053d354
    MOV DL,0xd                          ; 0053d26e
    MOV ESI,EBX                         ; 0053d270
    MOV AL,byte ptr [ESI]               ; 0053d272
        ;   Label: LAB_0053d272
    CMP AL,DL                           ; 0053d274
    JZ 0x0053d28a                       ; 0053d276
        ;   XREF to: 0053d28a (CONDITIONAL_JUMP)  ; LAB_0053d28a
    CMP AL,0x0                          ; 0053d278
    JZ 0x0053d288                       ; 0053d27a
        ;   XREF to: 0053d288 (CONDITIONAL_JUMP)  ; LAB_0053d288
    INC ESI                             ; 0053d27c
    MOV AL,byte ptr [ESI]               ; 0053d27d
    CMP AL,DL                           ; 0053d27f
    JZ 0x0053d28a                       ; 0053d281
        ;   XREF to: 0053d28a (CONDITIONAL_JUMP)  ; LAB_0053d28a
    INC ESI                             ; 0053d283
    CMP AL,0x0                          ; 0053d284
    JNZ 0x0053d272                      ; 0053d286
        ;   XREF to: 0053d272 (CONDITIONAL_JUMP)  ; LAB_0053d272
    SUB ESI,ESI                         ; 0053d288
        ;   Label: LAB_0053d288
    TEST ESI,ESI                        ; 0053d28a
        ;   Label: LAB_0053d28a
    JNZ 0x0053d354                      ; 0053d28c
        ;   XREF to: 0053d354 (CONDITIONAL_JUMP)  ; LAB_0053d354
    MOV DL,0xa                          ; 0053d292
    MOV ESI,EBX                         ; 0053d294
    MOV AL,byte ptr [ESI]               ; 0053d296
        ;   Label: LAB_0053d296
    CMP AL,DL                           ; 0053d298
    JZ 0x0053d2ae                       ; 0053d29a
        ;   XREF to: 0053d2ae (CONDITIONAL_JUMP)  ; LAB_0053d2ae
    CMP AL,0x0                          ; 0053d29c
    JZ 0x0053d2ac                       ; 0053d29e
        ;   XREF to: 0053d2ac (CONDITIONAL_JUMP)  ; LAB_0053d2ac
    INC ESI                             ; 0053d2a0
    MOV AL,byte ptr [ESI]               ; 0053d2a1
    CMP AL,DL                           ; 0053d2a3
    JZ 0x0053d2ae                       ; 0053d2a5
        ;   XREF to: 0053d2ae (CONDITIONAL_JUMP)  ; LAB_0053d2ae
    INC ESI                             ; 0053d2a7
    CMP AL,0x0                          ; 0053d2a8
    JNZ 0x0053d296                      ; 0053d2aa
        ;   XREF to: 0053d296 (CONDITIONAL_JUMP)  ; LAB_0053d296
    SUB ESI,ESI                         ; 0053d2ac
        ;   Label: LAB_0053d2ac
    TEST ESI,ESI                        ; 0053d2ae
        ;   Label: LAB_0053d2ae
    JNZ 0x0053d354                      ; 0053d2b0
        ;   XREF to: 0053d354 (CONDITIONAL_JUMP)  ; LAB_0053d354
    MOV DL,0x22                         ; 0053d2b6
    MOV ESI,EBX                         ; 0053d2b8
    MOV AL,byte ptr [ESI]               ; 0053d2ba
        ;   Label: LAB_0053d2ba
    CMP AL,DL                           ; 0053d2bc
    JZ 0x0053d2d2                       ; 0053d2be
        ;   XREF to: 0053d2d2 (CONDITIONAL_JUMP)  ; LAB_0053d2d2
    CMP AL,0x0                          ; 0053d2c0
    JZ 0x0053d2d0                       ; 0053d2c2
        ;   XREF to: 0053d2d0 (CONDITIONAL_JUMP)  ; LAB_0053d2d0
    INC ESI                             ; 0053d2c4
    MOV AL,byte ptr [ESI]               ; 0053d2c5
    CMP AL,DL                           ; 0053d2c7
    JZ 0x0053d2d2                       ; 0053d2c9
        ;   XREF to: 0053d2d2 (CONDITIONAL_JUMP)  ; LAB_0053d2d2
    INC ESI                             ; 0053d2cb
    CMP AL,0x0                          ; 0053d2cc
    JNZ 0x0053d2ba                      ; 0053d2ce
        ;   XREF to: 0053d2ba (CONDITIONAL_JUMP)  ; LAB_0053d2ba
    SUB ESI,ESI                         ; 0053d2d0
        ;   Label: LAB_0053d2d0
    TEST ESI,ESI                        ; 0053d2d2
        ;   Label: LAB_0053d2d2
    JNZ 0x0053d354                      ; 0053d2d4
        ;   XREF to: 0053d354 (CONDITIONAL_JUMP)  ; LAB_0053d354
    MOV DL,0x27                         ; 0053d2da
    MOV ESI,EBX                         ; 0053d2dc
    MOV AL,byte ptr [ESI]               ; 0053d2de
        ;   Label: LAB_0053d2de
    CMP AL,DL                           ; 0053d2e0
    JZ 0x0053d2f6                       ; 0053d2e2
        ;   XREF to: 0053d2f6 (CONDITIONAL_JUMP)  ; LAB_0053d2f6
    CMP AL,0x0                          ; 0053d2e4
    JZ 0x0053d2f4                       ; 0053d2e6
        ;   XREF to: 0053d2f4 (CONDITIONAL_JUMP)  ; LAB_0053d2f4
    INC ESI                             ; 0053d2e8
    MOV AL,byte ptr [ESI]               ; 0053d2e9
    CMP AL,DL                           ; 0053d2eb
    JZ 0x0053d2f6                       ; 0053d2ed
        ;   XREF to: 0053d2f6 (CONDITIONAL_JUMP)  ; LAB_0053d2f6
    INC ESI                             ; 0053d2ef
    CMP AL,0x0                          ; 0053d2f0
    JNZ 0x0053d2de                      ; 0053d2f2
        ;   XREF to: 0053d2de (CONDITIONAL_JUMP)  ; LAB_0053d2de
    SUB ESI,ESI                         ; 0053d2f4
        ;   Label: LAB_0053d2f4
    TEST ESI,ESI                        ; 0053d2f6
        ;   Label: LAB_0053d2f6
    JNZ 0x0053d354                      ; 0053d2f8
        ;   XREF to: 0053d354 (CONDITIONAL_JUMP)  ; LAB_0053d354
    MOV DL,0x7b                         ; 0053d2fa
    MOV ESI,EBX                         ; 0053d2fc
    MOV AL,byte ptr [ESI]               ; 0053d2fe
        ;   Label: LAB_0053d2fe
    CMP AL,DL                           ; 0053d300
    JZ 0x0053d316                       ; 0053d302
        ;   XREF to: 0053d316 (CONDITIONAL_JUMP)  ; LAB_0053d316
    CMP AL,0x0                          ; 0053d304
    JZ 0x0053d314                       ; 0053d306
        ;   XREF to: 0053d314 (CONDITIONAL_JUMP)  ; LAB_0053d314
    INC ESI                             ; 0053d308
    MOV AL,byte ptr [ESI]               ; 0053d309
    CMP AL,DL                           ; 0053d30b
    JZ 0x0053d316                       ; 0053d30d
        ;   XREF to: 0053d316 (CONDITIONAL_JUMP)  ; LAB_0053d316
    INC ESI                             ; 0053d30f
    CMP AL,0x0                          ; 0053d310
    JNZ 0x0053d2fe                      ; 0053d312
        ;   XREF to: 0053d2fe (CONDITIONAL_JUMP)  ; LAB_0053d2fe
    SUB ESI,ESI                         ; 0053d314
        ;   Label: LAB_0053d314
    TEST ESI,ESI                        ; 0053d316
        ;   Label: LAB_0053d316
    JNZ 0x0053d354                      ; 0053d318
        ;   XREF to: 0053d354 (CONDITIONAL_JUMP)  ; LAB_0053d354
    MOV DL,0x7d                         ; 0053d31a
    MOV ESI,EBX                         ; 0053d31c
    MOV AL,byte ptr [ESI]               ; 0053d31e
        ;   Label: LAB_0053d31e
    CMP AL,DL                           ; 0053d320
    JZ 0x0053d336                       ; 0053d322
        ;   XREF to: 0053d336 (CONDITIONAL_JUMP)  ; LAB_0053d336
    CMP AL,0x0                          ; 0053d324
    JZ 0x0053d334                       ; 0053d326
        ;   XREF to: 0053d334 (CONDITIONAL_JUMP)  ; LAB_0053d334
    INC ESI                             ; 0053d328
    MOV AL,byte ptr [ESI]               ; 0053d329
    CMP AL,DL                           ; 0053d32b
    JZ 0x0053d336                       ; 0053d32d
        ;   XREF to: 0053d336 (CONDITIONAL_JUMP)  ; LAB_0053d336
    INC ESI                             ; 0053d32f
    CMP AL,0x0                          ; 0053d330
    JNZ 0x0053d31e                      ; 0053d332
        ;   XREF to: 0053d31e (CONDITIONAL_JUMP)  ; LAB_0053d31e
    SUB ESI,ESI                         ; 0053d334
        ;   Label: LAB_0053d334
    TEST ESI,ESI                        ; 0053d336
        ;   Label: LAB_0053d336
    JNZ 0x0053d354                      ; 0053d338
        ;   XREF to: 0053d354 (CONDITIONAL_JUMP)  ; LAB_0053d354
    PUSH EBX                            ; 0053d33a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053d33b
    PUSH EDX                            ; 0053d33f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053d340
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053d345
    TEST EAX,EAX                        ; 0053d348
    JNZ 0x0053d36d                      ; 0053d34a
        ;   XREF to: 0053d36d (CONDITIONAL_JUMP)  ; LAB_0053d36d
    MOV EAX,0x1                         ; 0053d34c
        ;   Label: LAB_0053d34c
    POP ESI                             ; 0053d351
    POP EBX                             ; 0053d352
    RET                                 ; 0053d353
    PUSH 0x63cb94                       ; 0053d354 | = "Actor name contains invalid characters."
        ;   Label: LAB_0053d354
    MOV ESI,dword ptr [0x00678a60]      ; 0053d359 | g_CEditorToolsPtr
    PUSH ESI                            ; 0053d35f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053d360
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053d365
    XOR EAX,EAX                         ; 0053d368
    POP ESI                             ; 0053d36a
    POP EBX                             ; 0053d36b
    RET                                 ; 0053d36c
    PUSH EBX                            ; 0053d36d
        ;   Label: LAB_0053d36d
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053d36e
    PUSH ECX                            ; 0053d372
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 0053d373
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0053d378
    TEST EAX,EAX                        ; 0053d37b
    JZ 0x0053d34c                       ; 0053d37d
        ;   XREF to: 0053d34c (CONDITIONAL_JUMP)  ; LAB_0053d34c
    PUSH EBX                            ; 0053d37f
    PUSH 0x63cbbc                       ; 0053d380 | = "Already an actor named %s in this mis..."
    MOV EBX,dword ptr [0x00678a60]      ; 0053d385 | g_CEditorToolsPtr
    PUSH EBX                            ; 0053d38b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053d38c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053d391
    XOR EAX,EAX                         ; 0053d394
    POP ESI                             ; 0053d396
    POP EBX                             ; 0053d397
    RET                                 ; 0053d398

