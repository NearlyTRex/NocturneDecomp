; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_FUN_0058e600(void)
;
;
; XREF[2]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597c17
;   core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0 at 0058e5bc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x18                           ; 0058e600
        ;   Label: core_skeledit.cpp_FUN_0058e600
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058e605
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058e60a
    PUSH ESI                            ; 0058e60b
    PUSH EDI                            ; 0058e60c
    PUSH EBP                            ; 0058e60d
    MOV EDI,dword ptr [ESP + 0x14]      ; 0058e60e
    MOV EBX,dword ptr [ESP + 0x18]      ; 0058e612
    PUSH EDI                            ; 0058e616
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0058e617
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0058e61c
    MOV ESI,EAX                         ; 0058e61f
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0058e621
    XOR ECX,ECX                         ; 0058e627
    TEST EDX,EDX                        ; 0058e629
    JLE 0x0058e651                      ; 0058e62b
        ;   XREF to: 0058e651 (CONDITIONAL_JUMP)  ; LAB_0058e651
    LEA EBP,[EDI + 0x7c90]              ; 0058e62d
    MOV EDX,EAX                         ; 0058e633
    MOV EAX,EBP                         ; 0058e635
    CMP dword ptr [EDX + 0x2857c],0x0   ; 0058e637
        ;   Label: LAB_0058e637
    JL 0x0058e674                       ; 0058e63e
        ;   XREF to: 0058e674 (CONDITIONAL_JUMP)  ; LAB_0058e674
    ADD EDX,0x24                        ; 0058e640
        ;   Label: LAB_0058e640
    INC ECX                             ; 0058e643
    MOV EBP,dword ptr [ESI + 0x28558]   ; 0058e644
    ADD EAX,0xc                         ; 0058e64a
    CMP ECX,EBP                         ; 0058e64d
    JL 0x0058e637                       ; 0058e64f
        ;   XREF to: 0058e637 (CONDITIONAL_JUMP)  ; LAB_0058e637
    LEA EAX,[EDI + 0x8140]              ; 0058e651
        ;   Label: LAB_0058e651
    FLD float ptr [EBX]                 ; 0058e657
    FADD float ptr [EAX]                ; 0058e659
    FSTP float ptr [EAX]                ; 0058e65b
    FLD float ptr [EBX + 0x4]           ; 0058e65d
    FADD float ptr [EAX + 0x4]          ; 0058e660
    FSTP float ptr [EAX + 0x4]          ; 0058e663
    FLD float ptr [EBX + 0x8]           ; 0058e666
    FADD float ptr [EAX + 0x8]          ; 0058e669
    FSTP float ptr [EAX + 0x8]          ; 0058e66c
    POP EBP                             ; 0058e66f
    POP EDI                             ; 0058e670
    POP ESI                             ; 0058e671
    POP EBX                             ; 0058e672
    RET                                 ; 0058e673
    FLD float ptr [EBX]                 ; 0058e674
        ;   Label: LAB_0058e674
    FADD float ptr [EAX]                ; 0058e676
    FSTP float ptr [EAX]                ; 0058e678
    FLD float ptr [EBX + 0x4]           ; 0058e67a
    FADD float ptr [EAX + 0x4]          ; 0058e67d
    FSTP float ptr [EAX + 0x4]          ; 0058e680
    FLD float ptr [EBX + 0x8]           ; 0058e683
    FADD float ptr [EAX + 0x8]          ; 0058e686
    FSTP float ptr [EAX + 0x8]          ; 0058e689
    JMP 0x0058e640                      ; 0058e68c
        ;   XREF to: 0058e640 (UNCONDITIONAL_JUMP)  ; LAB_0058e640

