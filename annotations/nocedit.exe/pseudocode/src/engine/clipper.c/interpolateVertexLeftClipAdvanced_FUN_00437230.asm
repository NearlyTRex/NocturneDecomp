; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[3]:
;   engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700 at 004377b6
;   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 at 004381ad
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420 at 004389a5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437230
        ;   Label: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
    PUSH ESI                            ; 00437231
    PUSH EDI                            ; 00437232
    PUSH EBP                            ; 00437233
    MOV ECX,dword ptr [ESP + 0x14]      ; 00437234
    MOV EDI,dword ptr [ESP + 0x18]      ; 00437238
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043723c
    MOV EAX,dword ptr [EDI]             ; 00437240
    MOV EDX,dword ptr [ECX + 0x8]       ; 00437242
    MOV EBX,dword ptr [ECX]             ; 00437245
    MOV EBP,dword ptr [EDI + 0x8]       ; 00437247
    ADD EAX,EDX                         ; 0043724a
    ADD EBX,EBP                         ; 0043724c
    SUB EAX,EBX                         ; 0043724e
    MOV EBX,EDX                         ; 00437250
    MOV EDX,dword ptr [ECX]             ; 00437252
    SUB EBX,EDX                         ; 00437254
    MOV EDX,EBX                         ; 00437256
    MOV EBX,EAX                         ; 00437258
    CMP EDX,EBX                         ; 0043725a
    JGE 0x00437270                      ; 0043725c | LAB_00437270
        ;   XREF to: 00437270 (CONDITIONAL_JUMP)
    NEG EBX                             ; 0043725e
    CMP EDX,EBX                         ; 00437260
    JLE 0x00437277                      ; 00437262 | LAB_00437277
        ;   XREF to: 00437277 (CONDITIONAL_JUMP)
    NEG EBX                             ; 00437264
    XOR EAX,EAX                         ; 00437266
    SAR EDX,0x1                         ; 00437268
    RCR EAX,0x1                         ; 0043726a
    IDIV EBX                            ; 0043726c
    JMP 0x0043727e                      ; 0043726e | LAB_0043727e
        ;   XREF to: 0043727e (UNCONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 00437270
        ;   Label: LAB_00437270
    JMP 0x0043727e                      ; 00437275 | LAB_0043727e
        ;   XREF to: 0043727e (UNCONDITIONAL_JUMP)
    NEG EBX                             ; 00437277
        ;   Label: LAB_00437277
    MOV EAX,0x80000000                  ; 00437279
    MOV EBX,EAX                         ; 0043727e
        ;   Label: LAB_0043727e
    MOV EBP,dword ptr [ECX + 0x8]       ; 00437280
    MOV EAX,dword ptr [EDI + 0x8]       ; 00437283
    MOV EDX,EBX                         ; 00437286
    SUB EAX,EBP                         ; 00437288
    IMUL EDX                            ; 0043728a
    ADD EAX,EAX                         ; 0043728c
    ADC EDX,EDX                         ; 0043728e
    MOV EAX,EDX                         ; 00437290
    MOV EDX,dword ptr [ECX + 0x8]       ; 00437292
    ADD EAX,EDX                         ; 00437295
    MOV dword ptr [ESI + 0x8],EAX       ; 00437297
    MOV dword ptr [ESI],EAX             ; 0043729a
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043729c
    SUB EAX,dword ptr [ECX + 0x4]       ; 0043729f
    MOV EDX,EBX                         ; 004372a2
    IMUL EDX                            ; 004372a4
    ADD EAX,EAX                         ; 004372a6
    ADC EDX,EDX                         ; 004372a8
    MOV EAX,EDX                         ; 004372aa
    MOV EDX,dword ptr [ECX + 0x4]       ; 004372ac
    MOV dword ptr [ESI + 0x10],0xffffffff ; 004372af
    ADD EAX,EDX                         ; 004372b6
    MOV dword ptr [ESI + 0x4],EAX       ; 004372b8
    MOV EAX,dword ptr [EDI + 0x20]      ; 004372bb
    MOV EBP,dword ptr [ECX + 0x20]      ; 004372be
    MOV EDX,EBX                         ; 004372c1
    SUB EAX,EBP                         ; 004372c3
    IMUL EDX                            ; 004372c5
    ADD EAX,EAX                         ; 004372c7
    ADC EDX,EDX                         ; 004372c9
    MOV EAX,EDX                         ; 004372cb
    MOV EDX,dword ptr [ECX + 0x20]      ; 004372cd
    ADD EAX,EDX                         ; 004372d0
    MOV dword ptr [ESI + 0x20],EAX      ; 004372d2
    MOV EAX,dword ptr [EDI + 0x24]      ; 004372d5
    SUB EAX,dword ptr [ECX + 0x24]      ; 004372d8
    MOV EDX,EBX                         ; 004372db
    IMUL EDX                            ; 004372dd
    ADD EAX,EAX                         ; 004372df
    ADC EDX,EDX                         ; 004372e1
    MOV EAX,EDX                         ; 004372e3
    MOV EDX,dword ptr [ECX + 0x24]      ; 004372e5
    ADD EDX,EAX                         ; 004372e8
    MOV dword ptr [ESI + 0x24],EDX      ; 004372ea
    MOV EAX,dword ptr [EDI + 0x28]      ; 004372ed
    MOV EBP,dword ptr [ECX + 0x28]      ; 004372f0
    MOV EDX,EBX                         ; 004372f3
    SUB EAX,EBP                         ; 004372f5
    IMUL EDX                            ; 004372f7
    ADD EAX,EAX                         ; 004372f9
    ADC EDX,EDX                         ; 004372fb
    MOV EAX,EDX                         ; 004372fd
    MOV EDX,dword ptr [ECX + 0x28]      ; 004372ff
    ADD EDX,EAX                         ; 00437302
    MOV dword ptr [ESI + 0x28],EDX      ; 00437304
    MOV EAX,dword ptr [EDI + 0x18]      ; 00437307
    SUB EAX,dword ptr [ECX + 0x18]      ; 0043730a
    MOV EDX,EBX                         ; 0043730d
    IMUL EDX                            ; 0043730f
    ADD EAX,EAX                         ; 00437311
    ADC EDX,EDX                         ; 00437313
    MOV EAX,EDX                         ; 00437315
    MOV EDX,dword ptr [ECX + 0x18]      ; 00437317
    ADD EDX,EAX                         ; 0043731a
    MOV dword ptr [ESI + 0x18],EDX      ; 0043731c
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043731f
    MOV EBP,dword ptr [ECX + 0x1c]      ; 00437322
    MOV EDX,EBX                         ; 00437325
    SUB EAX,EBP                         ; 00437327
    IMUL EDX                            ; 00437329
    ADD EAX,EAX                         ; 0043732b
    ADC EDX,EDX                         ; 0043732d
    MOV EAX,EDX                         ; 0043732f
    MOV EDX,dword ptr [ECX + 0x1c]      ; 00437331
    ADD EDX,EAX                         ; 00437334
    MOV dword ptr [ESI + 0x1c],EDX      ; 00437336
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00437339
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043733c
    MOV EDX,EBX                         ; 0043733f
    IMUL EDX                            ; 00437341
    ADD EAX,EAX                         ; 00437343
    ADC EDX,EDX                         ; 00437345
    MOV EAX,EDX                         ; 00437347
    MOV EDX,dword ptr [ECX + 0x2c]      ; 00437349
    ADD EDX,EAX                         ; 0043734c
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043734e
    POP EBP                             ; 00437351
    POP EDI                             ; 00437352
    POP ESI                             ; 00437353
    POP EBX                             ; 00437354
    RET                                 ; 00437355

