; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_0053b000(uint current_crc,uchar data_byte)
;
; Parameters:
; uint             Stack[0x4]:4   current_crc
; uchar            Stack[0x8]:1   data_byte
;
; XREF[4]:
;   engine_pod.cpp_FUN_0053b110 at 0053b172
;   engine_pod.cpp_FUN_0053bfc0 at 0053c0c0
;   engine_pod.cpp_FUN_0053c4c0 at 0053c589
;   engine_pod.cpp_FUN_0053cc60 at 0053cd71
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0053b000
        ;   Label: engine_pod.cpp_crc32UpdateByte_FUN_0053b000
    XOR EAX,EAX                         ; 0053b004
    MOV AL,byte ptr [ESP + 0x8]         ; 0053b006
    SHL EAX,0x18                        ; 0053b00a
    XOR EDX,EAX                         ; 0053b00d
    LEA EAX,[EDX + EDX*0x1]             ; 0053b00f
    TEST EDX,0x80000000                 ; 0053b012
    JZ 0x0053b01f                       ; 0053b018
        ;   XREF to: 0053b01f (CONDITIONAL_JUMP)  ; LAB_0053b01f
    XOR EAX,0x4c11db7                   ; 0053b01a
    LEA EDX,[EAX + EAX*0x1]             ; 0053b01f
        ;   Label: LAB_0053b01f
    TEST EAX,0x80000000                 ; 0053b022
    JZ 0x0053b09b                       ; 0053b027
        ;   XREF to: 0053b09b (CONDITIONAL_JUMP)  ; LAB_0053b09b
    MOV EAX,EDX                         ; 0053b02d
    XOR EAX,0x4c11db7                   ; 0053b02f
    LEA EDX,[EAX + EAX*0x1]             ; 0053b034
        ;   Label: LAB_0053b034
    TEST EAX,0x80000000                 ; 0053b037
    JZ 0x0053b09f                       ; 0053b03c
        ;   XREF to: 0053b09f (CONDITIONAL_JUMP)  ; LAB_0053b09f
    MOV EAX,EDX                         ; 0053b03e
    XOR EAX,0x4c11db7                   ; 0053b040
    LEA EDX,[EAX + EAX*0x1]             ; 0053b045
        ;   Label: LAB_0053b045
    TEST EAX,0x80000000                 ; 0053b048
    JZ 0x0053b0a3                       ; 0053b04d
        ;   XREF to: 0053b0a3 (CONDITIONAL_JUMP)  ; LAB_0053b0a3
    MOV EAX,EDX                         ; 0053b04f
    XOR EAX,0x4c11db7                   ; 0053b051
    LEA EDX,[EAX + EAX*0x1]             ; 0053b056
        ;   Label: LAB_0053b056
    TEST EAX,0x80000000                 ; 0053b059
    JZ 0x0053b0a7                       ; 0053b05e
        ;   XREF to: 0053b0a7 (CONDITIONAL_JUMP)  ; LAB_0053b0a7
    MOV EAX,EDX                         ; 0053b060
    XOR EAX,0x4c11db7                   ; 0053b062
    LEA EDX,[EAX + EAX*0x1]             ; 0053b067
        ;   Label: LAB_0053b067
    TEST EAX,0x80000000                 ; 0053b06a
    JZ 0x0053b0ab                       ; 0053b06f
        ;   XREF to: 0053b0ab (CONDITIONAL_JUMP)  ; LAB_0053b0ab
    MOV EAX,EDX                         ; 0053b071
    XOR EAX,0x4c11db7                   ; 0053b073
    LEA EDX,[EAX + EAX*0x1]             ; 0053b078
        ;   Label: LAB_0053b078
    TEST EAX,0x80000000                 ; 0053b07b
    JZ 0x0053b0af                       ; 0053b080
        ;   XREF to: 0053b0af (CONDITIONAL_JUMP)  ; LAB_0053b0af
    MOV EAX,EDX                         ; 0053b082
    XOR EAX,0x4c11db7                   ; 0053b084
    LEA EDX,[EAX + EAX*0x1]             ; 0053b089
        ;   Label: LAB_0053b089
    TEST EAX,0x80000000                 ; 0053b08c
    JZ 0x0053b0b3                       ; 0053b091
        ;   XREF to: 0053b0b3 (CONDITIONAL_JUMP)  ; LAB_0053b0b3
    MOV EAX,EDX                         ; 0053b093
    XOR EAX,0x4c11db7                   ; 0053b095
    RET                                 ; 0053b09a
    MOV EAX,EDX                         ; 0053b09b
        ;   Label: LAB_0053b09b
    JMP 0x0053b034                      ; 0053b09d
        ;   XREF to: 0053b034 (UNCONDITIONAL_JUMP)  ; LAB_0053b034
    MOV EAX,EDX                         ; 0053b09f
        ;   Label: LAB_0053b09f
    JMP 0x0053b045                      ; 0053b0a1
        ;   XREF to: 0053b045 (UNCONDITIONAL_JUMP)  ; LAB_0053b045
    MOV EAX,EDX                         ; 0053b0a3
        ;   Label: LAB_0053b0a3
    JMP 0x0053b056                      ; 0053b0a5
        ;   XREF to: 0053b056 (UNCONDITIONAL_JUMP)  ; LAB_0053b056
    MOV EAX,EDX                         ; 0053b0a7
        ;   Label: LAB_0053b0a7
    JMP 0x0053b067                      ; 0053b0a9
        ;   XREF to: 0053b067 (UNCONDITIONAL_JUMP)  ; LAB_0053b067
    MOV EAX,EDX                         ; 0053b0ab
        ;   Label: LAB_0053b0ab
    JMP 0x0053b078                      ; 0053b0ad
        ;   XREF to: 0053b078 (UNCONDITIONAL_JUMP)  ; LAB_0053b078
    MOV EAX,EDX                         ; 0053b0af
        ;   Label: LAB_0053b0af
    JMP 0x0053b089                      ; 0053b0b1
        ;   XREF to: 0053b089 (UNCONDITIONAL_JUMP)  ; LAB_0053b089
    MOV EAX,EDX                         ; 0053b0b3
        ;   Label: LAB_0053b0b3
    RET                                 ; 0053b0b5

