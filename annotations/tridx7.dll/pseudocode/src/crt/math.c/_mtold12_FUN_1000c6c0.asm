; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c__mtold12_FUN_1000c6c0(char *manptr,int cnt,uint *ld12)
;
; Parameters:
; char *           Stack[0x4]:4   manptr
; int              Stack[0x8]:4   cnt
; uint *           Stack[0xc]:4   ld12
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_math.c__strgtold12_FUN_1000c7b0 at 1000ccce
;
; Called Functions:
;   crt_math.c__add_12_FUN_1000c5d0
;   crt_math.c__shl_12_FUN_1000c640
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 1000c6c0
        ;   Label: crt_math.c__mtold12_FUN_1000c6c0
    PUSH EBX                            ; 1000c6c3
    PUSH ESI                            ; 1000c6c4
    MOV ESI,dword ptr [ESP + 0x20]      ; 1000c6c5
    PUSH EDI                            ; 1000c6c9
    MOV DI,0x404e                       ; 1000c6ca
    PUSH EBP                            ; 1000c6ce
    MOV EBX,dword ptr [ESP + 0x24]      ; 1000c6cf
    MOV dword ptr [ESI],0x0             ; 1000c6d3
    MOV dword ptr [ESI + 0x4],0x0       ; 1000c6d9
    MOV dword ptr [ESI + 0x8],0x0       ; 1000c6e0
    TEST EBX,EBX                        ; 1000c6e7
    JZ 0x1000c758                       ; 1000c6e9
        ;   XREF to: 1000c758 (CONDITIONAL_JUMP)  ; LAB_1000c758
    MOV EBP,dword ptr [ESP + 0x20]      ; 1000c6eb
    LEA ECX,[ESP + 0x10]                ; 1000c6ef
        ;   Label: LAB_1000c6ef
    MOV EAX,dword ptr [ESI]             ; 1000c6f3
    MOV EDX,dword ptr [ESI + 0x4]       ; 1000c6f5
    PUSH ESI                            ; 1000c6f8
    MOV dword ptr [ECX],EAX             ; 1000c6f9
    MOV EAX,dword ptr [ESI + 0x8]       ; 1000c6fb
    MOV dword ptr [ECX + 0x4],EDX       ; 1000c6fe
    MOV dword ptr [ECX + 0x8],EAX       ; 1000c701
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000c704
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    ADD ESP,0x4                         ; 1000c709
    DEC EBX                             ; 1000c70c
    INC EBP                             ; 1000c70d
    PUSH ESI                            ; 1000c70e
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000c70f
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    LEA ECX,[ESP + 0x14]                ; 1000c714
    ADD ESP,0x4                         ; 1000c718
    PUSH ECX                            ; 1000c71b
    PUSH ESI                            ; 1000c71c
    CALL crt_math.c__add_12_FUN_1000c5d0 ; 1000c71d
        ;   XREF to: 1000c5d0 (UNCONDITIONAL_CALL)  ; void crt_math.c__add_12_FUN_1000c5d0(uint * a, uint * b)
    ADD ESP,0x8                         ; 1000c722
    PUSH ESI                            ; 1000c725
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000c726
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    MOVSX ECX,byte ptr [EBP + -0x1]     ; 1000c72b
    MOV dword ptr [ESP + 0x18],0x0      ; 1000c72f
    MOV dword ptr [ESP + 0x1c],0x0      ; 1000c737
    MOV dword ptr [ESP + 0x14],ECX      ; 1000c73f
    LEA ECX,[ESP + 0x14]                ; 1000c743
    ADD ESP,0x4                         ; 1000c747
    PUSH ECX                            ; 1000c74a
    PUSH ESI                            ; 1000c74b
    CALL crt_math.c__add_12_FUN_1000c5d0 ; 1000c74c
        ;   XREF to: 1000c5d0 (UNCONDITIONAL_CALL)  ; void crt_math.c__add_12_FUN_1000c5d0(uint * a, uint * b)
    ADD ESP,0x8                         ; 1000c751
    TEST EBX,EBX                        ; 1000c754
    JNZ 0x1000c6ef                      ; 1000c756
        ;   XREF to: 1000c6ef (CONDITIONAL_JUMP)  ; LAB_1000c6ef
    CMP dword ptr [ESI + 0x8],0x0       ; 1000c758
        ;   Label: LAB_1000c758
    JNZ 0x1000c785                      ; 1000c75c
        ;   XREF to: 1000c785 (CONDITIONAL_JUMP)  ; LAB_1000c785
    SUB DI,0x10                         ; 1000c75e
        ;   Label: LAB_1000c75e
    MOV EDX,dword ptr [ESI + 0x4]       ; 1000c762
    MOV ECX,EDX                         ; 1000c765
    MOV EAX,dword ptr [ESI]             ; 1000c767
    SHR ECX,0x10                        ; 1000c769
    MOV EBX,EAX                         ; 1000c76c
    SHL EDX,0x10                        ; 1000c76e
    MOV dword ptr [ESI + 0x8],ECX       ; 1000c771
    SHR EBX,0x10                        ; 1000c774
    SHL EAX,0x10                        ; 1000c777
    OR EDX,EBX                          ; 1000c77a
    MOV dword ptr [ESI + 0x4],EDX       ; 1000c77c
    MOV dword ptr [ESI],EAX             ; 1000c77f
    TEST ECX,ECX                        ; 1000c781
    JZ 0x1000c75e                       ; 1000c783
        ;   XREF to: 1000c75e (CONDITIONAL_JUMP)  ; LAB_1000c75e
    TEST byte ptr [ESI + 0x9],0x80      ; 1000c785
        ;   Label: LAB_1000c785
    JNZ 0x1000c79c                      ; 1000c789
        ;   XREF to: 1000c79c (CONDITIONAL_JUMP)  ; LAB_1000c79c
    DEC DI                              ; 1000c78b
        ;   Label: LAB_1000c78b
    PUSH ESI                            ; 1000c78d
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000c78e
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    ADD ESP,0x4                         ; 1000c793
    TEST byte ptr [ESI + 0x9],0x80      ; 1000c796
    JZ 0x1000c78b                       ; 1000c79a
        ;   XREF to: 1000c78b (CONDITIONAL_JUMP)  ; LAB_1000c78b
    MOV word ptr [ESI + 0xa],DI         ; 1000c79c
        ;   Label: LAB_1000c79c
    POP EBP                             ; 1000c7a0
    POP EDI                             ; 1000c7a1
    POP ESI                             ; 1000c7a2
    POP EBX                             ; 1000c7a3
    ADD ESP,0xc                         ; 1000c7a4
    RET                                 ; 1000c7a7

