; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderAlphaRow32_FUN_0055d523(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
;
; Parameters:
; uint *           Stack[0x4]:4   destPixels
; uchar *          Stack[0x8]:4   srcIndices
; uchar *          Stack[0xc]:4   srcAlpha
; int              Stack[0x10]:4   globalAlpha
; int              Stack[0x14]:4   pixelCount
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 at 0040d9c7
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0 at 0040db3e
;
; Referenced Globals:
;   undefined8 DAT_0061d180
;   undefined8 DAT_0061d978
;   undefined4 DAT_01c35214
;   undefined4 DAT_01c38b4c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055d523
        ;   Label: engine_special.cpp_renderAlphaRow32_FUN_0055d523
    MOV EBP,ESP                         ; 0055d524
    PUSHAD                              ; 0055d526
    MOV EDI,dword ptr [EBP + 0x8]       ; 0055d527
    MOV ESI,dword ptr [EBP + 0xc]       ; 0055d52a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0055d52d
    MOV ECX,dword ptr [EBP + 0x18]      ; 0055d530
    MOV EBP,dword ptr [EBP + 0x14]      ; 0055d533
    PXOR MM7,MM7                        ; 0055d536
    SHR EBP,0x8                         ; 0055d539
    MOVZX EAX,byte ptr [ESI]            ; 0055d53c
        ;   Label: LAB_0055d53c
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055d53f | DAT_01c35214
    MOVZX EAX,byte ptr [EBX]            ; 0055d547
    IMUL EAX,EBP                        ; 0055d54a
    CMP dword ptr [0x01c38b4c],0x1      ; 0055d54d | DAT_01c38b4c
    JZ 0x0055d564                       ; 0055d554
        ;   XREF to: 0055d564 (CONDITIONAL_JUMP)  ; LAB_0055d564
    CMP EAX,0xfde8                      ; 0055d556
    JGE 0x0055d5ae                      ; 0055d55b
        ;   XREF to: 0055d5ae (CONDITIONAL_JUMP)  ; LAB_0055d5ae
    CMP EAX,0xff                        ; 0055d55d
    JLE 0x0055d5b1                      ; 0055d562
        ;   XREF to: 0055d5b1 (CONDITIONAL_JUMP)  ; LAB_0055d5b1
    SHR EAX,0x8                         ; 0055d564
        ;   Label: LAB_0055d564
    PUNPCKLBW MM0,MM7                   ; 0055d567
    MOVQ MM1,qword ptr [EAX*0x8 + 0x61d180] ; 0055d56a | DAT_0061d180
    MOVQ MM2,MM1                        ; 0055d572
    PXOR MM2,qword ptr [0x0061d978]     ; 0055d575 | DAT_0061d978
    MOVD MM3,dword ptr [EDI]            ; 0055d57c
    PUNPCKLBW MM3,MM7                   ; 0055d57f
    CMP dword ptr [0x01c38b4c],0x1      ; 0055d582 | DAT_01c38b4c
    JZ 0x0055d59d                       ; 0055d589
        ;   XREF to: 0055d59d (CONDITIONAL_JUMP)  ; LAB_0055d59d
    PMULLW MM0,MM1                      ; 0055d58b
    PMULLW MM3,MM2                      ; 0055d58e
    PADDW MM0,MM3                       ; 0055d591
    PSRLW MM0,0x8                       ; 0055d594
    PACKUSWB MM0,MM7                    ; 0055d598
    JMP 0x0055d5ae                      ; 0055d59b
        ;   XREF to: 0055d5ae (UNCONDITIONAL_JUMP)  ; LAB_0055d5ae
    PSLLW MM3,0x8                       ; 0055d59d
        ;   Label: LAB_0055d59d
    PMULLW MM0,MM1                      ; 0055d5a1
    PADDUSW MM0,MM3                     ; 0055d5a4
    PSRLW MM0,0x8                       ; 0055d5a7
    PACKUSWB MM0,MM7                    ; 0055d5ab
    MOVD dword ptr [EDI],MM0            ; 0055d5ae
        ;   Label: LAB_0055d5ae
    INC ESI                             ; 0055d5b1
        ;   Label: LAB_0055d5b1
    INC EBX                             ; 0055d5b2
    ADD EDI,0x4                         ; 0055d5b3
    DEC ECX                             ; 0055d5b6
    JG 0x0055d53c                       ; 0055d5b7
        ;   XREF to: 0055d53c (CONDITIONAL_JUMP)  ; LAB_0055d53c
    POPAD                               ; 0055d5b9
    EMMS                                ; 0055d5ba
    LEAVE                               ; 0055d5bc
    RET                                 ; 0055d5bd

