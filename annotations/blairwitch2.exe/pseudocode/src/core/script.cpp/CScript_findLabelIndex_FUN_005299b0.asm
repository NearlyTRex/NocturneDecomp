; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_005299b0(CScript *this_ptr,char *label_name)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   label_name
;
; XREF[2]:
;   core_script.cpp_CScript_executeInitSection_FUN_00522200 at 0052222d
;   core_script.cpp_CScript_step_FUN_00522350 at 005224f5
;
; Called Functions:
;   core_script.cpp_skipWhitespace_FUN_00521180
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005299b0
        ;   Label: core_script.cpp_CScript_findLabelIndex_FUN_005299b0
    PUSH ESI                            ; 005299b1
    PUSH EDI                            ; 005299b2
    PUSH EBP                            ; 005299b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005299b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005299b8
    MOV EDX,dword ptr [EDI + 0x2c]      ; 005299bc
    XOR EBX,EBX                         ; 005299bf
    TEST EDX,EDX                        ; 005299c1
    JLE 0x005299de                      ; 005299c3
        ;   XREF to: 005299de (CONDITIONAL_JUMP)  ; LAB_005299de
    XOR ESI,ESI                         ; 005299c5
    MOV EAX,dword ptr [EDI + 0x30]      ; 005299c7
        ;   Label: LAB_005299c7
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 005299ca
    CMP byte ptr [EAX],0x3a             ; 005299ce
    JZ 0x005299e8                       ; 005299d1
        ;   XREF to: 005299e8 (CONDITIONAL_JUMP)  ; LAB_005299e8
    INC EBX                             ; 005299d3
        ;   Label: LAB_005299d3
    MOV ECX,dword ptr [EDI + 0x2c]      ; 005299d4
    ADD ESI,0x8                         ; 005299d7
    CMP EBX,ECX                         ; 005299da
    JL 0x005299c7                       ; 005299dc
        ;   XREF to: 005299c7 (CONDITIONAL_JUMP)  ; LAB_005299c7
    MOV EAX,0xffffffff                  ; 005299de
        ;   Label: LAB_005299de
    POP EBP                             ; 005299e3
    POP EDI                             ; 005299e4
    POP ESI                             ; 005299e5
    POP EBX                             ; 005299e6
    RET                                 ; 005299e7
    PUSH EBP                            ; 005299e8
        ;   Label: LAB_005299e8
    INC EAX                             ; 005299e9
    PUSH EAX                            ; 005299ea
    CALL core_script.cpp_skipWhitespace_FUN_00521180 ; 005299eb
        ;   XREF to: 00521180 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_00521180(char * str)
    ADD ESP,0x4                         ; 005299f0
    PUSH EAX                            ; 005299f3
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005299f4
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005299f9
    TEST EAX,EAX                        ; 005299fc
    JNZ 0x005299d3                      ; 005299fe
        ;   XREF to: 005299d3 (CONDITIONAL_JUMP)  ; LAB_005299d3
    MOV EAX,EBX                         ; 00529a00
    POP EBP                             ; 00529a02
    POP EDI                             ; 00529a03
    POP ESI                             ; 00529a04
    POP EBX                             ; 00529a05
    RET                                 ; 00529a06

