; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00501340(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_moloch.cpp_factoryFuncMoloch_FUN_00501310 at 00501323
;
; Called Functions:
;   core_hero.cpp_FUN_004ce240
;   core_morph.cpp_CMorph_ctor_FUN_005b6e60
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501340
        ;   Label: core_moloch.cpp_CMoloch_ctor_FUN_00501340
    PUSH ESI                            ; 00501341
    PUSH EDI                            ; 00501342
    MOV EBX,dword ptr [ESP + 0x10]      ; 00501343
    PUSH EBX                            ; 00501347
    CALL core_hero.cpp_FUN_004ce240     ; 00501348
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce240()
    ADD ESP,0x4                         ; 0050134d
    ADD EAX,0x25640                     ; 00501350
    PUSH EAX                            ; 00501355
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0 ; 00501356
        ;   XREF to: 00544cd0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050135b
    ADD EAX,0x2388                      ; 0050135e
    PUSH EAX                            ; 00501363
    CALL core_morph.cpp_CMorph_ctor_FUN_005b6e60 ; 00501364
        ;   XREF to: 005b6e60 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_005b6e60(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00501369
    LEA EBX,[EAX + 0xfffd8638]          ; 0050136c
    PUSH 0x5df179                       ; 00501372
    LEA EAX,[EBX + 0x2b4]               ; 00501377
    PUSH EAX                            ; 0050137d
    MOV dword ptr [EBX + 0x2b0],0x5fa3e4 ; 0050137e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00501388
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0050138d
    MOV ESI,0x5df186                    ; 00501390
    LEA EDI,[EBX + 0x27900]             ; 00501395
    PUSH EDI                            ; 0050139b
    MOV AL,byte ptr [ESI]               ; 0050139c
        ;   Label: LAB_0050139c
    MOV byte ptr [EDI],AL               ; 0050139e
    CMP AL,0x0                          ; 005013a0
    JZ 0x005013b4                       ; 005013a2
        ;   XREF to: 005013b4 (CONDITIONAL_JUMP)  ; LAB_005013b4
    MOV AL,byte ptr [ESI + 0x1]         ; 005013a4
    ADD ESI,0x2                         ; 005013a7
    MOV byte ptr [EDI + 0x1],AL         ; 005013aa
    ADD EDI,0x2                         ; 005013ad
    CMP AL,0x0                          ; 005013b0
    JNZ 0x0050139c                      ; 005013b2
        ;   XREF to: 0050139c (CONDITIONAL_JUMP)  ; LAB_0050139c
    POP EDI                             ; 005013b4
        ;   Label: LAB_005013b4
    MOV ESI,0x5df194                    ; 005013b5
    LEA EDI,[EBX + 0x27964]             ; 005013ba
    PUSH EDI                            ; 005013c0
    MOV AL,byte ptr [ESI]               ; 005013c1
        ;   Label: LAB_005013c1
    MOV byte ptr [EDI],AL               ; 005013c3
    CMP AL,0x0                          ; 005013c5
    JZ 0x005013d9                       ; 005013c7
        ;   XREF to: 005013d9 (CONDITIONAL_JUMP)  ; LAB_005013d9
    MOV AL,byte ptr [ESI + 0x1]         ; 005013c9
    ADD ESI,0x2                         ; 005013cc
    MOV byte ptr [EDI + 0x1],AL         ; 005013cf
    ADD EDI,0x2                         ; 005013d2
    CMP AL,0x0                          ; 005013d5
    JNZ 0x005013c1                      ; 005013d7
        ;   XREF to: 005013c1 (CONDITIONAL_JUMP)  ; LAB_005013c1
    POP EDI                             ; 005013d9
        ;   Label: LAB_005013d9
    MOV dword ptr [EBX + 0x278f4],0x1   ; 005013da
    MOV dword ptr [EBX + 0x278f8],0x0   ; 005013e4
    MOV EAX,EBX                         ; 005013ee
    MOV dword ptr [EBX + 0x278fc],0x0   ; 005013f0
    POP EDI                             ; 005013fa
    POP ESI                             ; 005013fb
    POP EBX                             ; 005013fc
    RET                                 ; 005013fd

