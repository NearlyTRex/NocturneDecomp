; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(uint current_crc,uchar data_byte)
;
; Parameters:
; uint             Stack[0x4]:4   current_crc
; uchar            Stack[0x8]:1   data_byte
;
; XREF[4]:
;   engine_pod.cpp_FUN_00519dc0 at 00519e22
;   engine_pod.cpp_FUN_0051aa7e at 0051ab80
;   engine_pod.cpp_FUN_0051af80 at 0051b049
;   engine_pod.cpp_FUN_0051b6dc at 0051b7ef
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00519cb0
        ;   Label: engine_pod.cpp_crc32UpdateByte_FUN_00519cb0
    XOR EAX,EAX                         ; 00519cb4
    MOV AL,byte ptr [ESP + 0x8]         ; 00519cb6
    SHL EAX,0x18                        ; 00519cba
    XOR EDX,EAX                         ; 00519cbd
    LEA EAX,[EDX + EDX*0x1]             ; 00519cbf
    TEST EDX,0x80000000                 ; 00519cc2
    JZ 0x00519ccf                       ; 00519cc8
        ;   XREF to: 00519ccf (CONDITIONAL_JUMP)  ; LAB_00519ccf
    XOR EAX,0x4c11db7                   ; 00519cca
    LEA EDX,[EAX + EAX*0x1]             ; 00519ccf
        ;   Label: LAB_00519ccf
    TEST EAX,0x80000000                 ; 00519cd2
    JZ 0x00519d4b                       ; 00519cd7
        ;   XREF to: 00519d4b (CONDITIONAL_JUMP)  ; LAB_00519d4b
    MOV EAX,EDX                         ; 00519cdd
    XOR EAX,0x4c11db7                   ; 00519cdf
    LEA EDX,[EAX + EAX*0x1]             ; 00519ce4
        ;   Label: LAB_00519ce4
    TEST EAX,0x80000000                 ; 00519ce7
    JZ 0x00519d4f                       ; 00519cec
        ;   XREF to: 00519d4f (CONDITIONAL_JUMP)  ; LAB_00519d4f
    MOV EAX,EDX                         ; 00519cee
    XOR EAX,0x4c11db7                   ; 00519cf0
    LEA EDX,[EAX + EAX*0x1]             ; 00519cf5
        ;   Label: LAB_00519cf5
    TEST EAX,0x80000000                 ; 00519cf8
    JZ 0x00519d53                       ; 00519cfd
        ;   XREF to: 00519d53 (CONDITIONAL_JUMP)  ; LAB_00519d53
    MOV EAX,EDX                         ; 00519cff
    XOR EAX,0x4c11db7                   ; 00519d01
    LEA EDX,[EAX + EAX*0x1]             ; 00519d06
        ;   Label: LAB_00519d06
    TEST EAX,0x80000000                 ; 00519d09
    JZ 0x00519d57                       ; 00519d0e
        ;   XREF to: 00519d57 (CONDITIONAL_JUMP)  ; LAB_00519d57
    MOV EAX,EDX                         ; 00519d10
    XOR EAX,0x4c11db7                   ; 00519d12
    LEA EDX,[EAX + EAX*0x1]             ; 00519d17
        ;   Label: LAB_00519d17
    TEST EAX,0x80000000                 ; 00519d1a
    JZ 0x00519d5b                       ; 00519d1f
        ;   XREF to: 00519d5b (CONDITIONAL_JUMP)  ; LAB_00519d5b
    MOV EAX,EDX                         ; 00519d21
    XOR EAX,0x4c11db7                   ; 00519d23
    LEA EDX,[EAX + EAX*0x1]             ; 00519d28
        ;   Label: LAB_00519d28
    TEST EAX,0x80000000                 ; 00519d2b
    JZ 0x00519d5f                       ; 00519d30
        ;   XREF to: 00519d5f (CONDITIONAL_JUMP)  ; LAB_00519d5f
    MOV EAX,EDX                         ; 00519d32
    XOR EAX,0x4c11db7                   ; 00519d34
    LEA EDX,[EAX + EAX*0x1]             ; 00519d39
        ;   Label: LAB_00519d39
    TEST EAX,0x80000000                 ; 00519d3c
    JZ 0x00519d63                       ; 00519d41
        ;   XREF to: 00519d63 (CONDITIONAL_JUMP)  ; LAB_00519d63
    MOV EAX,EDX                         ; 00519d43
    XOR EAX,0x4c11db7                   ; 00519d45
    RET                                 ; 00519d4a
    MOV EAX,EDX                         ; 00519d4b
        ;   Label: LAB_00519d4b
    JMP 0x00519ce4                      ; 00519d4d
        ;   XREF to: 00519ce4 (UNCONDITIONAL_JUMP)  ; LAB_00519ce4
    MOV EAX,EDX                         ; 00519d4f
        ;   Label: LAB_00519d4f
    JMP 0x00519cf5                      ; 00519d51
        ;   XREF to: 00519cf5 (UNCONDITIONAL_JUMP)  ; LAB_00519cf5
    MOV EAX,EDX                         ; 00519d53
        ;   Label: LAB_00519d53
    JMP 0x00519d06                      ; 00519d55
        ;   XREF to: 00519d06 (UNCONDITIONAL_JUMP)  ; LAB_00519d06
    MOV EAX,EDX                         ; 00519d57
        ;   Label: LAB_00519d57
    JMP 0x00519d17                      ; 00519d59
        ;   XREF to: 00519d17 (UNCONDITIONAL_JUMP)  ; LAB_00519d17
    MOV EAX,EDX                         ; 00519d5b
        ;   Label: LAB_00519d5b
    JMP 0x00519d28                      ; 00519d5d
        ;   XREF to: 00519d28 (UNCONDITIONAL_JUMP)  ; LAB_00519d28
    MOV EAX,EDX                         ; 00519d5f
        ;   Label: LAB_00519d5f
    JMP 0x00519d39                      ; 00519d61
        ;   XREF to: 00519d39 (UNCONDITIONAL_JUMP)  ; LAB_00519d39
    MOV EAX,EDX                         ; 00519d63
        ;   Label: LAB_00519d63
    RET                                 ; 00519d65

