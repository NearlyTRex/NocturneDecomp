; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432060(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_FUN_004d3500 at 004d3513
;   core_hero.cpp_FUN_004d4840 at 004d4898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432060
        ;   Label: core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060
    MOV ECX,dword ptr [ESP + 0x8]       ; 00432061
    MOV EDX,ECX                         ; 00432065
    MOV EBX,dword ptr [ECX + 0x25b0]    ; 00432067
    XOR EAX,EAX                         ; 0043206d
    TEST EBX,EBX                        ; 0043206f
    JNZ 0x00432085                      ; 00432071
        ;   XREF to: 00432085 (CONDITIONAL_JUMP)  ; LAB_00432085
    INC EAX                             ; 00432073
        ;   Label: LAB_00432073
    ADD EDX,0x78                        ; 00432074
    CMP EAX,0x2                         ; 00432077
    JGE 0x0043208c                      ; 0043207a
        ;   XREF to: 0043208c (CONDITIONAL_JUMP)  ; LAB_0043208c
    CMP dword ptr [EDX + 0x25b0],0x0    ; 0043207c
    JZ 0x00432073                       ; 00432083
        ;   XREF to: 00432073 (CONDITIONAL_JUMP)  ; LAB_00432073
    MOV EAX,0x1                         ; 00432085
        ;   Label: LAB_00432085
    POP EBX                             ; 0043208a
    RET                                 ; 0043208b
    XOR EAX,EAX                         ; 0043208c
        ;   Label: LAB_0043208c
    POP EBX                             ; 0043208e
    RET                                 ; 0043208f

