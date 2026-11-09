; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderAlphaRow32_FUN_0057ff73(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
;
; Parameters:
; uint *           Stack[0x4]:4   destPixels
; uchar *          Stack[0x8]:4   srcIndices
; uchar *          Stack[0xc]:4   srcAlpha
; int              Stack[0x10]:4   globalAlpha
; int              Stack[0x14]:4   pixelCount
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 at 0040d577
;   engine_alphabit.cpp_FUN_0040d660 at 0040d775
;
; Referenced Globals:
;   undefined8 DAT_006247d0
;   undefined8 DAT_00624fc8
;   undefined4 DAT_01c4e3d4
;   undefined4 DAT_01c51d0c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0057ff73
        ;   Label: engine_special.cpp_renderAlphaRow32_FUN_0057ff73
    MOV EBP,ESP                         ; 0057ff74
    PUSHAD                              ; 0057ff76
    MOV EDI,dword ptr [EBP + 0x8]       ; 0057ff77
    MOV ESI,dword ptr [EBP + 0xc]       ; 0057ff7a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0057ff7d
    MOV ECX,dword ptr [EBP + 0x18]      ; 0057ff80
    MOV EBP,dword ptr [EBP + 0x14]      ; 0057ff83
    PXOR MM7,MM7                        ; 0057ff86
    SHR EBP,0x8                         ; 0057ff89
    MOVZX EAX,byte ptr [ESI]            ; 0057ff8c
        ;   Label: LAB_0057ff8c
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057ff8f | DAT_01c4e3d4
    MOVZX EAX,byte ptr [EBX]            ; 0057ff97
    IMUL EAX,EBP                        ; 0057ff9a
    CMP dword ptr [0x01c51d0c],0x1      ; 0057ff9d | DAT_01c51d0c
    JZ 0x0057ffb4                       ; 0057ffa4
        ;   XREF to: 0057ffb4 (CONDITIONAL_JUMP)  ; LAB_0057ffb4
    CMP EAX,0xfde8                      ; 0057ffa6
    JGE 0x0057fffe                      ; 0057ffab
        ;   XREF to: 0057fffe (CONDITIONAL_JUMP)  ; LAB_0057fffe
    CMP EAX,0xff                        ; 0057ffad
    JLE 0x00580001                      ; 0057ffb2
        ;   XREF to: 00580001 (CONDITIONAL_JUMP)  ; LAB_00580001
    SHR EAX,0x8                         ; 0057ffb4
        ;   Label: LAB_0057ffb4
    PUNPCKLBW MM0,MM7                   ; 0057ffb7
    MOVQ MM1,qword ptr [EAX*0x8 + 0x6247d0] ; 0057ffba | DAT_006247d0
    MOVQ MM2,MM1                        ; 0057ffc2
    PXOR MM2,qword ptr [0x00624fc8]     ; 0057ffc5 | DAT_00624fc8
    MOVD MM3,dword ptr [EDI]            ; 0057ffcc
    PUNPCKLBW MM3,MM7                   ; 0057ffcf
    CMP dword ptr [0x01c51d0c],0x1      ; 0057ffd2 | DAT_01c51d0c
    JZ 0x0057ffed                       ; 0057ffd9
        ;   XREF to: 0057ffed (CONDITIONAL_JUMP)  ; LAB_0057ffed
    PMULLW MM0,MM1                      ; 0057ffdb
    PMULLW MM3,MM2                      ; 0057ffde
    PADDW MM0,MM3                       ; 0057ffe1
    PSRLW MM0,0x8                       ; 0057ffe4
    PACKUSWB MM0,MM7                    ; 0057ffe8
    JMP 0x0057fffe                      ; 0057ffeb
        ;   XREF to: 0057fffe (UNCONDITIONAL_JUMP)  ; LAB_0057fffe
    PSLLW MM3,0x8                       ; 0057ffed
        ;   Label: LAB_0057ffed
    PMULLW MM0,MM1                      ; 0057fff1
    PADDUSW MM0,MM3                     ; 0057fff4
    PSRLW MM0,0x8                       ; 0057fff7
    PACKUSWB MM0,MM7                    ; 0057fffb
    MOVD dword ptr [EDI],MM0            ; 0057fffe
        ;   Label: LAB_0057fffe
    INC ESI                             ; 00580001
        ;   Label: LAB_00580001
    INC EBX                             ; 00580002
    ADD EDI,0x4                         ; 00580003
    DEC ECX                             ; 00580006
    JG 0x0057ff8c                       ; 00580007
        ;   XREF to: 0057ff8c (CONDITIONAL_JUMP)  ; LAB_0057ff8c
    POPAD                               ; 00580009
    EMMS                                ; 0058000a
    LEAVE                               ; 0058000c
    RET                                 ; 0058000d

