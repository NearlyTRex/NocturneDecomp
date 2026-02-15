; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CPoly_restoreVertexPositionsWithFlag_FUN_005cd6f0(CPoly *this_ptr,uint flag_mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd6f0
        ;   Label: shape_superopt.cpp_CPoly_restoreVertexPositionsWithFlag_FUN_005cd6f0
    PUSH ESI                            ; 005cd6f1
    PUSH EDI                            ; 005cd6f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cd6f3
    MOV EDX,dword ptr [ESP + 0x14]      ; 005cd6f7
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cd6fb
    SHL EAX,0x3                         ; 005cd6fe
    MOV EBX,dword ptr [ESI]             ; 005cd701
    MOV ECX,EAX                         ; 005cd703
    SHL EAX,0x3                         ; 005cd705
    MOV EBX,dword ptr [EBX + 0x4]       ; 005cd708
    SUB EAX,ECX                         ; 005cd70b
    ADD EAX,EBX                         ; 005cd70d
    MOV ECX,dword ptr [EAX + 0x34]      ; 005cd70f
    AND ECX,EDX                         ; 005cd712
    CMP ECX,EDX                         ; 005cd714
    JZ 0x005cd771                       ; 005cd716
        ;   XREF to: 005cd771 (CONDITIONAL_JUMP)  ; LAB_005cd771
    MOV EAX,dword ptr [ESI + 0x8]       ; 005cd718
        ;   Label: LAB_005cd718
    SHL EAX,0x3                         ; 005cd71b
    MOV ECX,EAX                         ; 005cd71e
    SHL EAX,0x3                         ; 005cd720
    SUB EAX,ECX                         ; 005cd723
    ADD EAX,EBX                         ; 005cd725
    MOV ECX,dword ptr [EAX + 0x34]      ; 005cd727
    AND ECX,EDX                         ; 005cd72a
    CMP ECX,EDX                         ; 005cd72c
    JNZ 0x005cd755                      ; 005cd72e
        ;   XREF to: 005cd755 (CONDITIONAL_JUMP)  ; LAB_005cd755
    LEA ECX,[EAX + 0x18]                ; 005cd730
    MOV EDI,dword ptr [ECX]             ; 005cd733
    MOV dword ptr [EAX],EDI             ; 005cd735
    MOV EDI,dword ptr [ECX + 0x4]       ; 005cd737
    MOV dword ptr [EAX + 0x4],EDI       ; 005cd73a
    MOV EDI,dword ptr [ECX + 0x8]       ; 005cd73d
    MOV dword ptr [EAX + 0x8],EDI       ; 005cd740
    MOV EDI,dword ptr [ECX + 0xc]       ; 005cd743
    MOV dword ptr [EAX + 0xc],EDI       ; 005cd746
    MOV EDI,dword ptr [ECX + 0x10]      ; 005cd749
    MOV dword ptr [EAX + 0x10],EDI      ; 005cd74c
    MOV EDI,dword ptr [ECX + 0x14]      ; 005cd74f
    MOV dword ptr [EAX + 0x14],EDI      ; 005cd752
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cd755
        ;   Label: LAB_005cd755
    SHL EAX,0x3                         ; 005cd758
    MOV ECX,EAX                         ; 005cd75b
    SHL EAX,0x3                         ; 005cd75d
    SUB EAX,ECX                         ; 005cd760
    ADD EAX,EBX                         ; 005cd762
    MOV ECX,dword ptr [EAX + 0x34]      ; 005cd764
    AND ECX,EDX                         ; 005cd767
    CMP ECX,EDX                         ; 005cd769
    JZ 0x005cd798                       ; 005cd76b
        ;   XREF to: 005cd798 (CONDITIONAL_JUMP)  ; LAB_005cd798
    POP EDI                             ; 005cd76d
    POP ESI                             ; 005cd76e
    POP EBX                             ; 005cd76f
    RET                                 ; 005cd770
    LEA ECX,[EAX + 0x18]                ; 005cd771
        ;   Label: LAB_005cd771
    MOV EDI,dword ptr [ECX]             ; 005cd774
    MOV dword ptr [EAX],EDI             ; 005cd776
    MOV EDI,dword ptr [ECX + 0x4]       ; 005cd778
    MOV dword ptr [EAX + 0x4],EDI       ; 005cd77b
    MOV EDI,dword ptr [ECX + 0x8]       ; 005cd77e
    MOV dword ptr [EAX + 0x8],EDI       ; 005cd781
    MOV EDI,dword ptr [ECX + 0xc]       ; 005cd784
    MOV dword ptr [EAX + 0xc],EDI       ; 005cd787
    MOV EDI,dword ptr [ECX + 0x10]      ; 005cd78a
    MOV dword ptr [EAX + 0x10],EDI      ; 005cd78d
    MOV EDI,dword ptr [ECX + 0x14]      ; 005cd790
    MOV dword ptr [EAX + 0x14],EDI      ; 005cd793
    JMP 0x005cd718                      ; 005cd796
        ;   XREF to: 005cd718 (UNCONDITIONAL_JUMP)  ; LAB_005cd718
    LEA EDX,[EAX + 0x18]                ; 005cd798
        ;   Label: LAB_005cd798
    MOV ECX,dword ptr [EDX]             ; 005cd79b
    MOV dword ptr [EAX],ECX             ; 005cd79d
    MOV ECX,dword ptr [EDX + 0x4]       ; 005cd79f
    MOV dword ptr [EAX + 0x4],ECX       ; 005cd7a2
    MOV ECX,dword ptr [EDX + 0x8]       ; 005cd7a5
    MOV dword ptr [EAX + 0x8],ECX       ; 005cd7a8
    MOV ECX,dword ptr [EDX + 0xc]       ; 005cd7ab
    MOV dword ptr [EAX + 0xc],ECX       ; 005cd7ae
    MOV ECX,dword ptr [EDX + 0x10]      ; 005cd7b1
    MOV dword ptr [EAX + 0x10],ECX      ; 005cd7b4
    MOV ECX,dword ptr [EDX + 0x14]      ; 005cd7b7
    MOV dword ptr [EAX + 0x14],ECX      ; 005cd7ba
    POP EDI                             ; 005cd7bd
    POP ESI                             ; 005cd7be
    POP EBX                             ; 005cd7bf
    RET                                 ; 005cd7c0

