; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_charactr.cpp_CCharacter_FUN_0042d360(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_FUN_004f3120 at 004f3130
;   core_hero.cpp_FUN_004f33b0 at 004f33c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d360
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042d360
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042d361
    MOV EDX,ECX                         ; 0042d365
    MOV EBX,dword ptr [ECX + 0x24b4]    ; 0042d367
    XOR EAX,EAX                         ; 0042d36d
    TEST EBX,EBX                        ; 0042d36f
    JNZ 0x0042d385                      ; 0042d371 | LAB_0042d385
        ;   XREF to: 0042d385 (CONDITIONAL_JUMP)
    INC EAX                             ; 0042d373
        ;   Label: LAB_0042d373
    ADD EDX,0x44                        ; 0042d374
    CMP EAX,0x2                         ; 0042d377
    JGE 0x0042d38c                      ; 0042d37a | LAB_0042d38c
        ;   XREF to: 0042d38c (CONDITIONAL_JUMP)
    CMP dword ptr [EDX + 0x24b4],0x0    ; 0042d37c
    JZ 0x0042d373                       ; 0042d383 | LAB_0042d373
        ;   XREF to: 0042d373 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0042d385
        ;   Label: LAB_0042d385
    POP EBX                             ; 0042d38a
    RET                                 ; 0042d38b
    XOR EAX,EAX                         ; 0042d38c
        ;   Label: LAB_0042d38c
    POP EBX                             ; 0042d38e
    RET                                 ; 0042d38f

