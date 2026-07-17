; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl dll_dx7_cpp_getOrAddVertex_FUN_10005010(SMRGLVertex *poly_vertex,SRenderVertex *vertex_array,uint render_flags)
;
; Parameters:
; SMRGLVertex *    Stack[0x4]:4   poly_vertex
; SRenderVertex *  Stack[0x8]:4   vertex_array
; uint             Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   dll_dx7.cpp_APIDLLdrawPolyList2_FUN_10005130 at 100051a2
;   dll_dx7.cpp_APIDLLdrawPolyList_FUN_10004f00 at 10004f6a
;
; Referenced Globals:
;   double DOUBLE_100122e8 = 5.96046447753906E-8
;   int g_PendingVertexCount = 0x0
;   int g_CurrentBatchStamp = 0x0
;   TerminatedCString s_You_re_shoving_too_many_10016bd8
;   TerminatedCString s_You_re_shoving_too_many_10016bfc
;   SScreenVertex[16000] g_VertexBuffer
;   undefined4 g_VertexBuffer[0].y
;   undefined4 g_VertexBuffer[0].u
;   undefined4 g_VertexBuffer[0].v
;   int[16000] g_VertexBatchStamp
;   int[16000] g_VertexCacheIndex
;
; Called Functions:
;   dll_dx7.cpp_buildTLVertex_FUN_100044b0
;   dll_dx7.cpp_fatalError_FUN_10002340
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 10005010
        ;   Label: dll_dx7.cpp_getOrAddVertex_FUN_10005010
    SUB ESP,0x4                         ; 10005014
    PUSH EBX                            ; 10005017
    PUSH ESI                            ; 10005018
    PUSH EDI                            ; 10005019
    MOV EBX,dword ptr [EDX]             ; 1000501a
    PUSH EBP                            ; 1000501c
    MOV ECX,EBX                         ; 1000501d
    SHL ECX,0x4                         ; 1000501f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 10005022
    MOV EAX,[0x10014234]                ; 10005026 | g_CurrentBatchStamp
    LEA EBP,[ECX + ECX*0x2]             ; 1000502b
    ADD ESI,EBP                         ; 1000502e
    CMP dword ptr [EBX*0x4 + 0x10215e48],EAX ; 10005030 | g_VertexBatchStamp
    JZ 0x10005096                       ; 10005037
        ;   XREF to: 10005096 (CONDITIONAL_JUMP)  ; LAB_10005096
    MOV EBP,dword ptr [0x10014228]      ; 10005039 | g_PendingVertexCount
    MOV ECX,dword ptr [EDX + 0x8]       ; 1000503f
    MOV dword ptr [EBX*0x4 + 0x10215e48],EAX ; 10005042 | g_VertexBatchStamp
    MOV dword ptr [EBX*0x4 + 0x10226f08],EBP ; 10005049 | g_VertexCacheIndex
    SHL EBP,0x5                         ; 10005050
    MOV EAX,dword ptr [EDX + 0x4]       ; 10005053
    ADD EBP,0x1013b8d8                  ; 10005056 | g_VertexBuffer
    PUSH 0x100                          ; 1000505c
    MOV dword ptr [ESI + 0x18],EAX      ; 10005061
    MOV dword ptr [ESI + 0x1c],ECX      ; 10005064
    MOV EAX,dword ptr [ESP + 0x24]      ; 10005067
    PUSH EAX                            ; 1000506b
    PUSH EBP                            ; 1000506c
    PUSH ESI                            ; 1000506d
    CALL dll_dx7.cpp_buildTLVertex_FUN_100044b0 ; 1000506e
        ;   XREF to: 100044b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_buildTLVertex_FUN_100044b0(SRenderVertex * src, SScreenVertex * out, uint render_flags, int rhw_scale)
    ADD ESP,0x10                        ; 10005073
    MOV EAX,[0x10014228]                ; 10005076 | g_PendingVertexCount
    INC EAX                             ; 1000507b
    MOV [0x10014228],EAX                ; 1000507c | g_PendingVertexCount
    CMP EAX,0x3e76                      ; 10005081
    JLE 0x1000511e                      ; 10005086
        ;   XREF to: 1000511e (CONDITIONAL_JUMP)  ; LAB_1000511e
    PUSH 0x10016bd8                     ; 1000508c | = "You're shoving too many verticies"
    JMP 0x10005116                      ; 10005091
        ;   XREF to: 10005116 (UNCONDITIONAL_JUMP)  ; LAB_10005116
    MOV ECX,dword ptr [EDX + 0x4]       ; 10005096
        ;   Label: LAB_10005096
    CMP dword ptr [ESI + 0x18],ECX      ; 10005099
    JNZ 0x100050a6                      ; 1000509c
        ;   XREF to: 100050a6 (CONDITIONAL_JUMP)  ; LAB_100050a6
    MOV EAX,dword ptr [ESI + 0x1c]      ; 1000509e
    CMP dword ptr [EDX + 0x8],EAX       ; 100050a1
    JZ 0x1000511e                       ; 100050a4
        ;   XREF to: 1000511e (CONDITIONAL_JUMP)  ; LAB_1000511e
    MOV ECX,dword ptr [EDX + 0x4]       ; 100050a6
        ;   Label: LAB_100050a6
    MOV EAX,dword ptr [EDX + 0x8]       ; 100050a9
    MOV EBP,dword ptr [0x10014228]      ; 100050ac | g_PendingVertexCount
    MOV dword ptr [ESI + 0x18],ECX      ; 100050b2
    MOV ECX,dword ptr [EBX*0x4 + 0x10226f08] ; 100050b5 | g_VertexCacheIndex
    MOV dword ptr [ESI + 0x1c],EAX      ; 100050bc
    SHL ECX,0x5                         ; 100050bf
    MOV EAX,EBP                         ; 100050c2
    SHL EAX,0x5                         ; 100050c4
    LEA ESI,[ECX + 0x1013b8d8]          ; 100050c7 | g_VertexBuffer
    ADD EAX,0x1013b8d8                  ; 100050cd | g_VertexBuffer
    MOV ECX,0x8                         ; 100050d2
    MOV EDI,EAX                         ; 100050d7
    MOVSD.REP ES:EDI,ESI                ; 100050d9 | g_VertexBuffer | g_VertexBuffer[0].y
    FILD dword ptr [EDX + 0x4]          ; 100050db
    MOV EDX,dword ptr [EDX + 0x8]       ; 100050de
    MOV dword ptr [EBX*0x4 + 0x10226f08],EBP ; 100050e1 | g_VertexCacheIndex
    INC EBP                             ; 100050e8
    MOV dword ptr [ESP + 0x10],EDX      ; 100050e9
    FMUL double ptr [0x100122e8]        ; 100050ed | DOUBLE_100122e8
    MOV dword ptr [0x10014228],EBP      ; 100050f3 | g_PendingVertexCount
    CMP EBP,0x3e76                      ; 100050f9
    FSTP float ptr [EAX + 0x18]         ; 100050ff | g_VertexBuffer[0].u
    FILD dword ptr [ESP + 0x10]         ; 10005102
    FMUL double ptr [0x100122e8]        ; 10005106 | DOUBLE_100122e8
    FSTP float ptr [EAX + 0x1c]         ; 1000510c | g_VertexBuffer[0].v
    JLE 0x1000511e                      ; 1000510f
        ;   XREF to: 1000511e (CONDITIONAL_JUMP)  ; LAB_1000511e
    PUSH 0x10016bfc                     ; 10005111 | = "You're shoving too many verticies"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10005116
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
        ;   Label: LAB_10005116
    MOV EAX,dword ptr [EBX*0x4 + 0x10226f08] ; 1000511e | g_VertexCacheIndex
        ;   Label: LAB_1000511e
    POP EBP                             ; 10005125
    POP EDI                             ; 10005126
    POP ESI                             ; 10005127
    POP EBX                             ; 10005128
    ADD ESP,0x4                         ; 10005129
    RET                                 ; 1000512c

