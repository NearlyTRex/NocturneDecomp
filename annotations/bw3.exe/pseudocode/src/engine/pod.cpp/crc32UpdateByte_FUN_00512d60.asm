; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_00512d60(uint current_crc,uchar data_byte)
;
; Parameters:
; uint             Stack[0x4]:4   current_crc
; uchar            Stack[0x8]:1   data_byte
;
; XREF[4]:
;   engine_pod.cpp_FUN_00512e70 at 00512ed2
;   engine_pod.cpp_FUN_00513d20 at 00513e20
;   engine_pod.cpp_FUN_00514220 at 005142e9
;   engine_pod.cpp_FUN_005149bc at 00514ad1
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00512d60
        ;   Label: engine_pod.cpp_crc32UpdateByte_FUN_00512d60
    XOR EAX,EAX                         ; 00512d64
    MOV AL,byte ptr [ESP + 0x8]         ; 00512d66
    SHL EAX,0x18                        ; 00512d6a
    XOR EDX,EAX                         ; 00512d6d
    LEA EAX,[EDX + EDX*0x1]             ; 00512d6f
    TEST EDX,0x80000000                 ; 00512d72
    JZ 0x00512d7f                       ; 00512d78
        ;   XREF to: 00512d7f (CONDITIONAL_JUMP)  ; LAB_00512d7f
    XOR EAX,0x4c11db7                   ; 00512d7a
    LEA EDX,[EAX + EAX*0x1]             ; 00512d7f
        ;   Label: LAB_00512d7f
    TEST EAX,0x80000000                 ; 00512d82
    JZ 0x00512dfb                       ; 00512d87
        ;   XREF to: 00512dfb (CONDITIONAL_JUMP)  ; LAB_00512dfb
    MOV EAX,EDX                         ; 00512d8d
    XOR EAX,0x4c11db7                   ; 00512d8f
    LEA EDX,[EAX + EAX*0x1]             ; 00512d94
        ;   Label: LAB_00512d94
    TEST EAX,0x80000000                 ; 00512d97
    JZ 0x00512dff                       ; 00512d9c
        ;   XREF to: 00512dff (CONDITIONAL_JUMP)  ; LAB_00512dff
    MOV EAX,EDX                         ; 00512d9e
    XOR EAX,0x4c11db7                   ; 00512da0
    LEA EDX,[EAX + EAX*0x1]             ; 00512da5
        ;   Label: LAB_00512da5
    TEST EAX,0x80000000                 ; 00512da8
    JZ 0x00512e03                       ; 00512dad
        ;   XREF to: 00512e03 (CONDITIONAL_JUMP)  ; LAB_00512e03
    MOV EAX,EDX                         ; 00512daf
    XOR EAX,0x4c11db7                   ; 00512db1
    LEA EDX,[EAX + EAX*0x1]             ; 00512db6
        ;   Label: LAB_00512db6
    TEST EAX,0x80000000                 ; 00512db9
    JZ 0x00512e07                       ; 00512dbe
        ;   XREF to: 00512e07 (CONDITIONAL_JUMP)  ; LAB_00512e07
    MOV EAX,EDX                         ; 00512dc0
    XOR EAX,0x4c11db7                   ; 00512dc2
    LEA EDX,[EAX + EAX*0x1]             ; 00512dc7
        ;   Label: LAB_00512dc7
    TEST EAX,0x80000000                 ; 00512dca
    JZ 0x00512e0b                       ; 00512dcf
        ;   XREF to: 00512e0b (CONDITIONAL_JUMP)  ; LAB_00512e0b
    MOV EAX,EDX                         ; 00512dd1
    XOR EAX,0x4c11db7                   ; 00512dd3
    LEA EDX,[EAX + EAX*0x1]             ; 00512dd8
        ;   Label: LAB_00512dd8
    TEST EAX,0x80000000                 ; 00512ddb
    JZ 0x00512e0f                       ; 00512de0
        ;   XREF to: 00512e0f (CONDITIONAL_JUMP)  ; LAB_00512e0f
    MOV EAX,EDX                         ; 00512de2
    XOR EAX,0x4c11db7                   ; 00512de4
    LEA EDX,[EAX + EAX*0x1]             ; 00512de9
        ;   Label: LAB_00512de9
    TEST EAX,0x80000000                 ; 00512dec
    JZ 0x00512e13                       ; 00512df1
        ;   XREF to: 00512e13 (CONDITIONAL_JUMP)  ; LAB_00512e13
    MOV EAX,EDX                         ; 00512df3
    XOR EAX,0x4c11db7                   ; 00512df5
    RET                                 ; 00512dfa
    MOV EAX,EDX                         ; 00512dfb
        ;   Label: LAB_00512dfb
    JMP 0x00512d94                      ; 00512dfd
        ;   XREF to: 00512d94 (UNCONDITIONAL_JUMP)  ; LAB_00512d94
    MOV EAX,EDX                         ; 00512dff
        ;   Label: LAB_00512dff
    JMP 0x00512da5                      ; 00512e01
        ;   XREF to: 00512da5 (UNCONDITIONAL_JUMP)  ; LAB_00512da5
    MOV EAX,EDX                         ; 00512e03
        ;   Label: LAB_00512e03
    JMP 0x00512db6                      ; 00512e05
        ;   XREF to: 00512db6 (UNCONDITIONAL_JUMP)  ; LAB_00512db6
    MOV EAX,EDX                         ; 00512e07
        ;   Label: LAB_00512e07
    JMP 0x00512dc7                      ; 00512e09
        ;   XREF to: 00512dc7 (UNCONDITIONAL_JUMP)  ; LAB_00512dc7
    MOV EAX,EDX                         ; 00512e0b
        ;   Label: LAB_00512e0b
    JMP 0x00512dd8                      ; 00512e0d
        ;   XREF to: 00512dd8 (UNCONDITIONAL_JUMP)  ; LAB_00512dd8
    MOV EAX,EDX                         ; 00512e0f
        ;   Label: LAB_00512e0f
    JMP 0x00512de9                      ; 00512e11
        ;   XREF to: 00512de9 (UNCONDITIONAL_JUMP)  ; LAB_00512de9
    MOV EAX,EDX                         ; 00512e13
        ;   Label: LAB_00512e13
    RET                                 ; 00512e15

