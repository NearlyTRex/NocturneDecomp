; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407b30 at 00407ba6
;   engine_3d.c_clipAndDrawLine3D_FUN_00407e30 at 00407ea6
;   engine_clipper.c_clipPolygonLeftPlane_FUN_0043971e at 004397e7
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0 at 0043a42c
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 at 0046d617
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004391c0
        ;   Label: engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0
    PUSH ESI                            ; 004391c1
    PUSH EDI                            ; 004391c2
    PUSH EBP                            ; 004391c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004391c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004391c8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004391cc
    MOV ECX,dword ptr [ESI]             ; 004391d0
    ADD ECX,dword ptr [ESI + 0x8]       ; 004391d2
    MOV EAX,dword ptr [EBP]             ; 004391d5
    MOV EBX,ECX                         ; 004391d8
    MOV EDX,dword ptr [EBP + 0x8]       ; 004391da
    SUB EBX,EAX                         ; 004391dd
    SUB EBX,EDX                         ; 004391df
    MOV EDX,ECX                         ; 004391e1
    CMP EDX,EBX                         ; 004391e3
    JGE 0x004391f9                      ; 004391e5
        ;   XREF to: 004391f9 (CONDITIONAL_JUMP)  ; LAB_004391f9
    NEG EBX                             ; 004391e7
    CMP EDX,EBX                         ; 004391e9
    JLE 0x00439200                      ; 004391eb
        ;   XREF to: 00439200 (CONDITIONAL_JUMP)  ; LAB_00439200
    NEG EBX                             ; 004391ed
    XOR EAX,EAX                         ; 004391ef
    SAR EDX,0x1                         ; 004391f1
    RCR EAX,0x1                         ; 004391f3
    IDIV EBX                            ; 004391f5
    JMP 0x00439207                      ; 004391f7
        ;   XREF to: 00439207 (UNCONDITIONAL_JUMP)  ; LAB_00439207
    MOV EAX,0x7fffffff                  ; 004391f9
        ;   Label: LAB_004391f9
    JMP 0x00439207                      ; 004391fe
        ;   XREF to: 00439207 (UNCONDITIONAL_JUMP)  ; LAB_00439207
    NEG EBX                             ; 00439200
        ;   Label: LAB_00439200
    MOV EAX,0x80000000                  ; 00439202
    MOV ECX,EAX                         ; 00439207
        ;   Label: LAB_00439207
    MOV EBX,dword ptr [ESI + 0x8]       ; 00439209
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043920c
    MOV EDX,ECX                         ; 0043920f
    SUB EAX,EBX                         ; 00439211
    IMUL EDX                            ; 00439213
    ADD EAX,EAX                         ; 00439215
    ADC EDX,EDX                         ; 00439217
    MOV EAX,EDX                         ; 00439219
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043921b
    ADD EAX,EBX                         ; 0043921e
    MOV dword ptr [EDI + 0x8],EAX       ; 00439220
    MOV dword ptr [EDI],EAX             ; 00439223
    NEG EAX                             ; 00439225
    MOV dword ptr [EDI],EAX             ; 00439227
    MOV EAX,dword ptr [EBP + 0x4]       ; 00439229
    SUB EAX,dword ptr [ESI + 0x4]       ; 0043922c
    MOV EDX,ECX                         ; 0043922f
    IMUL EDX                            ; 00439231
    ADD EAX,EAX                         ; 00439233
    ADC EDX,EDX                         ; 00439235
    MOV EAX,EDX                         ; 00439237
    MOV EBX,dword ptr [ESI + 0x4]       ; 00439239
    ADD EAX,EBX                         ; 0043923c
    MOV dword ptr [EDI + 0x4],EAX       ; 0043923e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00439241
    MOV EBX,dword ptr [ESI + 0x20]      ; 00439244
    MOV EDX,ECX                         ; 00439247
    SUB EAX,EBX                         ; 00439249
    IMUL EDX                            ; 0043924b
    ADD EAX,EAX                         ; 0043924d
    ADC EDX,EDX                         ; 0043924f
    MOV EAX,EDX                         ; 00439251
    MOV EBX,dword ptr [ESI + 0x20]      ; 00439253
    ADD EAX,EBX                         ; 00439256
    MOV dword ptr [EDI + 0x20],EAX      ; 00439258
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0043925b
    SUB EAX,dword ptr [ESI + 0x2c]      ; 0043925e
    MOV EDX,ECX                         ; 00439261
    IMUL EDX                            ; 00439263
    ADD EAX,EAX                         ; 00439265
    ADC EDX,EDX                         ; 00439267
    MOV EAX,EDX                         ; 00439269
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0043926b
    ADD EAX,EBX                         ; 0043926e
    MOV dword ptr [EDI + 0x2c],EAX      ; 00439270
    MOV EAX,dword ptr [EBP + 0x18]      ; 00439273
    MOV EBX,dword ptr [ESI + 0x18]      ; 00439276
    MOV EDX,ECX                         ; 00439279
    SUB EAX,EBX                         ; 0043927b
    IMUL EDX                            ; 0043927d
    ADD EAX,EAX                         ; 0043927f
    ADC EDX,EDX                         ; 00439281
    MOV EAX,EDX                         ; 00439283
    MOV EBX,dword ptr [ESI + 0x18]      ; 00439285
    ADD EAX,EBX                         ; 00439288
    MOV dword ptr [EDI + 0x18],EAX      ; 0043928a
    MOV EBP,dword ptr [EBP + 0x1c]      ; 0043928d
    SUB EBP,dword ptr [ESI + 0x1c]      ; 00439290
    MOV EDX,ECX                         ; 00439293
    MOV EAX,EBP                         ; 00439295
    IMUL EDX                            ; 00439297
    ADD EAX,EAX                         ; 00439299
    ADC EDX,EDX                         ; 0043929b
    MOV EAX,EDX                         ; 0043929d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0043929f
    MOV dword ptr [EDI + 0x10],0xffffffff ; 004392a2
    ADD EAX,ECX                         ; 004392a9
    MOV dword ptr [EDI + 0x1c],EAX      ; 004392ab
    POP EBP                             ; 004392ae
    POP EDI                             ; 004392af
    POP ESI                             ; 004392b0
    POP EBX                             ; 004392b1
    RET                                 ; 004392b2

