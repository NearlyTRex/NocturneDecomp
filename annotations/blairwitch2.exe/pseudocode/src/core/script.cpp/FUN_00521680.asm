; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_FUN_00521680(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_script.cpp_FUN_00521630 at 00521642
;   core_script.cpp_FUN_00521ec0 at 00521ecc
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00521680
        ;   Label: core_script.cpp_FUN_00521680
    PUSH EBP                            ; 00521681
    MOV EDI,dword ptr [ESP + 0xc]       ; 00521682
    CMP dword ptr [EDI + 0x30],0x0      ; 00521686
    JZ 0x005216ce                       ; 0052168a
        ;   XREF to: 005216ce (CONDITIONAL_JUMP)  ; LAB_005216ce
    PUSH ESI                            ; 0052168c
    PUSH EBX                            ; 0052168d
    MOV ECX,dword ptr [EDI + 0x2c]      ; 0052168e
    XOR EBX,EBX                         ; 00521691
    TEST ECX,ECX                        ; 00521693
    JLE 0x005216b9                      ; 00521695
        ;   XREF to: 005216b9 (CONDITIONAL_JUMP)  ; LAB_005216b9
    XOR ESI,ESI                         ; 00521697
    MOV EAX,dword ptr [EDI + 0x30]      ; 00521699
        ;   Label: LAB_00521699
    ADD EAX,ESI                         ; 0052169c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052169e
    TEST EDX,EDX                        ; 005216a1
    JZ 0x005216ae                       ; 005216a3
        ;   XREF to: 005216ae (CONDITIONAL_JUMP)  ; LAB_005216ae
    PUSH EDX                            ; 005216a5
    CALL crt_unknown.c_FUN_005b86a0     ; 005216a6
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005216ab
    INC EBX                             ; 005216ae
        ;   Label: LAB_005216ae
    MOV EBP,dword ptr [EDI + 0x2c]      ; 005216af
    ADD ESI,0x8                         ; 005216b2
    CMP EBX,EBP                         ; 005216b5
    JL 0x00521699                       ; 005216b7
        ;   XREF to: 00521699 (CONDITIONAL_JUMP)  ; LAB_00521699
    MOV EAX,dword ptr [EDI + 0x30]      ; 005216b9
        ;   Label: LAB_005216b9
    PUSH EAX                            ; 005216bc
    CALL crt_unknown.c_FUN_005b86a0     ; 005216bd
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005216c2
    MOV dword ptr [EDI + 0x30],0x0      ; 005216c5
    POP EBX                             ; 005216cc
    POP ESI                             ; 005216cd
    MOV dword ptr [EDI + 0x2c],0x0      ; 005216ce
        ;   Label: LAB_005216ce
    POP EBP                             ; 005216d5
    POP EDI                             ; 005216d6
    RET                                 ; 005216d7

