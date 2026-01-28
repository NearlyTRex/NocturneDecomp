; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_gabriela_cpp_FUN_004d75e0(void)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042f8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d75e0
        ;   Label: core_gabriela.cpp_FUN_004d75e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d75e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d75e5
    PUSH EDX                            ; 004d75e9
    PUSH EBX                            ; 004d75ea
    CALL core_charactr.cpp_CCharacter_FUN_0042f8a0 ; 004d75eb
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004d75f0
    MOV ECX,dword ptr [EBX + 0x1fbf8]   ; 004d75f3
    CMP ECX,dword ptr [ESP + 0xc]       ; 004d75f9
    JZ 0x004d7601                       ; 004d75fd
        ;   XREF to: 004d7601 (CONDITIONAL_JUMP)  ; LAB_004d7601
    POP EBX                             ; 004d75ff
    RET                                 ; 004d7600
    MOV dword ptr [EBX + 0x1fbf8],0x0   ; 004d7601
        ;   Label: LAB_004d7601
    POP EBX                             ; 004d760b
    RET                                 ; 004d760c

