; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_00487327(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 at 00481f76
;
; Referenced Globals:
;   undefined4 DAT_00612564
;   undefined4 DAT_01bc1238
;   undefined4 DAT_01bc123c
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c4f030
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00487327
        ;   Label: core_dstrendr.cpp_renderDepthInterlacedProfiled_FUN_00487327
    PUSH EDI                            ; 00487328
    TEST EBX,0x1                        ; 00487329
    JZ 0x00487334                       ; 0048732f
        ;   XREF to: 00487334 (CONDITIONAL_JUMP)  ; LAB_00487334
    POP EDI                             ; 00487331
    POP ESI                             ; 00487332
    RET                                 ; 00487333
    PUSH EBP                            ; 00487334
        ;   Label: LAB_00487334
    MOV EAX,dword ptr [ESI + 0x8]       ; 00487335
    MOV ECX,dword ptr [EDI + 0x8]       ; 00487338
    CMP EAX,ECX                         ; 0048733b
    JBE 0x00487342                      ; 0048733d
        ;   XREF to: 00487342 (CONDITIONAL_JUMP)  ; LAB_00487342
    XCHG EAX,ECX                        ; 0048733f
    XCHG EDI,ESI                        ; 00487340
    SHR EAX,0x10                        ; 00487342
        ;   Label: LAB_00487342
    SHR ECX,0x10                        ; 00487345
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 00487348 | DAT_01c4480c
    SUB ECX,EAX                         ; 0048734f
    JLE 0x00487380                      ; 00487351
        ;   XREF to: 00487380 (CONDITIONAL_JUMP)  ; LAB_00487380
    SHL EAX,0x2                         ; 00487353
    ADD EBP,EAX                         ; 00487356
    INC ECX                             ; 00487358
    MOV EAX,dword ptr [EDI + 0x28]      ; 00487359
    SUB EAX,dword ptr [ESI + 0x28]      ; 0048735c
    IMUL dword ptr [ECX*0x4 + 0x1c4f030] ; 0048735f | DAT_01c4f030
    MOV EBX,EBP                         ; 00487366
    DEC ECX                             ; 00487368
    MOV ESI,dword ptr [ESI + 0x28]      ; 00487369
    MOV EAX,ESI                         ; 0048736c
        ;   Label: LAB_0048736c
    SHR EAX,0x8                         ; 0048736e
    CMP EAX,dword ptr [EBX]             ; 00487371
    JGE 0x00487384                      ; 00487373
        ;   XREF to: 00487384 (CONDITIONAL_JUMP)  ; LAB_00487384
    LEA ESI,[ESI + EDX*0x2]             ; 00487375
        ;   Label: LAB_00487375
    ADD EBX,0x8                         ; 00487378
    SUB ECX,0x2                         ; 0048737b
    JG 0x0048736c                       ; 0048737e
        ;   XREF to: 0048736c (CONDITIONAL_JUMP)  ; LAB_0048736c
    POP EBP                             ; 00487380
        ;   Label: LAB_00487380
    POP EDI                             ; 00487381
    POP ESI                             ; 00487382
    RET                                 ; 00487383
    MOV EAX,[0x01bc1238]                ; 00487384 | DAT_01bc1238
        ;   Label: LAB_00487384
    INC EAX                             ; 00487389
    MOV [0x01bc1238],EAX                ; 0048738a | DAT_01bc1238
    CMP EAX,dword ptr [0x00612564]      ; 0048738f | DAT_00612564
    JC 0x00487375                       ; 00487395
        ;   XREF to: 00487375 (CONDITIONAL_JUMP)  ; LAB_00487375
    MOV dword ptr [0x01bc123c],0x1      ; 00487397 | DAT_01bc123c
    POP EBP                             ; 004873a1
    POP EDI                             ; 004873a2
    POP ESI                             ; 004873a3
    RET                                 ; 004873a4

