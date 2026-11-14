; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004307c0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004d2c20 at 004d2c9e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004307c0
        ;   Label: core_charactr.cpp_CCharacter_releaseFromGrab_FUN_004307c0
    MOV ECX,dword ptr [EDX + 0x26fc]    ; 004307c4
    TEST ECX,ECX                        ; 004307ca
    JNZ 0x004307cf                      ; 004307cc
        ;   XREF to: 004307cf (CONDITIONAL_JUMP)  ; LAB_004307cf
    RET                                 ; 004307ce
    PUSH EDX                            ; 004307cf
        ;   Label: LAB_004307cf
    MOV EAX,ECX                         ; 004307d0
    MOV dword ptr [EDX + 0x26fc],0x0    ; 004307d2
    PUSH EAX                            ; 004307dc
    MOV ECX,dword ptr [ECX + 0x154]     ; 004307dd
    CALL dword ptr [ECX + 0xfc]         ; 004307e3
    ADD ESP,0x8                         ; 004307e9
    LEA EAX,[EAX]                       ; 004307ec

