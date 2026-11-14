; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_calculateTriangleWindingOrderFromIndices_FUN_0051c820(SMRGLPrimitiveTriangle *triangle)
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
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80 at 0046bf5e
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_00622024
;   undefined4 DAT_00622028
;   undefined4 DAT_0070ca7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c820
        ;   Label: engine_prim.c_calculateTriangleWindingOrderFromIndices_FUN_0051c820
    PUSH ESI                            ; 0051c821
    PUSH EDI                            ; 0051c822
    PUSH EBP                            ; 0051c823
    MOV EBP,ESP                         ; 0051c824
    SUB ESP,0x14                        ; 0051c826
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051c829
    MOV EDX,dword ptr [EBX + 0x18]      ; 0051c82c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051c82f
    SUB EAX,EDX                         ; 0051c836
    MOV ECX,0x622014                    ; 0051c838 | DAT_00622014
    SHL EAX,0x4                         ; 0051c83d
    MOV EDX,dword ptr [EBX + 0x24]      ; 0051c840
    ADD ECX,EAX                         ; 0051c843
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051c845
    MOV EBX,dword ptr [EBX + 0x30]      ; 0051c84c
    SUB EAX,EDX                         ; 0051c84f
    LEA EDX,[EBX*0x4 + 0x0]             ; 0051c851
    SHL EAX,0x4                         ; 0051c858
    SUB EDX,EBX                         ; 0051c85b
    ADD EAX,0x622014                    ; 0051c85d | DAT_00622014
    SHL EDX,0x4                         ; 0051c862
    MOV EBX,dword ptr [0x0070ca7c]      ; 0051c865 | DAT_0070ca7c
    ADD EDX,0x622014                    ; 0051c86b | DAT_00622014
    CMP EBX,0x1                         ; 0051c871
    JNZ 0x0051c8de                      ; 0051c874
        ;   XREF to: 0051c8de (CONDITIONAL_JUMP)  ; LAB_0051c8de
    MOV EDI,dword ptr [ECX + 0x10]      ; 0051c876 | DAT_00622024
    MOV EBX,dword ptr [EAX + 0x10]      ; 0051c879 | DAT_00622024
    SUB EBX,EDI                         ; 0051c87c
    MOV dword ptr [EBP + -0x14],EBX     ; 0051c87e
    MOV EBX,dword ptr [EAX + 0x14]      ; 0051c881 | DAT_00622028
    MOV ESI,dword ptr [ECX + 0x14]      ; 0051c884 | DAT_00622028
    SUB EBX,ESI                         ; 0051c887
    MOV dword ptr [EBP + -0x10],EBX     ; 0051c889
    MOV ECX,dword ptr [EDX + 0x10]      ; 0051c88c | DAT_00622024
    MOV EDI,dword ptr [EAX + 0x10]      ; 0051c88f | DAT_00622024
    SUB ECX,EDI                         ; 0051c892
    MOV dword ptr [EBP + -0xc],ECX      ; 0051c894
    MOV EDX,dword ptr [EDX + 0x14]      ; 0051c897 | DAT_00622028
    MOV ECX,dword ptr [EAX + 0x14]      ; 0051c89a | DAT_00622028
    SUB EDX,ECX                         ; 0051c89d
    MOV dword ptr [EBP + -0x8],EDX      ; 0051c89f
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0051c8a2
        ;   Label: LAB_0051c8a2
    IMUL dword ptr [EBP + 0xfffffff8]   ; 0051c8a8
    MOV EBX,EAX                         ; 0051c8ae
    MOV ECX,EDX                         ; 0051c8b0
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 0051c8b2
    IMUL dword ptr [EBP + 0xfffffff4]   ; 0051c8b8
    SUB EAX,EBX                         ; 0051c8be
    SBB EDX,ECX                         ; 0051c8c0
    MOV EAX,0x0                         ; 0051c8c2
    JGE 0x0051c8ce                      ; 0051c8c7
        ;   XREF to: 0051c8ce (CONDITIONAL_JUMP)  ; LAB_0051c8ce
    MOV EAX,0x1                         ; 0051c8c9
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 0051c8ce
        ;   Label: LAB_0051c8ce
    MOV EAX,dword ptr [EBP + -0x4]      ; 0051c8d4
    MOV ESP,EBP                         ; 0051c8d7
    POP EBP                             ; 0051c8d9
    POP EDI                             ; 0051c8da
    POP ESI                             ; 0051c8db
    POP EBX                             ; 0051c8dc
    RET                                 ; 0051c8dd
    MOV ESI,dword ptr [ECX + 0x10]      ; 0051c8de | DAT_00622024
        ;   Label: LAB_0051c8de
    MOV EBX,dword ptr [EAX + 0x10]      ; 0051c8e1 | DAT_00622024
    SUB EBX,ESI                         ; 0051c8e4
    MOV dword ptr [EBP + -0xc],EBX      ; 0051c8e6
    MOV EBX,dword ptr [EAX + 0x14]      ; 0051c8e9 | DAT_00622028
    MOV EDI,dword ptr [ECX + 0x14]      ; 0051c8ec | DAT_00622028
    SUB EBX,EDI                         ; 0051c8ef
    MOV dword ptr [EBP + -0x8],EBX      ; 0051c8f1
    MOV ECX,dword ptr [EDX + 0x10]      ; 0051c8f4 | DAT_00622024
    MOV EBX,dword ptr [EAX + 0x10]      ; 0051c8f7 | DAT_00622024
    SUB ECX,EBX                         ; 0051c8fa
    MOV dword ptr [EBP + -0x14],ECX     ; 0051c8fc
    MOV EDX,dword ptr [EDX + 0x14]      ; 0051c8ff | DAT_00622028
    MOV ESI,dword ptr [EAX + 0x14]      ; 0051c902 | DAT_00622028
    SUB EDX,ESI                         ; 0051c905
    MOV dword ptr [EBP + -0x10],EDX     ; 0051c907
    JMP 0x0051c8a2                      ; 0051c90a
        ;   XREF to: 0051c8a2 (UNCONDITIONAL_JUMP)  ; LAB_0051c8a2

