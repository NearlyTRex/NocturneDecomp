; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00597000(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00597b80 at 00597c12
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597000
        ;   Label: engine_texture.cpp_FUN_00597000
    PUSH ESI                            ; 00597001
    PUSH EDI                            ; 00597002
    MOV EDI,dword ptr [ESP + 0x14]      ; 00597003
    MOV ESI,dword ptr [EDI + 0x4]       ; 00597007
    AND ESI,0xffff                      ; 0059700a
    LEA EBX,[ESI*0x4 + 0x0]             ; 00597010
    SUB EBX,ESI                         ; 00597017
    MOV ESI,EBX                         ; 00597019
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059701b
    SHL ESI,0x5                         ; 0059701f
    ADD EBX,0x4                         ; 00597022
    ADD EBX,ESI                         ; 00597025
    MOV EDX,dword ptr [EBX + 0x44]      ; 00597027
    TEST EDX,EDX                        ; 0059702a
    JNZ 0x0059709a                      ; 0059702c
        ;   XREF to: 0059709a (CONDITIONAL_JUMP)  ; LAB_0059709a
    MOV ESI,dword ptr [EBX + 0x48]      ; 0059702e
        ;   Label: LAB_0059702e
    TEST ESI,ESI                        ; 00597031
    JZ 0x0059703e                       ; 00597033
        ;   XREF to: 0059703e (CONDITIONAL_JUMP)  ; LAB_0059703e
    PUSH ESI                            ; 00597035
    CALL crt_unknown.c_FUN_005c09f0     ; 00597036
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0059703b
    MOV EAX,dword ptr [EBX + 0x4c]      ; 0059703e
        ;   Label: LAB_0059703e
    TEST EAX,EAX                        ; 00597041
    JZ 0x0059704e                       ; 00597043
        ;   XREF to: 0059704e (CONDITIONAL_JUMP)  ; LAB_0059704e
    PUSH EAX                            ; 00597045
    CALL crt_unknown.c_FUN_005c09f0     ; 00597046
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0059704b
    MOV ECX,dword ptr [EBX + 0x50]      ; 0059704e
        ;   Label: LAB_0059704e
    TEST ECX,ECX                        ; 00597051
    JNZ 0x005970a5                      ; 00597053
        ;   XREF to: 005970a5 (CONDITIONAL_JUMP)  ; LAB_005970a5
    PUSH 0x60                           ; 00597055
        ;   Label: LAB_00597055
    PUSH 0x0                            ; 00597057
    PUSH EBX                            ; 00597059
    LEA ESI,[EDI + 0x8]                 ; 0059705a
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059705d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00597062
    LEA EDI,[EBX + 0x4]                 ; 00597065
    PUSH EDI                            ; 00597068
    MOV AL,byte ptr [ESI]               ; 00597069
        ;   Label: LAB_00597069
    MOV byte ptr [EDI],AL               ; 0059706b
    CMP AL,0x0                          ; 0059706d
    JZ 0x00597081                       ; 0059706f
        ;   XREF to: 00597081 (CONDITIONAL_JUMP)  ; LAB_00597081
    MOV AL,byte ptr [ESI + 0x1]         ; 00597071
    ADD ESI,0x2                         ; 00597074
    MOV byte ptr [EDI + 0x1],AL         ; 00597077
    ADD EDI,0x2                         ; 0059707a
    CMP AL,0x0                          ; 0059707d
    JNZ 0x00597069                      ; 0059707f
        ;   XREF to: 00597069 (CONDITIONAL_JUMP)  ; LAB_00597069
    POP EDI                             ; 00597081
        ;   Label: LAB_00597081
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00597082
    MOV dword ptr [EBX + 0x58],0x1      ; 00597086
    MOV dword ptr [EBX + 0x50],ESI      ; 0059708d
    MOV ESI,dword ptr [ESP + 0x18]      ; 00597090
    MOV dword ptr [EBX],ESI             ; 00597094
    POP EDI                             ; 00597096
    POP ESI                             ; 00597097
    POP EBX                             ; 00597098
    RET                                 ; 00597099
    PUSH EDX                            ; 0059709a
        ;   Label: LAB_0059709a
    CALL crt_unknown.c_FUN_005c09f0     ; 0059709b
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005970a0
    JMP 0x0059702e                      ; 005970a3
        ;   XREF to: 0059702e (UNCONDITIONAL_JUMP)  ; LAB_0059702e
    PUSH ECX                            ; 005970a5
        ;   Label: LAB_005970a5
    CALL crt_unknown.c_FUN_005c09f0     ; 005970a6
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005970ab
    JMP 0x00597055                      ; 005970ae
        ;   XREF to: 00597055 (UNCONDITIONAL_JUMP)  ; LAB_00597055

