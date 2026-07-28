; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_heapWalk_FUN_00566ba0(HeapState *heap_state_ptr,Heap *heap_ptr)
;
; Parameters:
; HeapState *      Stack[0x4]:4   heap_state_ptr
; Heap *           Stack[0x8]:4   heap_ptr
;
; XREF[1]:
;   crt_unknown.c_heapCheck_FUN_00566c44 at 00566c57
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566ba0
        ;   Label: crt_unknown.c_heapWalk_FUN_00566ba0
    PUSH EBP                            ; 00566ba1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00566ba2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00566ba6
    TEST EAX,EAX                        ; 00566baa
    JNZ 0x00566bb6                      ; 00566bac
        ;   XREF to: 00566bb6 (CONDITIONAL_JUMP)  ; LAB_00566bb6
    MOV EAX,0x1                         ; 00566bae
    POP EBP                             ; 00566bb3
    POP EBX                             ; 00566bb4
    RET                                 ; 00566bb5
    MOV EDX,dword ptr [ECX]             ; 00566bb6
        ;   Label: LAB_00566bb6
    TEST EDX,EDX                        ; 00566bb8
    JNZ 0x00566bc1                      ; 00566bba
        ;   XREF to: 00566bc1 (CONDITIONAL_JUMP)  ; LAB_00566bc1
    LEA EDX,[EAX + 0x2c]                ; 00566bbc
    JMP 0x00566bf6                      ; 00566bbf
        ;   XREF to: 00566bf6 (UNCONDITIONAL_JUMP)  ; LAB_00566bf6
    MOV EAX,[0x005c1680]                ; 00566bc1 | DAT_005c1680
        ;   Label: LAB_00566bc1
    CMP dword ptr [EAX + 0x8],0x0       ; 00566bc6
    JZ 0x00566be1                       ; 00566bca
        ;   XREF to: 00566be1 (CONDITIONAL_JUMP)  ; LAB_00566be1
    CMP EAX,EDX                         ; 00566bcc
        ;   Label: LAB_00566bcc
    JA 0x00566bd8                       ; 00566bce
        ;   XREF to: 00566bd8 (CONDITIONAL_JUMP)  ; LAB_00566bd8
    MOV EBX,dword ptr [EAX]             ; 00566bd0
    ADD EBX,EAX                         ; 00566bd2
    CMP EBX,EDX                         ; 00566bd4
    JA 0x00566be1                       ; 00566bd6
        ;   XREF to: 00566be1 (CONDITIONAL_JUMP)  ; LAB_00566be1
    MOV EAX,dword ptr [EAX + 0x8]       ; 00566bd8
        ;   Label: LAB_00566bd8
    CMP dword ptr [EAX + 0x8],0x0       ; 00566bdb
    JNZ 0x00566bcc                      ; 00566bdf
        ;   XREF to: 00566bcc (CONDITIONAL_JUMP)  ; LAB_00566bcc
    MOV EBX,dword ptr [EDX]             ; 00566be1
        ;   Label: LAB_00566be1
    AND BL,0xfe                         ; 00566be3
    ADD EBX,EDX                         ; 00566be6
    CMP EBX,EDX                         ; 00566be8
    JA 0x00566bf4                       ; 00566bea
        ;   XREF to: 00566bf4 (CONDITIONAL_JUMP)  ; LAB_00566bf4
    MOV EAX,0x3                         ; 00566bec
    POP EBP                             ; 00566bf1
    POP EBX                             ; 00566bf2
    RET                                 ; 00566bf3
    MOV EDX,EBX                         ; 00566bf4
        ;   Label: LAB_00566bf4
    CMP dword ptr [EDX],-0x1            ; 00566bf6
        ;   Label: LAB_00566bf6
    JNZ 0x00566c1f                      ; 00566bf9
        ;   XREF to: 00566c1f (CONDITIONAL_JUMP)  ; LAB_00566c1f
    MOV EBP,dword ptr [EAX + 0x8]       ; 00566bfb
    TEST EBP,EBP                        ; 00566bfe
    JNZ 0x00566c18                      ; 00566c00
        ;   XREF to: 00566c18 (CONDITIONAL_JUMP)  ; LAB_00566c18
    MOV word ptr [ECX + 0x4],0x0        ; 00566c02
    MOV dword ptr [ECX + 0xa],EBP       ; 00566c08
    MOV dword ptr [ECX + 0x6],EBP       ; 00566c0b
    MOV EAX,0x4                         ; 00566c0e
    MOV dword ptr [ECX],EBP             ; 00566c13
    POP EBP                             ; 00566c15
    POP EBX                             ; 00566c16
    RET                                 ; 00566c17
    MOV EAX,EBP                         ; 00566c18
        ;   Label: LAB_00566c18
    LEA EDX,[EBP + 0x2c]                ; 00566c1a
    JMP 0x00566bf6                      ; 00566c1d
        ;   XREF to: 00566bf6 (UNCONDITIONAL_JUMP)  ; LAB_00566bf6
    MOV dword ptr [ECX + 0xa],0x1       ; 00566c1f
        ;   Label: LAB_00566c1f
    MOV word ptr [ECX + 0x4],DS         ; 00566c26
    MOV dword ptr [ECX],EDX             ; 00566c29
    MOV EAX,dword ptr [EDX]             ; 00566c2b
    AND AL,0xfe                         ; 00566c2d
    MOV dword ptr [ECX + 0x6],EAX       ; 00566c2f
    TEST byte ptr [EDX],0x1             ; 00566c32
    JZ 0x00566c3e                       ; 00566c35
        ;   XREF to: 00566c3e (CONDITIONAL_JUMP)  ; LAB_00566c3e
    MOV dword ptr [ECX + 0xa],0x0       ; 00566c37
    XOR EAX,EAX                         ; 00566c3e
        ;   Label: LAB_00566c3e
    POP EBP                             ; 00566c40
    POP EBX                             ; 00566c41
    RET                                 ; 00566c42

