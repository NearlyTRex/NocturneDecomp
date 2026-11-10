; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHag * core_hag_cpp_CHag_ctor_FUN_005aa600(CHag *this_ptr)
;
; Parameters:
; CHag *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hag.cpp_factoryFuncHag_FUN_005aa5d0 at 005aa5e3
;
; Referenced Globals:
;   undefined4 DAT_00600a6c
;
; Called Functions:
;   core_cloth.cpp_CClothList_add_FUN_005b15c0
;   core_hag.cpp_CHag_processStates_FUN_005aa970
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;   unkafter_basicene.cpp_FUN_0059e3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa600
        ;   Label: core_hag.cpp_CHag_ctor_FUN_005aa600
    PUSH ESI                            ; 005aa601
    PUSH EDI                            ; 005aa602
    MOV EDX,dword ptr [ESP + 0x10]      ; 005aa603
    PUSH EDX                            ; 005aa607
    CALL unkafter_basicene.cpp_FUN_0059e3b0 ; 005aa608
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e3b0()
    ADD ESP,0x4                         ; 005aa60d
    PUSH 0x5f0af3                       ; 005aa610
    MOV EBX,EAX                         ; 005aa615
    LEA ESI,[EAX + 0x2b4]               ; 005aa617
    PUSH ESI                            ; 005aa61d
    MOV dword ptr [EAX + 0x2b0],0x600a84 ; 005aa61e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005aa628
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005aa62d
    PUSH 0x5f0afb                       ; 005aa630
    LEA ESI,[EBX + 0x2d0c]              ; 005aa635
    PUSH ESI                            ; 005aa63b
    CALL core_cloth.cpp_CClothList_add_FUN_005b15c0 ; 005aa63c
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_005b15c0(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005aa641
    PUSH 0x5f0b08                       ; 005aa644
    PUSH ESI                            ; 005aa649
    CALL core_cloth.cpp_CClothList_add_FUN_005b15c0 ; 005aa64a
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_005b15c0(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005aa64f
    PUSH 0x5f0b14                       ; 005aa652
    PUSH ESI                            ; 005aa657
    CALL core_cloth.cpp_CClothList_add_FUN_005b15c0 ; 005aa658
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_005b15c0(CClothList * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 005aa65d
    MOV dword ptr [EBX + 0x1134c],0x40200000 ; 005aa667
    MOV dword ptr [EBX + 0xfc],0x1      ; 005aa671
    MOV dword ptr [EBX + 0x113c4],0x3f800000 ; 005aa67b
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 005aa685
    MOV dword ptr [EBX + 0x11380],0x0   ; 005aa68f
    MOV dword ptr [EBX + 0x11384],0x0   ; 005aa699
    ADD ESP,0x8                         ; 005aa6a3
    MOV dword ptr [EBX + 0x11388],0x1   ; 005aa6a6
    PUSH 0x0                            ; 005aa6b0
    MOV dword ptr [EBX + 0x1138c],0x1   ; 005aa6b2
    PUSH 0x0                            ; 005aa6bc
    MOV dword ptr [EBX + 0x11390],0x0   ; 005aa6be
    PUSH EBX                            ; 005aa6c8
    MOV ESI,0x5f0b20                    ; 005aa6c9
    MOV dword ptr [EBX + 0x11858],0x0   ; 005aa6ce
    CALL core_hag.cpp_CHag_processStates_FUN_005aa970 ; 005aa6d8
        ;   XREF to: 005aa970 (UNCONDITIONAL_CALL)  ; void core_hag.cpp_CHag_processStates_FUN_005aa970(CHag * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005aa6dd
    LEA EDI,[EBX + 0x113d4]             ; 005aa6e0
    MOV dword ptr [EBX + 0x11418],0x1   ; 005aa6e6
    PUSH EDI                            ; 005aa6f0
    MOV AL,byte ptr [ESI]               ; 005aa6f1
        ;   Label: LAB_005aa6f1
    MOV byte ptr [EDI],AL               ; 005aa6f3
    CMP AL,0x0                          ; 005aa6f5
    JZ 0x005aa709                       ; 005aa6f7
        ;   XREF to: 005aa709 (CONDITIONAL_JUMP)  ; LAB_005aa709
    MOV AL,byte ptr [ESI + 0x1]         ; 005aa6f9
    ADD ESI,0x2                         ; 005aa6fc
    MOV byte ptr [EDI + 0x1],AL         ; 005aa6ff
    ADD EDI,0x2                         ; 005aa702
    CMP AL,0x0                          ; 005aa705
    JNZ 0x005aa6f1                      ; 005aa707
        ;   XREF to: 005aa6f1 (CONDITIONAL_JUMP)  ; LAB_005aa6f1
    POP EDI                             ; 005aa709
        ;   Label: LAB_005aa709
    PUSH 0x5f0b27                       ; 005aa70a
    PUSH 0x5f0b33                       ; 005aa70f
    LEA ESI,[EBX + 0x10af8]             ; 005aa714
    PUSH ESI                            ; 005aa71a
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005aa71b
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    FLD float ptr [0x00600a6c]          ; 005aa720 | DAT_00600a6c
    ADD ESP,0xc                         ; 005aa726
    FSTP float ptr [EBX + 0x11394]      ; 005aa729
    PUSH 0x5f0b41                       ; 005aa72f
    PUSH ESI                            ; 005aa734
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005aa735
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005aa73a
    PUSH ESI                            ; 005aa73d
    LEA EDI,[EBX + 0x11444]             ; 005aa73e
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005aa744
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005aa749
    MOV ESI,0x5f0b47                    ; 005aa74c
    MOV dword ptr [EBX + 0x11348],0x1   ; 005aa751
    PUSH EDI                            ; 005aa75b
    MOV AL,byte ptr [ESI]               ; 005aa75c
        ;   Label: LAB_005aa75c
    MOV byte ptr [EDI],AL               ; 005aa75e
    CMP AL,0x0                          ; 005aa760
    JZ 0x005aa774                       ; 005aa762
        ;   XREF to: 005aa774 (CONDITIONAL_JUMP)  ; LAB_005aa774
    MOV AL,byte ptr [ESI + 0x1]         ; 005aa764
    ADD ESI,0x2                         ; 005aa767
    MOV byte ptr [EDI + 0x1],AL         ; 005aa76a
    ADD EDI,0x2                         ; 005aa76d
    CMP AL,0x0                          ; 005aa770
    JNZ 0x005aa75c                      ; 005aa772
        ;   XREF to: 005aa75c (CONDITIONAL_JUMP)  ; LAB_005aa75c
    POP EDI                             ; 005aa774
        ;   Label: LAB_005aa774
    MOV ESI,0x5f0b54                    ; 005aa775
    LEA EDI,[EBX + 0x11543]             ; 005aa77a
    PUSH EDI                            ; 005aa780
    MOV AL,byte ptr [ESI]               ; 005aa781
        ;   Label: LAB_005aa781
    MOV byte ptr [EDI],AL               ; 005aa783
    CMP AL,0x0                          ; 005aa785
    JZ 0x005aa799                       ; 005aa787
        ;   XREF to: 005aa799 (CONDITIONAL_JUMP)  ; LAB_005aa799
    MOV AL,byte ptr [ESI + 0x1]         ; 005aa789
    ADD ESI,0x2                         ; 005aa78c
    MOV byte ptr [EDI + 0x1],AL         ; 005aa78f
    ADD EDI,0x2                         ; 005aa792
    CMP AL,0x0                          ; 005aa795
    JNZ 0x005aa781                      ; 005aa797
        ;   XREF to: 005aa781 (CONDITIONAL_JUMP)  ; LAB_005aa781
    POP EDI                             ; 005aa799
        ;   Label: LAB_005aa799
    MOV ESI,0x5f0b63                    ; 005aa79a
    LEA EDI,[EBX + 0x11741]             ; 005aa79f
    PUSH EDI                            ; 005aa7a5
    MOV AL,byte ptr [ESI]               ; 005aa7a6
        ;   Label: LAB_005aa7a6
    MOV byte ptr [EDI],AL               ; 005aa7a8
    CMP AL,0x0                          ; 005aa7aa
    JZ 0x005aa7be                       ; 005aa7ac
        ;   XREF to: 005aa7be (CONDITIONAL_JUMP)  ; LAB_005aa7be
    MOV AL,byte ptr [ESI + 0x1]         ; 005aa7ae
    ADD ESI,0x2                         ; 005aa7b1
    MOV byte ptr [EDI + 0x1],AL         ; 005aa7b4
    ADD EDI,0x2                         ; 005aa7b7
    CMP AL,0x0                          ; 005aa7ba
    JNZ 0x005aa7a6                      ; 005aa7bc
        ;   XREF to: 005aa7a6 (CONDITIONAL_JUMP)  ; LAB_005aa7a6
    POP EDI                             ; 005aa7be
        ;   Label: LAB_005aa7be
    MOV dword ptr [EBX + 0x11844],0x40c00000 ; 005aa7bf
    MOV EAX,EBX                         ; 005aa7c9
    MOV dword ptr [EBX + 0x1185c],0x0   ; 005aa7cb
    POP EDI                             ; 005aa7d5
    POP ESI                             ; 005aa7d6
    POP EBX                             ; 005aa7d7
    RET                                 ; 005aa7d8

