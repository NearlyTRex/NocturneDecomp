; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040d060(uint *param_1,byte param_2)
;
;
; XREF[3]:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040d140 at 0040d15b
;   core_actor.cpp_crc32ProcessString_FUN_0040d1c0 at 0040d1d7
;   core_script.cpp_FUN_00531030 at 00531062
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d060
        ;   Label: core_actor.cpp_FUN_0040d060
    XOR EDX,EDX                         ; 0040d064
    MOV DL,byte ptr [ESP + 0x8]         ; 0040d066
    MOV ECX,dword ptr [EAX]             ; 0040d06a
    SHL EDX,0x18                        ; 0040d06c
    XOR ECX,EDX                         ; 0040d06f
    MOV dword ptr [EAX],ECX             ; 0040d071
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d073
    JZ 0x0040d107                       ; 0040d077
        ;   XREF to: 0040d107 (CONDITIONAL_JUMP)  ; LAB_0040d107
    LEA EDX,[ECX + ECX*0x1]             ; 0040d07d
    XOR EDX,0x4c11db7                   ; 0040d080
    MOV dword ptr [EAX],EDX             ; 0040d086
        ;   Label: LAB_0040d086
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d088
    JZ 0x0040d10f                       ; 0040d08c
        ;   XREF to: 0040d10f (CONDITIONAL_JUMP)  ; LAB_0040d10f
    MOV EDX,dword ptr [EAX]             ; 0040d092
    ADD EDX,EDX                         ; 0040d094
    XOR EDX,0x4c11db7                   ; 0040d096
    MOV dword ptr [EAX],EDX             ; 0040d09c
        ;   Label: LAB_0040d09c
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d09e
    JZ 0x0040d115                       ; 0040d0a2
        ;   XREF to: 0040d115 (CONDITIONAL_JUMP)  ; LAB_0040d115
    ADD EDX,EDX                         ; 0040d0a8
    XOR EDX,0x4c11db7                   ; 0040d0aa
    MOV dword ptr [EAX],EDX             ; 0040d0b0
        ;   Label: LAB_0040d0b0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d0b2
    JZ 0x0040d119                       ; 0040d0b6
        ;   XREF to: 0040d119 (CONDITIONAL_JUMP)  ; LAB_0040d119
    ADD EDX,EDX                         ; 0040d0b8
    XOR EDX,0x4c11db7                   ; 0040d0ba
    MOV dword ptr [EAX],EDX             ; 0040d0c0
        ;   Label: LAB_0040d0c0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d0c2
    JZ 0x0040d11d                       ; 0040d0c6
        ;   XREF to: 0040d11d (CONDITIONAL_JUMP)  ; LAB_0040d11d
    ADD EDX,EDX                         ; 0040d0c8
    XOR EDX,0x4c11db7                   ; 0040d0ca
    MOV dword ptr [EAX],EDX             ; 0040d0d0
        ;   Label: LAB_0040d0d0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d0d2
    JZ 0x0040d121                       ; 0040d0d6
        ;   XREF to: 0040d121 (CONDITIONAL_JUMP)  ; LAB_0040d121
    ADD EDX,EDX                         ; 0040d0d8
    XOR EDX,0x4c11db7                   ; 0040d0da
    MOV dword ptr [EAX],EDX             ; 0040d0e0
        ;   Label: LAB_0040d0e0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d0e2
    JZ 0x0040d125                       ; 0040d0e6
        ;   XREF to: 0040d125 (CONDITIONAL_JUMP)  ; LAB_0040d125
    MOV EDX,dword ptr [EAX]             ; 0040d0e8
    ADD EDX,EDX                         ; 0040d0ea
    XOR EDX,0x4c11db7                   ; 0040d0ec
    MOV dword ptr [EAX],EDX             ; 0040d0f2
        ;   Label: LAB_0040d0f2
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d0f4
    JZ 0x0040d12b                       ; 0040d0f8
        ;   XREF to: 0040d12b (CONDITIONAL_JUMP)  ; LAB_0040d12b
    MOV EDX,dword ptr [EAX]             ; 0040d0fa
    ADD EDX,EDX                         ; 0040d0fc
    XOR EDX,0x4c11db7                   ; 0040d0fe
    MOV dword ptr [EAX],EDX             ; 0040d104
    RET                                 ; 0040d106
    LEA EDX,[ECX + ECX*0x1]             ; 0040d107
        ;   Label: LAB_0040d107
    JMP 0x0040d086                      ; 0040d10a
        ;   XREF to: 0040d086 (UNCONDITIONAL_JUMP)  ; LAB_0040d086
    MOV EDX,dword ptr [EAX]             ; 0040d10f
        ;   Label: LAB_0040d10f
    ADD EDX,EDX                         ; 0040d111
    JMP 0x0040d09c                      ; 0040d113
        ;   XREF to: 0040d09c (UNCONDITIONAL_JUMP)  ; LAB_0040d09c
    ADD EDX,EDX                         ; 0040d115
        ;   Label: LAB_0040d115
    JMP 0x0040d0b0                      ; 0040d117
        ;   XREF to: 0040d0b0 (UNCONDITIONAL_JUMP)  ; LAB_0040d0b0
    ADD EDX,EDX                         ; 0040d119
        ;   Label: LAB_0040d119
    JMP 0x0040d0c0                      ; 0040d11b
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_JUMP)  ; LAB_0040d0c0
    ADD EDX,EDX                         ; 0040d11d
        ;   Label: LAB_0040d11d
    JMP 0x0040d0d0                      ; 0040d11f
        ;   XREF to: 0040d0d0 (UNCONDITIONAL_JUMP)  ; LAB_0040d0d0
    ADD EDX,EDX                         ; 0040d121
        ;   Label: LAB_0040d121
    JMP 0x0040d0e0                      ; 0040d123
        ;   XREF to: 0040d0e0 (UNCONDITIONAL_JUMP)  ; LAB_0040d0e0
    MOV EDX,dword ptr [EAX]             ; 0040d125
        ;   Label: LAB_0040d125
    ADD EDX,EDX                         ; 0040d127
    JMP 0x0040d0f2                      ; 0040d129
        ;   XREF to: 0040d0f2 (UNCONDITIONAL_JUMP)  ; LAB_0040d0f2
    MOV EDX,dword ptr [EAX]             ; 0040d12b
        ;   Label: LAB_0040d12b
    ADD EDX,EDX                         ; 0040d12d
    MOV dword ptr [EAX],EDX             ; 0040d12f
    RET                                 ; 0040d131

