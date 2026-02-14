; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CObj_setStateFlagToAttrib_FUN_005d3650(CObj *this_ptr,uint set_mask,uint attrib_test)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   set_mask
; uint             Stack[0xc]:4   attrib_test
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3650
        ;   Label: shape_superopt.cpp_CObj_setStateFlagToAttrib_FUN_005d3650
    PUSH ESI                            ; 005d3651
    PUSH EDI                            ; 005d3652
    PUSH EBP                            ; 005d3653
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d3654
    MOV EBX,dword ptr [ESP + 0x18]      ; 005d3658
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005d365c
    MOV ECX,dword ptr [EDI]             ; 005d3660
    MOV EAX,dword ptr [EDI + 0x4]       ; 005d3662
    XOR EDX,EDX                         ; 005d3665
    TEST ECX,ECX                        ; 005d3667
    JBE 0x005d3681                      ; 005d3669
        ;   XREF to: 005d3681 (CONDITIONAL_JUMP)  ; LAB_005d3681
    MOV ECX,dword ptr [EAX + 0x30]      ; 005d366b
        ;   Label: LAB_005d366b
    AND ECX,ESI                         ; 005d366e
    CMP ECX,ESI                         ; 005d3670
    JNZ 0x005d3694                      ; 005d3672
        ;   XREF to: 005d3694 (CONDITIONAL_JUMP)  ; LAB_005d3694
    OR dword ptr [EAX + 0x34],EBX       ; 005d3674
    INC EDX                             ; 005d3677
        ;   Label: LAB_005d3677
    MOV EBP,dword ptr [EDI]             ; 005d3678
    ADD EAX,0x38                        ; 005d367a
    CMP EDX,EBP                         ; 005d367d
    JC 0x005d366b                       ; 005d367f
        ;   XREF to: 005d366b (CONDITIONAL_JUMP)  ; LAB_005d366b
    PUSH EBX                            ; 005d3681
        ;   Label: LAB_005d3681
    MOV EAX,dword ptr [EDI + 0x18]      ; 005d3682
    PUSH EDI                            ; 005d3685
    CALL dword ptr [EAX + 0x8c]         ; 005d3686
    ADD ESP,0x8                         ; 005d368c
    POP EBP                             ; 005d368f
    POP EDI                             ; 005d3690
    POP ESI                             ; 005d3691
    POP EBX                             ; 005d3692
    RET                                 ; 005d3693
    MOV ECX,EBX                         ; 005d3694
        ;   Label: LAB_005d3694
    MOV EBP,dword ptr [EAX + 0x34]      ; 005d3696
    NOT ECX                             ; 005d3699
    AND EBP,ECX                         ; 005d369b
    MOV dword ptr [EAX + 0x34],EBP      ; 005d369d
    JMP 0x005d3677                      ; 005d36a0
        ;   XREF to: 005d3677 (UNCONDITIONAL_JUMP)  ; LAB_005d3677

