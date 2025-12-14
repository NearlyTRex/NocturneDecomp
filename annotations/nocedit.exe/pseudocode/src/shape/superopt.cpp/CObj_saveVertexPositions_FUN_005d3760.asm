; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_saveVertexPositions_FUN_005d3760(CObj * this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005d3760
        ;   Label: shape_superopt.cpp_CObj_saveVertexPositions_FUN_005d3760
    MOV ESI,dword ptr [ESP + 0x8]       ; 005d3761
    MOV EDX,dword ptr [ESI]             ; 005d3765
    XOR ECX,ECX                         ; 005d3767
    TEST EDX,EDX                        ; 005d3769
    JBE 0x005d37a7                      ; 005d376b
        ;   XREF to: 005d37a7 (CONDITIONAL_JUMP)  ; LAB_005d37a7
    PUSH EDI                            ; 005d376d
    PUSH EBX                            ; 005d376e
    XOR EBX,EBX                         ; 005d376f
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d3771
        ;   Label: LAB_005d3771
    ADD EAX,EBX                         ; 005d3774
    INC ECX                             ; 005d3776
    LEA EDX,[EAX + 0x18]                ; 005d3777
    MOV EDI,dword ptr [EAX]             ; 005d377a
    MOV dword ptr [EDX],EDI             ; 005d377c
    MOV EDI,dword ptr [EAX + 0x4]       ; 005d377e
    MOV dword ptr [EDX + 0x4],EDI       ; 005d3781
    MOV EDI,dword ptr [EAX + 0x8]       ; 005d3784
    MOV dword ptr [EDX + 0x8],EDI       ; 005d3787
    MOV EDI,dword ptr [EAX + 0xc]       ; 005d378a
    MOV dword ptr [EDX + 0xc],EDI       ; 005d378d
    MOV EDI,dword ptr [EAX + 0x10]      ; 005d3790
    MOV dword ptr [EDX + 0x10],EDI      ; 005d3793
    MOV EDI,dword ptr [EAX + 0x14]      ; 005d3796
    MOV dword ptr [EDX + 0x14],EDI      ; 005d3799
    MOV EDI,dword ptr [ESI]             ; 005d379c
    ADD EBX,0x38                        ; 005d379e
    CMP ECX,EDI                         ; 005d37a1
    JC 0x005d3771                       ; 005d37a3
        ;   XREF to: 005d3771 (CONDITIONAL_JUMP)  ; LAB_005d3771
    POP EBX                             ; 005d37a5
    POP EDI                             ; 005d37a6
    POP ESI                             ; 005d37a7
        ;   Label: LAB_005d37a7
    RET                                 ; 005d37a8

