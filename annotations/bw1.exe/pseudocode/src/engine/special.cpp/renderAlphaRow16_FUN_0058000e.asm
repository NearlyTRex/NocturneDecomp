; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderAlphaRow16_FUN_0058000e(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
;
; Parameters:
; ushort *         Stack[0x4]:4   destPixels
; uchar *          Stack[0x8]:4   srcIndices
; uchar *          Stack[0xc]:4   srcAlpha
; int              Stack[0x10]:4   globalAlpha
; int              Stack[0x14]:4   pixelCount
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 at 0040d61b
;   engine_alphabit.cpp_FUN_0040d660 at 0040d809
;
; Referenced Globals:
;   undefined4 DAT_00623f20
;   undefined4 DAT_00623f28
;   undefined4 DAT_00623f30
;   undefined4 DAT_00623f38
;   undefined4 DAT_00623f58
;   undefined4 DAT_00623f78
;   undefined4 DAT_00623f80
;   undefined4 DAT_00623fa0
;   undefined4 DAT_00623fc0
;   undefined8 DAT_006247d0
;   undefined8 DAT_00624fc8
;   undefined4 DAT_01c4e3d4
;   undefined4 DAT_01c51d0c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0058000e
        ;   Label: engine_special.cpp_renderAlphaRow16_FUN_0058000e
    MOV EBP,ESP                         ; 0058000f
    PUSHAD                              ; 00580011
    MOV EDI,dword ptr [EBP + 0x8]       ; 00580012
    MOV ESI,dword ptr [EBP + 0xc]       ; 00580015
    MOV EBX,dword ptr [EBP + 0x10]      ; 00580018
    MOV ECX,dword ptr [EBP + 0x18]      ; 0058001b
    MOV EBP,dword ptr [EBP + 0x14]      ; 0058001e
    PXOR MM7,MM7                        ; 00580021
    SHR EBP,0x8                         ; 00580024
    MOVZX EAX,byte ptr [ESI]            ; 00580027
        ;   Label: LAB_00580027
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0058002a | DAT_01c4e3d4
    MOVZX EAX,byte ptr [EBX]            ; 00580032
    IMUL EAX,EBP                        ; 00580035
    CMP dword ptr [0x01c51d0c],0x1      ; 00580038 | DAT_01c51d0c
    JZ 0x00580057                       ; 0058003f
        ;   XREF to: 00580057 (CONDITIONAL_JUMP)  ; LAB_00580057
    CMP EAX,0xfde8                      ; 00580041
    JGE 0x005800da                      ; 00580046
        ;   XREF to: 005800da (CONDITIONAL_JUMP)  ; LAB_005800da
    CMP EAX,0xff                        ; 0058004c
    JLE 0x00580116                      ; 00580051
        ;   XREF to: 00580116 (CONDITIONAL_JUMP)  ; LAB_00580116
    SHR EAX,0x8                         ; 00580057
        ;   Label: LAB_00580057
    PUNPCKLBW MM0,MM7                   ; 0058005a
    MOVQ MM1,qword ptr [EAX*0x8 + 0x6247d0] ; 0058005d | DAT_006247d0
    MOVQ MM2,MM1                        ; 00580065
    PXOR MM2,qword ptr [0x00624fc8]     ; 00580068 | DAT_00624fc8
    MOVZX EAX,word ptr [EDI]            ; 0058006f
    MOVD MM3,EAX                        ; 00580072
    PAND MM3,qword ptr [0x00623f30]     ; 00580075 | DAT_00623f30
    PSLLQ MM3,qword ptr [0x00623fc0]    ; 0058007c | DAT_00623fc0
    MOVD MM4,EAX                        ; 00580083
    PAND MM4,qword ptr [0x00623f28]     ; 00580086 | DAT_00623f28
    PSLLQ MM4,qword ptr [0x00623fa0]    ; 0058008d | DAT_00623fa0
    POR MM3,MM4                         ; 00580094
    MOVD MM5,EAX                        ; 00580097
    PAND MM5,qword ptr [0x00623f20]     ; 0058009a | DAT_00623f20
    PSLLQ MM5,qword ptr [0x00623f80]    ; 005800a1 | DAT_00623f80
    POR MM3,MM5                         ; 005800a8
    PUNPCKLBW MM3,MM7                   ; 005800ab
    CMP dword ptr [0x01c51d0c],0x1      ; 005800ae | DAT_01c51d0c
    JZ 0x005800c9                       ; 005800b5
        ;   XREF to: 005800c9 (CONDITIONAL_JUMP)  ; LAB_005800c9
    PMULLW MM0,MM1                      ; 005800b7
    PMULLW MM3,MM2                      ; 005800ba
    PADDW MM0,MM3                       ; 005800bd
    PSRLW MM0,0x8                       ; 005800c0
    PACKUSWB MM0,MM7                    ; 005800c4
    JMP 0x005800da                      ; 005800c7
        ;   XREF to: 005800da (UNCONDITIONAL_JUMP)  ; LAB_005800da
    PSLLW MM3,0x8                       ; 005800c9
        ;   Label: LAB_005800c9
    PMULLW MM0,MM1                      ; 005800cd
    PADDUSW MM0,MM3                     ; 005800d0
    PSRLW MM0,0x8                       ; 005800d3
    PACKUSWB MM0,MM7                    ; 005800d7
    MOVQ MM2,MM0                        ; 005800da
        ;   Label: LAB_005800da
    MOVQ MM4,MM0                        ; 005800dd
    PAND MM0,qword ptr [0x00623f78]     ; 005800e0 | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 005800e7 | DAT_00623f58
    PAND MM4,qword ptr [0x00623f38]     ; 005800ee | DAT_00623f38
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 005800f5 | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 005800fc | DAT_00623fa0
    PSRLQ MM4,qword ptr [0x00623f80]    ; 00580103 | DAT_00623f80
    POR MM0,MM2                         ; 0058010a
    POR MM0,MM4                         ; 0058010d
    MOVD EAX,MM0                        ; 00580110
    MOV word ptr [EDI],AX               ; 00580113
    INC ESI                             ; 00580116
        ;   Label: LAB_00580116
    INC EBX                             ; 00580117
    ADD EDI,0x2                         ; 00580118
    DEC ECX                             ; 0058011b
    JG 0x00580027                       ; 0058011c
        ;   XREF to: 00580027 (CONDITIONAL_JUMP)  ; LAB_00580027
    POPAD                               ; 00580122
    EMMS                                ; 00580123
    LEAVE                               ; 00580125
    RET                                 ; 00580126

