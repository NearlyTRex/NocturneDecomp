; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_wddvmem_cpp_findMostSignificantBit_FUN_00553600(uint value)
;
; Parameters:
; uint             Stack[0x4]:4   value
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00553600
        ;   Label: wincore_wddvmem.cpp_findMostSignificantBit_FUN_00553600
    XOR EDX,EDX                         ; 00553604
    TEST EAX,EAX                        ; 00553606
    JZ 0x00553614                       ; 00553608
        ;   XREF to: 00553614 (CONDITIONAL_JUMP)  ; LAB_00553614
    CMP EAX,0x1                         ; 0055360a
        ;   Label: LAB_0055360a
    JBE 0x0055361a                      ; 0055360d
        ;   XREF to: 0055361a (CONDITIONAL_JUMP)  ; LAB_0055361a
    INC EDX                             ; 0055360f
    SHR EAX,0x1                         ; 00553610
    JMP 0x0055360a                      ; 00553612
        ;   XREF to: 0055360a (UNCONDITIONAL_JUMP)  ; LAB_0055360a
    MOV EAX,0x20                        ; 00553614
        ;   Label: LAB_00553614
    RET                                 ; 00553619
    MOV EAX,EDX                         ; 0055361a
        ;   Label: LAB_0055361a
    RET                                 ; 0055361c

