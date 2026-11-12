; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   core_dpart.cpp_FUN_0047a480 at 0047a561
;   core_dpart.cpp_FUN_0047ab00 at 0047abdd
;   core_zombie.cpp_FUN_005bf120 at 005bf3e1
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190 at 0043c274
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60 at 0043df2c
;   engine_drender.cpp_FUN_0048478e at 004848a5
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720 at 0053f76d
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0053e650 at 0053e69d
;   engine_prim.c_renderPolygonSoftware_FUN_0053e120 at 0053e1d3
;   engine_prim.c_renderScanlinePolygon_FUN_0053f080 at 0053f133
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_00713a7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053dd60
        ;   Label: engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
    PUSH ESI                            ; 0053dd61
    PUSH EDI                            ; 0053dd62
    PUSH EBP                            ; 0053dd63
    MOV EBP,ESP                         ; 0053dd64
    SUB ESP,0x14                        ; 0053dd66
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053dd69
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053dd6c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0053dd6f
    CMP dword ptr [0x00713a7c],0x1      ; 0053dd72 | DAT_00713a7c
    JNZ 0x0053dde3                      ; 0053dd79
        ;   XREF to: 0053dde3 (CONDITIONAL_JUMP)  ; LAB_0053dde3
    MOV EDI,dword ptr [EBX + 0x10]      ; 0053dd7b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0053dd7e
    SUB EDX,EDI                         ; 0053dd81
    MOV dword ptr [EBP + -0x14],EDX     ; 0053dd83
    MOV EDX,dword ptr [EAX + 0x14]      ; 0053dd86
    MOV ESI,dword ptr [EBX + 0x14]      ; 0053dd89
    SUB EDX,ESI                         ; 0053dd8c
    MOV dword ptr [EBP + -0x10],EDX     ; 0053dd8e
    MOV EDX,dword ptr [ECX + 0x10]      ; 0053dd91
    MOV EDI,dword ptr [EAX + 0x10]      ; 0053dd94
    SUB EDX,EDI                         ; 0053dd97
    MOV dword ptr [EBP + -0xc],EDX      ; 0053dd99
    MOV EDX,dword ptr [ECX + 0x14]      ; 0053dd9c
    MOV ECX,dword ptr [EAX + 0x14]      ; 0053dd9f
    SUB EDX,ECX                         ; 0053dda2
    MOV dword ptr [EBP + -0x8],EDX      ; 0053dda4
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0053dda7
        ;   Label: LAB_0053dda7
    IMUL dword ptr [EBP + 0xfffffff8]   ; 0053ddad
    MOV EBX,EAX                         ; 0053ddb3
    MOV ECX,EDX                         ; 0053ddb5
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 0053ddb7
    IMUL dword ptr [EBP + 0xfffffff4]   ; 0053ddbd
    SUB EAX,EBX                         ; 0053ddc3
    SBB EDX,ECX                         ; 0053ddc5
    MOV EAX,0x0                         ; 0053ddc7
    JGE 0x0053ddd3                      ; 0053ddcc
        ;   XREF to: 0053ddd3 (CONDITIONAL_JUMP)  ; LAB_0053ddd3
    MOV EAX,0x1                         ; 0053ddce
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 0053ddd3
        ;   Label: LAB_0053ddd3
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053ddd9
    MOV ESP,EBP                         ; 0053dddc
    POP EBP                             ; 0053ddde
    POP EDI                             ; 0053dddf
    POP ESI                             ; 0053dde0
    POP EBX                             ; 0053dde1
    RET                                 ; 0053dde2
    MOV ESI,dword ptr [EBX + 0x10]      ; 0053dde3
        ;   Label: LAB_0053dde3
    MOV EDX,dword ptr [EAX + 0x10]      ; 0053dde6
    SUB EDX,ESI                         ; 0053dde9
    MOV dword ptr [EBP + -0xc],EDX      ; 0053ddeb
    MOV EDX,dword ptr [EAX + 0x14]      ; 0053ddee
    MOV EDI,dword ptr [EBX + 0x14]      ; 0053ddf1
    SUB EDX,EDI                         ; 0053ddf4
    MOV dword ptr [EBP + -0x8],EDX      ; 0053ddf6
    MOV EDX,dword ptr [ECX + 0x10]      ; 0053ddf9
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053ddfc
    SUB EDX,EBX                         ; 0053ddff
    MOV dword ptr [EBP + -0x14],EDX     ; 0053de01
    MOV EDX,dword ptr [ECX + 0x14]      ; 0053de04
    MOV ESI,dword ptr [EAX + 0x14]      ; 0053de07
    SUB EDX,ESI                         ; 0053de0a
    MOV dword ptr [EBP + -0x10],EDX     ; 0053de0c
    JMP 0x0053dda7                      ; 0053de0f
        ;   XREF to: 0053dda7 (UNCONDITIONAL_JUMP)  ; LAB_0053dda7

