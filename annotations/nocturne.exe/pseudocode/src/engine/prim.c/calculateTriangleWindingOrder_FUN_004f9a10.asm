; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v0
; SRenderVertex *  Stack[0x8]:4   v1
; SRenderVertex *  Stack[0xc]:4   v2
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[12]:
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0 at 00432dc4
;   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00434210 at 004342cc
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00432210 at 004322f4
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0 at 00434a6c
;   engine_drender.cpp_renderTriangleSimple_FUN_00458080 at 0045815d
;   engine_drender.cpp_renderTriangleTextured_FUN_00457a00 at 00457ae1
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390 at 004fb3dd
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_004fa2e0 at 004fa32d
;   engine_prim.c_renderPolygonSoftware_FUN_004f9dd0 at 004f9e83
;   engine_prim.c_renderScanlinePolygon_FUN_004fad00 at 004fadb3
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_006b0280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9a10
        ;   Label: engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
    PUSH ESI                            ; 004f9a11
    PUSH EDI                            ; 004f9a12
    PUSH EBP                            ; 004f9a13
    MOV EBP,ESP                         ; 004f9a14
    SUB ESP,0x14                        ; 004f9a16
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f9a19
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f9a1c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004f9a1f
    CMP dword ptr [0x006b0280],0x1      ; 004f9a22 | DAT_006b0280
    JNZ 0x004f9a93                      ; 004f9a29
        ;   XREF to: 004f9a93 (CONDITIONAL_JUMP)  ; LAB_004f9a93
    MOV EDI,dword ptr [EBX + 0x10]      ; 004f9a2b
    MOV EDX,dword ptr [EAX + 0x10]      ; 004f9a2e
    SUB EDX,EDI                         ; 004f9a31
    MOV dword ptr [EBP + -0x14],EDX     ; 004f9a33
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f9a36
    MOV ESI,dword ptr [EBX + 0x14]      ; 004f9a39
    SUB EDX,ESI                         ; 004f9a3c
    MOV dword ptr [EBP + -0x10],EDX     ; 004f9a3e
    MOV EDX,dword ptr [ECX + 0x10]      ; 004f9a41
    MOV EDI,dword ptr [EAX + 0x10]      ; 004f9a44
    SUB EDX,EDI                         ; 004f9a47
    MOV dword ptr [EBP + -0xc],EDX      ; 004f9a49
    MOV EDX,dword ptr [ECX + 0x14]      ; 004f9a4c
    MOV ECX,dword ptr [EAX + 0x14]      ; 004f9a4f
    SUB EDX,ECX                         ; 004f9a52
    MOV dword ptr [EBP + -0x8],EDX      ; 004f9a54
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 004f9a57
        ;   Label: LAB_004f9a57
    IMUL dword ptr [EBP + 0xfffffff8]   ; 004f9a5d
    MOV EBX,EAX                         ; 004f9a63
    MOV ECX,EDX                         ; 004f9a65
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 004f9a67
    IMUL dword ptr [EBP + 0xfffffff4]   ; 004f9a6d
    SUB EAX,EBX                         ; 004f9a73
    SBB EDX,ECX                         ; 004f9a75
    MOV EAX,0x0                         ; 004f9a77
    JGE 0x004f9a83                      ; 004f9a7c
        ;   XREF to: 004f9a83 (CONDITIONAL_JUMP)  ; LAB_004f9a83
    MOV EAX,0x1                         ; 004f9a7e
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 004f9a83
        ;   Label: LAB_004f9a83
    MOV EAX,dword ptr [EBP + -0x4]      ; 004f9a89
    MOV ESP,EBP                         ; 004f9a8c
    POP EBP                             ; 004f9a8e
    POP EDI                             ; 004f9a8f
    POP ESI                             ; 004f9a90
    POP EBX                             ; 004f9a91
    RET                                 ; 004f9a92
    MOV ESI,dword ptr [EBX + 0x10]      ; 004f9a93
        ;   Label: LAB_004f9a93
    MOV EDX,dword ptr [EAX + 0x10]      ; 004f9a96
    SUB EDX,ESI                         ; 004f9a99
    MOV dword ptr [EBP + -0xc],EDX      ; 004f9a9b
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f9a9e
    MOV EDI,dword ptr [EBX + 0x14]      ; 004f9aa1
    SUB EDX,EDI                         ; 004f9aa4
    MOV dword ptr [EBP + -0x8],EDX      ; 004f9aa6
    MOV EDX,dword ptr [ECX + 0x10]      ; 004f9aa9
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9aac
    SUB EDX,EBX                         ; 004f9aaf
    MOV dword ptr [EBP + -0x14],EDX     ; 004f9ab1
    MOV EDX,dword ptr [ECX + 0x14]      ; 004f9ab4
    MOV ESI,dword ptr [EAX + 0x14]      ; 004f9ab7
    SUB EDX,ESI                         ; 004f9aba
    MOV dword ptr [EBP + -0x10],EDX     ; 004f9abc
    JMP 0x004f9a57                      ; 004f9abf
        ;   XREF to: 004f9a57 (UNCONDITIONAL_JUMP)  ; LAB_004f9a57

