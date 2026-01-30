; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_boneguy_cpp_FUN_0041d550(void)
;
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   undefined4 DAT_00822944
;   int INT_00822958
;   int INT_0082295c
;   undefined4 DAT_00822968
;   undefined4 DAT_0082296c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d550
        ;   Label: core_boneguy.cpp_FUN_0041d550
    PUSH ESI                            ; 0041d551
    PUSH EBP                            ; 0041d552
    SUB ESP,0x3c                        ; 0041d553
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0041d556
    MOV EBX,dword ptr [ESP + 0x50]      ; 0041d55a
    CMP dword ptr [ESI + 0xc4dc],0x0    ; 0041d55e
    JZ 0x0041d570                       ; 0041d565
        ;   XREF to: 0041d570 (CONDITIONAL_JUMP)  ; LAB_0041d570
    XOR EAX,EAX                         ; 0041d567
    ADD ESP,0x3c                        ; 0041d569
    POP EBP                             ; 0041d56c
    POP ESI                             ; 0041d56d
    POP EBX                             ; 0041d56e
    RET                                 ; 0041d56f
    MOV ECX,dword ptr [0x00822944]      ; 0041d570 | DAT_00822944
        ;   Label: LAB_0041d570
    PUSH ECX                            ; 0041d576
    LEA EAX,[ESP + 0x1c]                ; 0041d577
    PUSH EAX                            ; 0041d57b
    LEA EAX,[ESI + 0x158]               ; 0041d57c
    PUSH EAX                            ; 0041d582
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0041d583
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0041d588
    CMP EBX,EAX                         ; 0041d58b
    JZ 0x0041d59f                       ; 0041d58d
        ;   XREF to: 0041d59f (CONDITIONAL_JUMP)  ; LAB_0041d59f
    MOV EDX,dword ptr [EAX]             ; 0041d58f
    MOV dword ptr [EBX],EDX             ; 0041d591
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d593
    MOV dword ptr [EBX + 0x4],EDX       ; 0041d596
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d599
    MOV dword ptr [EBX + 0x8],EDX       ; 0041d59c
    PUSH EDI                            ; 0041d59f
        ;   Label: LAB_0041d59f
    MOV EDI,dword ptr [0x00822958]      ; 0041d5a0 | INT_00822958
    PUSH EDI                            ; 0041d5a6
    LEA EAX,[ESP + 0x2c]                ; 0041d5a7
    PUSH EAX                            ; 0041d5ab
    LEA EAX,[ESI + 0x158]               ; 0041d5ac
    PUSH EAX                            ; 0041d5b2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0041d5b3
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0xc]                 ; 0041d5b8
    ADD ESP,0xc                         ; 0041d5bb
    CMP EDX,EAX                         ; 0041d5be
    JZ 0x0041d5d2                       ; 0041d5c0
        ;   XREF to: 0041d5d2 (CONDITIONAL_JUMP)  ; LAB_0041d5d2
    MOV ECX,dword ptr [EAX]             ; 0041d5c2
    MOV dword ptr [EDX],ECX             ; 0041d5c4
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041d5c6
    MOV dword ptr [EDX + 0x4],ECX       ; 0041d5c9
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041d5cc
    MOV dword ptr [EDX + 0x8],ECX       ; 0041d5cf
    MOV EBP,dword ptr [0x0082295c]      ; 0041d5d2 | INT_0082295c
        ;   Label: LAB_0041d5d2
    PUSH EBP                            ; 0041d5d8
    LEA EAX,[ESP + 0x38]                ; 0041d5d9
    PUSH EAX                            ; 0041d5dd
    LEA EAX,[ESI + 0x158]               ; 0041d5de
    PUSH EAX                            ; 0041d5e4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0041d5e5
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0x18]                ; 0041d5ea
    ADD ESP,0xc                         ; 0041d5ed
    CMP EDX,EAX                         ; 0041d5f0
    JZ 0x0041d604                       ; 0041d5f2
        ;   XREF to: 0041d604 (CONDITIONAL_JUMP)  ; LAB_0041d604
    MOV ECX,dword ptr [EAX]             ; 0041d5f4
    MOV dword ptr [EDX],ECX             ; 0041d5f6
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041d5f8
    MOV dword ptr [EDX + 0x4],ECX       ; 0041d5fb
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041d5fe
    MOV dword ptr [EDX + 0x8],ECX       ; 0041d601
    MOV EAX,[0x00822968]                ; 0041d604 | DAT_00822968
        ;   Label: LAB_0041d604
    PUSH EAX                            ; 0041d609
    LEA EAX,[ESP + 0x14]                ; 0041d60a
    PUSH EAX                            ; 0041d60e
    LEA EAX,[ESI + 0x158]               ; 0041d60f
    PUSH EAX                            ; 0041d615
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0041d616
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0x24]                ; 0041d61b
    ADD ESP,0xc                         ; 0041d61e
    CMP EDX,EAX                         ; 0041d621
    JZ 0x0041d635                       ; 0041d623
        ;   XREF to: 0041d635 (CONDITIONAL_JUMP)  ; LAB_0041d635
    MOV ECX,dword ptr [EAX]             ; 0041d625
    MOV dword ptr [EDX],ECX             ; 0041d627
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041d629
    MOV dword ptr [EDX + 0x4],ECX       ; 0041d62c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041d62f
    MOV dword ptr [EDX + 0x8],ECX       ; 0041d632
    MOV EDX,dword ptr [0x0082296c]      ; 0041d635 | DAT_0082296c
        ;   Label: LAB_0041d635
    PUSH EDX                            ; 0041d63b
    LEA EAX,[ESP + 0x8]                 ; 0041d63c
    PUSH EAX                            ; 0041d640
    ADD ESI,0x158                       ; 0041d641
    PUSH ESI                            ; 0041d647
    ADD EBX,0x30                        ; 0041d648
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0041d64b
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0041d650
    CMP EBX,EAX                         ; 0041d653
    JZ 0x0041d667                       ; 0041d655
        ;   XREF to: 0041d667 (CONDITIONAL_JUMP)  ; LAB_0041d667
    MOV EDX,dword ptr [EAX]             ; 0041d657
    MOV dword ptr [EBX],EDX             ; 0041d659
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d65b
    MOV dword ptr [EBX + 0x4],EDX       ; 0041d65e
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d661
    MOV dword ptr [EBX + 0x8],EDX       ; 0041d664
    MOV EAX,0x5                         ; 0041d667
        ;   Label: LAB_0041d667
    POP EDI                             ; 0041d66c
    ADD ESP,0x3c                        ; 0041d66d
    POP EBP                             ; 0041d670
    POP ESI                             ; 0041d671
    POP EBX                             ; 0041d672
    RET                                 ; 0041d673

