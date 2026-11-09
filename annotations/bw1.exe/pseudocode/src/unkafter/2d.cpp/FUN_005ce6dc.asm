; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005ce6dc(char *param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005ce510 at 005ce646
;
; Referenced Globals:
;   undefined4 DAT_02c9f6d0
;   undefined4 DAT_02c9f6d4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_memory.c_realloc_FUN_005c10d0
;   crt_string.c_memmove_FUN_005c25d0
;   crt_unknown.c_FUN_005c08d0
;   unkafter_2d.cpp_FUN_005ce880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce6dc
        ;   Label: unkafter_2d.cpp_FUN_005ce6dc
    PUSH ESI                            ; 005ce6dd
    PUSH EDI                            ; 005ce6de
    PUSH EBP                            ; 005ce6df
    SUB ESP,0x8                         ; 005ce6e0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005ce6e3
    TEST EDX,EDX                        ; 005ce6e7
    JNZ 0x005ce6f5                      ; 005ce6e9
        ;   XREF to: 005ce6f5 (CONDITIONAL_JUMP)  ; LAB_005ce6f5
    MOV EAX,0xffffffff                  ; 005ce6eb
    JMP 0x005ce877                      ; 005ce6f0
        ;   XREF to: 005ce877 (UNCONDITIONAL_JUMP)  ; LAB_005ce877
    CMP byte ptr [EDX],0x0              ; 005ce6f5
        ;   Label: LAB_005ce6f5
    JZ 0x005ce70f                       ; 005ce6f8
        ;   XREF to: 005ce70f (CONDITIONAL_JUMP)  ; LAB_005ce70f
    LEA EAX,[EDX + 0x1]                 ; 005ce6fa
    CMP byte ptr [EAX],0x0              ; 005ce6fd
    JZ 0x005ce70f                       ; 005ce700
        ;   XREF to: 005ce70f (CONDITIONAL_JUMP)  ; LAB_005ce70f
    CMP byte ptr [EAX],0x3d             ; 005ce702
        ;   Label: LAB_005ce702
    JZ 0x005ce70f                       ; 005ce705
        ;   XREF to: 005ce70f (CONDITIONAL_JUMP)  ; LAB_005ce70f
    MOV CL,byte ptr [EAX + 0x1]         ; 005ce707
    INC EAX                             ; 005ce70a
    TEST CL,CL                          ; 005ce70b
    JNZ 0x005ce702                      ; 005ce70d
        ;   XREF to: 005ce702 (CONDITIONAL_JUMP)  ; LAB_005ce702
    CMP byte ptr [EAX],0x0              ; 005ce70f
        ;   Label: LAB_005ce70f
    JNZ 0x005ce721                      ; 005ce712
        ;   XREF to: 005ce721 (CONDITIONAL_JUMP)  ; LAB_005ce721
    MOV EAX,0xffffffff                  ; 005ce714
    ADD ESP,0x8                         ; 005ce719
    POP EBP                             ; 005ce71c
    POP EDI                             ; 005ce71d
    POP ESI                             ; 005ce71e
    POP EBX                             ; 005ce71f
    RET                                 ; 005ce720
    CMP byte ptr [EAX + 0x1],0x0        ; 005ce721
        ;   Label: LAB_005ce721
    SETZ AL                             ; 005ce725
    MOV EBX,dword ptr [0x02c9f6d4]      ; 005ce728 | DAT_02c9f6d4
    MOVZX EBP,AL                        ; 005ce72e
    TEST EBX,EBX                        ; 005ce731
    JNZ 0x005ce772                      ; 005ce733
        ;   XREF to: 005ce772 (CONDITIONAL_JUMP)  ; LAB_005ce772
    TEST EBP,EBP                        ; 005ce735
    JNZ 0x005ce875                      ; 005ce737
        ;   XREF to: 005ce875 (CONDITIONAL_JUMP)  ; LAB_005ce875
    PUSH 0x9                            ; 005ce73d
    CALL crt_unknown.c_FUN_005c08d0     ; 005ce73f
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005ce744
    MOV EBX,EAX                         ; 005ce747
    TEST EAX,EAX                        ; 005ce749
    JNZ 0x005ce75a                      ; 005ce74b
        ;   XREF to: 005ce75a (CONDITIONAL_JUMP)  ; LAB_005ce75a
    MOV EAX,0xffffffff                  ; 005ce74d
    ADD ESP,0x8                         ; 005ce752
    POP EBP                             ; 005ce755
    POP EDI                             ; 005ce756
    POP ESI                             ; 005ce757
    POP EBX                             ; 005ce758
    RET                                 ; 005ce759
    MOV [0x02c9f6d4],EAX                ; 005ce75a | DAT_02c9f6d4
        ;   Label: LAB_005ce75a
    ADD EAX,0x8                         ; 005ce75f
    MOV dword ptr [EAX + -0x8],EBP      ; 005ce762
    MOV dword ptr [EAX + -0x4],EBP      ; 005ce765
    MOV [0x02c9f6d0],EAX                ; 005ce768 | DAT_02c9f6d0
    JMP 0x005ce85d                      ; 005ce76d
        ;   XREF to: 005ce85d (UNCONDITIONAL_JUMP)  ; LAB_005ce85d
    PUSH EBP                            ; 005ce772
        ;   Label: LAB_005ce772
    MOV ECX,dword ptr [ESP + 0x20]      ; 005ce773
    PUSH ECX                            ; 005ce777
    CALL unkafter_2d.cpp_FUN_005ce880   ; 005ce778
        ;   XREF to: 005ce880 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005ce880()
    ADD ESP,0x8                         ; 005ce77d
    TEST EBP,EBP                        ; 005ce780
    JNZ 0x005ce875                      ; 005ce782
        ;   XREF to: 005ce875 (CONDITIONAL_JUMP)  ; LAB_005ce875
    TEST EAX,EAX                        ; 005ce788
    JG 0x005ce85a                       ; 005ce78a
        ;   XREF to: 005ce85a (CONDITIONAL_JUMP)  ; LAB_005ce85a
    NEG EAX                             ; 005ce790
    MOV EDX,dword ptr [0x02c9f6d0]      ; 005ce792 | DAT_02c9f6d0
    MOV EBP,EAX                         ; 005ce798
    INC EAX                             ; 005ce79a
    LEA ESI,[EBP*0x4 + 0x0]             ; 005ce79b
    MOV dword ptr [ESP],EAX             ; 005ce7a2
    LEA EAX,[ESI + 0x8]                 ; 005ce7a5
    MOV EDI,dword ptr [ESP]             ; 005ce7a8
    MOV dword ptr [ESP + 0x4],EAX       ; 005ce7ab
    ADD EAX,EDI                         ; 005ce7af
    TEST EDX,EDX                        ; 005ce7b1
    JNZ 0x005ce810                      ; 005ce7b3
        ;   XREF to: 005ce810 (CONDITIONAL_JUMP)  ; LAB_005ce810
    PUSH EAX                            ; 005ce7b5
    CALL crt_unknown.c_FUN_005c08d0     ; 005ce7b6
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    MOV EDX,EAX                         ; 005ce7bb
    ADD ESP,0x4                         ; 005ce7bd
    MOV EBX,EAX                         ; 005ce7c0
    TEST EAX,EAX                        ; 005ce7c2
    JNZ 0x005ce7d3                      ; 005ce7c4
        ;   XREF to: 005ce7d3 (CONDITIONAL_JUMP)  ; LAB_005ce7d3
    MOV EAX,0xffffffff                  ; 005ce7c6
    ADD ESP,0x8                         ; 005ce7cb
    POP EBP                             ; 005ce7ce
    POP EDI                             ; 005ce7cf
    POP ESI                             ; 005ce7d0
    POP EBX                             ; 005ce7d1
    RET                                 ; 005ce7d2
    MOV EAX,[0x02c9f6d4]                ; 005ce7d3 | DAT_02c9f6d4
        ;   Label: LAB_005ce7d3
    MOV ECX,ESI                         ; 005ce7d8
    MOV EDI,EDX                         ; 005ce7da
    MOV ESI,EAX                         ; 005ce7dc
    PUSH ES                             ; 005ce7de
    MOV AX,DS                           ; 005ce7df
    MOV ES,AX                           ; 005ce7e1
    PUSH EDI                            ; 005ce7e3
    MOV EAX,ECX                         ; 005ce7e4
    SHR ECX,0x2                         ; 005ce7e6
    MOVSD.REP ES:EDI,ESI                ; 005ce7e9
    MOV CL,AL                           ; 005ce7eb
    AND CL,0x3                          ; 005ce7ed
    MOVSB.REP ES:EDI,ESI                ; 005ce7f0
    POP EDI                             ; 005ce7f2
    POP ES                              ; 005ce7f3
    MOV ESI,dword ptr [ESP]             ; 005ce7f4
    PUSH ESI                            ; 005ce7f7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ce7f8
    PUSH 0x0                            ; 005ce7fc
    ADD EAX,EDX                         ; 005ce7fe
    PUSH EAX                            ; 005ce800
    MOV [0x02c9f6d0],EAX                ; 005ce801 | DAT_02c9f6d0
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ce806
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ce80b
    JMP 0x005ce84a                      ; 005ce80e
        ;   XREF to: 005ce84a (UNCONDITIONAL_JUMP)  ; LAB_005ce84a
    PUSH EAX                            ; 005ce810
        ;   Label: LAB_005ce810
    PUSH EBX                            ; 005ce811
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 005ce812
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005ce817
    MOV EBX,EAX                         ; 005ce81a
    TEST EAX,EAX                        ; 005ce81c
    JNZ 0x005ce82d                      ; 005ce81e
        ;   XREF to: 005ce82d (CONDITIONAL_JUMP)  ; LAB_005ce82d
    MOV EAX,0xffffffff                  ; 005ce820
    ADD ESP,0x8                         ; 005ce825
    POP EBP                             ; 005ce828
    POP EDI                             ; 005ce829
    POP ESI                             ; 005ce82a
    POP EBX                             ; 005ce82b
    RET                                 ; 005ce82c
    PUSH EBP                            ; 005ce82d
        ;   Label: LAB_005ce82d
    MOV ECX,dword ptr [0x02c9f6d0]      ; 005ce82e | DAT_02c9f6d0
    MOV ESI,dword ptr [ESP + 0x8]       ; 005ce834
    PUSH ECX                            ; 005ce838
    ADD ESI,EAX                         ; 005ce839
    PUSH ESI                            ; 005ce83b
    CALL crt_string.c_memmove_FUN_005c25d0 ; 005ce83c
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005ce841
    MOV dword ptr [0x02c9f6d0],ESI      ; 005ce844 | DAT_02c9f6d0
    MOV dword ptr [EBX + EBP*0x4 + 0x4],0x0 ; 005ce84a
        ;   Label: LAB_005ce84a
    MOV dword ptr [0x02c9f6d4],EBX      ; 005ce852 | DAT_02c9f6d4
    JMP 0x005ce85d                      ; 005ce858
        ;   XREF to: 005ce85d (UNCONDITIONAL_JUMP)  ; LAB_005ce85d
    LEA EBP,[EAX + -0x1]                ; 005ce85a
        ;   Label: LAB_005ce85a
    LEA EAX,[EBP*0x4 + 0x0]             ; 005ce85d
        ;   Label: LAB_005ce85d
    ADD EBX,EAX                         ; 005ce864
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005ce866
    MOV dword ptr [EBX],EAX             ; 005ce86a
    MOV EAX,[0x02c9f6d0]                ; 005ce86c | DAT_02c9f6d0
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 005ce871
    XOR EAX,EAX                         ; 005ce875
        ;   Label: LAB_005ce875
    ADD ESP,0x8                         ; 005ce877
        ;   Label: LAB_005ce877
    POP EBP                             ; 005ce87a
    POP EDI                             ; 005ce87b
    POP ESI                             ; 005ce87c
    POP EBX                             ; 005ce87d
    RET                                 ; 005ce87e

