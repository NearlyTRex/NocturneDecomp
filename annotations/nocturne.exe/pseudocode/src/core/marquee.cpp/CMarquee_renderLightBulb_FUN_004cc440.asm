; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_004cc440(CMarquee *this_ptr,CVector3f *position)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;   core_marquee.cpp_CMarquee_renderTransparent_FUN_004cc5d0 at 004cc6c2
;
; Referenced Globals:
;   undefined4 DAT_005a02b0
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc440
        ;   Label: core_marquee.cpp_CMarquee_renderLightBulb_FUN_004cc440
    PUSH ESI                            ; 004cc441
    PUSH EDI                            ; 004cc442
    PUSH EBP                            ; 004cc443
    SUB ESP,0x34                        ; 004cc444
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004cc447
    MOV ESI,dword ptr [0x005ae704]      ; 004cc44b | DAT_005ae704
    LEA EBX,[ESP + 0x28]                ; 004cc451
    MOV ESI,dword ptr [ESI]             ; 004cc455 | DAT_01b4d738
    FLD float ptr [EAX]                 ; 004cc457
    FMUL float ptr [0x005a02b0]         ; 004cc459 | DAT_005a02b0
    FISTP dword ptr [EBX]               ; 004cc45f
    FLD float ptr [EAX + 0x4]           ; 004cc461
    FMUL float ptr [0x005a02b0]         ; 004cc464 | DAT_005a02b0
    FISTP dword ptr [EBX + 0x4]         ; 004cc46a
    FLD float ptr [EAX + 0x8]           ; 004cc46d
    FMUL float ptr [0x005a02b0]         ; 004cc470 | DAT_005a02b0
    FISTP dword ptr [EBX + 0x8]         ; 004cc476
    LEA EAX,[ESP + 0x28]                ; 004cc479
    PUSH EAX                            ; 004cc47d
    PUSH ESI                            ; 004cc47e
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004cc47f
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 004cc484 | DAT_005ae704
    MOV ESI,dword ptr [EAX]             ; 004cc489 | DAT_01b4d738
    MOV ECX,0xc                         ; 004cc48b
    LEA EDI,[ESI + 0x30]                ; 004cc490
    MOVSD.REP ES:EDI,ESI                ; 004cc493
    MOV ESI,dword ptr [EAX]             ; 004cc495 | DAT_01b4d738
    MOV ECX,0xc                         ; 004cc497
    LEA EDI,[ESI + 0x60]                ; 004cc49c
    MOVSD.REP ES:EDI,ESI                ; 004cc49f
    MOV ESI,dword ptr [EAX]             ; 004cc4a1 | DAT_01b4d738
    MOV ECX,0xc                         ; 004cc4a3
    LEA EDI,[ESI + 0x90]                ; 004cc4a8
    MOVSD.REP ES:EDI,ESI                ; 004cc4ae
    MOV ESI,dword ptr [EAX]             ; 004cc4b0 | DAT_01b4d738
    ADD dword ptr [ESI],0x80            ; 004cc4b2
    MOV ESI,dword ptr [EAX]             ; 004cc4b8 | DAT_01b4d738
    ADD dword ptr [ESI + 0x4],0x80      ; 004cc4ba
    MOV EBX,dword ptr [EAX]             ; 004cc4c1 | DAT_01b4d738
    SUB dword ptr [EBX + 0x30],0x80     ; 004cc4c3
    MOV ESI,dword ptr [EAX]             ; 004cc4ca | DAT_01b4d738
    ADD dword ptr [ESI + 0x34],0x80     ; 004cc4cc
    MOV ESI,dword ptr [EAX]             ; 004cc4d3 | DAT_01b4d738
    SUB dword ptr [ESI + 0x60],0x80     ; 004cc4d5
    MOV ESI,dword ptr [EAX]             ; 004cc4dc | DAT_01b4d738
    SUB dword ptr [ESI + 0x64],0x80     ; 004cc4de
    MOV EBX,dword ptr [EAX]             ; 004cc4e5 | DAT_01b4d738
    ADD dword ptr [EBX + 0x90],0x80     ; 004cc4e7
    MOV EBX,dword ptr [EAX]             ; 004cc4f1 | DAT_01b4d738
    SUB dword ptr [EBX + 0x94],0x80     ; 004cc4f3
    MOV EBX,dword ptr [EAX]             ; 004cc4fd | DAT_01b4d738
    MOV dword ptr [EBX + 0x10],0x80000000 ; 004cc4ff
    MOV EBX,dword ptr [EAX]             ; 004cc506 | DAT_01b4d738
    MOV dword ptr [EBX + 0x40],0x80000000 ; 004cc508
    MOV EBX,dword ptr [EAX]             ; 004cc50f | DAT_01b4d738
    MOV dword ptr [EBX + 0x70],0x80000000 ; 004cc511
    MOV EBX,dword ptr [EAX]             ; 004cc518 | DAT_01b4d738
    MOV dword ptr [EBX + 0xa0],0x80000000 ; 004cc51a
    MOV EBX,dword ptr [EAX]             ; 004cc524 | DAT_01b4d738
    MOV dword ptr [EBX + 0x18],0x80000  ; 004cc526
    MOV EBX,dword ptr [EAX]             ; 004cc52d | DAT_01b4d738
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 004cc52f
    MOV EBX,dword ptr [EAX]             ; 004cc536 | DAT_01b4d738
    MOV dword ptr [EBX + 0x48],0xf80000 ; 004cc538
    MOV EBX,dword ptr [EAX]             ; 004cc53f | DAT_01b4d738
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 004cc541
    MOV EBX,dword ptr [EAX]             ; 004cc548 | DAT_01b4d738
    MOV dword ptr [EBX + 0x78],0xf80000 ; 004cc54a
    MOV EBX,dword ptr [EAX]             ; 004cc551 | DAT_01b4d738
    MOV dword ptr [EBX + 0x7c],0x80000  ; 004cc553
    ADD ESP,0x8                         ; 004cc55a
    MOV EBX,dword ptr [EAX]             ; 004cc55d | DAT_01b4d738
    PUSH 0x63                           ; 004cc55f
    MOV dword ptr [EBX + 0xa8],0x80000  ; 004cc561
    MOV EDI,0x4                         ; 004cc56b
    MOV EBX,dword ptr [EAX]             ; 004cc570 | DAT_01b4d738
    XOR EBP,EBP                         ; 004cc572
    MOV EDX,0x3                         ; 004cc574
    MOV dword ptr [EBX + 0xac],0x80000  ; 004cc579
    LEA EBX,[ESP + 0x4]                 ; 004cc583
    MOV dword ptr [ESP + 0x8],EDI       ; 004cc587
    MOV dword ptr [ESP + 0x18],EBP      ; 004cc58b
    MOV dword ptr [ESP + 0x14],EBP      ; 004cc58f
    MOV dword ptr [ESP + 0x10],EBP      ; 004cc593
    MOV dword ptr [ESP + 0xc],EBP       ; 004cc597
    MOV dword ptr [ESP + 0x1c],EBP      ; 004cc59b
    MOV dword ptr [ESP + 0x28],EDX      ; 004cc59f
    PUSH EBX                            ; 004cc5a3
    MOV EDI,0x1                         ; 004cc5a4
    MOV EBP,0x2                         ; 004cc5a9
    PUSH EAX                            ; 004cc5ae | DAT_01b4d738
    MOV dword ptr [ESP + 0x28],EDI      ; 004cc5af
    MOV dword ptr [ESP + 0x2c],EBP      ; 004cc5b3
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 004cc5b7
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004cc5bc
    ADD ESP,0x34                        ; 004cc5bf
    POP EBP                             ; 004cc5c2
    POP EDI                             ; 004cc5c3
    POP ESI                             ; 004cc5c4
    POP EBX                             ; 004cc5c5
    RET                                 ; 004cc5c6

