; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister crt_heap_c_CoalesceAndAddFreeBlock_FUN_00568bb0(void *ptr,HeapBlock *heap_block,ushort segment)
;
;
; XREF[1]:
;   crt_unknown.c_ValidateHeapIntegrity_FUN_005638e0 at 005639ad
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00568bb0
        ;   Label: crt_heap.c_CoalesceAndAddFreeBlock_FUN_00568bb0
    PUSH EDI                            ; 00568bb1
    PUSH EBP                            ; 00568bb2
    MOV ECX,EBX                         ; 00568bb3
    TEST EAX,EAX                        ; 00568bb5
    JZ 0x00568cda                       ; 00568bb7
        ;   XREF to: 00568cda (CONDITIONAL_JUMP)  ; LAB_00568cda
    LEA EBX,[EAX + -0x4]                ; 00568bbd
    TEST byte ptr [EBX],0x1             ; 00568bc0
    JZ 0x00568cda                       ; 00568bc3
        ;   XREF to: 00568cda (CONDITIONAL_JUMP)  ; LAB_00568cda
    MOV EDX,dword ptr [EBX]             ; 00568bc9
    AND DL,0xfe                         ; 00568bcb
    LEA EAX,[EBX + EDX*0x1]             ; 00568bce
    MOV ESI,ECX                         ; 00568bd1
    TEST byte ptr [EAX],0x1             ; 00568bd3
    JNZ 0x00568bfa                      ; 00568bd6
        ;   XREF to: 00568bfa (CONDITIONAL_JUMP)  ; LAB_00568bfa
    MOV EDI,dword ptr [EAX]             ; 00568bd8
    ADD EDX,EDI                         ; 00568bda
    MOV dword ptr [EBX],EDX             ; 00568bdc
    CMP EAX,dword ptr [ECX + 0xc]       ; 00568bde
    JNZ 0x00568be6                      ; 00568be1
        ;   XREF to: 00568be6 (CONDITIONAL_JUMP)  ; LAB_00568be6
    MOV dword ptr [ECX + 0xc],EBX       ; 00568be3
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568be6
        ;   Label: LAB_00568be6
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568be9
    MOV dword ptr [EDX + 0x8],EAX       ; 00568bec
    MOV dword ptr [EAX + 0x4],EDX       ; 00568bef
    DEC dword ptr [ESI + 0x1c]          ; 00568bf2
    JMP 0x00568c8e                      ; 00568bf5
        ;   XREF to: 00568c8e (UNCONDITIONAL_JUMP)  ; LAB_00568c8e
    MOV dword ptr [EBX],EDX             ; 00568bfa
        ;   Label: LAB_00568bfa
    MOV EAX,dword ptr [ECX + 0xc]       ; 00568bfc
    CMP EBX,EAX                         ; 00568bff
    JNC 0x00568c19                      ; 00568c01
        ;   XREF to: 00568c19 (CONDITIONAL_JUMP)  ; LAB_00568c19
    CMP EBX,dword ptr [EAX + 0x4]       ; 00568c03
    JA 0x00568c8e                       ; 00568c06
        ;   XREF to: 00568c8e (CONDITIONAL_JUMP)  ; LAB_00568c8e
    MOV EAX,dword ptr [ECX + 0x28]      ; 00568c0c
    CMP EBX,EAX                         ; 00568c0f
    JC 0x00568c8e                       ; 00568c11
        ;   XREF to: 00568c8e (CONDITIONAL_JUMP)  ; LAB_00568c8e
    JMP 0x00568c32                      ; 00568c17
        ;   XREF to: 00568c32 (UNCONDITIONAL_JUMP)  ; LAB_00568c32
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568c19
        ;   Label: LAB_00568c19
    CMP EBX,EAX                         ; 00568c1c
    JC 0x00568c8e                       ; 00568c1e
        ;   XREF to: 00568c8e (CONDITIONAL_JUMP)  ; LAB_00568c8e
    LEA EAX,[ECX + 0x20]                ; 00568c24
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568c27
    CMP EBX,EDX                         ; 00568c2a
    JA 0x00568c8e                       ; 00568c2c
        ;   XREF to: 00568c8e (CONDITIONAL_JUMP)  ; LAB_00568c8e
    MOV EDI,dword ptr [ESI + 0x1c]      ; 00568c32
        ;   Label: LAB_00568c32
    MOV EAX,dword ptr [ESI + 0x18]      ; 00568c35
    XOR EDX,EDX                         ; 00568c38
    LEA ECX,[EDI + 0x1]                 ; 00568c3a
    DIV ECX                             ; 00568c3d
    MOV ECX,EAX                         ; 00568c3f
    CMP EAX,EDI                         ; 00568c41
    JNC 0x00568c6d                      ; 00568c43
        ;   XREF to: 00568c6d (CONDITIONAL_JUMP)  ; LAB_00568c6d
    MOV EAX,dword ptr [ESI + 0x18]      ; 00568c45
    SUB EAX,EDI                         ; 00568c48
    ADD ECX,ECX                         ; 00568c4a
    CMP EAX,EDI                         ; 00568c4c
    JA 0x00568c55                       ; 00568c4e
        ;   XREF to: 00568c55 (CONDITIONAL_JUMP)  ; LAB_00568c55
    MOV ECX,0xffffffff                  ; 00568c50
    MOV EAX,dword ptr [EBX]             ; 00568c55
        ;   Label: LAB_00568c55
    ADD EAX,EBX                         ; 00568c57
    MOV EDX,dword ptr [EAX]             ; 00568c59
        ;   Label: LAB_00568c59
    TEST DL,0x1                         ; 00568c5b
    JZ 0x00568c8e                       ; 00568c5e
        ;   XREF to: 00568c8e (CONDITIONAL_JUMP)  ; LAB_00568c8e
    CMP EDX,-0x1                        ; 00568c60
    JZ 0x00568c6d                       ; 00568c63
        ;   XREF to: 00568c6d (CONDITIONAL_JUMP)  ; LAB_00568c6d
    AND DL,0xfe                         ; 00568c65
    ADD EAX,EDX                         ; 00568c68
    DEC ECX                             ; 00568c6a
    JNZ 0x00568c59                      ; 00568c6b
        ;   XREF to: 00568c59 (CONDITIONAL_JUMP)  ; LAB_00568c59
    MOV EAX,dword ptr [ESI + 0xc]       ; 00568c6d
        ;   Label: LAB_00568c6d
    CMP EBX,EAX                         ; 00568c70
    JNC 0x00568c77                      ; 00568c72
        ;   XREF to: 00568c77 (CONDITIONAL_JUMP)  ; LAB_00568c77
    MOV EAX,dword ptr [ESI + 0x28]      ; 00568c74
    CMP EBX,EAX                         ; 00568c77
        ;   Label: LAB_00568c77
    JC 0x00568c8e                       ; 00568c79
        ;   XREF to: 00568c8e (CONDITIONAL_JUMP)  ; LAB_00568c8e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568c7b
    CMP EBX,EAX                         ; 00568c7e
    JC 0x00568c8e                       ; 00568c80
        ;   XREF to: 00568c8e (CONDITIONAL_JUMP)  ; LAB_00568c8e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568c82
    CMP EBX,EAX                         ; 00568c85
    JC 0x00568c8e                       ; 00568c87
        ;   XREF to: 00568c8e (CONDITIONAL_JUMP)  ; LAB_00568c8e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568c89
    JMP 0x00568c77                      ; 00568c8c
        ;   XREF to: 00568c77 (UNCONDITIONAL_JUMP)  ; LAB_00568c77
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568c8e
        ;   Label: LAB_00568c8e
    MOV EDI,dword ptr [EDX]             ; 00568c91
    ADD EDI,EDX                         ; 00568c93
    MOV ECX,dword ptr [EBX]             ; 00568c95
    CMP EDI,EBX                         ; 00568c97
    JNZ 0x00568cad                      ; 00568c99
        ;   XREF to: 00568cad (CONDITIONAL_JUMP)  ; LAB_00568cad
    MOV EBP,dword ptr [EDX]             ; 00568c9b
    ADD ECX,EBP                         ; 00568c9d
    MOV dword ptr [EDX],ECX             ; 00568c9f
    CMP EBX,dword ptr [ESI + 0xc]       ; 00568ca1
    JNZ 0x00568ca9                      ; 00568ca4
        ;   XREF to: 00568ca9 (CONDITIONAL_JUMP)  ; LAB_00568ca9
    MOV dword ptr [ESI + 0xc],EDX       ; 00568ca6
    MOV EBX,EDX                         ; 00568ca9
        ;   Label: LAB_00568ca9
    JMP 0x00568cbc                      ; 00568cab
        ;   XREF to: 00568cbc (UNCONDITIONAL_JUMP)  ; LAB_00568cbc
    INC dword ptr [ESI + 0x1c]          ; 00568cad
        ;   Label: LAB_00568cad
    MOV dword ptr [EBX + 0x8],EAX       ; 00568cb0
    MOV dword ptr [EBX + 0x4],EDX       ; 00568cb3
    MOV dword ptr [EDX + 0x8],EBX       ; 00568cb6
    MOV dword ptr [EAX + 0x4],EBX       ; 00568cb9
    MOV EDX,dword ptr [ESI + 0x18]      ; 00568cbc
        ;   Label: LAB_00568cbc
    DEC EDX                             ; 00568cbf
    MOV EDI,dword ptr [ESI + 0xc]       ; 00568cc0
    MOV dword ptr [ESI + 0x18],EDX      ; 00568cc3
    CMP EBX,EDI                         ; 00568cc6
    JNC 0x00568cd2                      ; 00568cc8
        ;   XREF to: 00568cd2 (CONDITIONAL_JUMP)  ; LAB_00568cd2
    CMP ECX,dword ptr [ESI + 0x10]      ; 00568cca
    JBE 0x00568cd2                      ; 00568ccd
        ;   XREF to: 00568cd2 (CONDITIONAL_JUMP)  ; LAB_00568cd2
    MOV dword ptr [ESI + 0x10],ECX      ; 00568ccf
    CMP ECX,dword ptr [ESI + 0x14]      ; 00568cd2
        ;   Label: LAB_00568cd2
    JBE 0x00568cda                      ; 00568cd5
        ;   XREF to: 00568cda (CONDITIONAL_JUMP)  ; LAB_00568cda
    MOV dword ptr [ESI + 0x14],ECX      ; 00568cd7
    POP EBP                             ; 00568cda
        ;   Label: LAB_00568cda
    POP EDI                             ; 00568cdb
    POP ESI                             ; 00568cdc
    RET                                 ; 00568cdd

