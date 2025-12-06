; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_wddvmem.cpp_findMostSignificantBit_FUN_005ed710(uint value)
;
; Parameters:
; uint             Stack[0x4]:4   value
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ed710
        ;   Label: wincore_wddvmem.cpp_findMostSignificantBit_FUN_005ed710
    XOR EDX,EDX                         ; 005ed714
    TEST EAX,EAX                        ; 005ed716
    JZ 0x005ed724                       ; 005ed718 | LAB_005ed724
        ;   XREF to: 005ed724 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 005ed71a
        ;   Label: LAB_005ed71a
    JBE 0x005ed72a                      ; 005ed71d | LAB_005ed72a
        ;   XREF to: 005ed72a (CONDITIONAL_JUMP)
    INC EDX                             ; 005ed71f
    SHR EAX,0x1                         ; 005ed720
    JMP 0x005ed71a                      ; 005ed722 | LAB_005ed71a
        ;   XREF to: 005ed71a (UNCONDITIONAL_JUMP)
    MOV EAX,0x20                        ; 005ed724
        ;   Label: LAB_005ed724
    RET                                 ; 005ed729
    MOV EAX,EDX                         ; 005ed72a
        ;   Label: LAB_005ed72a
    RET                                 ; 005ed72c

