; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_scat_cpp_FUN_0051fcb0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_scat.cpp_FUN_0051ecc0 at 0051f0b5
;   core_scat.cpp_FUN_0051fb40 at 0051fc50
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 0051e914
        ;   Label: LAB_0051e914
    RET                                 ; 0051e919
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051fcb0
        ;   Label: core_scat.cpp_FUN_0051fcb0
    CMP dword ptr [EAX + 0x25640],0x0   ; 0051fcb4
    JZ 0x0051fcd4                       ; 0051fcbb
        ;   XREF to: 0051fcd4 (CONDITIONAL_JUMP)  ; LAB_0051fcd4
    MOV ECX,dword ptr [EAX + 0x25654]   ; 0051fcbd
    TEST ECX,ECX                        ; 0051fcc3
    JZ 0x0051fcd4                       ; 0051fcc5
        ;   XREF to: 0051fcd4 (CONDITIONAL_JUMP)  ; LAB_0051fcd4
    CMP dword ptr [ECX + 0x43c],0x9     ; 0051fcc7
    JZ 0x0051e914                       ; 0051fcce
        ;   XREF to: 0051e914 (CONDITIONAL_JUMP)  ; LAB_0051e914
    XOR EAX,EAX                         ; 0051fcd4
        ;   Label: LAB_0051fcd4
    RET                                 ; 0051fcd6

