; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_004f9cb0(STrianglePackedIndices *triangle)
;
; Parameters:
; STrianglePackedIndices * Stack[0x4]:4   triangle
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0 at 00461cff
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_00461720 at 0046196c
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5028
;   undefined4 DAT_006b0280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9cb0
        ;   Label: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0
    PUSH ESI                            ; 004f9cb1
    PUSH EDI                            ; 004f9cb2
    PUSH EBP                            ; 004f9cb3
    MOV EBP,ESP                         ; 004f9cb4
    SUB ESP,0x14                        ; 004f9cb6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f9cb9
    XOR EDX,EDX                         ; 004f9cbc
    MOV DX,word ptr [EBX]               ; 004f9cbe
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f9cc1
    MOV ECX,0x5c5014                    ; 004f9cc8 | DAT_005c5014
    SUB EAX,EDX                         ; 004f9ccd
    XOR EDX,EDX                         ; 004f9ccf
    SHL EAX,0x4                         ; 004f9cd1
    MOV DX,word ptr [EBX + 0x2]         ; 004f9cd4
    ADD ECX,EAX                         ; 004f9cd8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f9cda
    SUB EAX,EDX                         ; 004f9ce1
    SHL EAX,0x4                         ; 004f9ce3
    MOV BX,word ptr [EBX + 0x4]         ; 004f9ce6
    ADD EAX,0x5c5014                    ; 004f9cea | DAT_005c5014
    AND EBX,0xffff                      ; 004f9cef
    LEA EDX,[EBX*0x4 + 0x0]             ; 004f9cf5
    SUB EDX,EBX                         ; 004f9cfc
    SHL EDX,0x4                         ; 004f9cfe
    MOV EBX,dword ptr [0x006b0280]      ; 004f9d01 | DAT_006b0280
    ADD EDX,0x5c5014                    ; 004f9d07 | DAT_005c5014
    CMP EBX,0x1                         ; 004f9d0d
    JNZ 0x004f9d7a                      ; 004f9d10
        ;   XREF to: 004f9d7a (CONDITIONAL_JUMP)  ; LAB_004f9d7a
    MOV EDI,dword ptr [ECX + 0x10]      ; 004f9d12 | DAT_005c5024
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9d15 | DAT_005c5024
    SUB EBX,EDI                         ; 004f9d18
    MOV dword ptr [EBP + -0x14],EBX     ; 004f9d1a
    MOV EBX,dword ptr [EAX + 0x14]      ; 004f9d1d | DAT_005c5028
    MOV ESI,dword ptr [ECX + 0x14]      ; 004f9d20 | DAT_005c5028
    SUB EBX,ESI                         ; 004f9d23
    MOV dword ptr [EBP + -0x10],EBX     ; 004f9d25
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f9d28 | DAT_005c5024
    MOV EDI,dword ptr [EAX + 0x10]      ; 004f9d2b | DAT_005c5024
    SUB ECX,EDI                         ; 004f9d2e
    MOV dword ptr [EBP + -0xc],ECX      ; 004f9d30
    MOV EDX,dword ptr [EDX + 0x14]      ; 004f9d33 | DAT_005c5028
    MOV ECX,dword ptr [EAX + 0x14]      ; 004f9d36 | DAT_005c5028
    SUB EDX,ECX                         ; 004f9d39
    MOV dword ptr [EBP + -0x8],EDX      ; 004f9d3b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 004f9d3e
        ;   Label: LAB_004f9d3e
    IMUL dword ptr [EBP + 0xfffffff8]   ; 004f9d44
    MOV EBX,EAX                         ; 004f9d4a
    MOV ECX,EDX                         ; 004f9d4c
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 004f9d4e
    IMUL dword ptr [EBP + 0xfffffff4]   ; 004f9d54
    SUB EAX,EBX                         ; 004f9d5a
    SBB EDX,ECX                         ; 004f9d5c
    MOV EAX,0x0                         ; 004f9d5e
    JGE 0x004f9d6a                      ; 004f9d63
        ;   XREF to: 004f9d6a (CONDITIONAL_JUMP)  ; LAB_004f9d6a
    MOV EAX,0x1                         ; 004f9d65
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 004f9d6a
        ;   Label: LAB_004f9d6a
    MOV EAX,dword ptr [EBP + -0x4]      ; 004f9d70
    MOV ESP,EBP                         ; 004f9d73
    POP EBP                             ; 004f9d75
    POP EDI                             ; 004f9d76
    POP ESI                             ; 004f9d77
    POP EBX                             ; 004f9d78
    RET                                 ; 004f9d79
    MOV ESI,dword ptr [ECX + 0x10]      ; 004f9d7a | DAT_005c5024
        ;   Label: LAB_004f9d7a
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9d7d | DAT_005c5024
    SUB EBX,ESI                         ; 004f9d80
    MOV dword ptr [EBP + -0xc],EBX      ; 004f9d82
    MOV EBX,dword ptr [EAX + 0x14]      ; 004f9d85 | DAT_005c5028
    MOV EDI,dword ptr [ECX + 0x14]      ; 004f9d88 | DAT_005c5028
    SUB EBX,EDI                         ; 004f9d8b
    MOV dword ptr [EBP + -0x8],EBX      ; 004f9d8d
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f9d90 | DAT_005c5024
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9d93 | DAT_005c5024
    SUB ECX,EBX                         ; 004f9d96
    MOV dword ptr [EBP + -0x14],ECX     ; 004f9d98
    MOV EDX,dword ptr [EDX + 0x14]      ; 004f9d9b | DAT_005c5028
    MOV ESI,dword ptr [EAX + 0x14]      ; 004f9d9e | DAT_005c5028
    SUB EDX,ESI                         ; 004f9da1
    MOV dword ptr [EBP + -0x10],EDX     ; 004f9da3
    JMP 0x004f9d3e                      ; 004f9da6
        ;   XREF to: 004f9d3e (UNCONDITIONAL_JUMP)  ; LAB_004f9d3e

