; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_construc_cpp_CConstruct_explode_FUN_004472a0(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_construc.cpp_CConstruct_processDamage_FUN_00447090 at 00447189
;   core_construc.cpp_CConstruct_process_FUN_00445cb0 at 004461ab
;
; Referenced Globals:
;   TerminatedCString s_core_construc_cpp_005d7095
;   TerminatedCString s_CConstruct_explode_Not_e_005d70aa
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_xform.cpp_FUN_005b7ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004472a0
        ;   Label: core_construc.cpp_CConstruct_explode_FUN_004472a0
    PUSH ESI                            ; 004472a1
    PUSH EDI                            ; 004472a2
    PUSH EBP                            ; 004472a3
    SUB ESP,0x34                        ; 004472a4
    MOV EDX,dword ptr [ESP + 0x48]      ; 004472a7
    PUSH EDX                            ; 004472ab
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0 ; 004472ac
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004472b1
    MOV EAX,dword ptr [ESP + 0x48]      ; 004472b4
    ADD EAX,0x158                       ; 004472b8
    MOV dword ptr [EAX + 0xc900],0x1    ; 004472bd
    PUSH EAX                            ; 004472c7
    MOV dword ptr [EAX + 0xc904],0x0    ; 004472c8
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 004472d2
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004472d7
    MOV EBX,dword ptr [ESP + 0x48]      ; 004472da
    MOV dword ptr [ESP + 0x24],EAX      ; 004472de
    MOV EAX,dword ptr [EAX + 0xc00]     ; 004472e2
    MOV dword ptr [EBX + 0xc394],EAX    ; 004472e8
    CMP EAX,0x18                        ; 004472ee
    JG 0x0044747b                       ; 004472f1
        ;   XREF to: 0044747b (CONDITIONAL_JUMP)  ; LAB_0044747b
    MOV EAX,dword ptr [ESP + 0x24]      ; 004472f7
        ;   Label: LAB_004472f7
    MOV EDI,dword ptr [EAX + 0xc00]     ; 004472fb
    XOR EBX,EBX                         ; 00447301
    TEST EDI,EDI                        ; 00447303
    JLE 0x00447473                      ; 00447305
        ;   XREF to: 00447473 (CONDITIONAL_JUMP)  ; LAB_00447473
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044730b
    ADD EAX,0xc398                      ; 0044730f
    MOV dword ptr [ESP + 0x28],EAX      ; 00447314
    MOV EAX,dword ptr [ESP + 0x48]      ; 00447318
    ADD EAX,0x30                        ; 0044731c
    MOV dword ptr [ESP + 0x20],EAX      ; 0044731f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00447323
    ADD EAX,0x20                        ; 00447327
    MOV EBP,dword ptr [ESP + 0x28]      ; 0044732a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044732e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00447332
    ADD EBP,0xc                         ; 00447336
    MOV dword ptr [ESP + 0x2c],EAX      ; 00447339
    PUSH 0x40a00000                     ; 0044733d
        ;   Label: LAB_0044733d
    PUSH 0xc0a00000                     ; 00447342
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00447347
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 0044734c
    FLD float ptr [ESP + 0x38]          ; 00447350
    ADD ESP,0x8                         ; 00447354
    PUSH 0x41200000                     ; 00447357
    PUSH 0x0                            ; 0044735c
    FSTP float ptr [ESP + 0x18]         ; 0044735e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00447362
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 00447367
    FLD float ptr [ESP + 0x38]          ; 0044736b
    ADD ESP,0x8                         ; 0044736f
    PUSH 0x40a00000                     ; 00447372
    PUSH 0xc0a00000                     ; 00447377
    FSTP float ptr [ESP + 0x1c]         ; 0044737c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00447380
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 00447385
    FLD float ptr [ESP + 0x38]          ; 00447389
    ADD ESP,0x8                         ; 0044738d
    PUSH 0x2                            ; 00447390
    PUSH 0x1                            ; 00447392
    PUSH 0x1                            ; 00447394
    MOV ECX,dword ptr [ESP + 0x54]      ; 00447396
    PUSH ECX                            ; 0044739a
    LEA EAX,[ESP + 0x20]                ; 0044739b
    PUSH EAX                            ; 0044739f
    MOV ESI,dword ptr [ESP + 0x34]      ; 004473a0
    PUSH ESI                            ; 004473a4
    MOV EDI,dword ptr [ESP + 0x34]      ; 004473a5
    PUSH EDI                            ; 004473a9
    FSTP float ptr [ESP + 0x34]         ; 004473aa
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 004473ae
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004473b3
    PUSH 0x0                            ; 004473b6
    PUSH EBX                            ; 004473b8
    MOV ESI,EAX                         ; 004473b9
    PUSH EAX                            ; 004473bb
    MOV EDI,EAX                         ; 004473bc
    MOV EAX,dword ptr [ESP + 0x54]      ; 004473be
    PUSH EAX                            ; 004473c2
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004473c3
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004473c8
    MOV EAX,dword ptr [ESP + 0x48]      ; 004473cb
    MOV EDX,dword ptr [EAX + 0xc2cc]    ; 004473cf
    CMP EBX,EDX                         ; 004473d5
    JZ 0x004474a3                       ; 004473d7
        ;   XREF to: 004474a3 (CONDITIONAL_JUMP)  ; LAB_004474a3
    MOV dword ptr [ESI + 0xcc4],0x1     ; 004473dd
    PUSH EDI                            ; 004473e7
        ;   Label: LAB_004473e7
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 004473e8
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    IMUL EAX,EBX,0x48                   ; 004473ed
    ADD ESP,0x4                         ; 004473f0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004473f3
    MOV ECX,dword ptr [ESP + 0x28]      ; 004473f7
    MOV dword ptr [ESI + 0xc3dc],EDI    ; 004473fb
    LEA ESI,[EDI + 0x20]                ; 00447401
    ADD EAX,ECX                         ; 00447404
    CMP EAX,ESI                         ; 00447406
    JZ 0x0044741a                       ; 00447408
        ;   XREF to: 0044741a (CONDITIONAL_JUMP)  ; LAB_0044741a
    MOV EDX,dword ptr [ESI]             ; 0044740a
    MOV dword ptr [EAX],EDX             ; 0044740c
    MOV EDX,dword ptr [ESI + 0x4]       ; 0044740e
    MOV dword ptr [EAX + 0x4],EDX       ; 00447411
    MOV EDX,dword ptr [ESI + 0x8]       ; 00447414
    MOV dword ptr [EAX + 0x8],EDX       ; 00447417
    LEA ESI,[EDI + 0x30]                ; 0044741a
        ;   Label: LAB_0044741a
    CMP EBP,ESI                         ; 0044741d
    JZ 0x00447432                       ; 0044741f
        ;   XREF to: 00447432 (CONDITIONAL_JUMP)  ; LAB_00447432
    MOV EAX,dword ptr [ESI]             ; 00447421
    MOV dword ptr [EBP],EAX             ; 00447423
    MOV EAX,dword ptr [ESI + 0x4]       ; 00447426
    MOV dword ptr [EBP + 0x4],EAX       ; 00447429
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044742c
    MOV dword ptr [EBP + 0x8],EAX       ; 0044742f
    ADD EDI,0x30                        ; 00447432
        ;   Label: LAB_00447432
    PUSH EDI                            ; 00447435
    LEA ESI,[ESP + 0x4]                 ; 00447436
    CALL core_xform.cpp_FUN_005b7ed0    ; 0044743a
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 0044743f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00447442
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00447446
    MOV ESI,ESP                         ; 0044744a
    ADD EAX,0x48                        ; 0044744c
    LEA EDI,[EDI + 0xc3c0]              ; 0044744f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00447455
    MOV EAX,dword ptr [ESP + 0x24]      ; 00447459
    MOVSD ES:EDI,ESI                    ; 0044745d
    MOVSD ES:EDI,ESI                    ; 0044745e
    MOVSD ES:EDI,ESI                    ; 0044745f
    MOVSD ES:EDI,ESI                    ; 00447460
    INC EBX                             ; 00447461
    MOV EDX,dword ptr [EAX + 0xc00]     ; 00447462
    ADD EBP,0x48                        ; 00447468
    CMP EBX,EDX                         ; 0044746b
    JL 0x0044733d                       ; 0044746d
        ;   XREF to: 0044733d (CONDITIONAL_JUMP)  ; LAB_0044733d
    ADD ESP,0x34                        ; 00447473
        ;   Label: LAB_00447473
    POP EBP                             ; 00447476
    POP EDI                             ; 00447477
    POP ESI                             ; 00447478
    POP EBX                             ; 00447479
    RET                                 ; 0044747a
    MOV EBX,0x5d7095                    ; 0044747b | = "..\\core\\construc.cpp"
        ;   Label: LAB_0044747b
    MOV ESI,0x31d                       ; 00447480
    PUSH 0x5d70aa                       ; 00447485 | = "CConstruct::explode - Not enough cont..."
    MOV dword ptr [0x01d1d400],EBX      ; 0044748a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00447490 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00447496
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0044749b
    JMP 0x004472f7                      ; 0044749e
        ;   XREF to: 004472f7 (UNCONDITIONAL_JUMP)  ; LAB_004472f7
    MOV dword ptr [EAX + 0xca60],EDX    ; 004474a3
        ;   Label: LAB_004474a3
    MOV dword ptr [ESI + 0xcc4],0x0     ; 004474a9
    MOV dword ptr [ESI + 0xcc8],0x1     ; 004474b3
    JMP 0x004473e7                      ; 004474bd
        ;   XREF to: 004473e7 (UNCONDITIONAL_JUMP)  ; LAB_004473e7

