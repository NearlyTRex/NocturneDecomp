; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_004d62f0(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   clip_plane
; CVector3f *      Stack[0x8]:4   vertex_a
; CVector3f *      Stack[0xc]:4   vertex_b
; CVector3f *      Stack[0x10]:4   out_intersection
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420 at 004d6500
;
; Referenced Globals:
;   TerminatedCString s_core_mirror_cpp_005895ea
;   TerminatedCString s_Bad_clip_005895fd
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d62f0
        ;   Label: core_mirror.cpp_computePlaneIntersection_FUN_004d62f0
    PUSH ESI                            ; 004d62f1
    PUSH EDI                            ; 004d62f2
    PUSH EBP                            ; 004d62f3
    SUB ESP,0x2c                        ; 004d62f4
    MOV ESI,dword ptr [ESP + 0x40]      ; 004d62f7
    MOV EBX,dword ptr [ESP + 0x44]      ; 004d62fb
    MOV EDI,dword ptr [ESP + 0x48]      ; 004d62ff
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004d6303
    FLD float ptr [EDI + 0x4]           ; 004d6307
    FSUB float ptr [EBX + 0x4]          ; 004d630a
    FMUL float ptr [ESI + 0x4]          ; 004d630d
    FLD float ptr [EDI]                 ; 004d6310
    FSUB float ptr [EBX]                ; 004d6312
    FMUL float ptr [ESI]                ; 004d6314
    FADDP                               ; 004d6316
    FLD float ptr [EDI + 0x8]           ; 004d6318
    FSUB float ptr [EBX + 0x8]          ; 004d631b
    FMUL float ptr [ESI + 0x8]          ; 004d631e
    FADDP                               ; 004d6321
    FSTP float ptr [ESP + 0x24]         ; 004d6323
    TEST dword ptr [ESP + 0x24],0x7fffffff ; 004d6327
    JZ 0x004d63c1                       ; 004d632f
        ;   XREF to: 004d63c1 (CONDITIONAL_JUMP)  ; LAB_004d63c1
    FLD float ptr [ESI]                 ; 004d6335
        ;   Label: LAB_004d6335
    FMUL float ptr [EBX]                ; 004d6337
    FADD float ptr [ESI + 0xc]          ; 004d6339
    FLD float ptr [ESI + 0x4]           ; 004d633c
    FMUL float ptr [EBX + 0x4]          ; 004d633f
    FADDP                               ; 004d6342
    FLD float ptr [ESI + 0x8]           ; 004d6344
    FMUL float ptr [EBX + 0x8]          ; 004d6347
    FADDP                               ; 004d634a
    FCHS                                ; 004d634c
    FDIV float ptr [ESP + 0x24]         ; 004d634e
    FLD float ptr [EDI]                 ; 004d6352
    FSUB float ptr [EBX]                ; 004d6354
    FST float ptr [ESP + 0x18]          ; 004d6356
    FLD float ptr [EDI + 0x4]           ; 004d635a
    FSUB float ptr [EBX + 0x4]          ; 004d635d
    FXCH ST2                            ; 004d6360
    FSTP float ptr [ESP + 0x28]         ; 004d6362
    FMUL float ptr [ESP + 0x28]         ; 004d6366
    FXCH                                ; 004d636a
    FST float ptr [ESP + 0x1c]          ; 004d636c
    FLD float ptr [EDI + 0x8]           ; 004d6370
    FSUB float ptr [EBX + 0x8]          ; 004d6373
    FXCH                                ; 004d6376
    FMUL float ptr [ESP + 0x28]         ; 004d6378
    FXCH                                ; 004d637c
    FST float ptr [ESP + 0x20]          ; 004d637e
    FMUL float ptr [ESP + 0x28]         ; 004d6382
    FXCH ST2                            ; 004d6386
    FSTP float ptr [ESP + 0xc]          ; 004d6388
    FSTP float ptr [ESP + 0x10]         ; 004d638c
    FSTP float ptr [ESP + 0x14]         ; 004d6390
    FLD float ptr [EBX]                 ; 004d6394
    FADD float ptr [ESP + 0xc]          ; 004d6396
    FSTP float ptr [ESP]                ; 004d639a
    FLD float ptr [EBX + 0x4]           ; 004d639d
    FADD float ptr [ESP + 0x10]         ; 004d63a0
    FSTP float ptr [ESP + 0x4]          ; 004d63a4
    FLD float ptr [EBX + 0x8]           ; 004d63a8
    FADD float ptr [ESP + 0x14]         ; 004d63ab
    MOV EAX,ESP                         ; 004d63af
    FSTP float ptr [ESP + 0x8]          ; 004d63b1
    CMP EBP,EAX                         ; 004d63b5
    JNZ 0x004d63e8                      ; 004d63b7
        ;   XREF to: 004d63e8 (CONDITIONAL_JUMP)  ; LAB_004d63e8
    ADD ESP,0x2c                        ; 004d63b9
    POP EBP                             ; 004d63bc
    POP EDI                             ; 004d63bd
    POP ESI                             ; 004d63be
    POP EBX                             ; 004d63bf
    RET                                 ; 004d63c0
    MOV ECX,0x5895ea                    ; 004d63c1 | = "..\\core\\mirror.cpp"
        ;   Label: LAB_004d63c1
    MOV EAX,0x42                        ; 004d63c6
    PUSH 0x5895fd                       ; 004d63cb | = "Bad clip!"
    MOV dword ptr [0x01cc4800],ECX      ; 004d63d0 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004d63d6 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d63db
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d63e0
    JMP 0x004d6335                      ; 004d63e3
        ;   XREF to: 004d6335 (UNCONDITIONAL_JUMP)  ; LAB_004d6335
    MOV EAX,dword ptr [ESP]             ; 004d63e8
        ;   Label: LAB_004d63e8
    MOV dword ptr [EBP],EAX             ; 004d63eb
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d63ee
    MOV dword ptr [EBP + 0x4],EAX       ; 004d63f2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d63f5
    MOV dword ptr [EBP + 0x8],EAX       ; 004d63f9
    ADD ESP,0x2c                        ; 004d63fc
    POP EBP                             ; 004d63ff
    POP EDI                             ; 004d6400
    POP ESI                             ; 004d6401
    POP EBX                             ; 004d6402
    RET                                 ; 004d6403

