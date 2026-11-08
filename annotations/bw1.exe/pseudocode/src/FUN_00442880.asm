; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00442880(uint *param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00442a80 at 00442aca
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00442880
        ;   Label: FUN_00442880
    XOR EDX,EDX                         ; 00442884
    MOV DL,byte ptr [ESP + 0x8]         ; 00442886
    MOV ECX,dword ptr [EAX]             ; 0044288a
    SHL EDX,0x18                        ; 0044288c
    XOR ECX,EDX                         ; 0044288f
    MOV dword ptr [EAX],ECX             ; 00442891
    TEST byte ptr [EAX + 0x3],0x80      ; 00442893
    JZ 0x00442927                       ; 00442897
        ;   XREF to: 00442927 (CONDITIONAL_JUMP)  ; LAB_00442927
    LEA EDX,[ECX + ECX*0x1]             ; 0044289d
    XOR EDX,0x4c11db7                   ; 004428a0
    MOV dword ptr [EAX],EDX             ; 004428a6
        ;   Label: LAB_004428a6
    TEST byte ptr [EAX + 0x3],0x80      ; 004428a8
    JZ 0x0044292f                       ; 004428ac
        ;   XREF to: 0044292f (CONDITIONAL_JUMP)  ; LAB_0044292f
    MOV EDX,dword ptr [EAX]             ; 004428b2
    ADD EDX,EDX                         ; 004428b4
    XOR EDX,0x4c11db7                   ; 004428b6
    MOV dword ptr [EAX],EDX             ; 004428bc
        ;   Label: LAB_004428bc
    TEST byte ptr [EAX + 0x3],0x80      ; 004428be
    JZ 0x00442935                       ; 004428c2
        ;   XREF to: 00442935 (CONDITIONAL_JUMP)  ; LAB_00442935
    ADD EDX,EDX                         ; 004428c8
    XOR EDX,0x4c11db7                   ; 004428ca
    MOV dword ptr [EAX],EDX             ; 004428d0
        ;   Label: LAB_004428d0
    TEST byte ptr [EAX + 0x3],0x80      ; 004428d2
    JZ 0x00442939                       ; 004428d6
        ;   XREF to: 00442939 (CONDITIONAL_JUMP)  ; LAB_00442939
    ADD EDX,EDX                         ; 004428d8
    XOR EDX,0x4c11db7                   ; 004428da
    MOV dword ptr [EAX],EDX             ; 004428e0
        ;   Label: LAB_004428e0
    TEST byte ptr [EAX + 0x3],0x80      ; 004428e2
    JZ 0x0044293d                       ; 004428e6
        ;   XREF to: 0044293d (CONDITIONAL_JUMP)  ; LAB_0044293d
    ADD EDX,EDX                         ; 004428e8
    XOR EDX,0x4c11db7                   ; 004428ea
    MOV dword ptr [EAX],EDX             ; 004428f0
        ;   Label: LAB_004428f0
    TEST byte ptr [EAX + 0x3],0x80      ; 004428f2
    JZ 0x00442941                       ; 004428f6
        ;   XREF to: 00442941 (CONDITIONAL_JUMP)  ; LAB_00442941
    ADD EDX,EDX                         ; 004428f8
    XOR EDX,0x4c11db7                   ; 004428fa
    MOV dword ptr [EAX],EDX             ; 00442900
        ;   Label: LAB_00442900
    TEST byte ptr [EAX + 0x3],0x80      ; 00442902
    JZ 0x00442945                       ; 00442906
        ;   XREF to: 00442945 (CONDITIONAL_JUMP)  ; LAB_00442945
    MOV EDX,dword ptr [EAX]             ; 00442908
    ADD EDX,EDX                         ; 0044290a
    XOR EDX,0x4c11db7                   ; 0044290c
    MOV dword ptr [EAX],EDX             ; 00442912
        ;   Label: LAB_00442912
    TEST byte ptr [EAX + 0x3],0x80      ; 00442914
    JZ 0x0044294b                       ; 00442918
        ;   XREF to: 0044294b (CONDITIONAL_JUMP)  ; LAB_0044294b
    MOV EDX,dword ptr [EAX]             ; 0044291a
    ADD EDX,EDX                         ; 0044291c
    XOR EDX,0x4c11db7                   ; 0044291e
    MOV dword ptr [EAX],EDX             ; 00442924
    RET                                 ; 00442926
    LEA EDX,[ECX + ECX*0x1]             ; 00442927
        ;   Label: LAB_00442927
    JMP 0x004428a6                      ; 0044292a
        ;   XREF to: 004428a6 (UNCONDITIONAL_JUMP)  ; LAB_004428a6
    MOV EDX,dword ptr [EAX]             ; 0044292f
        ;   Label: LAB_0044292f
    ADD EDX,EDX                         ; 00442931
    JMP 0x004428bc                      ; 00442933
        ;   XREF to: 004428bc (UNCONDITIONAL_JUMP)  ; LAB_004428bc
    ADD EDX,EDX                         ; 00442935
        ;   Label: LAB_00442935
    JMP 0x004428d0                      ; 00442937
        ;   XREF to: 004428d0 (UNCONDITIONAL_JUMP)  ; LAB_004428d0
    ADD EDX,EDX                         ; 00442939
        ;   Label: LAB_00442939
    JMP 0x004428e0                      ; 0044293b
        ;   XREF to: 004428e0 (UNCONDITIONAL_JUMP)  ; LAB_004428e0
    ADD EDX,EDX                         ; 0044293d
        ;   Label: LAB_0044293d
    JMP 0x004428f0                      ; 0044293f
        ;   XREF to: 004428f0 (UNCONDITIONAL_JUMP)  ; LAB_004428f0
    ADD EDX,EDX                         ; 00442941
        ;   Label: LAB_00442941
    JMP 0x00442900                      ; 00442943
        ;   XREF to: 00442900 (UNCONDITIONAL_JUMP)  ; LAB_00442900
    MOV EDX,dword ptr [EAX]             ; 00442945
        ;   Label: LAB_00442945
    ADD EDX,EDX                         ; 00442947
    JMP 0x00442912                      ; 00442949
        ;   XREF to: 00442912 (UNCONDITIONAL_JUMP)  ; LAB_00442912
    MOV EDX,dword ptr [EAX]             ; 0044294b
        ;   Label: LAB_0044294b
    ADD EDX,EDX                         ; 0044294d
    MOV dword ptr [EAX],EDX             ; 0044294f
    RET                                 ; 00442951

