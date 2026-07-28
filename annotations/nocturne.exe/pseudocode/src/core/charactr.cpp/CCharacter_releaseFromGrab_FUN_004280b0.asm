; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004280b0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004b4d50 at 004b4dc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004280b0
        ;   Label: core_charactr.cpp_CCharacter_releaseFromGrab_FUN_004280b0
    MOV ECX,dword ptr [EDX + 0x2590]    ; 004280b4
    TEST ECX,ECX                        ; 004280ba
    JNZ 0x004280bf                      ; 004280bc
        ;   XREF to: 004280bf (CONDITIONAL_JUMP)  ; LAB_004280bf
    RET                                 ; 004280be
    PUSH EDX                            ; 004280bf
        ;   Label: LAB_004280bf
    MOV EAX,ECX                         ; 004280c0
    MOV dword ptr [EDX + 0x2590],0x0    ; 004280c2
    PUSH EAX                            ; 004280cc
    MOV ECX,dword ptr [ECX + 0x14c]     ; 004280cd
    CALL dword ptr [ECX + 0xf4]         ; 004280d3
    ADD ESP,0x8                         ; 004280d9
    LEA EAX,[EAX]                       ; 004280dc

