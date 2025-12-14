; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, int * output_count)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   clip_plane
; CVector3f *      Stack[0x8]:4   input_vertices
; int              Stack[0xc]:4   input_count
; CVector3f *      Stack[0x10]:4   output_vertices
; int *            Stack[0x14]:4   output_count
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310 at 00522441
;
; Referenced Globals:
;   void* PTR_caseD_1_00521278 = 00521365
;   void* PTR_caseD_3_00521280 = 00521347
;
; Called Functions:
;   core_mirror.cpp_computePlaneIntersection_FUN_00521160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521290
        ;   Label: core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
    PUSH ESI                            ; 00521291
    PUSH EDI                            ; 00521292
    PUSH EBP                            ; 00521293
    SUB ESP,0x4                         ; 00521294
    MOV ESI,dword ptr [ESP + 0x18]      ; 00521297
    MOV EBX,dword ptr [ESP + 0x28]      ; 0052129b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052129f
    XOR EDX,EDX                         ; 005212a3
    MOV dword ptr [EBX],0x0             ; 005212a5
    MOV dword ptr [ESP],EDX             ; 005212ab
    TEST ECX,ECX                        ; 005212ae
    JLE 0x0052135d                      ; 005212b0
        ;   XREF to: 0052135d (CONDITIONAL_JUMP)  ; LAB_0052135d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005212b6
    MOV ECX,dword ptr [ESP]             ; 005212ba
        ;   Label: LAB_005212ba
    MOV EDX,dword ptr [ESP + 0x20]      ; 005212bd
    INC ECX                             ; 005212c1
    CMP ECX,EDX                         ; 005212c2
    JNZ 0x005212c8                      ; 005212c4
        ;   XREF to: 005212c8 (CONDITIONAL_JUMP)  ; LAB_005212c8
    XOR ECX,EDX                         ; 005212c6
    IMUL ECX,ECX,0xc                    ; 005212c8
        ;   Label: LAB_005212c8
    FLD float ptr [ESI + 0x4]           ; 005212cb
    FMUL float ptr [EDI + 0x4]          ; 005212ce
    FLD float ptr [ESI]                 ; 005212d1
    FMUL float ptr [EDI]                ; 005212d3
    FADDP                               ; 005212d5
    FLD float ptr [ESI + 0x8]           ; 005212d7
    FMUL float ptr [EDI + 0x8]          ; 005212da
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005212dd
    MOV EDX,EDI                         ; 005212e1
    FADDP                               ; 005212e3
    ADD EBP,ECX                         ; 005212e5
    FADD float ptr [ESI + 0xc]          ; 005212e7
    XOR ECX,ECX                         ; 005212ea
    FLDZ                                ; 005212ec
    FCOMPP                              ; 005212ee
    FNSTSW AX                           ; 005212f0
    SAHF                                ; 005212f2
    JNC 0x005212fa                      ; 005212f3
        ;   XREF to: 005212fa (CONDITIONAL_JUMP)  ; LAB_005212fa
    MOV ECX,0x1                         ; 005212f5
    FLD float ptr [ESI + 0x4]           ; 005212fa
        ;   Label: LAB_005212fa
    FMUL float ptr [EBP + 0x4]          ; 005212fd
    FLD float ptr [ESI]                 ; 00521300
    FMUL float ptr [EBP]                ; 00521302
    FADDP                               ; 00521305
    FLD float ptr [ESI + 0x8]           ; 00521307
    FMUL float ptr [EBP + 0x8]          ; 0052130a
    FADDP                               ; 0052130d
    FADD float ptr [ESI + 0xc]          ; 0052130f
    FLDZ                                ; 00521312
    FCOMPP                              ; 00521314
    FNSTSW AX                           ; 00521316
    SAHF                                ; 00521318
    JNC 0x0052131e                      ; 00521319
        ;   XREF to: 0052131e (CONDITIONAL_JUMP)  ; LAB_0052131e
    OR CL,0x2                           ; 0052131b
    CMP ECX,0x3                         ; 0052131e
        ;   Label: LAB_0052131e
    JA 0x00521347                       ; 00521321
        ;   XREF to: 00521347 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x521274]  ; 00521323 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL ECX,dword ptr [EBX],0xc        ; 0052132a
        ;   Label: caseD_0
    ADD ECX,dword ptr [ESP + 0x24]      ; 0052132d
    CMP ECX,EDX                         ; 00521331
    JZ 0x00521345                       ; 00521333
        ;   XREF to: 00521345 (CONDITIONAL_JUMP)  ; LAB_00521345
    MOV EAX,dword ptr [EDX]             ; 00521335
    MOV dword ptr [ECX],EAX             ; 00521337
    MOV EAX,dword ptr [EDX + 0x4]       ; 00521339
    MOV dword ptr [ECX + 0x4],EAX       ; 0052133c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0052133f
    MOV dword ptr [ECX + 0x8],EAX       ; 00521342
    INC dword ptr [EBX]                 ; 00521345
        ;   Label: LAB_00521345
    MOV EBP,dword ptr [ESP]             ; 00521347
        ;   Label: caseD_3
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052134a
    INC EBP                             ; 0052134e
    ADD EDI,0xc                         ; 0052134f
    MOV dword ptr [ESP],EBP             ; 00521352
    CMP EBP,EAX                         ; 00521355
    JL 0x005212ba                       ; 00521357
        ;   XREF to: 005212ba (CONDITIONAL_JUMP)  ; LAB_005212ba
    ADD ESP,0x4                         ; 0052135d
        ;   Label: LAB_0052135d
    POP EBP                             ; 00521360
    POP EDI                             ; 00521361
    POP ESI                             ; 00521362
    POP EBX                             ; 00521363
    RET                                 ; 00521364
    IMUL ECX,dword ptr [EBX],0xc        ; 00521365
        ;   Label: caseD_1
    ADD ECX,dword ptr [ESP + 0x24]      ; 00521368
    PUSH ECX                            ; 0052136c
    PUSH EDX                            ; 0052136d
    PUSH EBP                            ; 0052136e
    PUSH ESI                            ; 0052136f
    CALL core_mirror.cpp_computePlaneIntersection_FUN_00521160 ; 00521370
        ;   XREF to: 00521160 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneIntersection_FUN_00521160(SClipPlane * clip_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * out_intersection)
    MOV EDX,dword ptr [EBX]             ; 00521375
    INC EDX                             ; 00521377
    ADD ESP,0x10                        ; 00521378
    MOV dword ptr [EBX],EDX             ; 0052137b
    JMP 0x00521347                      ; 0052137d
        ;   XREF to: 00521347 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [EBX],0xc        ; 0052137f
        ;   Label: caseD_2
    ADD ECX,dword ptr [ESP + 0x24]      ; 00521382
    CMP ECX,EDX                         ; 00521386
    JZ 0x0052139a                       ; 00521388
        ;   XREF to: 0052139a (CONDITIONAL_JUMP)  ; LAB_0052139a
    MOV EAX,dword ptr [EDX]             ; 0052138a
    MOV dword ptr [ECX],EAX             ; 0052138c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0052138e
    MOV dword ptr [ECX + 0x4],EAX       ; 00521391
    MOV EAX,dword ptr [EDX + 0x8]       ; 00521394
    MOV dword ptr [ECX + 0x8],EAX       ; 00521397
    MOV ECX,dword ptr [EBX]             ; 0052139a
        ;   Label: LAB_0052139a
    INC ECX                             ; 0052139c
    MOV dword ptr [EBX],ECX             ; 0052139d
    IMUL ECX,ECX,0xc                    ; 0052139f
    ADD ECX,dword ptr [ESP + 0x24]      ; 005213a2
    PUSH ECX                            ; 005213a6
    PUSH EBP                            ; 005213a7
    PUSH EDX                            ; 005213a8
    PUSH ESI                            ; 005213a9
    CALL core_mirror.cpp_computePlaneIntersection_FUN_00521160 ; 005213aa
        ;   XREF to: 00521160 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneIntersection_FUN_00521160(SClipPlane * clip_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * out_intersection)
    MOV EDX,dword ptr [EBX]             ; 005213af
    INC EDX                             ; 005213b1
    ADD ESP,0x10                        ; 005213b2
    MOV dword ptr [EBX],EDX             ; 005213b5
    JMP 0x00521347                      ; 005213b7
        ;   XREF to: 00521347 (UNCONDITIONAL_JUMP)  ; caseD_3

