; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_00543790(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_script.cpp_CScript_buildParsedLines_FUN_00543fd0 at 00543fdc
;   core_script.cpp_FUN_00543740 at 00543752
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00543790
        ;   Label: core_script.cpp_CScript_freeParsedLines_FUN_00543790
    PUSH EBP                            ; 00543791
    MOV EDI,dword ptr [ESP + 0xc]       ; 00543792
    CMP dword ptr [EDI + 0x30],0x0      ; 00543796
    JZ 0x005437de                       ; 0054379a
        ;   XREF to: 005437de (CONDITIONAL_JUMP)  ; LAB_005437de
    PUSH ESI                            ; 0054379c
    PUSH EBX                            ; 0054379d
    MOV ECX,dword ptr [EDI + 0x2c]      ; 0054379e
    XOR EBX,EBX                         ; 005437a1
    TEST ECX,ECX                        ; 005437a3
    JLE 0x005437c9                      ; 005437a5
        ;   XREF to: 005437c9 (CONDITIONAL_JUMP)  ; LAB_005437c9
    XOR ESI,ESI                         ; 005437a7
    MOV EAX,dword ptr [EDI + 0x30]      ; 005437a9
        ;   Label: LAB_005437a9
    ADD EAX,ESI                         ; 005437ac
    MOV EDX,dword ptr [EAX + 0x4]       ; 005437ae
    TEST EDX,EDX                        ; 005437b1
    JZ 0x005437be                       ; 005437b3
        ;   XREF to: 005437be (CONDITIONAL_JUMP)  ; LAB_005437be
    PUSH EDX                            ; 005437b5
    CALL crt_unknown.c_FUN_005c09f0     ; 005437b6
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005437bb
    INC EBX                             ; 005437be
        ;   Label: LAB_005437be
    MOV EBP,dword ptr [EDI + 0x2c]      ; 005437bf
    ADD ESI,0x8                         ; 005437c2
    CMP EBX,EBP                         ; 005437c5
    JL 0x005437a9                       ; 005437c7
        ;   XREF to: 005437a9 (CONDITIONAL_JUMP)  ; LAB_005437a9
    MOV EAX,dword ptr [EDI + 0x30]      ; 005437c9
        ;   Label: LAB_005437c9
    PUSH EAX                            ; 005437cc
    CALL crt_unknown.c_FUN_005c09f0     ; 005437cd
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005437d2
    MOV dword ptr [EDI + 0x30],0x0      ; 005437d5
    POP EBX                             ; 005437dc
    POP ESI                             ; 005437dd
    MOV dword ptr [EDI + 0x2c],0x0      ; 005437de
        ;   Label: LAB_005437de
    POP EBP                             ; 005437e5
    POP EDI                             ; 005437e6
    RET                                 ; 005437e7

