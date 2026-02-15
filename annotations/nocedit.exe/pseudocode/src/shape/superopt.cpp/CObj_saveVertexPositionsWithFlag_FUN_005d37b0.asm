; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0(CObj *this_ptr,uint flag_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d37b0
        ;   Label: shape_superopt.cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0
    PUSH ESI                            ; 005d37b1
    PUSH EDI                            ; 005d37b2
    PUSH EBP                            ; 005d37b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005d37b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005d37b8
    MOV EAX,dword ptr [EBX + 0x10]      ; 005d37bc
    AND EAX,ESI                         ; 005d37bf
    CMP EAX,ESI                         ; 005d37c1
    JZ 0x005d3817                       ; 005d37c3
        ;   XREF to: 005d3817 (CONDITIONAL_JUMP)  ; LAB_005d3817
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d37c5
    XOR EBP,EBP                         ; 005d37c8
    TEST EDX,EDX                        ; 005d37ca
    JBE 0x005d37f0                      ; 005d37cc
        ;   XREF to: 005d37f0 (CONDITIONAL_JUMP)  ; LAB_005d37f0
    XOR EDI,EDI                         ; 005d37ce
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d37d0
        ;   Label: LAB_005d37d0
    PUSH ESI                            ; 005d37d3
    ADD EAX,EDI                         ; 005d37d4
    PUSH EAX                            ; 005d37d6
    MOV EDX,dword ptr [EAX + 0x64]      ; 005d37d7
    INC EBP                             ; 005d37da
    ADD EDI,0x68                        ; 005d37db
    CALL dword ptr [EDX + 0x38]         ; 005d37de
    MOV ECX,dword ptr [EBX + 0x8]       ; 005d37e1
    ADD ESP,0x8                         ; 005d37e4
    CMP EBP,ECX                         ; 005d37e7
    JC 0x005d37d0                       ; 005d37e9
        ;   XREF to: 005d37d0 (CONDITIONAL_JUMP)  ; LAB_005d37d0
    LEA EAX,[EAX]                       ; 005d37eb
    MOV ECX,ECX                         ; 005d37ee
    MOV EDI,dword ptr [EBX]             ; 005d37f0
        ;   Label: LAB_005d37f0
    XOR ECX,ECX                         ; 005d37f2
    TEST EDI,EDI                        ; 005d37f4
    JBE 0x005d3812                      ; 005d37f6
        ;   XREF to: 005d3812 (CONDITIONAL_JUMP)  ; LAB_005d3812
    XOR EDI,EDI                         ; 005d37f8
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d37fa
        ;   Label: LAB_005d37fa
    ADD EAX,EDI                         ; 005d37fd
    MOV EDX,dword ptr [EAX + 0x34]      ; 005d37ff
    AND EDX,ESI                         ; 005d3802
    CMP EDX,ESI                         ; 005d3804
    JZ 0x005d3829                       ; 005d3806
        ;   XREF to: 005d3829 (CONDITIONAL_JUMP)  ; LAB_005d3829
    INC ECX                             ; 005d3808
    MOV EBP,dword ptr [EBX]             ; 005d3809
    ADD EDI,0x38                        ; 005d380b
    CMP ECX,EBP                         ; 005d380e
    JC 0x005d37fa                       ; 005d3810
        ;   XREF to: 005d37fa (CONDITIONAL_JUMP)  ; LAB_005d37fa
    POP EBP                             ; 005d3812
        ;   Label: LAB_005d3812
    POP EDI                             ; 005d3813
    POP ESI                             ; 005d3814
    POP EBX                             ; 005d3815
    RET                                 ; 005d3816
    PUSH EBX                            ; 005d3817
        ;   Label: LAB_005d3817
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d3818
    CALL dword ptr [EAX + 0x90]         ; 005d381b
    ADD ESP,0x4                         ; 005d3821
    POP EBP                             ; 005d3824
    POP EDI                             ; 005d3825
    POP ESI                             ; 005d3826
    POP EBX                             ; 005d3827
    RET                                 ; 005d3828
    LEA EDX,[EAX + 0x18]                ; 005d3829
        ;   Label: LAB_005d3829
    MOV EBP,dword ptr [EAX]             ; 005d382c
    MOV dword ptr [EDX],EBP             ; 005d382e
    MOV EBP,dword ptr [EAX + 0x4]       ; 005d3830
    MOV dword ptr [EDX + 0x4],EBP       ; 005d3833
    MOV EBP,dword ptr [EAX + 0x8]       ; 005d3836
    MOV dword ptr [EDX + 0x8],EBP       ; 005d3839
    MOV EBP,dword ptr [EAX + 0xc]       ; 005d383c
    MOV dword ptr [EDX + 0xc],EBP       ; 005d383f
    MOV EBP,dword ptr [EAX + 0x10]      ; 005d3842
    MOV dword ptr [EDX + 0x10],EBP      ; 005d3845
    MOV EBP,dword ptr [EAX + 0x14]      ; 005d3848
    MOV dword ptr [EDX + 0x14],EBP      ; 005d384b
    INC ECX                             ; 005d384e
    MOV EBP,dword ptr [EBX]             ; 005d384f
    ADD EDI,0x38                        ; 005d3851
    CMP ECX,EBP                         ; 005d3854
    JC 0x005d37fa                       ; 005d3856
        ;   XREF to: 005d37fa (CONDITIONAL_JUMP)  ; LAB_005d37fa
    POP EBP                             ; 005d3858
    POP EDI                             ; 005d3859
    POP ESI                             ; 005d385a
    POP EBX                             ; 005d385b
    RET                                 ; 005d385c

