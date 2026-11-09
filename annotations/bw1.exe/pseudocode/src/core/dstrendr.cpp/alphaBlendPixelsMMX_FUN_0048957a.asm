; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_alphaBlendPixelsMMX_FUN_0048957a(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   source1_buffer
; uint *           Stack[0xc]:4   source2_buffer
; uint             Stack[0x10]:4   alpha1
; uint             Stack[0x14]:4   alpha2
; int              Stack[0x18]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453dc0 at 00453e7b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048957a
        ;   Label: core_dstrendr.cpp_alphaBlendPixelsMMX_FUN_0048957a
    MOV EBP,ESP                         ; 0048957b
    PUSH ESI                            ; 0048957d
    PUSH EDI                            ; 0048957e
    PUSH EBX                            ; 0048957f
    PUSH ECX                            ; 00489580
    MOV EDI,dword ptr [EBP + 0x8]       ; 00489581
    MOV ESI,dword ptr [EBP + 0xc]       ; 00489584
    MOV EBX,dword ptr [EBP + 0x10]      ; 00489587
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0048958a
    PXOR MM7,MM7                        ; 0048958d
    MOVD MM3,dword ptr [EBP + 0x18]     ; 00489590
    MOVD MM4,dword ptr [EBP + 0x14]     ; 00489594
    MOVD MM5,dword ptr [EBP + 0x18]     ; 00489598
    MOVD MM6,dword ptr [EBP + 0x14]     ; 0048959c
    PSLLQ MM3,0x20                      ; 004895a0
    PSLLQ MM4,0x20                      ; 004895a4
    POR MM3,MM5                         ; 004895a8
    POR MM4,MM6                         ; 004895ab
    PSRLW MM3,0x1                       ; 004895ae
    PSRLW MM4,0x1                       ; 004895b2
    MOVD MM0,dword ptr [ESI]            ; 004895b6
        ;   Label: LAB_004895b6
    MOVD MM1,dword ptr [EBX]            ; 004895b9
    PUNPCKLBW MM0,MM7                   ; 004895bc
    PUNPCKLBW MM1,MM7                   ; 004895bf
    PSLLW MM0,0x7                       ; 004895c2
    PSLLW MM1,0x7                       ; 004895c6
    PMULHW MM0,MM3                      ; 004895ca
    PMULHW MM1,MM4                      ; 004895cd
    PADDW MM0,MM1                       ; 004895d0
    PSRLW MM0,0x6                       ; 004895d3
    PACKUSWB MM0,MM7                    ; 004895d7
    MOVD dword ptr [EDI],MM0            ; 004895da
    ADD ESI,0x4                         ; 004895dd
    ADD EBX,0x4                         ; 004895e0
    ADD EDI,0x4                         ; 004895e3
    SUB ECX,0x4                         ; 004895e6
    JG 0x004895b6                       ; 004895e9
        ;   XREF to: 004895b6 (CONDITIONAL_JUMP)  ; LAB_004895b6
    POP ECX                             ; 004895eb
    POP EBX                             ; 004895ec
    EMMS                                ; 004895ed
    POP EDI                             ; 004895ef
    POP ESI                             ; 004895f0
    LEAVE                               ; 004895f1
    RET                                 ; 004895f2

