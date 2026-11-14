; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_00587340(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_a
; SRenderVertex *  Stack[0x8]:4   vertex_b
; SRenderVertex *  Stack[0xc]:4   vertex_out
;
; XREF[1]:
;   core_xform.cpp_transformAndClipGeometry_FUN_00587cd0 at 0058816b
;
; Referenced Globals:
;   undefined4 DAT_01c6e2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587340
        ;   Label: core_xform.cpp_clipInterpolateRightPlane_FUN_00587340
    PUSH ESI                            ; 00587341
    PUSH EDI                            ; 00587342
    PUSH EBP                            ; 00587343
    MOV ECX,dword ptr [ESP + 0x14]      ; 00587344
    MOV EDI,dword ptr [ESP + 0x18]      ; 00587348
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0058734c
    MOV EBX,dword ptr [EDI]             ; 00587350
    MOV EDX,dword ptr [ECX + 0x8]       ; 00587352
    MOV EAX,dword ptr [ECX]             ; 00587355
    MOV EBP,dword ptr [EDI + 0x8]       ; 00587357
    ADD EBX,EDX                         ; 0058735a
    ADD EAX,EBP                         ; 0058735c
    SUB EBX,EAX                         ; 0058735e
    MOV EAX,EDX                         ; 00587360
    MOV EDX,dword ptr [ECX]             ; 00587362
    SUB EAX,EDX                         ; 00587364
    MOV EDX,EAX                         ; 00587366
    CMP EDX,EBX                         ; 00587368
    JGE 0x0058737e                      ; 0058736a
        ;   XREF to: 0058737e (CONDITIONAL_JUMP)  ; LAB_0058737e
    NEG EBX                             ; 0058736c
    CMP EDX,EBX                         ; 0058736e
    JLE 0x00587385                      ; 00587370
        ;   XREF to: 00587385 (CONDITIONAL_JUMP)  ; LAB_00587385
    NEG EBX                             ; 00587372
    XOR EAX,EAX                         ; 00587374
    SAR EDX,0x1                         ; 00587376
    RCR EAX,0x1                         ; 00587378
    IDIV EBX                            ; 0058737a
    JMP 0x0058738c                      ; 0058737c
        ;   XREF to: 0058738c (UNCONDITIONAL_JUMP)  ; LAB_0058738c
    MOV EAX,0x7fffffff                  ; 0058737e
        ;   Label: LAB_0058737e
    JMP 0x0058738c                      ; 00587383
        ;   XREF to: 0058738c (UNCONDITIONAL_JUMP)  ; LAB_0058738c
    NEG EBX                             ; 00587385
        ;   Label: LAB_00587385
    MOV EAX,0x80000000                  ; 00587387
    MOV EBX,EAX                         ; 0058738c
        ;   Label: LAB_0058738c
    MOV EBP,dword ptr [ECX + 0x8]       ; 0058738e
    MOV EAX,dword ptr [EDI + 0x8]       ; 00587391
    MOV EDX,EBX                         ; 00587394
    SUB EAX,EBP                         ; 00587396
    IMUL EDX                            ; 00587398
    ADD EAX,EAX                         ; 0058739a
    ADC EDX,EDX                         ; 0058739c
    MOV EAX,EDX                         ; 0058739e
    MOV EDX,dword ptr [ECX + 0x8]       ; 005873a0
    ADD EAX,EDX                         ; 005873a3
    MOV dword ptr [ESI + 0x8],EAX       ; 005873a5
    MOV dword ptr [ESI],EAX             ; 005873a8
    MOV EAX,dword ptr [EDI + 0x4]       ; 005873aa
    SUB EAX,dword ptr [ECX + 0x4]       ; 005873ad
    MOV EDX,EBX                         ; 005873b0
    IMUL EDX                            ; 005873b2
    ADD EAX,EAX                         ; 005873b4
    ADC EDX,EDX                         ; 005873b6
    MOV EAX,EDX                         ; 005873b8
    MOV EDX,dword ptr [ECX + 0x4]       ; 005873ba
    ADD EAX,EDX                         ; 005873bd
    MOV dword ptr [ESI + 0x4],EAX       ; 005873bf
    MOV AH,byte ptr [0x01c6e2b4]        ; 005873c2 | DAT_01c6e2b4
    MOV dword ptr [ESI + 0x10],0xffffffff ; 005873c8
    TEST AH,0x4                         ; 005873cf
    JNZ 0x005873d9                      ; 005873d2
        ;   XREF to: 005873d9 (CONDITIONAL_JUMP)  ; LAB_005873d9
    POP EBP                             ; 005873d4
    POP EDI                             ; 005873d5
    POP ESI                             ; 005873d6
    POP EBX                             ; 005873d7
    RET                                 ; 005873d8
    MOV EAX,dword ptr [EDI + 0x20]      ; 005873d9
        ;   Label: LAB_005873d9
    MOV EDI,dword ptr [ECX + 0x20]      ; 005873dc
    MOV EDX,EBX                         ; 005873df
    SUB EAX,EDI                         ; 005873e1
    IMUL EDX                            ; 005873e3
    ADD EAX,EAX                         ; 005873e5
    ADC EDX,EDX                         ; 005873e7
    MOV EAX,EDX                         ; 005873e9
    MOV EDX,dword ptr [ECX + 0x20]      ; 005873eb
    ADD EAX,EDX                         ; 005873ee
    MOV dword ptr [ESI + 0x20],EAX      ; 005873f0
    POP EBP                             ; 005873f3
    POP EDI                             ; 005873f4
    POP ESI                             ; 005873f5
    POP EBX                             ; 005873f6
    RET                                 ; 005873f7

