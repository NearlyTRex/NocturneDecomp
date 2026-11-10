; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_005303b0(CScript *this_ptr,char *label_name)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   label_name
;
; XREF[2]:
;   core_script.cpp_CScript_executeInitSection_FUN_00529920 at 0052994d
;   core_script.cpp_CScript_step_FUN_00529a70 at 00529c15
;
; Called Functions:
;   core_script.cpp_skipWhitespace_FUN_005288a0
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005303b0
        ;   Label: core_script.cpp_CScript_findLabelIndex_FUN_005303b0
    PUSH ESI                            ; 005303b1
    PUSH EDI                            ; 005303b2
    PUSH EBP                            ; 005303b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005303b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005303b8
    MOV EDX,dword ptr [EDI + 0x2c]      ; 005303bc
    XOR EBX,EBX                         ; 005303bf
    TEST EDX,EDX                        ; 005303c1
    JLE 0x005303de                      ; 005303c3
        ;   XREF to: 005303de (CONDITIONAL_JUMP)  ; LAB_005303de
    XOR ESI,ESI                         ; 005303c5
    MOV EAX,dword ptr [EDI + 0x30]      ; 005303c7
        ;   Label: LAB_005303c7
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 005303ca
    CMP byte ptr [EAX],0x3a             ; 005303ce
    JZ 0x005303e8                       ; 005303d1
        ;   XREF to: 005303e8 (CONDITIONAL_JUMP)  ; LAB_005303e8
    INC EBX                             ; 005303d3
        ;   Label: LAB_005303d3
    MOV ECX,dword ptr [EDI + 0x2c]      ; 005303d4
    ADD ESI,0x8                         ; 005303d7
    CMP EBX,ECX                         ; 005303da
    JL 0x005303c7                       ; 005303dc
        ;   XREF to: 005303c7 (CONDITIONAL_JUMP)  ; LAB_005303c7
    MOV EAX,0xffffffff                  ; 005303de
        ;   Label: LAB_005303de
    POP EBP                             ; 005303e3
    POP EDI                             ; 005303e4
    POP ESI                             ; 005303e5
    POP EBX                             ; 005303e6
    RET                                 ; 005303e7
    PUSH EBP                            ; 005303e8
        ;   Label: LAB_005303e8
    INC EAX                             ; 005303e9
    PUSH EAX                            ; 005303ea
    CALL core_script.cpp_skipWhitespace_FUN_005288a0 ; 005303eb
        ;   XREF to: 005288a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005288a0(char * str)
    ADD ESP,0x4                         ; 005303f0
    PUSH EAX                            ; 005303f3
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005303f4
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005303f9
    TEST EAX,EAX                        ; 005303fc
    JNZ 0x005303d3                      ; 005303fe
        ;   XREF to: 005303d3 (CONDITIONAL_JUMP)  ; LAB_005303d3
    MOV EAX,EBX                         ; 00530400
    POP EBP                             ; 00530402
    POP EDI                             ; 00530403
    POP ESI                             ; 00530404
    POP EBX                             ; 00530405
    RET                                 ; 00530406

