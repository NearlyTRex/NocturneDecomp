; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_heap.c_CalculateHeapBlockSize_FUN_0060972c(uint * pSize)
;
; Parameters:
; uint *           Stack[0x4]:4   pSize
;
; XREF[1]:
;   crt_heap.c_AllocateNewHeapBlock_FUN_00609668 at 0060968e
;
; Referenced Globals:
;   int g_HeapFlags = 0x10000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060972c
        ;   Label: crt_heap.c_CalculateHeapBlockSize_FUN_0060972c
    MOV EAX,dword ptr [EDX]             ; 00609730
    ADD EAX,0x7                         ; 00609732
    AND AL,0xf8                         ; 00609735
    TEST EAX,EAX                        ; 00609737
    JNZ 0x0060973c                      ; 00609739
        ;   XREF to: 0060973c (CONDITIONAL_JUMP)  ; LAB_0060973c
    RET                                 ; 0060973b
    MOV dword ptr [EDX],EAX             ; 0060973c
        ;   Label: LAB_0060973c
    ADD EAX,0x3c                        ; 0060973e
    CMP EAX,dword ptr [EDX]             ; 00609741
    JNC 0x00609748                      ; 00609743
        ;   XREF to: 00609748 (CONDITIONAL_JUMP)  ; LAB_00609748
    XOR EAX,EAX                         ; 00609745
    RET                                 ; 00609747
    MOV ECX,dword ptr [0x006854f4]      ; 00609748 | g_HeapFlags
        ;   Label: LAB_00609748
    CMP EAX,ECX                         ; 0060974e
    JNC 0x00609756                      ; 00609750
        ;   XREF to: 00609756 (CONDITIONAL_JUMP)  ; LAB_00609756
    MOV EAX,ECX                         ; 00609752
    AND AL,0xfe                         ; 00609754
    MOV dword ptr [EDX],EAX             ; 00609756
        ;   Label: LAB_00609756
    ADD EAX,0xfff                       ; 00609758
    CMP EAX,dword ptr [EDX]             ; 0060975d
    JNC 0x00609764                      ; 0060975f
        ;   XREF to: 00609764 (CONDITIONAL_JUMP)  ; LAB_00609764
    XOR EAX,EAX                         ; 00609761
    RET                                 ; 00609763
    XOR AL,AL                           ; 00609764
        ;   Label: LAB_00609764
    AND AH,0xf0                         ; 00609766
    MOV dword ptr [EDX],EAX             ; 00609769
    TEST EAX,EAX                        ; 0060976b
    SETNZ AL                            ; 0060976d
    AND EAX,0xff                        ; 00609770
    RET                                 ; 00609775

