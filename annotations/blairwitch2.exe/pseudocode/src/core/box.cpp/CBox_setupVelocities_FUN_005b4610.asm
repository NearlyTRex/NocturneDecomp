; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupVelocities_FUN_005b4610(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   linear_velocity
; CVector3f *      Stack[0xc]:4   angular_velocity
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_onDropped_FUN_00416680 at 004166d3
;   core_boxactor.cpp_CBoxActor_onDropped_FUN_0041cd00 at 0041cd49
;   core_fire.cpp_CStake_spawn_FUN_004941c0 at 0049447c
;   core_fire.cpp_CToss_create_FUN_004992b0 at 004993b2
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4610
        ;   Label: core_box.cpp_CBox_setupVelocities_FUN_005b4610
    PUSH ESI                            ; 005b4611
    PUSH EDI                            ; 005b4612
    PUSH EBP                            ; 005b4613
    SUB ESP,0x18                        ; 005b4614
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005b4617
    MOV EDX,dword ptr [ESP + 0x30]      ; 005b461b
    MOV EBP,dword ptr [ESP + 0x34]      ; 005b461f
    TEST EDX,EDX                        ; 005b4623
    JZ 0x005b467c                       ; 005b4625
        ;   XREF to: 005b467c (CONDITIONAL_JUMP)  ; LAB_005b467c
    LEA EAX,[EBX + 0x40]                ; 005b4627
    CMP EAX,EDX                         ; 005b462a
    JZ 0x005b463e                       ; 005b462c
        ;   XREF to: 005b463e (CONDITIONAL_JUMP)  ; LAB_005b463e
    MOV ECX,dword ptr [EDX]             ; 005b462e
    MOV dword ptr [EAX],ECX             ; 005b4630
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b4632
    MOV dword ptr [EAX + 0x4],ECX       ; 005b4635
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b4638
    MOV dword ptr [EAX + 0x8],ECX       ; 005b463b
    LEA EAX,[EBX + 0x40]                ; 005b463e
        ;   Label: LAB_005b463e
    PUSH EAX                            ; 005b4641
    LEA EAX,[EBX + 0x18]                ; 005b4642
    PUSH EAX                            ; 005b4645
    LEA ESI,[ESP + 0x8]                 ; 005b4646
    LEA EDI,[ESP + 0x14]                ; 005b464a
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b464e
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x8]                 ; 005b4653
    LEA EAX,[ESP + 0x14]                ; 005b4657
    ADD ESP,0x8                         ; 005b465b
    LEA EDX,[EBX + 0x4c]                ; 005b465e
    MOVSD ES:EDI,ESI                    ; 005b4661
    MOVSD ES:EDI,ESI                    ; 005b4662
    MOVSD ES:EDI,ESI                    ; 005b4663
    CMP EDX,EAX                         ; 005b4664
    JZ 0x005b467c                       ; 005b4666
        ;   XREF to: 005b467c (CONDITIONAL_JUMP)  ; LAB_005b467c
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b4668
    MOV dword ptr [EDX],EAX             ; 005b466c
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b466e
    MOV dword ptr [EDX + 0x4],EAX       ; 005b4672
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b4675
    MOV dword ptr [EDX + 0x8],EAX       ; 005b4679
    TEST EBP,EBP                        ; 005b467c
        ;   Label: LAB_005b467c
    JZ 0x005b4687                       ; 005b467e
        ;   XREF to: 005b4687 (CONDITIONAL_JUMP)  ; LAB_005b4687
    LEA EAX,[EBX + 0x70]                ; 005b4680
    CMP EAX,EBP                         ; 005b4683
    JNZ 0x005b468f                      ; 005b4685
        ;   XREF to: 005b468f (CONDITIONAL_JUMP)  ; LAB_005b468f
    ADD ESP,0x18                        ; 005b4687
        ;   Label: LAB_005b4687
    POP EBP                             ; 005b468a
    POP EDI                             ; 005b468b
    POP ESI                             ; 005b468c
    POP EBX                             ; 005b468d
    RET                                 ; 005b468e
    MOV EDX,dword ptr [EBP]             ; 005b468f
        ;   Label: LAB_005b468f
    MOV dword ptr [EAX],EDX             ; 005b4692
    MOV EDX,dword ptr [EBP + 0x4]       ; 005b4694
    MOV dword ptr [EAX + 0x4],EDX       ; 005b4697
    MOV EDX,dword ptr [EBP + 0x8]       ; 005b469a
    MOV dword ptr [EAX + 0x8],EDX       ; 005b469d
    ADD ESP,0x18                        ; 005b46a0
    POP EBP                             ; 005b46a3
    POP EDI                             ; 005b46a4
    POP ESI                             ; 005b46a5
    POP EBX                             ; 005b46a6
    RET                                 ; 005b46a7

