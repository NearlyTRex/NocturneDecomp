; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8a10(int *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x220]:1  local_220
; undefined1       Stack[-0x21f]:1  local_21f
; undefined        Stack[-0x120]:1  local_120
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   engine_dosio.cpp_findFileNormally_FUN_00456800
;   engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0
;   FUN_005459f0
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f8a10
        ;   Label: FUN_004f8a10
    PUSH EDI                            ; 004f8a11
    PUSH EBP                            ; 004f8a12
    SUB ESP,0x214                       ; 004f8a13
    MOV EBP,dword ptr [ESP + 0x224]     ; 004f8a19
    MOV ESI,dword ptr [ESP + 0x228]     ; 004f8a20
    MOV EDI,ESP                         ; 004f8a27
    PUSH EDI                            ; 004f8a29
    MOV AL,byte ptr [ESI]               ; 004f8a2a
        ;   Label: LAB_004f8a2a
    MOV byte ptr [EDI],AL               ; 004f8a2c
    CMP AL,0x0                          ; 004f8a2e
    JZ 0x004f8a42                       ; 004f8a30
        ;   XREF to: 004f8a42 (CONDITIONAL_JUMP)  ; LAB_004f8a42
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8a32
    ADD ESI,0x2                         ; 004f8a35
    MOV byte ptr [EDI + 0x1],AL         ; 004f8a38
    ADD EDI,0x2                         ; 004f8a3b
    CMP AL,0x0                          ; 004f8a3e
    JNZ 0x004f8a2a                      ; 004f8a40
        ;   XREF to: 004f8a2a (CONDITIONAL_JUMP)  ; LAB_004f8a2a
    POP EDI                             ; 004f8a42
        ;   Label: LAB_004f8a42
    MOV EAX,ESP                         ; 004f8a43
    PUSH EAX                            ; 004f8a45
    CALL engine_dosio.cpp_findFileNormally_FUN_00456800 ; 004f8a46
        ;   XREF to: 00456800 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFileNormally_FUN_00456800()
    ADD ESP,0x4                         ; 004f8a4b
    TEST EAX,EAX                        ; 004f8a4e
    JZ 0x004f8ad4                       ; 004f8a50
        ;   XREF to: 004f8ad4 (CONDITIONAL_JUMP)  ; LAB_004f8ad4
    PUSH EBX                            ; 004f8a56
    MOV EDX,dword ptr [EBP]             ; 004f8a57
    XOR EBX,EBX                         ; 004f8a5a
    TEST EDX,EDX                        ; 004f8a5c
    JLE 0x004f8ace                      ; 004f8a5e
        ;   XREF to: 004f8ace (CONDITIONAL_JUMP)  ; LAB_004f8ace
    MOV ESI,EBP                         ; 004f8a64
    LEA EAX,[ESP + 0x104]               ; 004f8a66
        ;   Label: LAB_004f8a66
    PUSH EAX                            ; 004f8a6d
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f8a6e
    ADD EAX,0x4                         ; 004f8a71
    PUSH EAX                            ; 004f8a74
    CALL crt_string.c__stricmp_FUN_00564520 ; 004f8a75
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004f8a7a
    TEST EAX,EAX                        ; 004f8a7d
    JNZ 0x004f8ade                      ; 004f8a7f
        ;   XREF to: 004f8ade (CONDITIONAL_JUMP)  ; LAB_004f8ade
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f8a81
    TEST EAX,EAX                        ; 004f8a84
    JNZ 0x004f8aa6                      ; 004f8a86
        ;   XREF to: 004f8aa6 (CONDITIONAL_JUMP)  ; LAB_004f8aa6
    MOV EDX,EBX                         ; 004f8a88
        ;   Label: LAB_004f8a88
    LEA EAX,[EBX*0x4 + 0x0]             ; 004f8a8a
    ADD EAX,EBP                         ; 004f8a91
    MOV ECX,dword ptr [EBP]             ; 004f8a93
        ;   Label: LAB_004f8a93
    DEC ECX                             ; 004f8a96
    CMP EDX,ECX                         ; 004f8a97
    JGE 0x004f8abc                      ; 004f8a99
        ;   XREF to: 004f8abc (CONDITIONAL_JUMP)  ; LAB_004f8abc
    ADD EAX,0x4                         ; 004f8a9b
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f8a9e
    INC EDX                             ; 004f8aa1
    MOV dword ptr [EAX],ECX             ; 004f8aa2
    JMP 0x004f8a93                      ; 004f8aa4
        ;   XREF to: 004f8a93 (UNCONDITIONAL_JUMP)  ; LAB_004f8a93
    PUSH 0x0                            ; 004f8aa6
        ;   Label: LAB_004f8aa6
    PUSH EAX                            ; 004f8aa8
    CALL engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0 ; 004f8aa9
        ;   XREF to: 004f7ac0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0()
    ADD ESP,0x8                         ; 004f8aae
    PUSH EAX                            ; 004f8ab1
    CALL FUN_00564494                   ; 004f8ab2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004f8ab7
    JMP 0x004f8a88                      ; 004f8aba
        ;   XREF to: 004f8a88 (UNCONDITIONAL_JUMP)  ; LAB_004f8a88
    MOV EAX,ECX                         ; 004f8abc
        ;   Label: LAB_004f8abc
    MOV dword ptr [EBP],ECX             ; 004f8abe
    MOV dword ptr [EBP + EAX*0x4 + 0x4],0x0 ; 004f8ac1
    CMP EBX,dword ptr [EBP]             ; 004f8ac9
        ;   Label: LAB_004f8ac9
    JL 0x004f8a66                       ; 004f8acc
        ;   XREF to: 004f8a66 (CONDITIONAL_JUMP)  ; LAB_004f8a66
    CALL FUN_005459f0                   ; 004f8ace
        ;   XREF to: 005459f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005459f0()
        ;   Label: LAB_004f8ace
    POP EBX                             ; 004f8ad3
    ADD ESP,0x214                       ; 004f8ad4
        ;   Label: LAB_004f8ad4
    POP EBP                             ; 004f8ada
    POP EDI                             ; 004f8adb
    POP ESI                             ; 004f8adc
    RET                                 ; 004f8add
    INC EBX                             ; 004f8ade
        ;   Label: LAB_004f8ade
    ADD ESI,0x4                         ; 004f8adf
    JMP 0x004f8ac9                      ; 004f8ae2
        ;   XREF to: 004f8ac9 (UNCONDITIONAL_JUMP)  ; LAB_004f8ac9

