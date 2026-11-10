; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_00431440(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004eaf20 at 004eaf9e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00431440
        ;   Label: core_charactr.cpp_CCharacter_releaseFromGrab_FUN_00431440
    MOV ECX,dword ptr [EDX + 0x26fc]    ; 00431444
    TEST ECX,ECX                        ; 0043144a
    JNZ 0x0043144f                      ; 0043144c
        ;   XREF to: 0043144f (CONDITIONAL_JUMP)  ; LAB_0043144f
    RET                                 ; 0043144e
    PUSH EDX                            ; 0043144f
        ;   Label: LAB_0043144f
    MOV EAX,ECX                         ; 00431450
    MOV dword ptr [EDX + 0x26fc],0x0    ; 00431452
    PUSH EAX                            ; 0043145c
    MOV ECX,dword ptr [ECX + 0x154]     ; 0043145d
    CALL dword ptr [ECX + 0xfc]         ; 00431463
    ADD ESP,0x8                         ; 00431469
    LEA EAX,[EAX]                       ; 0043146c

