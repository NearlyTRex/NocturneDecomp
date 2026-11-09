; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_FUN_004e7310(CMelee *param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004e73b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7310
        ;   Label: core_melee.cpp_FUN_004e7310
    PUSH EDI                            ; 004e7311
    PUSH EBP                            ; 004e7312
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e7313
    MOV EDX,dword ptr [0x007e2cec]      ; 004e7317 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 004e731d
    MOV ECX,dword ptr [ESP + 0x20]      ; 004e731e
    PUSH ECX                            ; 004e7322
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e7323
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004e7328
    TEST EAX,EAX                        ; 004e732b
    JNZ 0x004e733a                      ; 004e732d
        ;   XREF to: 004e733a (CONDITIONAL_JUMP)  ; LAB_004e733a
    CMP dword ptr [ESP + 0x1c],0x0      ; 004e732f
    JNZ 0x004e738a                      ; 004e7334
        ;   XREF to: 004e738a (CONDITIONAL_JUMP)  ; LAB_004e738a
    POP EBP                             ; 004e7336
    POP EDI                             ; 004e7337
    POP EBX                             ; 004e7338
    RET                                 ; 004e7339
    MOV EDI,dword ptr [EAX + 0x27a0]    ; 004e733a
        ;   Label: LAB_004e733a
    PUSH EDI                            ; 004e7340
    PUSH 0x14                           ; 004e7341
    PUSH EBX                            ; 004e7343
    CALL core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004e73b0 ; 004e7344
        ;   XREF to: 004e73b0 (UNCONDITIONAL_CALL)  ; void core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004e73b0(CMelee * this_ptr, int blood_spurt_count, int blood_gore_type)
    ADD ESP,0xc                         ; 004e7349
    MOV EBP,dword ptr [ESP + 0x14]      ; 004e734c
    CMP EBP,0x1                         ; 004e7350
    JZ 0x004e735a                       ; 004e7353
        ;   XREF to: 004e735a (CONDITIONAL_JUMP)  ; LAB_004e735a
    CMP EBP,0x8                         ; 004e7355
    JNZ 0x004e7372                      ; 004e7358
        ;   XREF to: 004e7372 (CONDITIONAL_JUMP)  ; LAB_004e7372
    LEA EAX,[EBX + 0x5bc]               ; 004e735a
        ;   Label: LAB_004e735a
    PUSH EAX                            ; 004e7360
    MOV EDX,dword ptr [EBX + 0x154]     ; 004e7361
    PUSH EBX                            ; 004e7367
    CALL dword ptr [EDX + 0x2c]         ; 004e7368
    ADD ESP,0x8                         ; 004e736b
    POP EBP                             ; 004e736e
    POP EDI                             ; 004e736f
    POP EBX                             ; 004e7370
    RET                                 ; 004e7371
    LEA EAX,[EBX + 0x620]               ; 004e7372
        ;   Label: LAB_004e7372
    PUSH EAX                            ; 004e7378
    MOV EDX,dword ptr [EBX + 0x154]     ; 004e7379
    PUSH EBX                            ; 004e737f
    CALL dword ptr [EDX + 0x2c]         ; 004e7380
    ADD ESP,0x8                         ; 004e7383
    POP EBP                             ; 004e7386
    POP EDI                             ; 004e7387
    POP EBX                             ; 004e7388
    RET                                 ; 004e7389
    LEA EDX,[EBX + 0x684]               ; 004e738a
        ;   Label: LAB_004e738a
    PUSH EDX                            ; 004e7390
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e7391
    PUSH EBX                            ; 004e7397
    CALL dword ptr [EAX + 0x2c]         ; 004e7398
    ADD ESP,0x8                         ; 004e739b
    POP EBP                             ; 004e739e
    POP EDI                             ; 004e739f
    POP EBX                             ; 004e73a0
    RET                                 ; 004e73a1

