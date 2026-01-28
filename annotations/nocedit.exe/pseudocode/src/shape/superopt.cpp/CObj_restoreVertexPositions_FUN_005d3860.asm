; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CObj_restoreVertexPositions_FUN_005d3860(CObj *this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005d3860
        ;   Label: shape_superopt.cpp_CObj_restoreVertexPositions_FUN_005d3860
    MOV ESI,dword ptr [ESP + 0x8]       ; 005d3861
    MOV EDX,dword ptr [ESI]             ; 005d3865
    XOR ECX,ECX                         ; 005d3867
    TEST EDX,EDX                        ; 005d3869
    JBE 0x005d38a7                      ; 005d386b
        ;   XREF to: 005d38a7 (CONDITIONAL_JUMP)  ; LAB_005d38a7
    PUSH EDI                            ; 005d386d
    PUSH EBX                            ; 005d386e
    XOR EBX,EBX                         ; 005d386f
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d3871
        ;   Label: LAB_005d3871
    ADD EAX,EBX                         ; 005d3874
    LEA EDX,[EAX + 0x18]                ; 005d3876
    INC ECX                             ; 005d3879
    MOV EDI,dword ptr [EDX]             ; 005d387a
    MOV dword ptr [EAX],EDI             ; 005d387c
    MOV EDI,dword ptr [EDX + 0x4]       ; 005d387e
    MOV dword ptr [EAX + 0x4],EDI       ; 005d3881
    MOV EDI,dword ptr [EDX + 0x8]       ; 005d3884
    MOV dword ptr [EAX + 0x8],EDI       ; 005d3887
    MOV EDI,dword ptr [EDX + 0xc]       ; 005d388a
    MOV dword ptr [EAX + 0xc],EDI       ; 005d388d
    MOV EDI,dword ptr [EDX + 0x10]      ; 005d3890
    MOV dword ptr [EAX + 0x10],EDI      ; 005d3893
    MOV EDI,dword ptr [EDX + 0x14]      ; 005d3896
    MOV dword ptr [EAX + 0x14],EDI      ; 005d3899
    MOV EDI,dword ptr [ESI]             ; 005d389c
    ADD EBX,0x38                        ; 005d389e
    CMP ECX,EDI                         ; 005d38a1
    JC 0x005d3871                       ; 005d38a3
        ;   XREF to: 005d3871 (CONDITIONAL_JUMP)  ; LAB_005d3871
    POP EBX                             ; 005d38a5
    POP EDI                             ; 005d38a6
    POP ESI                             ; 005d38a7
        ;   Label: LAB_005d38a7
    RET                                 ; 005d38a8

