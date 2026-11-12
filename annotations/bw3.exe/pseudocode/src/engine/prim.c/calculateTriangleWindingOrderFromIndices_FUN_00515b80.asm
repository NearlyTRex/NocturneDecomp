; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_calculateTriangleWindingOrderFromIndices_FUN_00515b80(SMRGLPrimitiveTriangle *triangle)
;
; Parameters:
; SMRGLPrimitiveTriangle * Stack[0x4]:4   triangle
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960 at 0046db3e
;
; Referenced Globals:
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b028
;   undefined4 DAT_007303fc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515b80
        ;   Label: engine_prim.c_calculateTriangleWindingOrderFromIndices_FUN_00515b80
    PUSH ESI                            ; 00515b81
    PUSH EDI                            ; 00515b82
    PUSH EBP                            ; 00515b83
    MOV EBP,ESP                         ; 00515b84
    SUB ESP,0x14                        ; 00515b86
    MOV EBX,dword ptr [EBP + 0x14]      ; 00515b89
    MOV EDX,dword ptr [EBX + 0x18]      ; 00515b8c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00515b8f
    SUB EAX,EDX                         ; 00515b96
    MOV ECX,0x60b014                    ; 00515b98 | DAT_0060b014
    SHL EAX,0x4                         ; 00515b9d
    MOV EDX,dword ptr [EBX + 0x24]      ; 00515ba0
    ADD ECX,EAX                         ; 00515ba3
    LEA EAX,[EDX*0x4 + 0x0]             ; 00515ba5
    MOV EBX,dword ptr [EBX + 0x30]      ; 00515bac
    SUB EAX,EDX                         ; 00515baf
    LEA EDX,[EBX*0x4 + 0x0]             ; 00515bb1
    SHL EAX,0x4                         ; 00515bb8
    SUB EDX,EBX                         ; 00515bbb
    ADD EAX,0x60b014                    ; 00515bbd | DAT_0060b014
    SHL EDX,0x4                         ; 00515bc2
    MOV EBX,dword ptr [0x007303fc]      ; 00515bc5 | DAT_007303fc
    ADD EDX,0x60b014                    ; 00515bcb | DAT_0060b014
    CMP EBX,0x1                         ; 00515bd1
    JNZ 0x00515c3e                      ; 00515bd4
        ;   XREF to: 00515c3e (CONDITIONAL_JUMP)  ; LAB_00515c3e
    MOV EDI,dword ptr [ECX + 0x10]      ; 00515bd6 | DAT_0060b024
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515bd9 | DAT_0060b024
    SUB EBX,EDI                         ; 00515bdc
    MOV dword ptr [EBP + -0x14],EBX     ; 00515bde
    MOV EBX,dword ptr [EAX + 0x14]      ; 00515be1 | DAT_0060b028
    MOV ESI,dword ptr [ECX + 0x14]      ; 00515be4 | DAT_0060b028
    SUB EBX,ESI                         ; 00515be7
    MOV dword ptr [EBP + -0x10],EBX     ; 00515be9
    MOV ECX,dword ptr [EDX + 0x10]      ; 00515bec | DAT_0060b024
    MOV EDI,dword ptr [EAX + 0x10]      ; 00515bef | DAT_0060b024
    SUB ECX,EDI                         ; 00515bf2
    MOV dword ptr [EBP + -0xc],ECX      ; 00515bf4
    MOV EDX,dword ptr [EDX + 0x14]      ; 00515bf7 | DAT_0060b028
    MOV ECX,dword ptr [EAX + 0x14]      ; 00515bfa | DAT_0060b028
    SUB EDX,ECX                         ; 00515bfd
    MOV dword ptr [EBP + -0x8],EDX      ; 00515bff
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00515c02
        ;   Label: LAB_00515c02
    IMUL dword ptr [EBP + 0xfffffff8]   ; 00515c08
    MOV EBX,EAX                         ; 00515c0e
    MOV ECX,EDX                         ; 00515c10
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 00515c12
    IMUL dword ptr [EBP + 0xfffffff4]   ; 00515c18
    SUB EAX,EBX                         ; 00515c1e
    SBB EDX,ECX                         ; 00515c20
    MOV EAX,0x0                         ; 00515c22
    JGE 0x00515c2e                      ; 00515c27
        ;   XREF to: 00515c2e (CONDITIONAL_JUMP)  ; LAB_00515c2e
    MOV EAX,0x1                         ; 00515c29
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 00515c2e
        ;   Label: LAB_00515c2e
    MOV EAX,dword ptr [EBP + -0x4]      ; 00515c34
    MOV ESP,EBP                         ; 00515c37
    POP EBP                             ; 00515c39
    POP EDI                             ; 00515c3a
    POP ESI                             ; 00515c3b
    POP EBX                             ; 00515c3c
    RET                                 ; 00515c3d
    MOV ESI,dword ptr [ECX + 0x10]      ; 00515c3e | DAT_0060b024
        ;   Label: LAB_00515c3e
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515c41 | DAT_0060b024
    SUB EBX,ESI                         ; 00515c44
    MOV dword ptr [EBP + -0xc],EBX      ; 00515c46
    MOV EBX,dword ptr [EAX + 0x14]      ; 00515c49 | DAT_0060b028
    MOV EDI,dword ptr [ECX + 0x14]      ; 00515c4c | DAT_0060b028
    SUB EBX,EDI                         ; 00515c4f
    MOV dword ptr [EBP + -0x8],EBX      ; 00515c51
    MOV ECX,dword ptr [EDX + 0x10]      ; 00515c54 | DAT_0060b024
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515c57 | DAT_0060b024
    SUB ECX,EBX                         ; 00515c5a
    MOV dword ptr [EBP + -0x14],ECX     ; 00515c5c
    MOV EDX,dword ptr [EDX + 0x14]      ; 00515c5f | DAT_0060b028
    MOV ESI,dword ptr [EAX + 0x14]      ; 00515c62 | DAT_0060b028
    SUB EDX,ESI                         ; 00515c65
    MOV dword ptr [EBP + -0x10],EDX     ; 00515c67
    JMP 0x00515c02                      ; 00515c6a
        ;   XREF to: 00515c02 (UNCONDITIONAL_JUMP)  ; LAB_00515c02

