; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00569ff0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_0056ab6c at 0056ac02
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569ff0
        ;   Label: engine_texture.cpp_FUN_00569ff0
    PUSH ESI                            ; 00569ff1
    PUSH EDI                            ; 00569ff2
    MOV EDI,dword ptr [ESP + 0x14]      ; 00569ff3
    MOV ESI,dword ptr [EDI + 0x4]       ; 00569ff7
    AND ESI,0xffff                      ; 00569ffa
    LEA EBX,[ESI*0x4 + 0x0]             ; 0056a000
    SUB EBX,ESI                         ; 0056a007
    MOV ESI,EBX                         ; 0056a009
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056a00b
    SHL ESI,0x5                         ; 0056a00f
    ADD EBX,0x4                         ; 0056a012
    ADD EBX,ESI                         ; 0056a015
    MOV EDX,dword ptr [EBX + 0x44]      ; 0056a017
    TEST EDX,EDX                        ; 0056a01a
    JNZ 0x0056a08a                      ; 0056a01c
        ;   XREF to: 0056a08a (CONDITIONAL_JUMP)  ; LAB_0056a08a
    MOV ESI,dword ptr [EBX + 0x48]      ; 0056a01e
        ;   Label: LAB_0056a01e
    TEST ESI,ESI                        ; 0056a021
    JZ 0x0056a02e                       ; 0056a023
        ;   XREF to: 0056a02e (CONDITIONAL_JUMP)  ; LAB_0056a02e
    PUSH ESI                            ; 0056a025
    CALL crt_unknown.c_FUN_005a3770     ; 0056a026
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0056a02b
    MOV EAX,dword ptr [EBX + 0x4c]      ; 0056a02e
        ;   Label: LAB_0056a02e
    TEST EAX,EAX                        ; 0056a031
    JZ 0x0056a03e                       ; 0056a033
        ;   XREF to: 0056a03e (CONDITIONAL_JUMP)  ; LAB_0056a03e
    PUSH EAX                            ; 0056a035
    CALL crt_unknown.c_FUN_005a3770     ; 0056a036
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0056a03b
    MOV ECX,dword ptr [EBX + 0x50]      ; 0056a03e
        ;   Label: LAB_0056a03e
    TEST ECX,ECX                        ; 0056a041
    JNZ 0x0056a095                      ; 0056a043
        ;   XREF to: 0056a095 (CONDITIONAL_JUMP)  ; LAB_0056a095
    PUSH 0x60                           ; 0056a045
        ;   Label: LAB_0056a045
    PUSH 0x0                            ; 0056a047
    PUSH EBX                            ; 0056a049
    LEA ESI,[EDI + 0x8]                 ; 0056a04a
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0056a04d
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0056a052
    LEA EDI,[EBX + 0x4]                 ; 0056a055
    PUSH EDI                            ; 0056a058
    MOV AL,byte ptr [ESI]               ; 0056a059
        ;   Label: LAB_0056a059
    MOV byte ptr [EDI],AL               ; 0056a05b
    CMP AL,0x0                          ; 0056a05d
    JZ 0x0056a071                       ; 0056a05f
        ;   XREF to: 0056a071 (CONDITIONAL_JUMP)  ; LAB_0056a071
    MOV AL,byte ptr [ESI + 0x1]         ; 0056a061
    ADD ESI,0x2                         ; 0056a064
    MOV byte ptr [EDI + 0x1],AL         ; 0056a067
    ADD EDI,0x2                         ; 0056a06a
    CMP AL,0x0                          ; 0056a06d
    JNZ 0x0056a059                      ; 0056a06f
        ;   XREF to: 0056a059 (CONDITIONAL_JUMP)  ; LAB_0056a059
    POP EDI                             ; 0056a071
        ;   Label: LAB_0056a071
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056a072
    MOV dword ptr [EBX + 0x58],0x1      ; 0056a076
    MOV dword ptr [EBX + 0x50],ESI      ; 0056a07d
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056a080
    MOV dword ptr [EBX],ESI             ; 0056a084
    POP EDI                             ; 0056a086
    POP ESI                             ; 0056a087
    POP EBX                             ; 0056a088
    RET                                 ; 0056a089
    PUSH EDX                            ; 0056a08a
        ;   Label: LAB_0056a08a
    CALL crt_unknown.c_FUN_005a3770     ; 0056a08b
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0056a090
    JMP 0x0056a01e                      ; 0056a093
        ;   XREF to: 0056a01e (UNCONDITIONAL_JUMP)  ; LAB_0056a01e
    PUSH ECX                            ; 0056a095
        ;   Label: LAB_0056a095
    CALL crt_unknown.c_FUN_005a3770     ; 0056a096
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0056a09b
    JMP 0x0056a045                      ; 0056a09e
        ;   XREF to: 0056a045 (UNCONDITIONAL_JUMP)  ; LAB_0056a045

