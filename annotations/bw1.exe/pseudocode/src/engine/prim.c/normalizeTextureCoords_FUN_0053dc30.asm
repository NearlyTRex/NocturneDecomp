; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_normalizeTextureCoords_FUN_0053dc30(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[4]:
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720 at 0053f8c0
;   engine_prim.c_renderPolygonSoftware_FUN_0053e120 at 0053e33f
;   engine_prim.c_renderScanlinePolygon_FUN_0053f080 at 0053f39a
;   engine_zraster.c_rasterizePolygonCustom_FUN_005bf640 at 005bf8e2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053dc30
        ;   Label: engine_prim.c_normalizeTextureCoords_FUN_0053dc30
    PUSH ESI                            ; 0053dc31
    PUSH EDI                            ; 0053dc32
    PUSH EBP                            ; 0053dc33
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053dc34
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053dc38
    MOV ESI,0x7fffffff                  ; 0053dc3c
    XOR EAX,EAX                         ; 0053dc41
    TEST EBP,EBP                        ; 0053dc43
    JLE 0x0053dc5a                      ; 0053dc45
        ;   XREF to: 0053dc5a (CONDITIONAL_JUMP)  ; LAB_0053dc5a
    MOV ECX,EBX                         ; 0053dc47
    MOV EDX,dword ptr [ECX + 0x8]       ; 0053dc49
        ;   Label: LAB_0053dc49
    CMP ESI,EDX                         ; 0053dc4c
    JLE 0x0053dc52                      ; 0053dc4e
        ;   XREF to: 0053dc52 (CONDITIONAL_JUMP)  ; LAB_0053dc52
    MOV ESI,EDX                         ; 0053dc50
    INC EAX                             ; 0053dc52
        ;   Label: LAB_0053dc52
    ADD ECX,0x30                        ; 0053dc53
    CMP EAX,EBP                         ; 0053dc56
    JL 0x0053dc49                       ; 0053dc58
        ;   XREF to: 0053dc49 (CONDITIONAL_JUMP)  ; LAB_0053dc49
    XOR EDI,EDI                         ; 0053dc5a
        ;   Label: LAB_0053dc5a
    TEST EBP,EBP                        ; 0053dc5c
    JLE 0x0053dc71                      ; 0053dc5e
        ;   XREF to: 0053dc71 (CONDITIONAL_JUMP)  ; LAB_0053dc71
    MOV ECX,EBX                         ; 0053dc60
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053dc62
        ;   Label: LAB_0053dc62
    TEST EBX,EBX                        ; 0053dc65
    JNZ 0x0053dc76                      ; 0053dc67
        ;   XREF to: 0053dc76 (CONDITIONAL_JUMP)  ; LAB_0053dc76
    INC EDI                             ; 0053dc69
    ADD ECX,0x30                        ; 0053dc6a
    CMP EDI,EBP                         ; 0053dc6d
    JL 0x0053dc62                       ; 0053dc6f
        ;   XREF to: 0053dc62 (CONDITIONAL_JUMP)  ; LAB_0053dc62
    POP EBP                             ; 0053dc71
        ;   Label: LAB_0053dc71
    POP EDI                             ; 0053dc72
    POP ESI                             ; 0053dc73
    POP EBX                             ; 0053dc74
    RET                                 ; 0053dc75
    MOV EDX,ESI                         ; 0053dc76
        ;   Label: LAB_0053dc76
    MOV EAX,dword ptr [ECX + 0x18]      ; 0053dc78
    IMUL EDX                            ; 0053dc7b
    IDIV EBX                            ; 0053dc7d
    MOV dword ptr [ECX + 0x18],EAX      ; 0053dc7f
    MOV EDX,ESI                         ; 0053dc82
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053dc84
    MOV EAX,dword ptr [ECX + 0x1c]      ; 0053dc87
    IMUL EDX                            ; 0053dc8a
    IDIV EBX                            ; 0053dc8c
    MOV EDX,0x1000000                   ; 0053dc8e
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053dc93
    MOV dword ptr [ECX + 0x1c],EAX      ; 0053dc96
    MOV EAX,ESI                         ; 0053dc99
    IMUL EDX                            ; 0053dc9b
    IDIV EBX                            ; 0053dc9d
    MOV dword ptr [ECX + 0x8],EAX       ; 0053dc9f
    INC EDI                             ; 0053dca2
    ADD ECX,0x30                        ; 0053dca3
    CMP EDI,EBP                         ; 0053dca6
    JL 0x0053dc62                       ; 0053dca8
        ;   XREF to: 0053dc62 (CONDITIONAL_JUMP)  ; LAB_0053dc62
    POP EBP                             ; 0053dcaa
    POP EDI                             ; 0053dcab
    POP ESI                             ; 0053dcac
    POP EBX                             ; 0053dcad
    RET                                 ; 0053dcae

