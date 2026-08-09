; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_adjustNearPlaneTextureCoords_FUN_004f9960(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[4]:
;   engine_prim.c_FUN_004f9dd0 at 004f9ff2
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390 at 004fb57a
;   engine_prim.c_renderScanlinePolygon_FUN_004fad00 at 004fb021
;   engine_zraster.c_rasterizePolygonCustom_FUN_00562de0 at 00563099
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9960
        ;   Label: engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960
    PUSH ESI                            ; 004f9961
    PUSH EDI                            ; 004f9962
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f9963
    XOR ESI,ESI                         ; 004f9967
    TEST EDI,EDI                        ; 004f9969
    JLE 0x004f99bc                      ; 004f996b
        ;   XREF to: 004f99bc (CONDITIONAL_JUMP)  ; LAB_004f99bc
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f996d
    MOV EDX,dword ptr [ECX + 0x8]       ; 004f9971
        ;   Label: LAB_004f9971
    CMP EDX,0x100                       ; 004f9974
    JLE 0x004f99c0                      ; 004f997a
        ;   XREF to: 004f99c0 (CONDITIONAL_JUMP)  ; LAB_004f99c0
    MOV EAX,0x7fffffff                  ; 004f997c
    MOV EBX,EDX                         ; 004f9981
    MOV EDX,EAX                         ; 004f9983
    SAR EBX,0x4                         ; 004f9985
    SAR EDX,0x1f                        ; 004f9988
    IDIV EBX                            ; 004f998b
    MOV EBX,EAX                         ; 004f998d
    MOV EDX,dword ptr [ECX + 0x18]      ; 004f998f
        ;   Label: LAB_004f998f
    MOV EAX,EBX                         ; 004f9992
    SAR EDX,0x8                         ; 004f9994
    IMUL EDX                            ; 004f9997
    SHRD EAX,EDX,0x10                   ; 004f9999
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004f999d
    MOV dword ptr [ECX + 0x18],EAX      ; 004f99a0
    SAR EDX,0x8                         ; 004f99a3
    MOV EAX,EBX                         ; 004f99a6
    ADD ECX,0x30                        ; 004f99a8
    IMUL EDX                            ; 004f99ab
    SHRD EAX,EDX,0x10                   ; 004f99ad
    MOV dword ptr [ECX + -0x14],EAX     ; 004f99b1
    INC ESI                             ; 004f99b4
    MOV dword ptr [ECX + -0x28],EBX     ; 004f99b5
    CMP ESI,EDI                         ; 004f99b8
    JL 0x004f9971                       ; 004f99ba
        ;   XREF to: 004f9971 (CONDITIONAL_JUMP)  ; LAB_004f9971
    POP EDI                             ; 004f99bc
        ;   Label: LAB_004f99bc
    POP ESI                             ; 004f99bd
    POP EBX                             ; 004f99be
    RET                                 ; 004f99bf
    MOV EBX,0x7fffffff                  ; 004f99c0
        ;   Label: LAB_004f99c0
    JMP 0x004f998f                      ; 004f99c5
        ;   XREF to: 004f998f (UNCONDITIONAL_JUMP)  ; LAB_004f998f

