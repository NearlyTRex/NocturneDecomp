; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[4]:
;   engine_3d.c_rasterizePolygon_FUN_005fd4e0 at 005fd799
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 at 00553cee
;   engine_prim.c_renderPolygonSoftware_FUN_00552510 at 00552746
;   engine_prim.c_renderScanlinePolygon_FUN_00553470 at 005537a1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005520a0
        ;   Label: engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
    PUSH ESI                            ; 005520a1
    PUSH EDI                            ; 005520a2
    MOV EDI,dword ptr [ESP + 0x14]      ; 005520a3
    XOR ESI,ESI                         ; 005520a7
    TEST EDI,EDI                        ; 005520a9
    JLE 0x005520fc                      ; 005520ab
        ;   XREF to: 005520fc (CONDITIONAL_JUMP)  ; LAB_005520fc
    MOV ECX,dword ptr [ESP + 0x10]      ; 005520ad
    MOV EDX,dword ptr [ECX + 0x8]       ; 005520b1
        ;   Label: LAB_005520b1
    CMP EDX,0x100                       ; 005520b4
    JLE 0x00552100                      ; 005520ba
        ;   XREF to: 00552100 (CONDITIONAL_JUMP)  ; LAB_00552100
    MOV EAX,0x7fffffff                  ; 005520bc
    MOV EBX,EDX                         ; 005520c1
    MOV EDX,EAX                         ; 005520c3
    SAR EBX,0x4                         ; 005520c5
    SAR EDX,0x1f                        ; 005520c8
    IDIV EBX                            ; 005520cb
    MOV EBX,EAX                         ; 005520cd
    MOV EDX,dword ptr [ECX + 0x18]      ; 005520cf
        ;   Label: LAB_005520cf
    MOV EAX,EBX                         ; 005520d2
    SAR EDX,0x8                         ; 005520d4
    IMUL EDX                            ; 005520d7
    SHRD EAX,EDX,0x10                   ; 005520d9
    MOV EDX,dword ptr [ECX + 0x1c]      ; 005520dd
    MOV dword ptr [ECX + 0x18],EAX      ; 005520e0
    SAR EDX,0x8                         ; 005520e3
    MOV EAX,EBX                         ; 005520e6
    ADD ECX,0x30                        ; 005520e8
    IMUL EDX                            ; 005520eb
    SHRD EAX,EDX,0x10                   ; 005520ed
    MOV dword ptr [ECX + -0x14],EAX     ; 005520f1
    INC ESI                             ; 005520f4
    MOV dword ptr [ECX + -0x28],EBX     ; 005520f5
    CMP ESI,EDI                         ; 005520f8
    JL 0x005520b1                       ; 005520fa
        ;   XREF to: 005520b1 (CONDITIONAL_JUMP)  ; LAB_005520b1
    POP EDI                             ; 005520fc
        ;   Label: LAB_005520fc
    POP ESI                             ; 005520fd
    POP EBX                             ; 005520fe
    RET                                 ; 005520ff
    MOV EBX,0x7fffffff                  ; 00552100
        ;   Label: LAB_00552100
    JMP 0x005520cf                      ; 00552105
        ;   XREF to: 005520cf (UNCONDITIONAL_JUMP)  ; LAB_005520cf

