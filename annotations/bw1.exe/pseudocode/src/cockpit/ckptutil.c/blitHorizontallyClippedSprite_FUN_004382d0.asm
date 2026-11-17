; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_004382d0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   end_x
; int              Stack[0x14]:4   max_height
; int              Stack[0x18]:4   unused_param
; int              Stack[0x1c]:4   src_y_offset
; int              Stack[0x20]:4   src_stride
;
; Referenced Globals:
;   int g_INT_0061b498 = 0x140
;   int g_INT_0061b4a0 = 0x8
;   void*[1200] g_ARRAY_PTR_01c4354c
;   undefined4 g_ARRAY_PTR_01c4354c[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004382d0
        ;   Label: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004382d0
    PUSH ESI                            ; 004382d1
    PUSH EDI                            ; 004382d2
    PUSH EBP                            ; 004382d3
    SUB ESP,0x18                        ; 004382d4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004382d7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004382db
    MOV EDI,dword ptr [ESP + 0x44]      ; 004382df
    MOV EAX,dword ptr [ESP + 0x38]      ; 004382e3
    SUB EAX,ESI                         ; 004382e7
    INC EAX                             ; 004382e9
    MOV EDX,dword ptr [0x01c4354c]      ; 004382ea | g_ARRAY_PTR_01c4354c
    MOV dword ptr [ESP + 0x14],EAX      ; 004382f0
    MOV EAX,[0x01c43550]                ; 004382f4 | g_ARRAY_PTR_01c4354c[1]
    SUB EAX,EDX                         ; 004382f9
    MOV dword ptr [ESP + 0x10],EAX      ; 004382fb
    TEST EBX,EBX                        ; 004382ff
    JNZ 0x00438318                      ; 00438301
        ;   XREF to: 00438318 (CONDITIONAL_JUMP)  ; LAB_00438318
    LEA EAX,[EAX]                       ; 00438303
    LEA EDX,[EDX]                       ; 00438309
    NOP                                 ; 0043830f
    ADD ESP,0x18                        ; 00438310
        ;   Label: LAB_00438310
    POP EBP                             ; 00438313
    POP EDI                             ; 00438314
    POP ESI                             ; 00438315
    POP EBX                             ; 00438316
    RET                                 ; 00438317
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270 ; 00438318
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270()
        ;   Label: LAB_00438318
    MOV ECX,dword ptr [ESP + 0x34]      ; 0043831d
    MOV EBP,EAX                         ; 00438321
    IMUL ECX,dword ptr [ESP + 0x48]     ; 00438323
    MOV EAX,[0x0061b498]                ; 00438328 | g_INT_0061b498
    MOV EDX,EAX                         ; 0043832d
    SAR EDX,0x1f                        ; 0043832f
    SUB EAX,EDX                         ; 00438332
    SAR EAX,0x1                         ; 00438334
    ADD ECX,EBX                         ; 00438336
    ADD EAX,ECX                         ; 00438338
    LEA EBX,[EAX + ESI*0x1]             ; 0043833a
    MOV EDX,dword ptr [0x0061b4a0]      ; 0043833d | g_INT_0061b4a0
    MOV EAX,dword ptr [ESP + 0x34]      ; 00438343
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00438347
    ADD EAX,EDI                         ; 0043834b
    SUB ECX,EDI                         ; 0043834d
    SHL EAX,0x2                         ; 0043834f
    CMP EDX,0x8                         ; 00438352
    JNZ 0x0043839c                      ; 00438355
        ;   XREF to: 0043839c (CONDITIONAL_JUMP)  ; LAB_0043839c
    MOV EDI,dword ptr [EAX + 0x1c4354c] ; 00438357
    ADD EDI,ESI                         ; 0043835d
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043835f
    MOV dword ptr [ESP + 0x8],ECX       ; 00438363
    CMP ECX,ESI                         ; 00438367
    JLE 0x00438310                      ; 00438369
        ;   XREF to: 00438310 (CONDITIONAL_JUMP)  ; LAB_00438310
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043836b
        ;   Label: LAB_0043836b
    PUSH ECX                            ; 0043836f
    MOV EDX,dword ptr [ESP + 0x44]      ; 00438370
    MOV EAX,EDI                         ; 00438374
    PUSH EBX                            ; 00438376
    SUB EAX,EDX                         ; 00438377
    PUSH EAX                            ; 00438379
    CALL EBP                            ; 0043837a
    ADD ESP,0xc                         ; 0043837c
    INC ESI                             ; 0043837f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00438380
    MOV EAX,dword ptr [ESP + 0x48]      ; 00438384
    MOV EDX,dword ptr [ESP + 0x8]       ; 00438388
    ADD EDI,ECX                         ; 0043838c
    ADD EBX,EAX                         ; 0043838e
    CMP ESI,EDX                         ; 00438390
    JL 0x0043836b                       ; 00438392
        ;   XREF to: 0043836b (CONDITIONAL_JUMP)  ; LAB_0043836b
    ADD ESP,0x18                        ; 00438394
    POP EBP                             ; 00438397
    POP EDI                             ; 00438398
    POP ESI                             ; 00438399
    POP EBX                             ; 0043839a
    RET                                 ; 0043839b
    MOV EDI,dword ptr [EAX + 0x1c4354c] ; 0043839c
        ;   Label: LAB_0043839c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004383a2
    MOV EDX,EAX                         ; 004383a6
    SAR EDX,0x1f                        ; 004383a8
    SUB EAX,EDX                         ; 004383ab
    SAR EAX,0x1                         ; 004383ad
    MOV dword ptr [ESP + 0x10],EAX      ; 004383af
    MOV EAX,dword ptr [ESP + 0x40]      ; 004383b3
    MOV dword ptr [ESP + 0xc],ECX       ; 004383b7
    ADD EAX,EAX                         ; 004383bb
    ADD ESI,ESI                         ; 004383bd
    MOV dword ptr [ESP],EAX             ; 004383bf
    MOV EAX,dword ptr [ESP + 0x10]      ; 004383c2
    ADD EDI,ESI                         ; 004383c6
    ADD EAX,EAX                         ; 004383c8
    MOV ESI,dword ptr [ESP + 0x34]      ; 004383ca
    MOV dword ptr [ESP + 0x4],EAX       ; 004383ce
    CMP ECX,ESI                         ; 004383d2
    JLE 0x00438310                      ; 004383d4
        ;   XREF to: 00438310 (CONDITIONAL_JUMP)  ; LAB_00438310
    MOV ECX,dword ptr [ESP + 0x14]      ; 004383da
        ;   Label: LAB_004383da
    PUSH ECX                            ; 004383de
    MOV EDX,dword ptr [ESP + 0x4]       ; 004383df
    MOV EAX,EDI                         ; 004383e3
    PUSH EBX                            ; 004383e5
    SUB EAX,EDX                         ; 004383e6
    PUSH EAX                            ; 004383e8
    CALL EBP                            ; 004383e9
    ADD ESP,0xc                         ; 004383eb
    INC ESI                             ; 004383ee
    MOV ECX,dword ptr [ESP + 0x4]       ; 004383ef
    MOV EAX,dword ptr [ESP + 0x48]      ; 004383f3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004383f7
    ADD EDI,ECX                         ; 004383fb
    ADD EBX,EAX                         ; 004383fd
    CMP ESI,EDX                         ; 004383ff
    JL 0x004383da                       ; 00438401
        ;   XREF to: 004383da (CONDITIONAL_JUMP)  ; LAB_004383da
    ADD ESP,0x18                        ; 00438403
    POP EBP                             ; 00438406
    POP EDI                             ; 00438407
    POP ESI                             ; 00438408
    POP EBX                             ; 00438409
    RET                                 ; 0043840a

