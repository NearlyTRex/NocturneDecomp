; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_spatialFilter9TapMMX_FUN_004923ff(uint *output_buffer,uint *input_buffer,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004923ff
        ;   Label: core_dstrender.cpp_spatialFilter9TapMMX_FUN_004923ff
    MOV EBP,ESP                         ; 00492400
    PUSH ESI                            ; 00492402
    PUSH EDI                            ; 00492403
    MOV ESI,dword ptr [EBP + 0xc]       ; 00492404
    MOV EDI,dword ptr [EBP + 0x8]       ; 00492407
    MOV ECX,dword ptr [EBP + 0x10]      ; 0049240a
    PXOR MM7,MM7                        ; 0049240d
    MOVD MM1,dword ptr [ESI + -0x4]     ; 00492410
        ;   Label: LAB_00492410
    MOVD MM0,dword ptr [ESI]            ; 00492414
    MOVD MM2,dword ptr [ESI + 0x4]      ; 00492417
    MOVD MM3,dword ptr [ESI + 0xfffffb00] ; 0049241b
    MOVD MM4,dword ptr [ESI + 0x500]    ; 00492422
    PUNPCKLBW MM0,MM7                   ; 00492429
    PUNPCKLBW MM1,MM7                   ; 0049242c
    PUNPCKLBW MM2,MM7                   ; 0049242f
    PUNPCKLBW MM3,MM7                   ; 00492432
    PUNPCKLBW MM4,MM7                   ; 00492435
    PSLLW MM0,0x2                       ; 00492438
    PSLLW MM1,0x1                       ; 0049243c
    PSLLW MM2,0x1                       ; 00492440
    PSLLW MM3,0x1                       ; 00492444
    PSLLW MM4,0x1                       ; 00492448
    PADDW MM0,MM1                       ; 0049244c
    PADDW MM0,MM2                       ; 0049244f
    PADDW MM0,MM3                       ; 00492452
    PADDW MM0,MM4                       ; 00492455
    MOVD MM1,dword ptr [ESI + 0xfffffafc] ; 00492458
    MOVD MM2,dword ptr [ESI + 0xfffffb04] ; 0049245f
    MOVD MM3,dword ptr [ESI + 0x4fc]    ; 00492466
    MOVD MM4,dword ptr [ESI + 0x504]    ; 0049246d
    PUNPCKLBW MM1,MM7                   ; 00492474
    PUNPCKLBW MM2,MM7                   ; 00492477
    PUNPCKLBW MM3,MM7                   ; 0049247a
    PUNPCKLBW MM4,MM7                   ; 0049247d
    PADDW MM0,MM1                       ; 00492480
    PADDW MM0,MM2                       ; 00492483
    PADDW MM0,MM3                       ; 00492486
    PADDW MM0,MM4                       ; 00492489
    PSRLW MM0,0x4                       ; 0049248c
    PACKUSWB MM0,MM7                    ; 00492490
    MOVD dword ptr [EDI],MM0            ; 00492493
    ADD ESI,0x4                         ; 00492496
    ADD EDI,0x4                         ; 00492499
    DEC ECX                             ; 0049249c
    JG 0x00492410                       ; 0049249d
        ;   XREF to: 00492410 (CONDITIONAL_JUMP)  ; LAB_00492410
    EMMS                                ; 004924a3
    POP EDI                             ; 004924a5
    POP ESI                             ; 004924a6
    LEAVE                               ; 004924a7
    RET                                 ; 004924a8

