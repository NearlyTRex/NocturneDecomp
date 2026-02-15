; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance *this_ptr,SBoneTransformData *bone_transform)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SBoneTransformData * Stack[0x8]:4   bone_transform
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[5]:
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60 at 0042b013
;   core_gabriela.cpp_CGabriella_FUN_004d6f80 at 004d6f9e
;   core_moloch.cpp_CMoloch_process_FUN_00528d20 at 005292b9
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005972ee
;   core_stranger.cpp_CStranger_FUN_005bf720 at 005bf7e1
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005a1510
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
    PUSH EBP                            ; 005a1511
    SUB ESP,0x10                        ; 005a1512
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a1515
    MOV EBP,dword ptr [ESP + 0x20]      ; 005a1519
    LEA EAX,[EDI + 0x6a4]               ; 005a151d
    CMP EBP,EAX                         ; 005a1523
    JZ 0x005a1538                       ; 005a1525
        ;   XREF to: 005a1538 (CONDITIONAL_JUMP)  ; LAB_005a1538
    MOV EDX,dword ptr [EAX]             ; 005a1527
    MOV dword ptr [EBP],EDX             ; 005a1529
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a152c
    MOV dword ptr [EBP + 0x4],EDX       ; 005a152f
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a1532
    MOV dword ptr [EBP + 0x8],EDX       ; 005a1535
    PUSH EDI                            ; 005a1538
        ;   Label: LAB_005a1538
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a1539
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a153e
    MOV EAX,dword ptr [EAX + 0x28558]   ; 005a1541
    XOR EDX,EDX                         ; 005a1547
    MOV dword ptr [ESP],EAX             ; 005a1549
    TEST EAX,EAX                        ; 005a154c
    JLE 0x005a15d3                      ; 005a154e
        ;   XREF to: 005a15d3 (CONDITIONAL_JUMP)  ; LAB_005a15d3
    PUSH ESI                            ; 005a1554
    PUSH EBX                            ; 005a1555
    MOV dword ptr [ESP + 0x10],EDI      ; 005a1556
    MOV dword ptr [ESP + 0x14],EBP      ; 005a155a
    MOV EBX,EDI                         ; 005a155e
    MOV dword ptr [ESP + 0xc],EDI       ; 005a1560
    MOV EAX,EBP                         ; 005a1564
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a1566
        ;   Label: LAB_005a1566
    LEA EDI,[EBP + 0xc]                 ; 005a156a
    LEA ESI,[ESI + 0x6b0]               ; 005a156d
    MOVSD ES:EDI,ESI                    ; 005a1573
    MOVSD ES:EDI,ESI                    ; 005a1574
    MOVSD ES:EDI,ESI                    ; 005a1575
    MOVSD ES:EDI,ESI                    ; 005a1576
    ADD EAX,0x30                        ; 005a1577
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a157a
    MOV ECX,dword ptr [EBX + 0xcf0]     ; 005a157e
    MOV dword ptr [ESI + 0x64c],ECX     ; 005a1584
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a158a
    MOV ECX,0xc                         ; 005a158e
    LEA EDI,[EAX + 0x7ac]               ; 005a1593
    LEA ESI,[ESI + 0xe80]               ; 005a1599
    ADD EBX,0x4                         ; 005a159f
    ADD EBP,0x10                        ; 005a15a2
    MOVSD.REP ES:EDI,ESI                ; 005a15a5
    INC EDX                             ; 005a15a7
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a15a8
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a15ac
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a15b0
    ADD ESI,0x30                        ; 005a15b4
    ADD EDI,0x4                         ; 005a15b7
    ADD ECX,0x10                        ; 005a15ba
    MOV dword ptr [ESP + 0x10],ESI      ; 005a15bd
    MOV dword ptr [ESP + 0x14],EDI      ; 005a15c1
    MOV ESI,dword ptr [ESP + 0x8]       ; 005a15c5
    MOV dword ptr [ESP + 0xc],ECX       ; 005a15c9
    CMP EDX,ESI                         ; 005a15cd
    JL 0x005a1566                       ; 005a15cf
        ;   XREF to: 005a1566 (CONDITIONAL_JUMP)  ; LAB_005a1566
    POP EBX                             ; 005a15d1
    POP ESI                             ; 005a15d2
    ADD ESP,0x10                        ; 005a15d3
        ;   Label: LAB_005a15d3
    POP EBP                             ; 005a15d6
    POP EDI                             ; 005a15d7
    RET                                 ; 005a15d8

