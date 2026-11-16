; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_getTriangleWindingFromIndices2_FUN_0053df10(SMRGLPrimitiveTriangle *triangle_indices)
;
; Parameters:
; SMRGLPrimitiveTriangle * Stack[0x4]:4   triangle_indices
;
; Referenced Globals:
;   undefined4 DAT_00713a7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053df10
        ;   Label: engine_prim.c_getTriangleWindingFromIndices2_FUN_0053df10
    PUSH ESI                            ; 0053df11
    PUSH EDI                            ; 0053df12
    PUSH EBP                            ; 0053df13
    MOV EBP,ESP                         ; 0053df14
    SUB ESP,0x14                        ; 0053df16
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053df19
    MOV EDX,dword ptr [EBX + 0x18]      ; 0053df1c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053df1f
    SUB EAX,EDX                         ; 0053df26
    MOV ECX,0x629014                    ; 0053df28
    SHL EAX,0x4                         ; 0053df2d
    MOV EDX,dword ptr [EBX + 0x24]      ; 0053df30
    ADD ECX,EAX                         ; 0053df33
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053df35
    MOV EBX,dword ptr [EBX + 0x30]      ; 0053df3c
    SUB EAX,EDX                         ; 0053df3f
    LEA EDX,[EBX*0x4 + 0x0]             ; 0053df41
    SHL EAX,0x4                         ; 0053df48
    SUB EDX,EBX                         ; 0053df4b
    ADD EAX,0x629014                    ; 0053df4d
    SHL EDX,0x4                         ; 0053df52
    MOV EBX,dword ptr [0x00713a7c]      ; 0053df55 | DAT_00713a7c
    ADD EDX,0x629014                    ; 0053df5b
    CMP EBX,0x1                         ; 0053df61
    JNZ 0x0053dfce                      ; 0053df64
        ;   XREF to: 0053dfce (CONDITIONAL_JUMP)  ; LAB_0053dfce
    MOV EDI,dword ptr [ECX + 0x10]      ; 0053df66
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053df69
    SUB EBX,EDI                         ; 0053df6c
    MOV dword ptr [EBP + -0x14],EBX     ; 0053df6e
    MOV EBX,dword ptr [EAX + 0x14]      ; 0053df71
    MOV ESI,dword ptr [ECX + 0x14]      ; 0053df74
    SUB EBX,ESI                         ; 0053df77
    MOV dword ptr [EBP + -0x10],EBX     ; 0053df79
    MOV ECX,dword ptr [EDX + 0x10]      ; 0053df7c
    MOV EDI,dword ptr [EAX + 0x10]      ; 0053df7f
    SUB ECX,EDI                         ; 0053df82
    MOV dword ptr [EBP + -0xc],ECX      ; 0053df84
    MOV EDX,dword ptr [EDX + 0x14]      ; 0053df87
    MOV ECX,dword ptr [EAX + 0x14]      ; 0053df8a
    SUB EDX,ECX                         ; 0053df8d
    MOV dword ptr [EBP + -0x8],EDX      ; 0053df8f
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0053df92
        ;   Label: LAB_0053df92
    IMUL dword ptr [EBP + 0xfffffff8]   ; 0053df98
    MOV EBX,EAX                         ; 0053df9e
    MOV ECX,EDX                         ; 0053dfa0
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 0053dfa2
    IMUL dword ptr [EBP + 0xfffffff4]   ; 0053dfa8
    SUB EAX,EBX                         ; 0053dfae
    SBB EDX,ECX                         ; 0053dfb0
    MOV EAX,0x0                         ; 0053dfb2
    JGE 0x0053dfbe                      ; 0053dfb7
        ;   XREF to: 0053dfbe (CONDITIONAL_JUMP)  ; LAB_0053dfbe
    MOV EAX,0x1                         ; 0053dfb9
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 0053dfbe
        ;   Label: LAB_0053dfbe
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053dfc4
    MOV ESP,EBP                         ; 0053dfc7
    POP EBP                             ; 0053dfc9
    POP EDI                             ; 0053dfca
    POP ESI                             ; 0053dfcb
    POP EBX                             ; 0053dfcc
    RET                                 ; 0053dfcd
    MOV ESI,dword ptr [ECX + 0x10]      ; 0053dfce
        ;   Label: LAB_0053dfce
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053dfd1
    SUB EBX,ESI                         ; 0053dfd4
    MOV dword ptr [EBP + -0xc],EBX      ; 0053dfd6
    MOV EBX,dword ptr [EAX + 0x14]      ; 0053dfd9
    MOV EDI,dword ptr [ECX + 0x14]      ; 0053dfdc
    SUB EBX,EDI                         ; 0053dfdf
    MOV dword ptr [EBP + -0x8],EBX      ; 0053dfe1
    MOV ECX,dword ptr [EDX + 0x10]      ; 0053dfe4
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053dfe7
    SUB ECX,EBX                         ; 0053dfea
    MOV dword ptr [EBP + -0x14],ECX     ; 0053dfec
    MOV EDX,dword ptr [EDX + 0x14]      ; 0053dfef
    MOV ESI,dword ptr [EAX + 0x14]      ; 0053dff2
    SUB EDX,ESI                         ; 0053dff5
    MOV dword ptr [EBP + -0x10],EDX     ; 0053dff7
    JMP 0x0053df92                      ; 0053dffa
        ;   XREF to: 0053df92 (UNCONDITIONAL_JUMP)  ; LAB_0053df92

