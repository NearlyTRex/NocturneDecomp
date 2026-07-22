; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_processDismemberment_FUN_004ab190(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ab450 at 004ab48e
;
; Referenced Globals:
;   undefined1* switchdataD_004ab174 = 004ab1cd
;   string s_limb?.wav_00584e21
;   double DOUBLE_00584e2d = 7
;   double DOUBLE_00584e35 = 0.5
;   double DOUBLE_00584e3d = 2.5
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab190
        ;   Label: core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190
    PUSH ESI                            ; 004ab191
    PUSH EDI                            ; 004ab192
    PUSH EBP                            ; 004ab193
    SUB ESP,0xc                         ; 004ab194
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ab197
    MOV ESI,dword ptr [ESP + 0x24]      ; 004ab19b
    FLD float ptr [ESI + 0x2c]          ; 004ab19f
    FLDZ                                ; 004ab1a2
    FCOMPP                              ; 004ab1a4
    FNSTSW AX                           ; 004ab1a6
    SAHF                                ; 004ab1a8
    JNC 0x004ab1d5                      ; 004ab1a9
        ;   XREF to: 004ab1d5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004ab1ab
    JNZ 0x004ab1d5                      ; 004ab1ae
        ;   XREF to: 004ab1d5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004ab1b0
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 004ab1b5
    MOV EDI,0x6                         ; 004ab1b7
    SAR EDX,0x1f                        ; 004ab1bc
    IDIV EDI                            ; 004ab1bf
    CMP EDX,0x5                         ; 004ab1c1
    JA 0x004ab1d5                       ; 004ab1c4
        ;   XREF to: 004ab1d5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4ab174]  ; 004ab1c6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbd48]    ; 004ab1cd
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004ab1d3
        ;   Label: LAB_004ab1d3
    MOV ECX,dword ptr [EBX + 0xbd48]    ; 004ab1d5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004ab1db
    CMP EAX,ECX                         ; 004ab1dd
    JNZ 0x004ab3c5                      ; 004ab1df
        ;   XREF to: 004ab3c5 (CONDITIONAL_JUMP)  ; LAB_004ab3c5
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004ab1e5
        ;   Label: LAB_004ab1e5
    MOV EBP,dword ptr [EBX + 0xbd70]    ; 004ab1e8
    MOV dword ptr [ESP + 0x8],EAX       ; 004ab1ee
    CMP EBP,dword ptr [ESI]             ; 004ab1f2
    JNZ 0x004ab1fe                      ; 004ab1f4
        ;   XREF to: 004ab1fe (CONDITIONAL_JUMP)  ; LAB_004ab1fe
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004ab1f6
    MOV EDX,dword ptr [EBX + 0xbd6c]    ; 004ab1fe
        ;   Label: LAB_004ab1fe
    CMP EDX,dword ptr [ESI]             ; 004ab204
    JNZ 0x004ab210                      ; 004ab206
        ;   XREF to: 004ab210 (CONDITIONAL_JUMP)  ; LAB_004ab210
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004ab208
    MOV EAX,[0x005b9354]                ; 004ab210 | DAT_005b9354
        ;   Label: LAB_004ab210
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004ab215 | DAT_01c777cc
    JZ 0x004ab226                       ; 004ab21c
        ;   XREF to: 004ab226 (CONDITIONAL_JUMP)  ; LAB_004ab226
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004ab21e
    MOV EAX,[0x005b9354]                ; 004ab226 | DAT_005b9354
        ;   Label: LAB_004ab226
    MOV EDX,dword ptr [EAX + 0x14]      ; 004ab22b | DAT_01c77600
    TEST EDX,EDX                        ; 004ab22e
    JNZ 0x004ab236                      ; 004ab230
        ;   XREF to: 004ab236 (CONDITIONAL_JUMP)  ; LAB_004ab236
    MOV dword ptr [ESP + 0x8],EDX       ; 004ab232
    PUSH dword ptr [ESP + 0x8]          ; 004ab236
        ;   Label: LAB_004ab236
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004ab23a
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004ab23f
    TEST EAX,EAX                        ; 004ab242
    JZ 0x004ab35c                       ; 004ab244
        ;   XREF to: 004ab35c (CONDITIONAL_JUMP)  ; LAB_004ab35c
    PUSH 0x0                            ; 004ab24a
    PUSH 0x0                            ; 004ab24c
    PUSH 0x0                            ; 004ab24e
    PUSH EBX                            ; 004ab250
    LEA EAX,[ESI + 0xc]                 ; 004ab251
    PUSH EAX                            ; 004ab254
    LEA EAX,[EBX + 0x30]                ; 004ab255
    PUSH EAX                            ; 004ab258
    LEA EAX,[EBX + 0x20]                ; 004ab259
    PUSH EAX                            ; 004ab25c
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 004ab25d
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_createBodyPart_FUN_00415b30()
    ADD ESP,0x1c                        ; 004ab262
    MOV EDI,EAX                         ; 004ab265
    PUSH 0x0                            ; 004ab267
    MOV EBP,EAX                         ; 004ab269
    MOV EAX,dword ptr [ESI]             ; 004ab26b
    PUSH EAX                            ; 004ab26d
    PUSH EDI                            ; 004ab26e
    PUSH EBX                            ; 004ab26f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004ab270
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    MOV EAX,dword ptr [ESI]             ; 004ab275
    MOV EDX,dword ptr [EBX + 0xbd48]    ; 004ab277
    ADD ESP,0x10                        ; 004ab27d
    CMP EAX,EDX                         ; 004ab280
    JNZ 0x004ab297                      ; 004ab282
        ;   XREF to: 004ab297 (CONDITIONAL_JUMP)  ; LAB_004ab297
    PUSH 0x0                            ; 004ab284
    MOV ECX,dword ptr [EBX + 0xbd4c]    ; 004ab286
    PUSH ECX                            ; 004ab28c
    PUSH EDI                            ; 004ab28d
    PUSH EBX                            ; 004ab28e
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004ab28f
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    ADD ESP,0x10                        ; 004ab294
    MOV EDI,dword ptr [EBX + 0xbd50]    ; 004ab297
        ;   Label: LAB_004ab297
    CMP EDI,dword ptr [ESI]             ; 004ab29d
    JNZ 0x004ab2b4                      ; 004ab29f
        ;   XREF to: 004ab2b4 (CONDITIONAL_JUMP)  ; LAB_004ab2b4
    PUSH 0x0                            ; 004ab2a1
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 004ab2a3
    PUSH EAX                            ; 004ab2a9
    PUSH EBP                            ; 004ab2aa
    PUSH EBX                            ; 004ab2ab
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004ab2ac
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    ADD ESP,0x10                        ; 004ab2b1
    MOV EDX,dword ptr [EBX + 0xbd6c]    ; 004ab2b4
        ;   Label: LAB_004ab2b4
    CMP EDX,dword ptr [ESI]             ; 004ab2ba
    JNZ 0x004ab320                      ; 004ab2bc
        ;   XREF to: 004ab320 (CONDITIONAL_JUMP)  ; LAB_004ab320
    PUSH 0x0                            ; 004ab2be
    LEA EDI,[ESI + 0xc]                 ; 004ab2c0
    PUSH EDI                            ; 004ab2c3
    MOV ECX,dword ptr [EBX + 0xbd50]    ; 004ab2c4
    PUSH ECX                            ; 004ab2ca
    PUSH EBX                            ; 004ab2cb
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004ab2cc
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004ab2d1
    PUSH 0x0                            ; 004ab2d4
    PUSH EDI                            ; 004ab2d6
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 004ab2d7
    PUSH EAX                            ; 004ab2dd
    PUSH EBX                            ; 004ab2de
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004ab2df
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004ab2e4
    PUSH 0x0                            ; 004ab2e7
    PUSH EDI                            ; 004ab2e9
    MOV EDX,dword ptr [EBX + 0xbd48]    ; 004ab2ea
    PUSH EDX                            ; 004ab2f0
    PUSH EBX                            ; 004ab2f1
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004ab2f2
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004ab2f7
    PUSH 0x0                            ; 004ab2fa
    PUSH EDI                            ; 004ab2fc
    MOV ECX,dword ptr [EBX + 0xbd4c]    ; 004ab2fd
    PUSH ECX                            ; 004ab303
    PUSH EBX                            ; 004ab304
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004ab305
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004ab30a
    PUSH 0x0                            ; 004ab30d
    PUSH EDI                            ; 004ab30f
    MOV EDI,dword ptr [EBX + 0xbd70]    ; 004ab310
    PUSH EDI                            ; 004ab316
    PUSH EBX                            ; 004ab317
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004ab318
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004ab31d
    PUSH 0x584e21                       ; 004ab320 | = "limb?.wav"
        ;   Label: LAB_004ab320
    PUSH EBX                            ; 004ab325
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490 ; 004ab326
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490()
    ADD ESP,0x8                         ; 004ab32b
    PUSH EBP                            ; 004ab32e
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 004ab32f
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40()
    MOV EAX,dword ptr [EBX + 0xbd70]    ; 004ab334
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004ab33a
    ADD ESP,0x4                         ; 004ab341
    TEST EBP,EBP                        ; 004ab344
    JZ 0x004ab406                       ; 004ab346
        ;   XREF to: 004ab406 (CONDITIONAL_JUMP)  ; LAB_004ab406
    FLD float ptr [ESI + 0x8]           ; 004ab34c
        ;   Label: LAB_004ab34c
    FLD ST0                             ; 004ab34f
    FMUL double ptr [0x00584e2d]        ; 004ab351 | DOUBLE_00584e2d
    FSTP ST1                            ; 004ab357
    FSTP float ptr [ESI + 0x8]          ; 004ab359
    MOV EDX,dword ptr [EBX + 0xbd70]    ; 004ab35c
        ;   Label: LAB_004ab35c
    MOV EAX,dword ptr [ESI]             ; 004ab362
    CMP EAX,EDX                         ; 004ab364
    JZ 0x004ab412                       ; 004ab366
        ;   XREF to: 004ab412 (CONDITIONAL_JUMP)  ; LAB_004ab412
    CMP EAX,dword ptr [EBX + 0xbd68]    ; 004ab36c
    JZ 0x004ab380                       ; 004ab372
        ;   XREF to: 004ab380 (CONDITIONAL_JUMP)  ; LAB_004ab380
    CMP EAX,dword ptr [EBX + 0xbd6c]    ; 004ab374
    JNZ 0x004ab42a                      ; 004ab37a
        ;   XREF to: 004ab42a (CONDITIONAL_JUMP)  ; LAB_004ab42a
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ab380
        ;   Label: LAB_004ab380
    MOV dword ptr [ESI + 0x4],EAX       ; 004ab383
    ADD ESP,0xc                         ; 004ab386
    POP EBP                             ; 004ab389
    POP EDI                             ; 004ab38a
    POP ESI                             ; 004ab38b
    POP EBX                             ; 004ab38c
    RET                                 ; 004ab38d
    MOV EAX,dword ptr [EBX + 0xbd4c]    ; 004ab38e
        ;   Label: caseD_1
    JMP 0x004ab1d3                      ; 004ab394
        ;   XREF to: 004ab1d3 (UNCONDITIONAL_JUMP)  ; LAB_004ab1d3
    MOV EAX,dword ptr [EBX + 0xbd50]    ; 004ab399
        ;   Label: caseD_2
    JMP 0x004ab1d3                      ; 004ab39f
        ;   XREF to: 004ab1d3 (UNCONDITIONAL_JUMP)  ; LAB_004ab1d3
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 004ab3a4
        ;   Label: caseD_3
    JMP 0x004ab1d3                      ; 004ab3aa
        ;   XREF to: 004ab1d3 (UNCONDITIONAL_JUMP)  ; LAB_004ab1d3
    MOV EAX,dword ptr [EBX + 0xbd70]    ; 004ab3af
        ;   Label: caseD_4
    JMP 0x004ab1d3                      ; 004ab3b5
        ;   XREF to: 004ab1d3 (UNCONDITIONAL_JUMP)  ; LAB_004ab1d3
    MOV EAX,dword ptr [EBX + 0xbd6c]    ; 004ab3ba
        ;   Label: caseD_5
    JMP 0x004ab1d3                      ; 004ab3c0
        ;   XREF to: 004ab1d3 (UNCONDITIONAL_JUMP)  ; LAB_004ab1d3
    CMP EAX,dword ptr [EBX + 0xbd4c]    ; 004ab3c5
        ;   Label: LAB_004ab3c5
    JZ 0x004ab1e5                       ; 004ab3cb
        ;   XREF to: 004ab1e5 (CONDITIONAL_JUMP)  ; LAB_004ab1e5
    CMP EAX,dword ptr [EBX + 0xbd50]    ; 004ab3d1
    JZ 0x004ab1e5                       ; 004ab3d7
        ;   XREF to: 004ab1e5 (CONDITIONAL_JUMP)  ; LAB_004ab1e5
    CMP EAX,dword ptr [EBX + 0xbd54]    ; 004ab3dd
    JZ 0x004ab1e5                       ; 004ab3e3
        ;   XREF to: 004ab1e5 (CONDITIONAL_JUMP)  ; LAB_004ab1e5
    CMP EAX,dword ptr [EBX + 0xbd6c]    ; 004ab3e9
    JZ 0x004ab1e5                       ; 004ab3ef
        ;   XREF to: 004ab1e5 (CONDITIONAL_JUMP)  ; LAB_004ab1e5
    CMP EAX,dword ptr [EBX + 0xbd70]    ; 004ab3f5
    JZ 0x004ab1e5                       ; 004ab3fb
        ;   XREF to: 004ab1e5 (CONDITIONAL_JUMP)  ; LAB_004ab1e5
    JMP 0x004ab35c                      ; 004ab401
        ;   XREF to: 004ab35c (UNCONDITIONAL_JUMP)  ; LAB_004ab35c
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004ab406
        ;   Label: LAB_004ab406
    JMP 0x004ab34c                      ; 004ab40d
        ;   XREF to: 004ab34c (UNCONDITIONAL_JUMP)  ; LAB_004ab34c
    FLD float ptr [ESI + 0x4]           ; 004ab412
        ;   Label: LAB_004ab412
    FLD ST0                             ; 004ab415
    FMUL double ptr [0x00584e3d]        ; 004ab417 | DOUBLE_00584e3d
    FSTP ST1                            ; 004ab41d
    FSTP float ptr [ESI + 0x4]          ; 004ab41f
    ADD ESP,0xc                         ; 004ab422
    POP EBP                             ; 004ab425
    POP EDI                             ; 004ab426
    POP ESI                             ; 004ab427
    POP EBX                             ; 004ab428
    RET                                 ; 004ab429
    FLD float ptr [ESI + 0x4]           ; 004ab42a
        ;   Label: LAB_004ab42a
    FLD ST0                             ; 004ab42d
    FMUL double ptr [0x00584e35]        ; 004ab42f | DOUBLE_00584e35
    FSTP ST1                            ; 004ab435
    FSTP float ptr [ESI + 0x4]          ; 004ab437
    ADD ESP,0xc                         ; 004ab43a
    POP EBP                             ; 004ab43d
    POP EDI                             ; 004ab43e
    POP ESI                             ; 004ab43f
    POP EBX                             ; 004ab440
    RET                                 ; 004ab441

