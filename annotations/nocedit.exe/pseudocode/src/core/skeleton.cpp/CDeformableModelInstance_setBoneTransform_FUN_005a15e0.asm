; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance *this_ptr,SPose *bone_transform)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SPose *          Stack[0x8]:4   bone_transform
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60 at 0042b0bd
;   core_gabriela.cpp_CGabriella_FUN_004d6f80 at 004d7035
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005972fc
;   core_stranger.cpp_CStranger_FUN_005bf720 at 005bf7ed
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005a15e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
    PUSH EBP                            ; 005a15e1
    SUB ESP,0x10                        ; 005a15e2
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a15e5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a15e9
    ADD EAX,0x6a4                       ; 005a15ed
    CMP EAX,EDI                         ; 005a15f2
    JZ 0x005a1606                       ; 005a15f4
        ;   XREF to: 005a1606 (CONDITIONAL_JUMP)  ; LAB_005a1606
    MOV EDX,dword ptr [EDI]             ; 005a15f6
    MOV dword ptr [EAX],EDX             ; 005a15f8
    MOV EDX,dword ptr [EDI + 0x4]       ; 005a15fa
    MOV dword ptr [EAX + 0x4],EDX       ; 005a15fd
    MOV EDX,dword ptr [EDI + 0x8]       ; 005a1600
    MOV dword ptr [EAX + 0x8],EDX       ; 005a1603
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a1606
        ;   Label: LAB_005a1606
    PUSH EDX                            ; 005a160a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a160b
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a1610
    MOV EAX,dword ptr [EAX + 0x28558]   ; 005a1613
    XOR EDX,EDX                         ; 005a1619
    MOV dword ptr [ESP],EAX             ; 005a161b
    TEST EAX,EAX                        ; 005a161e
    JLE 0x005a16a9                      ; 005a1620
        ;   XREF to: 005a16a9 (CONDITIONAL_JUMP)  ; LAB_005a16a9
    PUSH ESI                            ; 005a1626
    PUSH EBX                            ; 005a1627
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a1628
    MOV dword ptr [ESP + 0x10],EDI      ; 005a162c
    MOV EBX,EDI                         ; 005a1630
    MOV dword ptr [ESP + 0xc],EDI       ; 005a1632
    MOV dword ptr [ESP + 0x14],EAX      ; 005a1636
    MOV EBP,EAX                         ; 005a163a
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a163c
        ;   Label: LAB_005a163c
    LEA EDI,[EBP + 0x6b0]               ; 005a1640
    LEA ESI,[ESI + 0xc]                 ; 005a1646
    MOV ECX,0xc                         ; 005a1649
    MOVSD ES:EDI,ESI                    ; 005a164e
    MOVSD ES:EDI,ESI                    ; 005a164f
    MOVSD ES:EDI,ESI                    ; 005a1650
    MOVSD ES:EDI,ESI                    ; 005a1651
    ADD EAX,0x30                        ; 005a1652
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a1655
    FLD float ptr [EBX + 0x64c]         ; 005a1659
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a165f
    FSTP float ptr [EDI + 0xcf0]        ; 005a1663
    LEA EDI,[EAX + 0xe50]               ; 005a1669
    LEA ESI,[ESI + 0x7dc]               ; 005a166f
    ADD EBX,0x4                         ; 005a1675
    ADD EBP,0x10                        ; 005a1678
    MOVSD.REP ES:EDI,ESI                ; 005a167b
    INC EDX                             ; 005a167d
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a167e
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a1682
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a1686
    ADD ESI,0x30                        ; 005a168a
    ADD EDI,0x4                         ; 005a168d
    ADD ECX,0x10                        ; 005a1690
    MOV dword ptr [ESP + 0x10],ESI      ; 005a1693
    MOV dword ptr [ESP + 0x14],EDI      ; 005a1697
    MOV ESI,dword ptr [ESP + 0x8]       ; 005a169b
    MOV dword ptr [ESP + 0xc],ECX       ; 005a169f
    CMP EDX,ESI                         ; 005a16a3
    JL 0x005a163c                       ; 005a16a5
        ;   XREF to: 005a163c (CONDITIONAL_JUMP)  ; LAB_005a163c
    POP EBX                             ; 005a16a7
    POP ESI                             ; 005a16a8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a16a9
        ;   Label: LAB_005a16a9
    MOV dword ptr [EAX + 0x2230],0xffffffff ; 005a16ad
    ADD ESP,0x10                        ; 005a16b7
    POP EBP                             ; 005a16ba
    POP EDI                             ; 005a16bb
    RET                                 ; 005a16bc

