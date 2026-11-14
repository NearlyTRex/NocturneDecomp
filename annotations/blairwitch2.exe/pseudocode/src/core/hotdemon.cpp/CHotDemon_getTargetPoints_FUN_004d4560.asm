; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004d4560(CHotDemon *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_01cee00c
;   undefined4 DAT_01cee030
;   undefined4 DAT_01cee038
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4560
        ;   Label: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004d4560
    PUSH ESI                            ; 004d4561
    PUSH EDI                            ; 004d4562
    PUSH EBP                            ; 004d4563
    SUB ESP,0x48                        ; 004d4564
    MOV EBX,dword ptr [ESP + 0x60]      ; 004d4567
    MOV EDX,dword ptr [0x01cee00c]      ; 004d456b | DAT_01cee00c
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004d4571
    PUSH EDX                            ; 004d4575
    ADD EAX,0x2b4                       ; 004d4576
    MOV EBP,0x3                         ; 004d457b
    PUSH EAX                            ; 004d4580
    LEA ESI,[ESP + 0x44]                ; 004d4581
    LEA EDI,[ESP + 0x38]                ; 004d4585
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004d4589
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x44]                ; 004d458e
    ADD ESP,0x8                         ; 004d4592
    LEA EAX,[ESP + 0x30]                ; 004d4595
    MOVSD ES:EDI,ESI                    ; 004d4599
    MOVSD ES:EDI,ESI                    ; 004d459a
    MOVSD ES:EDI,ESI                    ; 004d459b
    CMP EBX,EAX                         ; 004d459c
    JZ 0x004d45b4                       ; 004d459e
        ;   XREF to: 004d45b4 (CONDITIONAL_JUMP)  ; LAB_004d45b4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d45a0
    MOV dword ptr [EBX],EAX             ; 004d45a4
    MOV EAX,dword ptr [ESP + 0x34]      ; 004d45a6
    MOV dword ptr [EBX + 0x4],EAX       ; 004d45aa
    MOV EAX,dword ptr [ESP + 0x38]      ; 004d45ad
    MOV dword ptr [EBX + 0x8],EAX       ; 004d45b1
    MOV ECX,dword ptr [0x01cee030]      ; 004d45b4 | DAT_01cee030
        ;   Label: LAB_004d45b4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004d45ba
    PUSH ECX                            ; 004d45be
    ADD EAX,0x2b4                       ; 004d45bf
    PUSH EAX                            ; 004d45c4
    LEA ESI,[ESP + 0x14]                ; 004d45c5
    LEA EDI,[ESP + 0x20]                ; 004d45c9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004d45cd
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x14]                ; 004d45d2
    LEA EAX,[ESP + 0x20]                ; 004d45d6
    ADD ESP,0x8                         ; 004d45da
    LEA EDX,[EBX + 0xc]                 ; 004d45dd
    MOVSD ES:EDI,ESI                    ; 004d45e0
    MOVSD ES:EDI,ESI                    ; 004d45e1
    MOVSD ES:EDI,ESI                    ; 004d45e2
    CMP EDX,EAX                         ; 004d45e3
    JZ 0x004d45fb                       ; 004d45e5
        ;   XREF to: 004d45fb (CONDITIONAL_JUMP)  ; LAB_004d45fb
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d45e7
    MOV dword ptr [EDX],EAX             ; 004d45eb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004d45ed
    MOV dword ptr [EDX + 0x4],EAX       ; 004d45f1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d45f4
    MOV dword ptr [EDX + 0x8],EAX       ; 004d45f8
    MOV ESI,dword ptr [0x01cee038]      ; 004d45fb | DAT_01cee038
        ;   Label: LAB_004d45fb
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004d4601
    PUSH ESI                            ; 004d4605
    ADD EAX,0x2b4                       ; 004d4606
    LEA EDI,[ESP + 0x4]                 ; 004d460b
    PUSH EAX                            ; 004d460f
    LEA ESI,[ESP + 0x2c]                ; 004d4610
    ADD EBX,0x18                        ; 004d4614
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004d4617
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x2c]                ; 004d461c
    ADD ESP,0x8                         ; 004d4620
    MOV EAX,ESP                         ; 004d4623
    MOVSD ES:EDI,ESI                    ; 004d4625
    MOVSD ES:EDI,ESI                    ; 004d4626
    MOVSD ES:EDI,ESI                    ; 004d4627
    CMP EBX,EAX                         ; 004d4628
    JNZ 0x004d4636                      ; 004d462a
        ;   XREF to: 004d4636 (CONDITIONAL_JUMP)  ; LAB_004d4636
    MOV EAX,EBP                         ; 004d462c
    ADD ESP,0x48                        ; 004d462e
    POP EBP                             ; 004d4631
    POP EDI                             ; 004d4632
    POP ESI                             ; 004d4633
    POP EBX                             ; 004d4634
    RET                                 ; 004d4635
    MOV EAX,dword ptr [ESP]             ; 004d4636
        ;   Label: LAB_004d4636
    MOV dword ptr [EBX],EAX             ; 004d4639
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d463b
    MOV dword ptr [EBX + 0x4],EAX       ; 004d463f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d4642
    MOV dword ptr [EBX + 0x8],EAX       ; 004d4646
    MOV EAX,EBP                         ; 004d4649
    ADD ESP,0x48                        ; 004d464b
    POP EBP                             ; 004d464e
    POP EDI                             ; 004d464f
    POP ESI                             ; 004d4650
    POP EBX                             ; 004d4651
    RET                                 ; 004d4652

