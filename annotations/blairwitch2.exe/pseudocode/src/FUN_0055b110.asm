; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055b110(undefined4 param_1,undefined4 param_2,int *param_3)
;
;
; Called Functions:
;   FUN_00480e70
;   FUN_00481fc0
;   FUN_004820b0
;   FUN_00482250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b110
        ;   Label: FUN_0055b110
    SUB ESP,0x3c0                       ; 0055b111
    MOV EAX,ESP                         ; 0055b117
    PUSH EAX                            ; 0055b119
    XOR EBX,EBX                         ; 0055b11a
    CALL FUN_00481fc0                   ; 0055b11c
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481fc0()
    ADD ESP,0x4                         ; 0055b121
    MOV EDX,dword ptr [EBX + 0x61c06c]  ; 0055b124
        ;   Label: LAB_0055b124
    PUSH EDX                            ; 0055b12a
    LEA EAX,[ESP + 0x4]                 ; 0055b12b
    PUSH EAX                            ; 0055b12f
    ADD EBX,0x10                        ; 0055b130
    CALL FUN_00480e70                   ; 0055b133
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 0055b138
    CMP EBX,0x1b0                       ; 0055b13b
    JNZ 0x0055b124                      ; 0055b141
        ;   XREF to: 0055b124 (CONDITIONAL_JUMP)  ; LAB_0055b124
    MOV EAX,dword ptr [ESP + 0x3d0]     ; 0055b143
    PUSH 0x0                            ; 0055b14a
    MOV ECX,dword ptr [EAX]             ; 0055b14c
    PUSH ECX                            ; 0055b14e
    MOV EBX,dword ptr [ESP + 0x3d4]     ; 0055b14f
    PUSH EBX                            ; 0055b156
    LEA EAX,[ESP + 0xc]                 ; 0055b157
    PUSH EAX                            ; 0055b15b
    CALL FUN_00482250                   ; 0055b15c
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; undefined FUN_00482250()
    ADD ESP,0x10                        ; 0055b161
    TEST EAX,EAX                        ; 0055b164
    JL 0x0055b18f                       ; 0055b166
        ;   XREF to: 0055b18f (CONDITIONAL_JUMP)  ; LAB_0055b18f
    MOV EBX,dword ptr [ESP + 0x3d0]     ; 0055b168
    PUSH 0x0                            ; 0055b16f
    MOV dword ptr [EBX],EAX             ; 0055b171
    LEA EAX,[ESP + 0x4]                 ; 0055b173
    PUSH EAX                            ; 0055b177
    MOV EBX,0x1                         ; 0055b178
    CALL FUN_004820b0                   ; 0055b17d
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
    ADD ESP,0x8                         ; 0055b182
    MOV EAX,EBX                         ; 0055b185
    ADD ESP,0x3c0                       ; 0055b187
    POP EBX                             ; 0055b18d
    RET                                 ; 0055b18e
    XOR EBX,EBX                         ; 0055b18f
        ;   Label: LAB_0055b18f
    PUSH EBX                            ; 0055b191
    LEA EAX,[ESP + 0x4]                 ; 0055b192
    PUSH EAX                            ; 0055b196
    CALL FUN_004820b0                   ; 0055b197
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
    ADD ESP,0x8                         ; 0055b19c
    MOV EAX,EBX                         ; 0055b19f
    ADD ESP,0x3c0                       ; 0055b1a1
    POP EBX                             ; 0055b1a7
    RET                                 ; 0055b1a8

