; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_getTriangleWindingFromIndices1_FUN_004f9ad0(SMRGLPrimitiveTriangle *triangle)
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
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0 at 0046168e
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5028
;   undefined4 DAT_006b0280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9ad0
        ;   Label: engine_prim.c_getTriangleWindingFromIndices1_FUN_004f9ad0
    PUSH ESI                            ; 004f9ad1
    PUSH EDI                            ; 004f9ad2
    PUSH EBP                            ; 004f9ad3
    MOV EBP,ESP                         ; 004f9ad4
    SUB ESP,0x14                        ; 004f9ad6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f9ad9
    MOV EDX,dword ptr [EBX + 0x18]      ; 004f9adc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f9adf
    SUB EAX,EDX                         ; 004f9ae6
    MOV ECX,0x5c5014                    ; 004f9ae8 | DAT_005c5014
    SHL EAX,0x4                         ; 004f9aed
    MOV EDX,dword ptr [EBX + 0x24]      ; 004f9af0
    ADD ECX,EAX                         ; 004f9af3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f9af5
    MOV EBX,dword ptr [EBX + 0x30]      ; 004f9afc
    SUB EAX,EDX                         ; 004f9aff
    LEA EDX,[EBX*0x4 + 0x0]             ; 004f9b01
    SHL EAX,0x4                         ; 004f9b08
    SUB EDX,EBX                         ; 004f9b0b
    ADD EAX,0x5c5014                    ; 004f9b0d | DAT_005c5014
    SHL EDX,0x4                         ; 004f9b12
    MOV EBX,dword ptr [0x006b0280]      ; 004f9b15 | DAT_006b0280
    ADD EDX,0x5c5014                    ; 004f9b1b | DAT_005c5014
    CMP EBX,0x1                         ; 004f9b21
    JNZ 0x004f9b8e                      ; 004f9b24
        ;   XREF to: 004f9b8e (CONDITIONAL_JUMP)  ; LAB_004f9b8e
    MOV EDI,dword ptr [ECX + 0x10]      ; 004f9b26 | DAT_005c5024
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9b29 | DAT_005c5024
    SUB EBX,EDI                         ; 004f9b2c
    MOV dword ptr [EBP + -0x14],EBX     ; 004f9b2e
    MOV EBX,dword ptr [EAX + 0x14]      ; 004f9b31 | DAT_005c5028
    MOV ESI,dword ptr [ECX + 0x14]      ; 004f9b34 | DAT_005c5028
    SUB EBX,ESI                         ; 004f9b37
    MOV dword ptr [EBP + -0x10],EBX     ; 004f9b39
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f9b3c | DAT_005c5024
    MOV EDI,dword ptr [EAX + 0x10]      ; 004f9b3f | DAT_005c5024
    SUB ECX,EDI                         ; 004f9b42
    MOV dword ptr [EBP + -0xc],ECX      ; 004f9b44
    MOV EDX,dword ptr [EDX + 0x14]      ; 004f9b47 | DAT_005c5028
    MOV ECX,dword ptr [EAX + 0x14]      ; 004f9b4a | DAT_005c5028
    SUB EDX,ECX                         ; 004f9b4d
    MOV dword ptr [EBP + -0x8],EDX      ; 004f9b4f
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 004f9b52
        ;   Label: LAB_004f9b52
    IMUL dword ptr [EBP + 0xfffffff8]   ; 004f9b58
    MOV EBX,EAX                         ; 004f9b5e
    MOV ECX,EDX                         ; 004f9b60
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 004f9b62
    IMUL dword ptr [EBP + 0xfffffff4]   ; 004f9b68
    SUB EAX,EBX                         ; 004f9b6e
    SBB EDX,ECX                         ; 004f9b70
    MOV EAX,0x0                         ; 004f9b72
    JGE 0x004f9b7e                      ; 004f9b77
        ;   XREF to: 004f9b7e (CONDITIONAL_JUMP)  ; LAB_004f9b7e
    MOV EAX,0x1                         ; 004f9b79
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 004f9b7e
        ;   Label: LAB_004f9b7e
    MOV EAX,dword ptr [EBP + -0x4]      ; 004f9b84
    MOV ESP,EBP                         ; 004f9b87
    POP EBP                             ; 004f9b89
    POP EDI                             ; 004f9b8a
    POP ESI                             ; 004f9b8b
    POP EBX                             ; 004f9b8c
    RET                                 ; 004f9b8d
    MOV ESI,dword ptr [ECX + 0x10]      ; 004f9b8e | DAT_005c5024
        ;   Label: LAB_004f9b8e
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9b91 | DAT_005c5024
    SUB EBX,ESI                         ; 004f9b94
    MOV dword ptr [EBP + -0xc],EBX      ; 004f9b96
    MOV EBX,dword ptr [EAX + 0x14]      ; 004f9b99 | DAT_005c5028
    MOV EDI,dword ptr [ECX + 0x14]      ; 004f9b9c | DAT_005c5028
    SUB EBX,EDI                         ; 004f9b9f
    MOV dword ptr [EBP + -0x8],EBX      ; 004f9ba1
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f9ba4 | DAT_005c5024
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9ba7 | DAT_005c5024
    SUB ECX,EBX                         ; 004f9baa
    MOV dword ptr [EBP + -0x14],ECX     ; 004f9bac
    MOV EDX,dword ptr [EDX + 0x14]      ; 004f9baf | DAT_005c5028
    MOV ESI,dword ptr [EAX + 0x14]      ; 004f9bb2 | DAT_005c5028
    SUB EDX,ESI                         ; 004f9bb5
    MOV dword ptr [EBP + -0x10],EDX     ; 004f9bb7
    JMP 0x004f9b52                      ; 004f9bba
        ;   XREF to: 004f9b52 (UNCONDITIONAL_JUMP)  ; LAB_004f9b52

