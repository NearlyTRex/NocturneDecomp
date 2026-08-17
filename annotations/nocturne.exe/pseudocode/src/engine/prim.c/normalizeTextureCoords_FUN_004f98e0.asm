; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_normalizeTextureCoords_FUN_004f98e0(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[4]:
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390 at 004fb53c
;   engine_prim.c_renderPolygonSoftware_FUN_004f9dd0 at 004f9fdb
;   engine_prim.c_renderScanlinePolygon_FUN_004fad00 at 004fb00a
;   engine_zraster.c_rasterizePolygonCustom_FUN_00562de0 at 00563082
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f98e0
        ;   Label: engine_prim.c_normalizeTextureCoords_FUN_004f98e0
    PUSH ESI                            ; 004f98e1
    PUSH EDI                            ; 004f98e2
    PUSH EBP                            ; 004f98e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f98e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f98e8
    MOV ESI,0x7fffffff                  ; 004f98ec
    XOR EAX,EAX                         ; 004f98f1
    TEST EBP,EBP                        ; 004f98f3
    JLE 0x004f990a                      ; 004f98f5
        ;   XREF to: 004f990a (CONDITIONAL_JUMP)  ; LAB_004f990a
    MOV ECX,EBX                         ; 004f98f7
    MOV EDX,dword ptr [ECX + 0x8]       ; 004f98f9
        ;   Label: LAB_004f98f9
    CMP ESI,EDX                         ; 004f98fc
    JLE 0x004f9902                      ; 004f98fe
        ;   XREF to: 004f9902 (CONDITIONAL_JUMP)  ; LAB_004f9902
    MOV ESI,EDX                         ; 004f9900
    INC EAX                             ; 004f9902
        ;   Label: LAB_004f9902
    ADD ECX,0x30                        ; 004f9903
    CMP EAX,EBP                         ; 004f9906
    JL 0x004f98f9                       ; 004f9908
        ;   XREF to: 004f98f9 (CONDITIONAL_JUMP)  ; LAB_004f98f9
    XOR EDI,EDI                         ; 004f990a
        ;   Label: LAB_004f990a
    TEST EBP,EBP                        ; 004f990c
    JLE 0x004f9921                      ; 004f990e
        ;   XREF to: 004f9921 (CONDITIONAL_JUMP)  ; LAB_004f9921
    MOV ECX,EBX                         ; 004f9910
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f9912
        ;   Label: LAB_004f9912
    TEST EBX,EBX                        ; 004f9915
    JNZ 0x004f9926                      ; 004f9917
        ;   XREF to: 004f9926 (CONDITIONAL_JUMP)  ; LAB_004f9926
    INC EDI                             ; 004f9919
    ADD ECX,0x30                        ; 004f991a
    CMP EDI,EBP                         ; 004f991d
    JL 0x004f9912                       ; 004f991f
        ;   XREF to: 004f9912 (CONDITIONAL_JUMP)  ; LAB_004f9912
    POP EBP                             ; 004f9921
        ;   Label: LAB_004f9921
    POP EDI                             ; 004f9922
    POP ESI                             ; 004f9923
    POP EBX                             ; 004f9924
    RET                                 ; 004f9925
    MOV EDX,ESI                         ; 004f9926
        ;   Label: LAB_004f9926
    MOV EAX,dword ptr [ECX + 0x18]      ; 004f9928
    IMUL EDX                            ; 004f992b
    IDIV EBX                            ; 004f992d
    MOV dword ptr [ECX + 0x18],EAX      ; 004f992f
    MOV EDX,ESI                         ; 004f9932
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f9934
    MOV EAX,dword ptr [ECX + 0x1c]      ; 004f9937
    IMUL EDX                            ; 004f993a
    IDIV EBX                            ; 004f993c
    MOV EDX,0x1000000                   ; 004f993e
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f9943
    MOV dword ptr [ECX + 0x1c],EAX      ; 004f9946
    MOV EAX,ESI                         ; 004f9949
    IMUL EDX                            ; 004f994b
    IDIV EBX                            ; 004f994d
    MOV dword ptr [ECX + 0x8],EAX       ; 004f994f
    INC EDI                             ; 004f9952
    ADD ECX,0x30                        ; 004f9953
    CMP EDI,EBP                         ; 004f9956
    JL 0x004f9912                       ; 004f9958
        ;   XREF to: 004f9912 (CONDITIONAL_JUMP)  ; LAB_004f9912
    POP EBP                             ; 004f995a
    POP EDI                             ; 004f995b
    POP ESI                             ; 004f995c
    POP EBX                             ; 004f995d
    RET                                 ; 004f995e

