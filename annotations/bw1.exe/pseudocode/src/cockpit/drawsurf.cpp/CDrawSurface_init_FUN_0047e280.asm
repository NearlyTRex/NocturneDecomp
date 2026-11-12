; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_0047e280(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface )
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; CDrawSurface *   Stack[0x18]:4   parent_surface
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240 at 0047e262
;   core_dracbrid.cpp_FUN_0047e20e at 0047e22a
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e280
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0047e280
    PUSH ESI                            ; 0047e281
    PUSH EDI                            ; 0047e282
    PUSH EBP                            ; 0047e283
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047e284
    MOV EDX,dword ptr [ESP + 0x28]      ; 0047e288
    MOV ECX,dword ptr [ESP + 0x18]      ; 0047e28c
    MOV dword ptr [EAX + 0x8],ECX       ; 0047e290
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047e293
    MOV dword ptr [EAX + 0xc],ECX       ; 0047e297
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047e29a
    MOV dword ptr [EAX],ECX             ; 0047e29e
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047e2a0
    MOV dword ptr [EAX + 0x4],ECX       ; 0047e2a4
    MOV ECX,dword ptr [EAX + 0x8]       ; 0047e2a7
    MOV dword ptr [EAX + 0x10],ECX      ; 0047e2aa
    MOV ECX,dword ptr [EAX + 0xc]       ; 0047e2ad
    MOV dword ptr [EAX + 0x14],ECX      ; 0047e2b0
    MOV EBX,dword ptr [EAX]             ; 0047e2b3
    MOV ECX,dword ptr [EAX + 0x8]       ; 0047e2b5
    ADD ECX,EBX                         ; 0047e2b8
    DEC ECX                             ; 0047e2ba
    MOV dword ptr [EAX + 0x18],ECX      ; 0047e2bb
    MOV ESI,dword ptr [EAX + 0x4]       ; 0047e2be
    MOV ECX,dword ptr [EAX + 0xc]       ; 0047e2c1
    ADD ECX,ESI                         ; 0047e2c4
    DEC ECX                             ; 0047e2c6
    MOV dword ptr [EAX + 0x1c],ECX      ; 0047e2c7
    TEST EDX,EDX                        ; 0047e2ca
    JNZ 0x0047e307                      ; 0047e2cc
        ;   XREF to: 0047e307 (CONDITIONAL_JUMP)  ; LAB_0047e307
    CMP dword ptr [EAX + 0x10],0x0      ; 0047e2ce
        ;   Label: LAB_0047e2ce
    JL 0x0047e380                       ; 0047e2d2
        ;   XREF to: 0047e380 (CONDITIONAL_JUMP)  ; LAB_0047e380
    CMP dword ptr [EAX + 0x14],0x0      ; 0047e2d8
        ;   Label: LAB_0047e2d8
    JL 0x0047e38c                       ; 0047e2dc
        ;   XREF to: 0047e38c (CONDITIONAL_JUMP)  ; LAB_0047e38c
    MOV EBX,dword ptr [0x0061b498]      ; 0047e2e2 | DAT_0061b498
        ;   Label: LAB_0047e2e2
    CMP EBX,dword ptr [EAX + 0x18]      ; 0047e2e8
    JG 0x0047e2f3                       ; 0047e2eb
        ;   XREF to: 0047e2f3 (CONDITIONAL_JUMP)  ; LAB_0047e2f3
    LEA EDX,[EBX + -0x1]                ; 0047e2ed
    MOV dword ptr [EAX + 0x18],EDX      ; 0047e2f0
    MOV ESI,dword ptr [0x0061b49c]      ; 0047e2f3 | DAT_0061b49c
        ;   Label: LAB_0047e2f3
    CMP ESI,dword ptr [EAX + 0x1c]      ; 0047e2f9
    JLE 0x0047e398                      ; 0047e2fc
        ;   XREF to: 0047e398 (CONDITIONAL_JUMP)  ; LAB_0047e398
    POP EBP                             ; 0047e302
    POP EDI                             ; 0047e303
    POP ESI                             ; 0047e304
    POP EBX                             ; 0047e305
    RET                                 ; 0047e306
    MOV EDI,dword ptr [EAX + 0x8]       ; 0047e307
        ;   Label: LAB_0047e307
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047e30a
    ADD EDI,ECX                         ; 0047e30d
    MOV dword ptr [EAX + 0x8],EDI       ; 0047e30f
    MOV EBP,dword ptr [EAX + 0xc]       ; 0047e312
    MOV ECX,dword ptr [EDX + 0xc]       ; 0047e315
    ADD EBP,ECX                         ; 0047e318
    MOV dword ptr [EAX + 0xc],EBP       ; 0047e31a
    MOV EBX,dword ptr [EAX + 0x10]      ; 0047e31d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047e320
    ADD EBX,ECX                         ; 0047e323
    MOV dword ptr [EAX + 0x10],EBX      ; 0047e325
    MOV ESI,dword ptr [EAX + 0x14]      ; 0047e328
    MOV ECX,dword ptr [EDX + 0xc]       ; 0047e32b
    ADD ESI,ECX                         ; 0047e32e
    MOV dword ptr [EAX + 0x14],ESI      ; 0047e330
    MOV EDI,dword ptr [EAX + 0x18]      ; 0047e333
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047e336
    ADD EDI,ECX                         ; 0047e339
    MOV dword ptr [EAX + 0x18],EDI      ; 0047e33b
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0047e33e
    MOV ECX,dword ptr [EDX + 0xc]       ; 0047e341
    ADD EBP,ECX                         ; 0047e344
    MOV dword ptr [EAX + 0x1c],EBP      ; 0047e346
    MOV ECX,dword ptr [EAX + 0x10]      ; 0047e349
    MOV EBX,dword ptr [EDX + 0x10]      ; 0047e34c
    CMP ECX,EBX                         ; 0047e34f
    JGE 0x0047e356                      ; 0047e351
        ;   XREF to: 0047e356 (CONDITIONAL_JUMP)  ; LAB_0047e356
    MOV dword ptr [EAX + 0x10],EBX      ; 0047e353
    MOV ESI,dword ptr [EDX + 0x14]      ; 0047e356
        ;   Label: LAB_0047e356
    CMP ESI,dword ptr [EAX + 0x14]      ; 0047e359
    JLE 0x0047e361                      ; 0047e35c
        ;   XREF to: 0047e361 (CONDITIONAL_JUMP)  ; LAB_0047e361
    MOV dword ptr [EAX + 0x14],ESI      ; 0047e35e
    MOV EDI,dword ptr [EDX + 0x18]      ; 0047e361
        ;   Label: LAB_0047e361
    CMP EDI,dword ptr [EAX + 0x18]      ; 0047e364
    JGE 0x0047e36c                      ; 0047e367
        ;   XREF to: 0047e36c (CONDITIONAL_JUMP)  ; LAB_0047e36c
    MOV dword ptr [EAX + 0x18],EDI      ; 0047e369
    MOV EBP,dword ptr [EDX + 0x1c]      ; 0047e36c
        ;   Label: LAB_0047e36c
    CMP EBP,dword ptr [EAX + 0x1c]      ; 0047e36f
    JGE 0x0047e2ce                      ; 0047e372
        ;   XREF to: 0047e2ce (CONDITIONAL_JUMP)  ; LAB_0047e2ce
    MOV dword ptr [EAX + 0x1c],EBP      ; 0047e378
    JMP 0x0047e2ce                      ; 0047e37b
        ;   XREF to: 0047e2ce (UNCONDITIONAL_JUMP)  ; LAB_0047e2ce
    MOV dword ptr [EAX + 0x10],0x0      ; 0047e380
        ;   Label: LAB_0047e380
    JMP 0x0047e2d8                      ; 0047e387
        ;   XREF to: 0047e2d8 (UNCONDITIONAL_JUMP)  ; LAB_0047e2d8
    MOV dword ptr [EAX + 0x14],0x0      ; 0047e38c
        ;   Label: LAB_0047e38c
    JMP 0x0047e2e2                      ; 0047e393
        ;   XREF to: 0047e2e2 (UNCONDITIONAL_JUMP)  ; LAB_0047e2e2
    LEA EDX,[ESI + -0x1]                ; 0047e398
        ;   Label: LAB_0047e398
    MOV dword ptr [EAX + 0x1c],EDX      ; 0047e39b
    POP EBP                             ; 0047e39e
    POP EDI                             ; 0047e39f
    POP ESI                             ; 0047e3a0
    POP EBX                             ; 0047e3a1
    RET                                 ; 0047e3a2

