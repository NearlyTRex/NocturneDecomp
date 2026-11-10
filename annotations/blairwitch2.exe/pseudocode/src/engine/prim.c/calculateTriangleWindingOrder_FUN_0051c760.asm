; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   core_dpart.cpp_FUN_00461f70 at 00462051
;   core_dpart.cpp_FUN_004625f0 at 004626cd
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330 at 00431414
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000 at 004330cc
;   engine_drender.cpp_FUN_0046c28e at 0046c3a5
;   engine_prim.c_FUN_0051da80 at 0051db31
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0051e130 at 0051e17d
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0051d050 at 0051d09d
;   engine_prim.c_renderPolygonSoftware_FUN_0051cb20 at 0051cbd3
;   unkafter_zombie.cpp_FUN_0059a0b0 at 0059a371
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_0070ca7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c760
        ;   Label: engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760
    PUSH ESI                            ; 0051c761
    PUSH EDI                            ; 0051c762
    PUSH EBP                            ; 0051c763
    MOV EBP,ESP                         ; 0051c764
    SUB ESP,0x14                        ; 0051c766
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051c769
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051c76c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0051c76f
    CMP dword ptr [0x0070ca7c],0x1      ; 0051c772 | DAT_0070ca7c
    JNZ 0x0051c7e3                      ; 0051c779
        ;   XREF to: 0051c7e3 (CONDITIONAL_JUMP)  ; LAB_0051c7e3
    MOV EDI,dword ptr [EBX + 0x10]      ; 0051c77b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0051c77e
    SUB EDX,EDI                         ; 0051c781
    MOV dword ptr [EBP + -0x14],EDX     ; 0051c783
    MOV EDX,dword ptr [EAX + 0x14]      ; 0051c786
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051c789
    SUB EDX,ESI                         ; 0051c78c
    MOV dword ptr [EBP + -0x10],EDX     ; 0051c78e
    MOV EDX,dword ptr [ECX + 0x10]      ; 0051c791
    MOV EDI,dword ptr [EAX + 0x10]      ; 0051c794
    SUB EDX,EDI                         ; 0051c797
    MOV dword ptr [EBP + -0xc],EDX      ; 0051c799
    MOV EDX,dword ptr [ECX + 0x14]      ; 0051c79c
    MOV ECX,dword ptr [EAX + 0x14]      ; 0051c79f
    SUB EDX,ECX                         ; 0051c7a2
    MOV dword ptr [EBP + -0x8],EDX      ; 0051c7a4
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0051c7a7
        ;   Label: LAB_0051c7a7
    IMUL dword ptr [EBP + 0xfffffff8]   ; 0051c7ad
    MOV EBX,EAX                         ; 0051c7b3
    MOV ECX,EDX                         ; 0051c7b5
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 0051c7b7
    IMUL dword ptr [EBP + 0xfffffff4]   ; 0051c7bd
    SUB EAX,EBX                         ; 0051c7c3
    SBB EDX,ECX                         ; 0051c7c5
    MOV EAX,0x0                         ; 0051c7c7
    JGE 0x0051c7d3                      ; 0051c7cc
        ;   XREF to: 0051c7d3 (CONDITIONAL_JUMP)  ; LAB_0051c7d3
    MOV EAX,0x1                         ; 0051c7ce
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 0051c7d3
        ;   Label: LAB_0051c7d3
    MOV EAX,dword ptr [EBP + -0x4]      ; 0051c7d9
    MOV ESP,EBP                         ; 0051c7dc
    POP EBP                             ; 0051c7de
    POP EDI                             ; 0051c7df
    POP ESI                             ; 0051c7e0
    POP EBX                             ; 0051c7e1
    RET                                 ; 0051c7e2
    MOV ESI,dword ptr [EBX + 0x10]      ; 0051c7e3
        ;   Label: LAB_0051c7e3
    MOV EDX,dword ptr [EAX + 0x10]      ; 0051c7e6
    SUB EDX,ESI                         ; 0051c7e9
    MOV dword ptr [EBP + -0xc],EDX      ; 0051c7eb
    MOV EDX,dword ptr [EAX + 0x14]      ; 0051c7ee
    MOV EDI,dword ptr [EBX + 0x14]      ; 0051c7f1
    SUB EDX,EDI                         ; 0051c7f4
    MOV dword ptr [EBP + -0x8],EDX      ; 0051c7f6
    MOV EDX,dword ptr [ECX + 0x10]      ; 0051c7f9
    MOV EBX,dword ptr [EAX + 0x10]      ; 0051c7fc
    SUB EDX,EBX                         ; 0051c7ff
    MOV dword ptr [EBP + -0x14],EDX     ; 0051c801
    MOV EDX,dword ptr [ECX + 0x14]      ; 0051c804
    MOV ESI,dword ptr [EAX + 0x14]      ; 0051c807
    SUB EDX,ESI                         ; 0051c80a
    MOV dword ptr [EBP + -0x10],EDX     ; 0051c80c
    JMP 0x0051c7a7                      ; 0051c80f
        ;   XREF to: 0051c7a7 (UNCONDITIONAL_JUMP)  ; LAB_0051c7a7

