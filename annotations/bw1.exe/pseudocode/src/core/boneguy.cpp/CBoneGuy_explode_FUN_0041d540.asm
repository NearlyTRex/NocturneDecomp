; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d540(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x38]:4  local_38
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
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d330 at 0041d36b
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041bb98
;
; Referenced Globals:
;   TerminatedCString s_core_boneguy_cpp_005d4908
;   TerminatedCString s_CBoneGuy_explode_Not_eno_005d491c
;   TerminatedCString s_boneguy_fallapart_wav_005d4946
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

    PUSH EBX                            ; 0041d540
        ;   Label: core_boneguy.cpp_CBoneGuy_explode_FUN_0041d540
    PUSH ESI                            ; 0041d541
    PUSH EDI                            ; 0041d542
    PUSH EBP                            ; 0041d543
    SUB ESP,0x38                        ; 0041d544
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0041d547
    PUSH EDX                            ; 0041d54b
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0 ; 0041d54c
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041d551
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d554
    ADD EAX,0x158                       ; 0041d558
    MOV dword ptr [EAX + 0xc730],0x1    ; 0041d55d
    PUSH EAX                            ; 0041d567
    MOV dword ptr [EAX + 0xc734],0x0    ; 0041d568
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0041d572
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041d577
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0041d57a
    MOV dword ptr [ESP + 0x24],EAX      ; 0041d57e
    MOV EAX,dword ptr [EAX + 0xc00]     ; 0041d582
    MOV dword ptr [EBX + 0xc2e4],EAX    ; 0041d588
    CMP EAX,0x14                        ; 0041d58e
    JG 0x0041d735                       ; 0041d591
        ;   XREF to: 0041d735 (CONDITIONAL_JUMP)  ; LAB_0041d735
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041d597
        ;   Label: LAB_0041d597
    XOR EDI,EDI                         ; 0041d59b
    MOV EBP,dword ptr [EAX + 0xc00]     ; 0041d59d
    MOV dword ptr [ESP + 0x30],EDI      ; 0041d5a3
    TEST EBP,EBP                        ; 0041d5a7
    JLE 0x0041d713                      ; 0041d5a9
        ;   XREF to: 0041d713 (CONDITIONAL_JUMP)  ; LAB_0041d713
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d5af
    ADD EAX,0xc2e8                      ; 0041d5b3
    MOV dword ptr [ESP + 0x28],EAX      ; 0041d5b8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d5bc
    ADD EAX,0x30                        ; 0041d5c0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041d5c3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d5c7
    ADD EAX,0x20                        ; 0041d5cb
    MOV EBP,dword ptr [ESP + 0x28]      ; 0041d5ce
    MOV dword ptr [ESP + 0x20],EAX      ; 0041d5d2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d5d6
    ADD EBP,0xc                         ; 0041d5da
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041d5dd
    PUSH 0x40a00000                     ; 0041d5e1
        ;   Label: LAB_0041d5e1
    PUSH 0xc0a00000                     ; 0041d5e6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0041d5eb
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041d5f0
    FLD float ptr [ESP + 0x3c]          ; 0041d5f4
    ADD ESP,0x8                         ; 0041d5f8
    PUSH 0x41200000                     ; 0041d5fb
    PUSH 0x0                            ; 0041d600
    FSTP float ptr [ESP + 0x18]         ; 0041d602
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0041d606
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041d60b
    FLD float ptr [ESP + 0x3c]          ; 0041d60f
    ADD ESP,0x8                         ; 0041d613
    PUSH 0x40a00000                     ; 0041d616
    PUSH 0xc0a00000                     ; 0041d61b
    FSTP float ptr [ESP + 0x1c]         ; 0041d620
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0041d624
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041d629
    FLD float ptr [ESP + 0x3c]          ; 0041d62d
    ADD ESP,0x8                         ; 0041d631
    PUSH 0x2                            ; 0041d634
    PUSH 0x1                            ; 0041d636
    PUSH 0x1                            ; 0041d638
    MOV EBX,dword ptr [ESP + 0x58]      ; 0041d63a
    PUSH EBX                            ; 0041d63e
    LEA EAX,[ESP + 0x20]                ; 0041d63f
    PUSH EAX                            ; 0041d643
    MOV ESI,dword ptr [ESP + 0x30]      ; 0041d644
    PUSH ESI                            ; 0041d648
    MOV EDI,dword ptr [ESP + 0x38]      ; 0041d649
    PUSH EDI                            ; 0041d64d
    FSTP float ptr [ESP + 0x34]         ; 0041d64e
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 0041d652
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0041d657
    MOV EBX,EAX                         ; 0041d65a
    PUSH 0x0                            ; 0041d65c
    MOV ESI,EAX                         ; 0041d65e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d660
    PUSH EAX                            ; 0041d664
    PUSH EBX                            ; 0041d665
    MOV EDX,dword ptr [ESP + 0x58]      ; 0041d666
    PUSH EDX                            ; 0041d66a
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0041d66b
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0041d670
    PUSH EBX                            ; 0041d673
    MOV dword ptr [EBX + 0xcc4],0x1     ; 0041d674
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 0041d67e
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0041d683
    IMUL EAX,dword ptr [ESP + 0x30],0x48 ; 0041d686
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0041d68b
    MOV dword ptr [EDI + 0xc32c],EBX    ; 0041d68f
    MOV EDI,dword ptr [ESP + 0x28]      ; 0041d695
    ADD EBX,0x20                        ; 0041d699
    ADD EAX,EDI                         ; 0041d69c
    CMP EAX,EBX                         ; 0041d69e
    JZ 0x0041d6b2                       ; 0041d6a0
        ;   XREF to: 0041d6b2 (CONDITIONAL_JUMP)  ; LAB_0041d6b2
    MOV EDX,dword ptr [EBX]             ; 0041d6a2
    MOV dword ptr [EAX],EDX             ; 0041d6a4
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041d6a6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041d6a9
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041d6ac
    MOV dword ptr [EAX + 0x8],EDX       ; 0041d6af
    LEA EAX,[ESI + 0x30]                ; 0041d6b2
        ;   Label: LAB_0041d6b2
    CMP EBP,EAX                         ; 0041d6b5
    JZ 0x0041d6ca                       ; 0041d6b7
        ;   XREF to: 0041d6ca (CONDITIONAL_JUMP)  ; LAB_0041d6ca
    MOV EDX,dword ptr [EAX]             ; 0041d6b9
    MOV dword ptr [EBP],EDX             ; 0041d6bb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d6be
    MOV dword ptr [EBP + 0x4],EDX       ; 0041d6c1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d6c4
    MOV dword ptr [EBP + 0x8],EDX       ; 0041d6c7
    ADD ESI,0x30                        ; 0041d6ca
        ;   Label: LAB_0041d6ca
    PUSH ESI                            ; 0041d6cd
    LEA ESI,[ESP + 0x4]                 ; 0041d6ce
    ADD EBP,0x48                        ; 0041d6d2
    CALL core_xform.cpp_FUN_005b7ed0    ; 0041d6d5
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 0041d6da
    MOV ESI,ESP                         ; 0041d6dd
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0041d6df
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041d6e3
    MOV EDX,dword ptr [ESP + 0x30]      ; 0041d6e7
    MOV EBX,dword ptr [ESP + 0x24]      ; 0041d6eb
    LEA EDI,[EDI + 0xc310]              ; 0041d6ef
    ADD EAX,0x48                        ; 0041d6f5
    INC EDX                             ; 0041d6f8
    MOVSD ES:EDI,ESI                    ; 0041d6f9
    MOVSD ES:EDI,ESI                    ; 0041d6fa
    MOVSD ES:EDI,ESI                    ; 0041d6fb
    MOVSD ES:EDI,ESI                    ; 0041d6fc
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041d6fd
    MOV ECX,dword ptr [EBX + 0xc00]     ; 0041d701
    MOV dword ptr [ESP + 0x30],EDX      ; 0041d707
    CMP EDX,ECX                         ; 0041d70b
    JL 0x0041d5e1                       ; 0041d70d
        ;   XREF to: 0041d5e1 (CONDITIONAL_JUMP)  ; LAB_0041d5e1
    PUSH 0x5d4946                       ; 0041d713 | = "boneguy-fallapart.wav"
        ;   Label: LAB_0041d713
    MOV EBP,dword ptr [ESP + 0x50]      ; 0041d718
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041d71c
    PUSH EBP                            ; 0041d720
    MOV EAX,dword ptr [EAX + 0x154]     ; 0041d721
    CALL dword ptr [EAX + 0x2c]         ; 0041d727
    ADD ESP,0x8                         ; 0041d72a
    ADD ESP,0x38                        ; 0041d72d
    POP EBP                             ; 0041d730
    POP EDI                             ; 0041d731
    POP ESI                             ; 0041d732
    POP EBX                             ; 0041d733
    RET                                 ; 0041d734
    MOV EBX,0x5d4908                    ; 0041d735 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_0041d735
    MOV ESI,0x444                       ; 0041d73a
    PUSH 0x5d491c                       ; 0041d73f | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x01d1d400],EBX      ; 0041d744 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0041d74a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0041d750
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0041d755
    JMP 0x0041d597                      ; 0041d758
        ;   XREF to: 0041d597 (UNCONDITIONAL_JUMP)  ; LAB_0041d597

