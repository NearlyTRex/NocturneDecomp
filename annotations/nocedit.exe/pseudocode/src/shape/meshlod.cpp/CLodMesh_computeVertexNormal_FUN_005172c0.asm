; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0(CLodMesh * this_ptr, CVector3f * out_normal, int vertex_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_normal
; int              Stack[0xc]:4   vertex_index
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005172c0
        ;   Label: shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0
    PUSH ESI                            ; 005172c1
    PUSH EDI                            ; 005172c2
    PUSH EBP                            ; 005172c3
    MOV EBP,ESP                         ; 005172c4
    SUB ESP,0x14                        ; 005172c6
    AND ESP,0xfffffff8                  ; 005172c9
    MOV EDX,dword ptr [EBP + 0x18]      ; 005172cc
    IMUL ECX,dword ptr [EBP + 0x1c],0x4c4 ; 005172cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005172d6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005172d9
    MOV dword ptr [EDX],0x0             ; 005172dc
    XOR ESI,ESI                         ; 005172e2
    MOV dword ptr [EDX + 0x4],0x0       ; 005172e4
    ADD EAX,ECX                         ; 005172eb
    MOV dword ptr [EDX + 0x8],0x0       ; 005172ed
    MOV dword ptr [ESP + 0x10],ESI      ; 005172f4
    MOV EDI,dword ptr [EAX + 0x3f8]     ; 005172f8
    MOV dword ptr [ESP + 0x8],EAX       ; 005172fe
    TEST EDI,EDI                        ; 00517302
    JLE 0x00517386                      ; 00517304
        ;   XREF to: 00517386 (CONDITIONAL_JUMP)  ; LAB_00517386
    MOV dword ptr [ESP + 0xc],EAX       ; 0051730a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051730e
        ;   Label: LAB_0051730e
    IMUL EAX,dword ptr [EAX + 0x3fc],0xf0 ; 00517312
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051731c
    MOV ECX,dword ptr [ECX + 0x48]      ; 0051731f
    LEA EDI,[ECX + EAX*0x1]             ; 00517322
    MOV ECX,dword ptr [EDI + 0x24]      ; 00517325
    XOR EBX,EBX                         ; 00517328
    TEST ECX,ECX                        ; 0051732a
    JLE 0x00517364                      ; 0051732c
        ;   XREF to: 00517364 (CONDITIONAL_JUMP)  ; LAB_00517364
    MOV ECX,EDI                         ; 0051732e
    IMUL EAX,dword ptr [ECX + 0x28],0x8c ; 00517330
        ;   Label: LAB_00517330
    MOV ESI,dword ptr [EBP + 0x14]      ; 00517337
    MOV ESI,dword ptr [ESI + 0xc]       ; 0051733a
    FLD float ptr [ESI + EAX*0x1 + 0x44] ; 0051733d
    FADD float ptr [EDX]                ; 00517341
    FSTP float ptr [EDX]                ; 00517343
    FLD float ptr [ESI + EAX*0x1 + 0x48] ; 00517345
    FADD float ptr [EDX + 0x4]          ; 00517349
    FSTP float ptr [EDX + 0x4]          ; 0051734c
    FLD float ptr [ESI + EAX*0x1 + 0x4c] ; 0051734f
    FADD float ptr [EDX + 0x8]          ; 00517353
    INC EBX                             ; 00517356
    FSTP float ptr [EDX + 0x8]          ; 00517357
    MOV ESI,dword ptr [EDI + 0x24]      ; 0051735a
    ADD ECX,0x4                         ; 0051735d
    CMP EBX,ESI                         ; 00517360
    JL 0x00517330                       ; 00517362
        ;   XREF to: 00517330 (CONDITIONAL_JUMP)  ; LAB_00517330
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517364
        ;   Label: LAB_00517364
    MOV ECX,dword ptr [ESP + 0x10]      ; 00517368
    ADD EAX,0x4                         ; 0051736c
    INC ECX                             ; 0051736f
    MOV dword ptr [ESP + 0xc],EAX       ; 00517370
    MOV dword ptr [ESP + 0x10],ECX      ; 00517374
    MOV EAX,ECX                         ; 00517378
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051737a
    CMP EAX,dword ptr [ECX + 0x3f8]     ; 0051737e
    JL 0x0051730e                       ; 00517384
        ;   XREF to: 0051730e (CONDITIONAL_JUMP)  ; LAB_0051730e
    FLD float ptr [EDX + 0x4]           ; 00517386
        ;   Label: LAB_00517386
    FMUL ST0                            ; 00517389
    FLD float ptr [EDX]                 ; 0051738b
    FMUL ST0                            ; 0051738d
    FADDP                               ; 0051738f
    FLD float ptr [EDX + 0x8]           ; 00517391
    FMUL ST0                            ; 00517394
    FADDP                               ; 00517396
    FSQRT                               ; 00517398
    FST float ptr [ESP]                 ; 0051739a
    FLDZ                                ; 0051739d
    FCOMPP                              ; 0051739f
    FNSTSW AX                           ; 005173a1
    SAHF                                ; 005173a3
    JNC 0x005173d0                      ; 005173a4
        ;   XREF to: 005173d0 (CONDITIONAL_JUMP)  ; LAB_005173d0
    FLD1                                ; 005173a6
    FLD float ptr [EDX]                 ; 005173a8
    FXCH                                ; 005173aa
    FDIV float ptr [ESP]                ; 005173ac
    FXCH                                ; 005173af
    FMUL ST1                            ; 005173b1
    FLD float ptr [EDX + 0x4]           ; 005173b3
    FMUL ST2                            ; 005173b6
    FLD float ptr [EDX + 0x8]           ; 005173b8
    FMULP ST3                           ; 005173bb
    FXCH                                ; 005173bd
    FSTP float ptr [EDX]                ; 005173bf
    FSTP float ptr [EDX + 0x4]          ; 005173c1
    FSTP float ptr [EDX + 0x8]          ; 005173c4
    MOV EAX,EDX                         ; 005173c7
    MOV ESP,EBP                         ; 005173c9
    POP EBP                             ; 005173cb
    POP EDI                             ; 005173cc
    POP ESI                             ; 005173cd
    POP EBX                             ; 005173ce
    RET                                 ; 005173cf
    MOV dword ptr [EDX + 0x8],0x0       ; 005173d0
        ;   Label: LAB_005173d0
    MOV EAX,dword ptr [EDX + 0x8]       ; 005173d7
    MOV dword ptr [EDX + 0x4],EAX       ; 005173da
    MOV EAX,dword ptr [EDX + 0x4]       ; 005173dd
    MOV dword ptr [EDX],EAX             ; 005173e0
    MOV EAX,EDX                         ; 005173e2
    MOV ESP,EBP                         ; 005173e4
    POP EBP                             ; 005173e6
    POP EDI                             ; 005173e7
    POP ESI                             ; 005173e8
    POP EBX                             ; 005173e9
    RET                                 ; 005173ea

