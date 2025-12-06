; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_smiley.cpp_FUN_005a3690()
;
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   undefined4 DAT_03f48fa0
;   undefined4 DAT_03f48fb4
;   undefined4 DAT_03f48fb8
;   undefined4 DAT_03f48fc4
;   undefined4 DAT_03f48fcc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a3690
        ;   Label: core_smiley.cpp_FUN_005a3690
    PUSH EDI                            ; 005a3691
    PUSH EBP                            ; 005a3692
    SUB ESP,0x3c                        ; 005a3693
    MOV EDI,dword ptr [ESP + 0x4c]      ; 005a3696
    MOV ESI,dword ptr [ESP + 0x50]      ; 005a369a
    CMP dword ptr [EDI + 0xbefc],0x3    ; 005a369e
    JNZ 0x005a36b0                      ; 005a36a5 | LAB_005a36b0
        ;   XREF to: 005a36b0 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005a36a7
    ADD ESP,0x3c                        ; 005a36a9
    POP EBP                             ; 005a36ac
    POP EDI                             ; 005a36ad
    POP ESI                             ; 005a36ae
    RET                                 ; 005a36af
    PUSH EBX                            ; 005a36b0
        ;   Label: LAB_005a36b0
    MOV ECX,dword ptr [0x03f48fa0]      ; 005a36b1 | undefined4 DAT_03f48fa0
    PUSH ECX                            ; 005a36b7
    LEA EAX,[ESP + 0x20]                ; 005a36b8
    PUSH EAX                            ; 005a36bc
    LEA EAX,[EDI + 0x158]               ; 005a36bd
    PUSH EAX                            ; 005a36c3
    MOV EBX,0x1                         ; 005a36c4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005a36c9 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a36ce
    CMP ESI,EAX                         ; 005a36d1
    JZ 0x005a36e5                       ; 005a36d3 | LAB_005a36e5
        ;   XREF to: 005a36e5 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 005a36d5
    MOV dword ptr [ESI],EDX             ; 005a36d7
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a36d9
    MOV dword ptr [ESI + 0x4],EDX       ; 005a36dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a36df
    MOV dword ptr [ESI + 0x8],EDX       ; 005a36e2
    MOV EBP,dword ptr [0x03f48fb4]      ; 005a36e5 | undefined4 DAT_03f48fb4
        ;   Label: LAB_005a36e5
    PUSH EBP                            ; 005a36eb
    LEA EAX,[ESP + 0x2c]                ; 005a36ec
    PUSH EAX                            ; 005a36f0
    LEA EAX,[EDI + 0x158]               ; 005a36f1
    PUSH EAX                            ; 005a36f7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005a36f8 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 005a36fd
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a36ff
    SUB EAX,EBX                         ; 005a3706
    SHL EAX,0x2                         ; 005a3708
    ADD EAX,ESI                         ; 005a370b
    ADD ESP,0xc                         ; 005a370d
    CMP EAX,EDX                         ; 005a3710
    JZ 0x005a3724                       ; 005a3712 | LAB_005a3724
        ;   XREF to: 005a3724 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 005a3714
    MOV dword ptr [EAX],ECX             ; 005a3716
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a3718
    MOV dword ptr [EAX + 0x4],ECX       ; 005a371b
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a371e
    MOV dword ptr [EAX + 0x8],ECX       ; 005a3721
    MOV EAX,[0x03f48fb8]                ; 005a3724 | undefined4 DAT_03f48fb8
        ;   Label: LAB_005a3724
    PUSH EAX                            ; 005a3729
    LEA EAX,[ESP + 0x8]                 ; 005a372a
    PUSH EAX                            ; 005a372e
    LEA EAX,[EDI + 0x158]               ; 005a372f
    PUSH EAX                            ; 005a3735
    INC EBX                             ; 005a3736
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005a3737 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 005a373c
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a373e
    SUB EAX,EBX                         ; 005a3745
    SHL EAX,0x2                         ; 005a3747
    ADD EAX,ESI                         ; 005a374a
    ADD ESP,0xc                         ; 005a374c
    CMP EAX,EDX                         ; 005a374f
    JZ 0x005a3763                       ; 005a3751 | LAB_005a3763
        ;   XREF to: 005a3763 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 005a3753
    MOV dword ptr [EAX],ECX             ; 005a3755
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a3757
    MOV dword ptr [EAX + 0x4],ECX       ; 005a375a
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a375d
    MOV dword ptr [EAX + 0x8],ECX       ; 005a3760
    MOV EDX,dword ptr [0x03f48fc4]      ; 005a3763 | undefined4 DAT_03f48fc4
        ;   Label: LAB_005a3763
    PUSH EDX                            ; 005a3769
    LEA EAX,[ESP + 0x14]                ; 005a376a
    PUSH EAX                            ; 005a376e
    LEA EAX,[EDI + 0x158]               ; 005a376f
    PUSH EAX                            ; 005a3775
    INC EBX                             ; 005a3776
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005a3777 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 005a377c
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a377e
    SUB EAX,EBX                         ; 005a3785
    SHL EAX,0x2                         ; 005a3787
    ADD EAX,ESI                         ; 005a378a
    ADD ESP,0xc                         ; 005a378c
    CMP EAX,EDX                         ; 005a378f
    JZ 0x005a37a3                       ; 005a3791 | LAB_005a37a3
        ;   XREF to: 005a37a3 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 005a3793
    MOV dword ptr [EAX],ECX             ; 005a3795
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a3797
    MOV dword ptr [EAX + 0x4],ECX       ; 005a379a
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a379d
    MOV dword ptr [EAX + 0x8],ECX       ; 005a37a0
    MOV ECX,dword ptr [0x03f48fcc]      ; 005a37a3 | undefined4 DAT_03f48fcc
        ;   Label: LAB_005a37a3
    PUSH ECX                            ; 005a37a9
    LEA EAX,[ESP + 0x38]                ; 005a37aa
    PUSH EAX                            ; 005a37ae
    ADD EDI,0x158                       ; 005a37af
    PUSH EDI                            ; 005a37b5
    INC EBX                             ; 005a37b6
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005a37b7 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 005a37bc
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a37be
    SUB EAX,EBX                         ; 005a37c5
    SHL EAX,0x2                         ; 005a37c7
    ADD ESI,EAX                         ; 005a37ca
    ADD ESP,0xc                         ; 005a37cc
    CMP ESI,EDX                         ; 005a37cf
    JZ 0x005a37e3                       ; 005a37d1 | LAB_005a37e3
        ;   XREF to: 005a37e3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 005a37d3
    MOV dword ptr [ESI],EAX             ; 005a37d5
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a37d7
    MOV dword ptr [ESI + 0x4],EAX       ; 005a37da
    MOV EAX,dword ptr [EDX + 0x8]       ; 005a37dd
    MOV dword ptr [ESI + 0x8],EAX       ; 005a37e0
    LEA EAX,[EBX + 0x1]                 ; 005a37e3
        ;   Label: LAB_005a37e3
    POP EBX                             ; 005a37e6
    ADD ESP,0x3c                        ; 005a37e7
    POP EBP                             ; 005a37ea
    POP EDI                             ; 005a37eb
    POP ESI                             ; 005a37ec
    RET                                 ; 005a37ed

