; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessByte_FUN_0040d180(uint *crc_state,byte input_byte)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; byte             Stack[0x8]:1   input_byte
;
; XREF[3]:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040d260 at 0040d27b
;   core_actor.cpp_crc32ProcessString_FUN_0040d2e0 at 0040d2f7
;   core_script.cpp_CScript_computeChecksum_FUN_0052a630 at 0052a662
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d180
        ;   Label: core_actor.cpp_crc32ProcessByte_FUN_0040d180
    XOR EDX,EDX                         ; 0040d184
    MOV DL,byte ptr [ESP + 0x8]         ; 0040d186
    MOV ECX,dword ptr [EAX]             ; 0040d18a
    SHL EDX,0x18                        ; 0040d18c
    XOR ECX,EDX                         ; 0040d18f
    MOV dword ptr [EAX],ECX             ; 0040d191
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d193
    JZ 0x0040d227                       ; 0040d197
        ;   XREF to: 0040d227 (CONDITIONAL_JUMP)  ; LAB_0040d227
    LEA EDX,[ECX + ECX*0x1]             ; 0040d19d
    XOR EDX,0x4c11db7                   ; 0040d1a0
    MOV dword ptr [EAX],EDX             ; 0040d1a6
        ;   Label: LAB_0040d1a6
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d1a8
    JZ 0x0040d22f                       ; 0040d1ac
        ;   XREF to: 0040d22f (CONDITIONAL_JUMP)  ; LAB_0040d22f
    MOV EDX,dword ptr [EAX]             ; 0040d1b2
    ADD EDX,EDX                         ; 0040d1b4
    XOR EDX,0x4c11db7                   ; 0040d1b6
    MOV dword ptr [EAX],EDX             ; 0040d1bc
        ;   Label: LAB_0040d1bc
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d1be
    JZ 0x0040d235                       ; 0040d1c2
        ;   XREF to: 0040d235 (CONDITIONAL_JUMP)  ; LAB_0040d235
    ADD EDX,EDX                         ; 0040d1c8
    XOR EDX,0x4c11db7                   ; 0040d1ca
    MOV dword ptr [EAX],EDX             ; 0040d1d0
        ;   Label: LAB_0040d1d0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d1d2
    JZ 0x0040d239                       ; 0040d1d6
        ;   XREF to: 0040d239 (CONDITIONAL_JUMP)  ; LAB_0040d239
    ADD EDX,EDX                         ; 0040d1d8
    XOR EDX,0x4c11db7                   ; 0040d1da
    MOV dword ptr [EAX],EDX             ; 0040d1e0
        ;   Label: LAB_0040d1e0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d1e2
    JZ 0x0040d23d                       ; 0040d1e6
        ;   XREF to: 0040d23d (CONDITIONAL_JUMP)  ; LAB_0040d23d
    ADD EDX,EDX                         ; 0040d1e8
    XOR EDX,0x4c11db7                   ; 0040d1ea
    MOV dword ptr [EAX],EDX             ; 0040d1f0
        ;   Label: LAB_0040d1f0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d1f2
    JZ 0x0040d241                       ; 0040d1f6
        ;   XREF to: 0040d241 (CONDITIONAL_JUMP)  ; LAB_0040d241
    ADD EDX,EDX                         ; 0040d1f8
    XOR EDX,0x4c11db7                   ; 0040d1fa
    MOV dword ptr [EAX],EDX             ; 0040d200
        ;   Label: LAB_0040d200
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d202
    JZ 0x0040d245                       ; 0040d206
        ;   XREF to: 0040d245 (CONDITIONAL_JUMP)  ; LAB_0040d245
    MOV EDX,dword ptr [EAX]             ; 0040d208
    ADD EDX,EDX                         ; 0040d20a
    XOR EDX,0x4c11db7                   ; 0040d20c
    MOV dword ptr [EAX],EDX             ; 0040d212
        ;   Label: LAB_0040d212
    TEST byte ptr [EAX + 0x3],0x80      ; 0040d214
    JZ 0x0040d24b                       ; 0040d218
        ;   XREF to: 0040d24b (CONDITIONAL_JUMP)  ; LAB_0040d24b
    MOV EDX,dword ptr [EAX]             ; 0040d21a
    ADD EDX,EDX                         ; 0040d21c
    XOR EDX,0x4c11db7                   ; 0040d21e
    MOV dword ptr [EAX],EDX             ; 0040d224
    RET                                 ; 0040d226
    LEA EDX,[ECX + ECX*0x1]             ; 0040d227
        ;   Label: LAB_0040d227
    JMP 0x0040d1a6                      ; 0040d22a
        ;   XREF to: 0040d1a6 (UNCONDITIONAL_JUMP)  ; LAB_0040d1a6
    MOV EDX,dword ptr [EAX]             ; 0040d22f
        ;   Label: LAB_0040d22f
    ADD EDX,EDX                         ; 0040d231
    JMP 0x0040d1bc                      ; 0040d233
        ;   XREF to: 0040d1bc (UNCONDITIONAL_JUMP)  ; LAB_0040d1bc
    ADD EDX,EDX                         ; 0040d235
        ;   Label: LAB_0040d235
    JMP 0x0040d1d0                      ; 0040d237
        ;   XREF to: 0040d1d0 (UNCONDITIONAL_JUMP)  ; LAB_0040d1d0
    ADD EDX,EDX                         ; 0040d239
        ;   Label: LAB_0040d239
    JMP 0x0040d1e0                      ; 0040d23b
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_JUMP)  ; LAB_0040d1e0
    ADD EDX,EDX                         ; 0040d23d
        ;   Label: LAB_0040d23d
    JMP 0x0040d1f0                      ; 0040d23f
        ;   XREF to: 0040d1f0 (UNCONDITIONAL_JUMP)  ; LAB_0040d1f0
    ADD EDX,EDX                         ; 0040d241
        ;   Label: LAB_0040d241
    JMP 0x0040d200                      ; 0040d243
        ;   XREF to: 0040d200 (UNCONDITIONAL_JUMP)  ; LAB_0040d200
    MOV EDX,dword ptr [EAX]             ; 0040d245
        ;   Label: LAB_0040d245
    ADD EDX,EDX                         ; 0040d247
    JMP 0x0040d212                      ; 0040d249
        ;   XREF to: 0040d212 (UNCONDITIONAL_JUMP)  ; LAB_0040d212
    MOV EDX,dword ptr [EAX]             ; 0040d24b
        ;   Label: LAB_0040d24b
    ADD EDX,EDX                         ; 0040d24d
    MOV dword ptr [EAX],EDX             ; 0040d24f
    RET                                 ; 0040d251

