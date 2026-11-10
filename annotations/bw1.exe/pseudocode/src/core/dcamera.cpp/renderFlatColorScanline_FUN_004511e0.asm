; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_004511e0(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   right
; SSoftwareEdge *  Stack[0xc]:4   left
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0 at 00555272
;
; Referenced Globals:
;   undefined4 DAT_01323d00
;   undefined4 DAT_01480e28
;   undefined4 DAT_0152a950
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004511e0
        ;   Label: core_dcamera.cpp_renderFlatColorScanline_FUN_004511e0
    PUSH ESI                            ; 004511e1
    PUSH EDI                            ; 004511e2
    PUSH EBP                            ; 004511e3
    SUB ESP,0x18                        ; 004511e4
    MOV ESI,dword ptr [0x01480e28]      ; 004511e7 | DAT_01480e28
    MOV EBP,dword ptr [ESP + 0x30]      ; 004511ed
    MOV EDX,dword ptr [ESP + 0x34]      ; 004511f1
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004511f5
    SUB ECX,dword ptr [0x01c4f00c]      ; 004511f9 | DAT_01c4f00c
    MOV EBX,dword ptr [0x01323d00]      ; 004511ff | DAT_01323d00
    MOV dword ptr [ESP + 0x2c],ECX      ; 00451205
    CMP EBX,0x1                         ; 00451209
    JNZ 0x00451219                      ; 0045120c
        ;   XREF to: 00451219 (CONDITIONAL_JUMP)  ; LAB_00451219
    TEST byte ptr [ESP + 0x2c],0x1      ; 0045120e
    JNZ 0x0045138b                      ; 00451213
        ;   XREF to: 0045138b (CONDITIONAL_JUMP)  ; LAB_0045138b
    CMP dword ptr [0x01323d00],0x2      ; 00451219 | DAT_01323d00
        ;   Label: LAB_00451219
    JNZ 0x0045122d                      ; 00451220
        ;   XREF to: 0045122d (CONDITIONAL_JUMP)  ; LAB_0045122d
    TEST byte ptr [ESP + 0x2c],0x3      ; 00451222
    JNZ 0x0045138b                      ; 00451227
        ;   XREF to: 0045138b (CONDITIONAL_JUMP)  ; LAB_0045138b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0045122d
        ;   Label: LAB_0045122d
    MOV EAX,[0x01c4f008]                ; 00451230 | DAT_01c4f008
    SAR EDI,0x10                        ; 00451235
    SUB EDI,EAX                         ; 00451238
    MOV EAX,dword ptr [EDX + 0x8]       ; 0045123a
    MOV ECX,dword ptr [0x01c4f008]      ; 0045123d | DAT_01c4f008
    SAR EAX,0x10                        ; 00451243
    SUB EAX,ECX                         ; 00451246
    MOV dword ptr [ESP + 0x10],EAX      ; 00451248
    CMP EDI,EAX                         ; 0045124c
    JLE 0x00451260                      ; 0045124e
        ;   XREF to: 00451260 (CONDITIONAL_JUMP)  ; LAB_00451260
    MOV EAX,EDI                         ; 00451250
    MOV EDI,dword ptr [ESP + 0x10]      ; 00451252
    MOV dword ptr [ESP + 0x10],EAX      ; 00451256
    MOV EAX,EBP                         ; 0045125a
    MOV EBP,EDX                         ; 0045125c
    MOV EDX,EAX                         ; 0045125e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00451260
        ;   Label: LAB_00451260
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00451264
    LEA ECX,[EDI*0x4 + 0x0]             ; 00451268
    MOV EBP,dword ptr [EBP + 0x28]      ; 0045126f
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4480c] ; 00451272
    MOV EDX,dword ptr [EDX + 0x28]      ; 00451279
    ADD EAX,ECX                         ; 0045127c
    MOV CL,byte ptr [0x01323d00]        ; 0045127e | DAT_01323d00
    MOV dword ptr [ESP + 0x14],EAX      ; 00451284
    MOV EAX,dword ptr [ESP + 0x10]      ; 00451288
    SUB EDX,EBP                         ; 0045128c
    SAR EAX,CL                          ; 0045128e
    SAR EDI,CL                          ; 00451290
    MOV dword ptr [ESP + 0x10],EAX      ; 00451292
    SUB EAX,EDI                         ; 00451296
    SAR EBX,CL                          ; 00451298
    LEA ECX,[EAX + 0x1]                 ; 0045129a
    MOV EAX,EDX                         ; 0045129d
    SAR EDX,0x1f                        ; 0045129f
    IDIV ECX                            ; 004512a2
    MOV dword ptr [ESP + 0xc],EAX       ; 004512a4
    MOV EAX,[0x0152a950]                ; 004512a8 | DAT_0152a950
    MOV EDX,EAX                         ; 004512ad
    SAR EDX,0x1f                        ; 004512af
    SHL EDX,0x8                         ; 004512b2
    SBB EAX,EDX                         ; 004512b5
    SAR EAX,0x8                         ; 004512b7
    MOV dword ptr [ESP + 0x2c],EBX      ; 004512ba
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004512be
    MOV BL,AL                           ; 004512c2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004512c4
    ADD EAX,EDX                         ; 004512cb
    SHL EAX,0x6                         ; 004512cd
    CMP ESI,0x1                         ; 004512d0
    JLE 0x0045133f                      ; 004512d3
        ;   XREF to: 0045133f (CONDITIONAL_JUMP)  ; LAB_0045133f
    MOV EDX,0x1                         ; 004512d5
    MOV CL,byte ptr [0x01323d00]        ; 004512da | DAT_01323d00
    SHL EDX,CL                          ; 004512e0
    LEA ECX,[EDX*0x4 + 0x0]             ; 004512e2
    MOV dword ptr [ESP + 0x4],EAX       ; 004512e9
    MOV dword ptr [ESP + 0x8],ECX       ; 004512ed
    XOR ECX,ECX                         ; 004512f1
    CMP EDI,dword ptr [ESP + 0x10]      ; 004512f3
        ;   Label: LAB_004512f3
    JGE 0x0045138b                      ; 004512f7
        ;   XREF to: 0045138b (CONDITIONAL_JUMP)  ; LAB_0045138b
    MOV EAX,EBP                         ; 004512fd
    MOV EDX,dword ptr [ESP + 0x14]      ; 004512ff
    SAR EAX,0x8                         ; 00451303
    CMP EAX,dword ptr [EDX]             ; 00451306
    JA 0x00451321                       ; 00451308
        ;   XREF to: 00451321 (CONDITIONAL_JUMP)  ; LAB_00451321
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045130a
        ;   Label: LAB_0045130a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045130e
    INC EDI                             ; 00451312
    ADD EDX,EAX                         ; 00451313
    MOV EAX,dword ptr [ESP + 0xc]       ; 00451315
    MOV dword ptr [ESP + 0x14],EDX      ; 00451319
    ADD EBP,EAX                         ; 0045131d
    JMP 0x004512f3                      ; 0045131f
        ;   XREF to: 004512f3 (UNCONDITIONAL_JUMP)  ; LAB_004512f3
    MOV EDX,ECX                         ; 00451321
        ;   Label: LAB_00451321
    TEST ESI,ESI                        ; 00451323
    JLE 0x0045130a                      ; 00451325
        ;   XREF to: 0045130a (CONDITIONAL_JUMP)  ; LAB_0045130a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00451327
    ADD EAX,EDI                         ; 0045132b
    ADD EAX,0x12c00                     ; 0045132d
        ;   Label: LAB_0045132d
    INC EDX                             ; 00451332
    MOV byte ptr [EAX + 0x1342220],BL   ; 00451333
    CMP EDX,ESI                         ; 00451339
    JL 0x0045132d                       ; 0045133b
        ;   XREF to: 0045132d (CONDITIONAL_JUMP)  ; LAB_0045132d
    JMP 0x0045130a                      ; 0045133d
        ;   XREF to: 0045130a (UNCONDITIONAL_JUMP)  ; LAB_0045130a
    ADD EAX,0x1342220                   ; 0045133f
        ;   Label: LAB_0045133f
    MOV EDX,dword ptr [ESP + 0x10]      ; 00451344
    ADD EAX,EDI                         ; 00451348
    CMP EDI,EDX                         ; 0045134a
    JGE 0x0045138b                      ; 0045134c
        ;   XREF to: 0045138b (CONDITIONAL_JUMP)  ; LAB_0045138b
    MOV EDX,EBP                         ; 0045134e
        ;   Label: LAB_0045134e
    SAR EDX,0x8                         ; 00451350
    MOV dword ptr [ESP],EDX             ; 00451353
    MOV EDX,dword ptr [ESP + 0x14]      ; 00451356
    MOV ECX,dword ptr [ESP]             ; 0045135a
    CMP ECX,dword ptr [EDX]             ; 0045135d
    JA 0x00451399                       ; 0045135f
        ;   XREF to: 00451399 (CONDITIONAL_JUMP)  ; LAB_00451399
    MOV ECX,dword ptr [ESP + 0xc]       ; 00451361
        ;   Label: LAB_00451361
    MOV EDX,0x1                         ; 00451365
    ADD EBP,ECX                         ; 0045136a
    MOV CL,byte ptr [0x01323d00]        ; 0045136c | DAT_01323d00
    INC EDI                             ; 00451372
    SHL EDX,CL                          ; 00451373
    MOV ECX,dword ptr [ESP + 0x14]      ; 00451375
    SHL EDX,0x2                         ; 00451379
    INC EAX                             ; 0045137c
    ADD ECX,EDX                         ; 0045137d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045137f
    MOV dword ptr [ESP + 0x14],ECX      ; 00451383
    CMP EDI,EDX                         ; 00451387
    JL 0x0045134e                       ; 00451389
        ;   XREF to: 0045134e (CONDITIONAL_JUMP)  ; LAB_0045134e
    MOV dword ptr [0x01480e28],ESI      ; 0045138b | DAT_01480e28
        ;   Label: LAB_0045138b
    ADD ESP,0x18                        ; 00451391
        ;   Label: LAB_00451391
    POP EBP                             ; 00451394
    POP EDI                             ; 00451395
    POP ESI                             ; 00451396
    POP EBX                             ; 00451397
    RET                                 ; 00451398
    MOV byte ptr [EAX],BL               ; 00451399
        ;   Label: LAB_00451399
    JMP 0x00451361                      ; 0045139b
        ;   XREF to: 00451361 (UNCONDITIONAL_JUMP)  ; LAB_00451361

