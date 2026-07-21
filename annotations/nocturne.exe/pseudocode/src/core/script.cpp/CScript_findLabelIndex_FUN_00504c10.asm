; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_00504c10(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_script.cpp_CScript_executeInitSection_FUN_004ff170 at 004ff19d
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 004ff465
;
; Called Functions:
;   core_script.cpp_skipWhitespace_FUN_004fe070
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504c10
        ;   Label: core_script.cpp_CScript_findLabelIndex_FUN_00504c10
    PUSH ESI                            ; 00504c11
    PUSH EDI                            ; 00504c12
    PUSH EBP                            ; 00504c13
    MOV EDI,dword ptr [ESP + 0x14]      ; 00504c14
    MOV EBP,dword ptr [ESP + 0x18]      ; 00504c18
    MOV EDX,dword ptr [EDI + 0x28]      ; 00504c1c
    XOR EBX,EBX                         ; 00504c1f
    TEST EDX,EDX                        ; 00504c21
    JLE 0x00504c3e                      ; 00504c23
        ;   XREF to: 00504c3e (CONDITIONAL_JUMP)  ; LAB_00504c3e
    XOR ESI,ESI                         ; 00504c25
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00504c27
        ;   Label: LAB_00504c27
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00504c2a
    CMP byte ptr [EAX],0x3a             ; 00504c2e
    JZ 0x00504c48                       ; 00504c31
        ;   XREF to: 00504c48 (CONDITIONAL_JUMP)  ; LAB_00504c48
    INC EBX                             ; 00504c33
        ;   Label: LAB_00504c33
    MOV ECX,dword ptr [EDI + 0x28]      ; 00504c34
    ADD ESI,0x8                         ; 00504c37
    CMP EBX,ECX                         ; 00504c3a
    JL 0x00504c27                       ; 00504c3c
        ;   XREF to: 00504c27 (CONDITIONAL_JUMP)  ; LAB_00504c27
    MOV EAX,0xffffffff                  ; 00504c3e
        ;   Label: LAB_00504c3e
    POP EBP                             ; 00504c43
    POP EDI                             ; 00504c44
    POP ESI                             ; 00504c45
    POP EBX                             ; 00504c46
    RET                                 ; 00504c47
    PUSH EBP                            ; 00504c48
        ;   Label: LAB_00504c48
    INC EAX                             ; 00504c49
    PUSH EAX                            ; 00504c4a
    CALL core_script.cpp_skipWhitespace_FUN_004fe070 ; 00504c4b
        ;   XREF to: 004fe070 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_skipWhitespace_FUN_004fe070()
    ADD ESP,0x4                         ; 00504c50
    PUSH EAX                            ; 00504c53
    CALL crt_string.c__stricmp_FUN_00564520 ; 00504c54
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00504c59
    TEST EAX,EAX                        ; 00504c5c
    JNZ 0x00504c33                      ; 00504c5e
        ;   XREF to: 00504c33 (CONDITIONAL_JUMP)  ; LAB_00504c33
    MOV EAX,EBX                         ; 00504c60
    POP EBP                             ; 00504c62
    POP EDI                             ; 00504c63
    POP ESI                             ; 00504c64
    POP EBX                             ; 00504c65
    RET                                 ; 00504c66

