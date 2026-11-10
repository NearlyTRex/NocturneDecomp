; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_00528da0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_script.cpp_CScript_buildParsedLines_FUN_005295e0 at 005295ec
;   core_script.cpp_FUN_00528d50 at 00528d62
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00528da0
        ;   Label: core_script.cpp_CScript_freeParsedLines_FUN_00528da0
    PUSH EBP                            ; 00528da1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00528da2
    CMP dword ptr [EDI + 0x30],0x0      ; 00528da6
    JZ 0x00528dee                       ; 00528daa
        ;   XREF to: 00528dee (CONDITIONAL_JUMP)  ; LAB_00528dee
    PUSH ESI                            ; 00528dac
    PUSH EBX                            ; 00528dad
    MOV ECX,dword ptr [EDI + 0x2c]      ; 00528dae
    XOR EBX,EBX                         ; 00528db1
    TEST ECX,ECX                        ; 00528db3
    JLE 0x00528dd9                      ; 00528db5
        ;   XREF to: 00528dd9 (CONDITIONAL_JUMP)  ; LAB_00528dd9
    XOR ESI,ESI                         ; 00528db7
    MOV EAX,dword ptr [EDI + 0x30]      ; 00528db9
        ;   Label: LAB_00528db9
    ADD EAX,ESI                         ; 00528dbc
    MOV EDX,dword ptr [EAX + 0x4]       ; 00528dbe
    TEST EDX,EDX                        ; 00528dc1
    JZ 0x00528dce                       ; 00528dc3
        ;   XREF to: 00528dce (CONDITIONAL_JUMP)  ; LAB_00528dce
    PUSH EDX                            ; 00528dc5
    CALL crt_unknown.c_FUN_005a3770     ; 00528dc6
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00528dcb
    INC EBX                             ; 00528dce
        ;   Label: LAB_00528dce
    MOV EBP,dword ptr [EDI + 0x2c]      ; 00528dcf
    ADD ESI,0x8                         ; 00528dd2
    CMP EBX,EBP                         ; 00528dd5
    JL 0x00528db9                       ; 00528dd7
        ;   XREF to: 00528db9 (CONDITIONAL_JUMP)  ; LAB_00528db9
    MOV EAX,dword ptr [EDI + 0x30]      ; 00528dd9
        ;   Label: LAB_00528dd9
    PUSH EAX                            ; 00528ddc
    CALL crt_unknown.c_FUN_005a3770     ; 00528ddd
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00528de2
    MOV dword ptr [EDI + 0x30],0x0      ; 00528de5
    POP EBX                             ; 00528dec
    POP ESI                             ; 00528ded
    MOV dword ptr [EDI + 0x2c],0x0      ; 00528dee
        ;   Label: LAB_00528dee
    POP EBP                             ; 00528df5
    POP EDI                             ; 00528df6
    RET                                 ; 00528df7

