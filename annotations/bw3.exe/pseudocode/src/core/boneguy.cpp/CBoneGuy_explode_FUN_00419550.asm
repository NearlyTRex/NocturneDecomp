; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(CBoneGuy *this_ptr)
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
; XREF[4]:
;   core_boneguy.cpp_CBaalSkel_processDamage_FUN_0041a810 at 0041a870
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419b98
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_004192d0 at 00419378
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417a28
;
; Referenced Globals:
;   TerminatedCString s_core_boneguy_cpp_005b7119
;   TerminatedCString s_CBoneGuy_explode_Not_eno_005b712d
;   TerminatedCString s_boneguy_fallapart_wav_005b7157
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
;   core_bodypart.cpp_createBodyPart_FUN_00414550
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_xform.cpp_FUN_005860b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419550
        ;   Label: core_boneguy.cpp_CBoneGuy_explode_FUN_00419550
    PUSH ESI                            ; 00419551
    PUSH EDI                            ; 00419552
    PUSH EBP                            ; 00419553
    SUB ESP,0x38                        ; 00419554
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00419557
    PUSH EDX                            ; 0041955b
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0 ; 0041955c
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00419561
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00419564
    LEA EBX,[EAX + 0xd068]              ; 00419568
    ADD EAX,0x20                        ; 0041956e
    MOV dword ptr [EAX + 0xd0c4],0x1    ; 00419571
    MOV dword ptr [EAX + 0xd674],0x0    ; 0041957b
    CMP EBX,EAX                         ; 00419585
    JZ 0x00419599                       ; 00419587
        ;   XREF to: 00419599 (CONDITIONAL_JUMP)  ; LAB_00419599
    MOV EDX,dword ptr [EAX]             ; 00419589
    MOV dword ptr [EBX],EDX             ; 0041958b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041958d
    MOV dword ptr [EBX + 0x4],EDX       ; 00419590
    MOV EDX,dword ptr [EAX + 0x8]       ; 00419593
    MOV dword ptr [EBX + 0x8],EDX       ; 00419596
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00419599
        ;   Label: LAB_00419599
    ADD EAX,0x158                       ; 0041959d
    PUSH EAX                            ; 004195a2
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 004195a3
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004195a8
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004195ab
    MOV dword ptr [ESP + 0x30],EAX      ; 004195af
    MOV EAX,dword ptr [EAX + 0xc00]     ; 004195b3
    MOV dword ptr [EBX + 0xd0e8],EAX    ; 004195b9
    CMP EAX,0x14                        ; 004195bf
    JLE 0x004195e7                      ; 004195c2
        ;   XREF to: 004195e7 (CONDITIONAL_JUMP)  ; LAB_004195e7
    MOV EBX,0x5b7119                    ; 004195c4 | = "..\\core\\boneguy.cpp"
    MOV ESI,0x49c                       ; 004195c9
    PUSH 0x5b712d                       ; 004195ce | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x01d71de0],EBX      ; 004195d3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004195d9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004195df
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004195e4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004195e7
        ;   Label: LAB_004195e7
    XOR EDI,EDI                         ; 004195eb
    MOV EBP,dword ptr [EAX + 0xc00]     ; 004195ed
    MOV dword ptr [ESP + 0x2c],EDI      ; 004195f3
    TEST EBP,EBP                        ; 004195f7
    JLE 0x00419763                      ; 004195f9
        ;   XREF to: 00419763 (CONDITIONAL_JUMP)  ; LAB_00419763
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004195ff
    ADD EAX,0xd0f0                      ; 00419603
    MOV dword ptr [ESP + 0x24],EAX      ; 00419608
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041960c
    ADD EAX,0x30                        ; 00419610
    MOV dword ptr [ESP + 0x1c],EAX      ; 00419613
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00419617
    ADD EAX,0x20                        ; 0041961b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0041961e
    MOV dword ptr [ESP + 0x20],EAX      ; 00419622
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00419626
    ADD EBP,0xc                         ; 0041962a
    MOV dword ptr [ESP + 0x28],EAX      ; 0041962d
    PUSH 0x40a00000                     ; 00419631
        ;   Label: LAB_00419631
    PUSH 0xc0a00000                     ; 00419636
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0041963b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 00419640
    FLD float ptr [ESP + 0x3c]          ; 00419644
    ADD ESP,0x8                         ; 00419648
    PUSH 0x41200000                     ; 0041964b
    PUSH 0x0                            ; 00419650
    FSTP float ptr [ESP + 0x18]         ; 00419652
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00419656
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041965b
    FLD float ptr [ESP + 0x3c]          ; 0041965f
    ADD ESP,0x8                         ; 00419663
    PUSH 0x40a00000                     ; 00419666
    PUSH 0xc0a00000                     ; 0041966b
    FSTP float ptr [ESP + 0x1c]         ; 00419670
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00419674
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 00419679
    FLD float ptr [ESP + 0x3c]          ; 0041967d
    ADD ESP,0x8                         ; 00419681
    PUSH 0x2                            ; 00419684
    PUSH 0x1                            ; 00419686
    PUSH 0x1                            ; 00419688
    MOV EBX,dword ptr [ESP + 0x58]      ; 0041968a
    PUSH EBX                            ; 0041968e
    LEA EAX,[ESP + 0x20]                ; 0041968f
    PUSH EAX                            ; 00419693
    MOV ESI,dword ptr [ESP + 0x30]      ; 00419694
    PUSH ESI                            ; 00419698
    MOV EDI,dword ptr [ESP + 0x38]      ; 00419699
    PUSH EDI                            ; 0041969d
    FSTP float ptr [ESP + 0x34]         ; 0041969e
    CALL core_bodypart.cpp_createBodyPart_FUN_00414550 ; 004196a2
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00414550(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004196a7
    MOV EBX,EAX                         ; 004196aa
    PUSH 0x1                            ; 004196ac
    MOV ESI,EAX                         ; 004196ae
    MOV EAX,dword ptr [ESP + 0x30]      ; 004196b0
    PUSH EAX                            ; 004196b4
    PUSH EBX                            ; 004196b5
    MOV EDX,dword ptr [ESP + 0x58]      ; 004196b6
    PUSH EDX                            ; 004196ba
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 004196bb
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004196c0
    PUSH EBX                            ; 004196c3
    MOV dword ptr [EBX + 0xcc4],0x1     ; 004196c4
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 ; 004196ce
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 004196d3
    IMUL EAX,dword ptr [ESP + 0x2c],0x48 ; 004196d6
    MOV EDI,dword ptr [ESP + 0x28]      ; 004196db
    MOV dword ptr [EDI + 0xd134],EBX    ; 004196df
    MOV EDI,dword ptr [ESP + 0x24]      ; 004196e5
    ADD EBX,0x20                        ; 004196e9
    ADD EAX,EDI                         ; 004196ec
    CMP EAX,EBX                         ; 004196ee
    JZ 0x00419702                       ; 004196f0
        ;   XREF to: 00419702 (CONDITIONAL_JUMP)  ; LAB_00419702
    MOV EDX,dword ptr [EBX]             ; 004196f2
    MOV dword ptr [EAX],EDX             ; 004196f4
    MOV EDX,dword ptr [EBX + 0x4]       ; 004196f6
    MOV dword ptr [EAX + 0x4],EDX       ; 004196f9
    MOV EDX,dword ptr [EBX + 0x8]       ; 004196fc
    MOV dword ptr [EAX + 0x8],EDX       ; 004196ff
    LEA EAX,[ESI + 0x30]                ; 00419702
        ;   Label: LAB_00419702
    CMP EBP,EAX                         ; 00419705
    JZ 0x0041971a                       ; 00419707
        ;   XREF to: 0041971a (CONDITIONAL_JUMP)  ; LAB_0041971a
    MOV EDX,dword ptr [EAX]             ; 00419709
    MOV dword ptr [EBP],EDX             ; 0041970b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041970e
    MOV dword ptr [EBP + 0x4],EDX       ; 00419711
    MOV EDX,dword ptr [EAX + 0x8]       ; 00419714
    MOV dword ptr [EBP + 0x8],EDX       ; 00419717
    ADD ESI,0x30                        ; 0041971a
        ;   Label: LAB_0041971a
    PUSH ESI                            ; 0041971d
    LEA ESI,[ESP + 0x4]                 ; 0041971e
    ADD EBP,0x48                        ; 00419722
    CALL core_xform.cpp_FUN_005860b0    ; 00419725
        ;   XREF to: 005860b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005860b0()
    ADD ESP,0x4                         ; 0041972a
    MOV ESI,ESP                         ; 0041972d
    MOV EDI,dword ptr [ESP + 0x28]      ; 0041972f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00419733
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00419737
    MOV EBX,dword ptr [ESP + 0x30]      ; 0041973b
    LEA EDI,[EDI + 0xd118]              ; 0041973f
    ADD EAX,0x48                        ; 00419745
    INC EDX                             ; 00419748
    MOVSD ES:EDI,ESI                    ; 00419749
    MOVSD ES:EDI,ESI                    ; 0041974a
    MOVSD ES:EDI,ESI                    ; 0041974b
    MOVSD ES:EDI,ESI                    ; 0041974c
    MOV dword ptr [ESP + 0x28],EAX      ; 0041974d
    MOV ECX,dword ptr [EBX + 0xc00]     ; 00419751
    MOV dword ptr [ESP + 0x2c],EDX      ; 00419757
    CMP EDX,ECX                         ; 0041975b
    JL 0x00419631                       ; 0041975d
        ;   XREF to: 00419631 (CONDITIONAL_JUMP)  ; LAB_00419631
    PUSH 0x5b7157                       ; 00419763 | = "boneguy-fallapart.wav"
        ;   Label: LAB_00419763
    MOV EBP,dword ptr [ESP + 0x50]      ; 00419768
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041976c
    PUSH EBP                            ; 00419770
    MOV EAX,dword ptr [EAX + 0x154]     ; 00419771
    CALL dword ptr [EAX + 0x2c]         ; 00419777
    ADD ESP,0x8                         ; 0041977a
    ADD ESP,0x38                        ; 0041977d
    POP EBP                             ; 00419780
    POP EDI                             ; 00419781
    POP ESI                             ; 00419782
    POP EBX                             ; 00419783
    RET                                 ; 00419784

