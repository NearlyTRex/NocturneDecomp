; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_baal.cpp_CBaal_renderOpaque_FUN_00597940 at 0059795a
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510 at 0042f6da
;   core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710 at 005938ec
;   core_shadow.cpp_FUN_00545710 at 005458cf
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f6f0
        ;   Label: core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0
    PUSH ESI                            ; 0042f6f1
    PUSH EDI                            ; 0042f6f2
    PUSH EBP                            ; 0042f6f3
    SUB ESP,0x4                         ; 0042f6f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0042f6f7
    LEA EAX,[EBP + 0x158]               ; 0042f6fb
    PUSH EAX                            ; 0042f701
    XOR EDI,EDI                         ; 0042f702
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0042f704
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f709
    MOV EDX,dword ptr [EBP + 0x33a0]    ; 0042f70c
    MOV dword ptr [ESP],EAX             ; 0042f712
    TEST EDX,EDX                        ; 0042f715
    JLE 0x0042f758                      ; 0042f717
        ;   XREF to: 0042f758 (CONDITIONAL_JUMP)  ; LAB_0042f758
    LEA EBX,[EBP + 0x385c]              ; 0042f719
    MOV ESI,EBP                         ; 0042f71f
    MOV EAX,dword ptr [ESI + 0x33ac]    ; 0042f721
        ;   Label: LAB_0042f721
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 0042f727
    JZ 0x0042f744                       ; 0042f72f
        ;   XREF to: 0042f744 (CONDITIONAL_JUMP)  ; LAB_0042f744
    IMUL EAX,dword ptr [ESI + 0x33b0],0x24 ; 0042f731
    ADD EAX,dword ptr [ESP]             ; 0042f738
    CMP dword ptr [EAX + 0x1de9c],-0x1  ; 0042f73b
    JNZ 0x0042f760                      ; 0042f742
        ;   XREF to: 0042f760 (CONDITIONAL_JUMP)  ; LAB_0042f760
    ADD ESI,0x18                        ; 0042f744
        ;   Label: LAB_0042f744
    INC EDI                             ; 0042f747
    MOV ECX,dword ptr [EBP + 0x33a0]    ; 0042f748
    ADD EBX,0x2a4                       ; 0042f74e
    CMP EDI,ECX                         ; 0042f754
    JL 0x0042f721                       ; 0042f756
        ;   XREF to: 0042f721 (CONDITIONAL_JUMP)  ; LAB_0042f721
    ADD ESP,0x4                         ; 0042f758
        ;   Label: LAB_0042f758
    POP EBP                             ; 0042f75b
    POP EDI                             ; 0042f75c
    POP ESI                             ; 0042f75d
    POP EBX                             ; 0042f75e
    RET                                 ; 0042f75f
    PUSH EBX                            ; 0042f760
        ;   Label: LAB_0042f760
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042f761
    CALL dword ptr [EAX + 0x14]         ; 0042f767
    ADD ESP,0x4                         ; 0042f76a
    JMP 0x0042f744                      ; 0042f76d
        ;   XREF to: 0042f744 (UNCONDITIONAL_JUMP)  ; LAB_0042f744

