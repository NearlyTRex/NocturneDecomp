; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_charactr.cpp_CCharacter_FUN_0042bf40(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_FUN_004f29b0 at 004f2a20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042bf40
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042bf40
    MOV ECX,dword ptr [EDX + 0x2598]    ; 0042bf44
    TEST ECX,ECX                        ; 0042bf4a
    JNZ 0x0042bf4f                      ; 0042bf4c | LAB_0042bf4f
        ;   XREF to: 0042bf4f (CONDITIONAL_JUMP)
    RET                                 ; 0042bf4e
    PUSH EDX                            ; 0042bf4f
        ;   Label: LAB_0042bf4f
    MOV EAX,ECX                         ; 0042bf50
    MOV dword ptr [EDX + 0x2598],0x0    ; 0042bf52
    PUSH EAX                            ; 0042bf5c
    MOV ECX,dword ptr [ECX + 0x154]     ; 0042bf5d
    CALL dword ptr [ECX + 0x110]        ; 0042bf63
    ADD ESP,0x8                         ; 0042bf69
    LEA EAX,[EAX]                       ; 0042bf6c

