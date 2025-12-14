; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_batman.cpp_CBatman_FUN_00417cb0(CBatman * this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417cb0
        ;   Label: core_batman.cpp_CBatman_FUN_00417cb0
    CMP dword ptr [EAX + 0xbf58],0x0    ; 00417cb4
    JZ 0x00417cc0                       ; 00417cbb
        ;   XREF to: 00417cc0 (CONDITIONAL_JUMP)  ; LAB_00417cc0
    XOR EAX,EAX                         ; 00417cbd
    RET                                 ; 00417cbf
    MOV ECX,dword ptr [ESP + 0x8]       ; 00417cc0
        ;   Label: LAB_00417cc0
    PUSH ECX                            ; 00417cc4
    PUSH EAX                            ; 00417cc5
    CALL core_charactr.cpp_CCharacter_FUN_0042bc20 ; 00417cc6
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042bc20(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00417ccb
    RET                                 ; 00417cce

