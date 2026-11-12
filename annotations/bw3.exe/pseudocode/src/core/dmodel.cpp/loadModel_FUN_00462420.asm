; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00462420(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[5]:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 at 00462588
;   core_elephant.cpp_CElephantGun_onFired_FUN_00487560 at 00487644
;   core_gun.cpp_CGun_fire_FUN_004d0fc0 at 004d13a0
;   core_rifle.cpp_CRifle_onFired_FUN_005284d0 at 005285cf
;   core_tommygun.cpp_CTommyGun_fire_FUN_0056b410 at 0056b823
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bbabf
;   TerminatedCString s_Can_t_load_s_because_key_005bbad2
;   undefined4 DAT_01b4b848
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00461860
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550
;   core_main.c_FUN_004e4330
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462420
        ;   Label: core_dmodel.cpp_loadModel_FUN_00462420
    PUSH ESI                            ; 00462421
    PUSH EDI                            ; 00462422
    PUSH EBP                            ; 00462423
    MOV EBP,ESP                         ; 00462424
    MOV EDI,dword ptr [EBP + 0x14]      ; 00462426
    MOV EDX,dword ptr [0x01b4b848]      ; 00462429 | DAT_01b4b848
    XOR ESI,ESI                         ; 0046242f
    TEST EDX,EDX                        ; 00462431
    JLE 0x00462459                      ; 00462433
        ;   XREF to: 00462459 (CONDITIONAL_JUMP)  ; LAB_00462459
    MOV EBX,0x1b4b84c                   ; 00462435
    PUSH EDI                            ; 0046243a
        ;   Label: LAB_0046243a
    PUSH EBX                            ; 0046243b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0046243c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00462441
    TEST EAX,EAX                        ; 00462444
    JZ 0x004624bb                       ; 00462446
        ;   XREF to: 004624bb (CONDITIONAL_JUMP)  ; LAB_004624bb
    MOV ECX,dword ptr [0x01b4b848]      ; 00462448 | DAT_01b4b848
    INC ESI                             ; 0046244e
    ADD EBX,0x398                       ; 0046244f
    CMP ESI,ECX                         ; 00462455
    JL 0x0046243a                       ; 00462457
        ;   XREF to: 0046243a (CONDITIONAL_JUMP)  ; LAB_0046243a
    CMP dword ptr [0x01b4b848],0x100    ; 00462459 | DAT_01b4b848
        ;   Label: LAB_00462459
    JL 0x0046248d                       ; 00462463
        ;   XREF to: 0046248d (CONDITIONAL_JUMP)  ; LAB_0046248d
    PUSH 0x100                          ; 00462465
    PUSH EDI                            ; 0046246a
    MOV ESI,0x5bbabf                    ; 0046246b | = "..\\core\\dmodel.cpp"
    MOV EAX,0x4cd                       ; 00462470
    PUSH 0x5bbad2                       ; 00462475 | = "Can't load %s because keyFrame model ..."
    MOV dword ptr [0x01d71de0],ESI      ; 0046247a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00462480 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00462485
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 0046248a
    MOV EDX,dword ptr [0x01b4b848]      ; 0046248d | DAT_01b4b848
        ;   Label: LAB_0046248d
    IMUL EBX,EDX,0x398                  ; 00462493
    PUSH EDI                            ; 00462499
    ADD EBX,0x1b4b84c                   ; 0046249a
    LEA ECX,[EDX + 0x1]                 ; 004624a0
    PUSH EBX                            ; 004624a3
    MOV dword ptr [0x01b4b848],ECX      ; 004624a4 | DAT_01b4b848
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550 ; 004624aa
        ;   XREF to: 00460550 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004624af
    PUSH EBX                            ; 004624b2
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00461860 ; 004624b3
        ;   XREF to: 00461860 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00461860(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004624b8
    MOV EAX,EBX                         ; 004624bb
        ;   Label: LAB_004624bb
    POP EBP                             ; 004624bd
    POP EDI                             ; 004624be
    POP ESI                             ; 004624bf
    POP EBX                             ; 004624c0
    RET                                 ; 004624c1

