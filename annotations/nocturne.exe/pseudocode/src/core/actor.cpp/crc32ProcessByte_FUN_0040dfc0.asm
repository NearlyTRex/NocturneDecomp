; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(uint *param_1,byte param_2)
;
;
; XREF[3]:
;   core_actor.cpp_FUN_0040e120 at 0040e137
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0 at 0040e0bb
;   core_script.cpp_CScript_computeChecksum_FUN_00505820 at 00505852
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040dfc0
        ;   Label: core_actor.cpp_crc32ProcessByte_FUN_0040dfc0
    XOR EDX,EDX                         ; 0040dfc4
    MOV DL,byte ptr [ESP + 0x8]         ; 0040dfc6
    MOV ECX,dword ptr [EAX]             ; 0040dfca
    SHL EDX,0x18                        ; 0040dfcc
    XOR ECX,EDX                         ; 0040dfcf
    MOV dword ptr [EAX],ECX             ; 0040dfd1
    TEST byte ptr [EAX + 0x3],0x80      ; 0040dfd3
    JZ 0x0040e067                       ; 0040dfd7
        ;   XREF to: 0040e067 (CONDITIONAL_JUMP)  ; LAB_0040e067
    LEA EDX,[ECX + ECX*0x1]             ; 0040dfdd
    XOR EDX,0x4c11db7                   ; 0040dfe0
    MOV dword ptr [EAX],EDX             ; 0040dfe6
        ;   Label: LAB_0040dfe6
    TEST byte ptr [EAX + 0x3],0x80      ; 0040dfe8
    JZ 0x0040e06f                       ; 0040dfec
        ;   XREF to: 0040e06f (CONDITIONAL_JUMP)  ; LAB_0040e06f
    MOV EDX,dword ptr [EAX]             ; 0040dff2
    ADD EDX,EDX                         ; 0040dff4
    XOR EDX,0x4c11db7                   ; 0040dff6
    MOV dword ptr [EAX],EDX             ; 0040dffc
        ;   Label: LAB_0040dffc
    TEST byte ptr [EAX + 0x3],0x80      ; 0040dffe
    JZ 0x0040e075                       ; 0040e002
        ;   XREF to: 0040e075 (CONDITIONAL_JUMP)  ; LAB_0040e075
    ADD EDX,EDX                         ; 0040e008
    XOR EDX,0x4c11db7                   ; 0040e00a
    MOV dword ptr [EAX],EDX             ; 0040e010
        ;   Label: LAB_0040e010
    TEST byte ptr [EAX + 0x3],0x80      ; 0040e012
    JZ 0x0040e079                       ; 0040e016
        ;   XREF to: 0040e079 (CONDITIONAL_JUMP)  ; LAB_0040e079
    ADD EDX,EDX                         ; 0040e018
    XOR EDX,0x4c11db7                   ; 0040e01a
    MOV dword ptr [EAX],EDX             ; 0040e020
        ;   Label: LAB_0040e020
    TEST byte ptr [EAX + 0x3],0x80      ; 0040e022
    JZ 0x0040e07d                       ; 0040e026
        ;   XREF to: 0040e07d (CONDITIONAL_JUMP)  ; LAB_0040e07d
    ADD EDX,EDX                         ; 0040e028
    XOR EDX,0x4c11db7                   ; 0040e02a
    MOV dword ptr [EAX],EDX             ; 0040e030
        ;   Label: LAB_0040e030
    TEST byte ptr [EAX + 0x3],0x80      ; 0040e032
    JZ 0x0040e081                       ; 0040e036
        ;   XREF to: 0040e081 (CONDITIONAL_JUMP)  ; LAB_0040e081
    ADD EDX,EDX                         ; 0040e038
    XOR EDX,0x4c11db7                   ; 0040e03a
    MOV dword ptr [EAX],EDX             ; 0040e040
        ;   Label: LAB_0040e040
    TEST byte ptr [EAX + 0x3],0x80      ; 0040e042
    JZ 0x0040e085                       ; 0040e046
        ;   XREF to: 0040e085 (CONDITIONAL_JUMP)  ; LAB_0040e085
    MOV EDX,dword ptr [EAX]             ; 0040e048
    ADD EDX,EDX                         ; 0040e04a
    XOR EDX,0x4c11db7                   ; 0040e04c
    MOV dword ptr [EAX],EDX             ; 0040e052
        ;   Label: LAB_0040e052
    TEST byte ptr [EAX + 0x3],0x80      ; 0040e054
    JZ 0x0040e08b                       ; 0040e058
        ;   XREF to: 0040e08b (CONDITIONAL_JUMP)  ; LAB_0040e08b
    MOV EDX,dword ptr [EAX]             ; 0040e05a
    ADD EDX,EDX                         ; 0040e05c
    XOR EDX,0x4c11db7                   ; 0040e05e
    MOV dword ptr [EAX],EDX             ; 0040e064
    RET                                 ; 0040e066
    LEA EDX,[ECX + ECX*0x1]             ; 0040e067
        ;   Label: LAB_0040e067
    JMP 0x0040dfe6                      ; 0040e06a
        ;   XREF to: 0040dfe6 (UNCONDITIONAL_JUMP)  ; LAB_0040dfe6
    MOV EDX,dword ptr [EAX]             ; 0040e06f
        ;   Label: LAB_0040e06f
    ADD EDX,EDX                         ; 0040e071
    JMP 0x0040dffc                      ; 0040e073
        ;   XREF to: 0040dffc (UNCONDITIONAL_JUMP)  ; LAB_0040dffc
    ADD EDX,EDX                         ; 0040e075
        ;   Label: LAB_0040e075
    JMP 0x0040e010                      ; 0040e077
        ;   XREF to: 0040e010 (UNCONDITIONAL_JUMP)  ; LAB_0040e010
    ADD EDX,EDX                         ; 0040e079
        ;   Label: LAB_0040e079
    JMP 0x0040e020                      ; 0040e07b
        ;   XREF to: 0040e020 (UNCONDITIONAL_JUMP)  ; LAB_0040e020
    ADD EDX,EDX                         ; 0040e07d
        ;   Label: LAB_0040e07d
    JMP 0x0040e030                      ; 0040e07f
        ;   XREF to: 0040e030 (UNCONDITIONAL_JUMP)  ; LAB_0040e030
    ADD EDX,EDX                         ; 0040e081
        ;   Label: LAB_0040e081
    JMP 0x0040e040                      ; 0040e083
        ;   XREF to: 0040e040 (UNCONDITIONAL_JUMP)  ; LAB_0040e040
    MOV EDX,dword ptr [EAX]             ; 0040e085
        ;   Label: LAB_0040e085
    ADD EDX,EDX                         ; 0040e087
    JMP 0x0040e052                      ; 0040e089
        ;   XREF to: 0040e052 (UNCONDITIONAL_JUMP)  ; LAB_0040e052
    MOV EDX,dword ptr [EAX]             ; 0040e08b
        ;   Label: LAB_0040e08b
    ADD EDX,EDX                         ; 0040e08d
    MOV dword ptr [EAX],EDX             ; 0040e08f
    RET                                 ; 0040e091

