; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0(CObj *this_ptr,uint flag_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d38b0
        ;   Label: shape_superopt.cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0
    PUSH ESI                            ; 005d38b1
    PUSH EDI                            ; 005d38b2
    PUSH EBP                            ; 005d38b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005d38b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005d38b8
    MOV EAX,dword ptr [EBX + 0x10]      ; 005d38bc
    AND EAX,ESI                         ; 005d38bf
    CMP EAX,ESI                         ; 005d38c1
    JZ 0x005d3917                       ; 005d38c3
        ;   XREF to: 005d3917 (CONDITIONAL_JUMP)  ; LAB_005d3917
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d38c5
    XOR EBP,EBP                         ; 005d38c8
    TEST EDX,EDX                        ; 005d38ca
    JBE 0x005d38f0                      ; 005d38cc
        ;   XREF to: 005d38f0 (CONDITIONAL_JUMP)  ; LAB_005d38f0
    XOR EDI,EDI                         ; 005d38ce
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d38d0
        ;   Label: LAB_005d38d0
    PUSH ESI                            ; 005d38d3
    ADD EAX,EDI                         ; 005d38d4
    PUSH EAX                            ; 005d38d6
    MOV EDX,dword ptr [EAX + 0x64]      ; 005d38d7
    INC EBP                             ; 005d38da
    ADD EDI,0x68                        ; 005d38db
    CALL dword ptr [EDX + 0x40]         ; 005d38de
    MOV ECX,dword ptr [EBX + 0x8]       ; 005d38e1
    ADD ESP,0x8                         ; 005d38e4
    CMP EBP,ECX                         ; 005d38e7
    JC 0x005d38d0                       ; 005d38e9
        ;   XREF to: 005d38d0 (CONDITIONAL_JUMP)  ; LAB_005d38d0
    LEA EAX,[EAX]                       ; 005d38eb
    MOV ECX,ECX                         ; 005d38ee
    MOV EDI,dword ptr [EBX]             ; 005d38f0
        ;   Label: LAB_005d38f0
    XOR ECX,ECX                         ; 005d38f2
    TEST EDI,EDI                        ; 005d38f4
    JBE 0x005d3912                      ; 005d38f6
        ;   XREF to: 005d3912 (CONDITIONAL_JUMP)  ; LAB_005d3912
    XOR EDI,EDI                         ; 005d38f8
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d38fa
        ;   Label: LAB_005d38fa
    ADD EAX,EDI                         ; 005d38fd
    MOV EDX,dword ptr [EAX + 0x34]      ; 005d38ff
    AND EDX,ESI                         ; 005d3902
    CMP EDX,ESI                         ; 005d3904
    JZ 0x005d3929                       ; 005d3906
        ;   XREF to: 005d3929 (CONDITIONAL_JUMP)  ; LAB_005d3929
    INC ECX                             ; 005d3908
    MOV EBP,dword ptr [EBX]             ; 005d3909
    ADD EDI,0x38                        ; 005d390b
    CMP ECX,EBP                         ; 005d390e
    JC 0x005d38fa                       ; 005d3910
        ;   XREF to: 005d38fa (CONDITIONAL_JUMP)  ; LAB_005d38fa
    POP EBP                             ; 005d3912
        ;   Label: LAB_005d3912
    POP EDI                             ; 005d3913
    POP ESI                             ; 005d3914
    POP EBX                             ; 005d3915
    RET                                 ; 005d3916
    PUSH EBX                            ; 005d3917
        ;   Label: LAB_005d3917
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d3918
    CALL dword ptr [EAX + 0x98]         ; 005d391b
    ADD ESP,0x4                         ; 005d3921
    POP EBP                             ; 005d3924
    POP EDI                             ; 005d3925
    POP ESI                             ; 005d3926
    POP EBX                             ; 005d3927
    RET                                 ; 005d3928
    LEA EDX,[EAX + 0x18]                ; 005d3929
        ;   Label: LAB_005d3929
    MOV EBP,dword ptr [EDX]             ; 005d392c
    MOV dword ptr [EAX],EBP             ; 005d392e
    MOV EBP,dword ptr [EDX + 0x4]       ; 005d3930
    MOV dword ptr [EAX + 0x4],EBP       ; 005d3933
    MOV EBP,dword ptr [EDX + 0x8]       ; 005d3936
    MOV dword ptr [EAX + 0x8],EBP       ; 005d3939
    MOV EBP,dword ptr [EDX + 0xc]       ; 005d393c
    MOV dword ptr [EAX + 0xc],EBP       ; 005d393f
    MOV EBP,dword ptr [EDX + 0x10]      ; 005d3942
    MOV dword ptr [EAX + 0x10],EBP      ; 005d3945
    MOV EBP,dword ptr [EDX + 0x14]      ; 005d3948
    MOV dword ptr [EAX + 0x14],EBP      ; 005d394b
    INC ECX                             ; 005d394e
    MOV EBP,dword ptr [EBX]             ; 005d394f
    ADD EDI,0x38                        ; 005d3951
    CMP ECX,EBP                         ; 005d3954
    JC 0x005d38fa                       ; 005d3956
        ;   XREF to: 005d38fa (CONDITIONAL_JUMP)  ; LAB_005d38fa
    POP EBP                             ; 005d3958
    POP EDI                             ; 005d3959
    POP ESI                             ; 005d395a
    POP EBX                             ; 005d395b
    RET                                 ; 005d395c

