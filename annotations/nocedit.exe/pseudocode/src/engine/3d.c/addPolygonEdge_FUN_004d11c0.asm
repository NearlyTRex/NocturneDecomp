; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_3d_c_addPolygonEdge_FUN_004d11c0(SRenderVertex *vertex1,SRenderVertex *vertex2)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex1
; SRenderVertex *  Stack[0x8]:4   vertex2
;
; Referenced Globals:
;   int g_EdgeCount
;   SHardwareEdge[16] g_HardwareEdgeTable
;   undefined4 DAT_02d7b430
;   undefined4 DAT_02d7b434
;   undefined4 DAT_02d7b438
;   undefined4 DAT_02d7b444
;   undefined4 DAT_02d7b448
;   undefined4 DAT_02d7b44c
;   undefined4 DAT_02d7b450
;   int g_EdgeListMinY
;   int g_EdgeListMaxY
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d11c0
        ;   Label: engine_3d.c_addPolygonEdge_FUN_004d11c0
    PUSH ESI                            ; 004d11c1
    PUSH EDI                            ; 004d11c2
    PUSH EBP                            ; 004d11c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004d11c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004d11c8
    MOV EAX,dword ptr [EDI + 0x14]      ; 004d11cc
    MOV EBX,dword ptr [ESI + 0x14]      ; 004d11cf
    SAR EAX,0x10                        ; 004d11d2
    SAR EBX,0x10                        ; 004d11d5
    CMP EBX,EAX                         ; 004d11d8
    JZ 0x004d12e0                       ; 004d11da
        ;   XREF to: 004d12e0 (CONDITIONAL_JUMP)  ; LAB_004d12e0
    MOV ECX,dword ptr [EDI + 0x14]      ; 004d11e0
    CMP ECX,dword ptr [ESI + 0x14]      ; 004d11e3
    JGE 0x004d11f4                      ; 004d11e6
        ;   XREF to: 004d11f4 (CONDITIONAL_JUMP)  ; LAB_004d11f4
    MOV EDX,ESI                         ; 004d11e8
    MOV ESI,EDI                         ; 004d11ea
    MOV EDI,EDX                         ; 004d11ec
    MOV EDX,EBX                         ; 004d11ee
    MOV EBX,EAX                         ; 004d11f0
    MOV EAX,EDX                         ; 004d11f2
    MOV ECX,dword ptr [0x02d7b428]      ; 004d11f4 | g_EdgeCount
        ;   Label: LAB_004d11f4
    SHL ECX,0x3                         ; 004d11fa
    MOV EDX,ECX                         ; 004d11fd
    SHL ECX,0x3                         ; 004d11ff
    SUB ECX,EDX                         ; 004d1202
    ADD ECX,0x2d7b42c                   ; 004d1204 | g_HardwareEdgeTable
    MOV dword ptr [ECX],EBX             ; 004d120a | g_HardwareEdgeTable
    MOV EBP,dword ptr [0x02d7b7ac]      ; 004d120c | g_EdgeListMinY
    MOV dword ptr [ECX + 0x4],EAX       ; 004d1212 | DAT_02d7b430
    CMP EBX,EBP                         ; 004d1215
    JGE 0x004d121f                      ; 004d1217
        ;   XREF to: 004d121f (CONDITIONAL_JUMP)  ; LAB_004d121f
    MOV dword ptr [0x02d7b7ac],EBX      ; 004d1219 | g_EdgeListMinY
    CMP EAX,dword ptr [0x02d7b7b0]      ; 004d121f | g_EdgeListMaxY
        ;   Label: LAB_004d121f
    JLE 0x004d122c                      ; 004d1225
        ;   XREF to: 004d122c (CONDITIONAL_JUMP)  ; LAB_004d122c
    MOV [0x02d7b7b0],EAX                ; 004d1227 | g_EdgeListMaxY
    MOV EAX,dword ptr [ESI + 0x10]      ; 004d122c
        ;   Label: LAB_004d122c
    MOV dword ptr [ECX + 0x8],EAX       ; 004d122f | DAT_02d7b434
    MOV EAX,dword ptr [ESI + 0x18]      ; 004d1232
    MOV dword ptr [ECX + 0x18],EAX      ; 004d1235 | DAT_02d7b444
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004d1238
    MOV dword ptr [ECX + 0x20],EAX      ; 004d123b | DAT_02d7b44c
    MOV EBX,dword ptr [EDI + 0x14]      ; 004d123e
    SUB EBX,dword ptr [ESI + 0x14]      ; 004d1241
    CMP EBX,0x10000                     ; 004d1244
    JNC 0x004d12e5                      ; 004d124a
        ;   XREF to: 004d12e5 (CONDITIONAL_JUMP)  ; LAB_004d12e5
    XOR EBX,EBX                         ; 004d1250
    MOV EAX,dword ptr [EDI + 0x10]      ; 004d1252
        ;   Label: LAB_004d1252
    MOV EDX,dword ptr [ESI + 0x10]      ; 004d1255
    SUB EAX,EDX                         ; 004d1258
    MOV EDX,EAX                         ; 004d125a
    MOV EAX,EBX                         ; 004d125c
    IMUL EDX                            ; 004d125e
    SHRD EAX,EDX,0x10                   ; 004d1260
    MOV dword ptr [ECX + 0xc],EAX       ; 004d1264 | DAT_02d7b438
    MOV EDX,dword ptr [EDI + 0x18]      ; 004d1267
    MOV EBP,dword ptr [ESI + 0x18]      ; 004d126a
    MOV EAX,EBX                         ; 004d126d
    SUB EDX,EBP                         ; 004d126f
    IMUL EDX                            ; 004d1271
    SHRD EAX,EDX,0x10                   ; 004d1273
    MOV dword ptr [ECX + 0x1c],EAX      ; 004d1277 | DAT_02d7b448
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004d127a
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004d127d
    SUB EAX,EDX                         ; 004d1280
    MOV EDX,EAX                         ; 004d1282
    MOV EAX,EBX                         ; 004d1284
    IMUL EDX                            ; 004d1286
    SHRD EAX,EDX,0x10                   ; 004d1288
    MOV dword ptr [ECX + 0x24],EAX      ; 004d128c | DAT_02d7b450
    MOV EBX,dword ptr [ESI + 0x14]      ; 004d128f
    AND EBX,0xffff                      ; 004d1292
    XOR BX,0xffff                       ; 004d1298
    MOV EDX,dword ptr [ECX + 0xc]       ; 004d129c | DAT_02d7b438
    MOV EAX,EBX                         ; 004d129f
    IMUL EDX                            ; 004d12a1
    SHRD EAX,EDX,0x10                   ; 004d12a3
    MOV ESI,dword ptr [ECX + 0x8]       ; 004d12a7 | DAT_02d7b434
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004d12aa | DAT_02d7b448
    ADD ESI,EAX                         ; 004d12ad
    MOV EAX,EBX                         ; 004d12af
    MOV dword ptr [ECX + 0x8],ESI       ; 004d12b1 | DAT_02d7b434
    IMUL EDX                            ; 004d12b4
    SHRD EAX,EDX,0x10                   ; 004d12b6
    MOV EDI,dword ptr [ECX + 0x18]      ; 004d12ba | DAT_02d7b444
    MOV EDX,dword ptr [ECX + 0x24]      ; 004d12bd | DAT_02d7b450
    ADD EDI,EAX                         ; 004d12c0
    MOV EAX,EBX                         ; 004d12c2
    MOV dword ptr [ECX + 0x18],EDI      ; 004d12c4 | DAT_02d7b444
    IMUL EDX                            ; 004d12c7
    SHRD EAX,EDX,0x10                   ; 004d12c9
    MOV EBP,dword ptr [ECX + 0x20]      ; 004d12cd | DAT_02d7b44c
    ADD EBP,EAX                         ; 004d12d0
    MOV EAX,[0x02d7b428]                ; 004d12d2 | g_EdgeCount
    INC EAX                             ; 004d12d7
    MOV dword ptr [ECX + 0x20],EBP      ; 004d12d8 | DAT_02d7b44c
    MOV [0x02d7b428],EAX                ; 004d12db | g_EdgeCount
    POP EBP                             ; 004d12e0
        ;   Label: LAB_004d12e0
    POP EDI                             ; 004d12e1
    POP ESI                             ; 004d12e2
    POP EBX                             ; 004d12e3
    RET                                 ; 004d12e4
    MOV EAX,0xffffffff                  ; 004d12e5
        ;   Label: LAB_004d12e5
    XOR EDX,EDX                         ; 004d12ea
    DIV EBX                             ; 004d12ec
    MOV EBX,EAX                         ; 004d12ee
    JMP 0x004d1252                      ; 004d12f0
        ;   XREF to: 004d1252 (UNCONDITIONAL_JUMP)  ; LAB_004d1252

