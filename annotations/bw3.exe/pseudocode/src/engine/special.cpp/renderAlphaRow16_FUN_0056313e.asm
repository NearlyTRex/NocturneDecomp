; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderAlphaRow16_FUN_0056313e(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
;
; Parameters:
; ushort *         Stack[0x4]:4   destPixels
; uchar *          Stack[0x8]:4   srcIndices
; uchar *          Stack[0xc]:4   srcAlpha
; int              Stack[0x10]:4   globalAlpha
; int              Stack[0x14]:4   pixelCount
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 at 0040d85b
;   engine_alphabit.cpp_FUN_0040d8a0 at 0040da49
;
; Referenced Globals:
;   undefined4 DAT_00604e60
;   undefined4 DAT_00604e68
;   undefined4 DAT_00604e70
;   undefined4 DAT_00604e78
;   undefined4 DAT_00604e98
;   undefined4 DAT_00604eb8
;   undefined4 DAT_00604ec0
;   undefined4 DAT_00604ee0
;   undefined4 DAT_00604f00
;   undefined8 DAT_00605710
;   undefined8 DAT_00605f08
;   undefined4 DAT_01c6a974
;   undefined4 DAT_01c6e2ac
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056313e
        ;   Label: engine_special.cpp_renderAlphaRow16_FUN_0056313e
    MOV EBP,ESP                         ; 0056313f
    PUSHAD                              ; 00563141
    MOV EDI,dword ptr [EBP + 0x8]       ; 00563142
    MOV ESI,dword ptr [EBP + 0xc]       ; 00563145
    MOV EBX,dword ptr [EBP + 0x10]      ; 00563148
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056314b
    MOV EBP,dword ptr [EBP + 0x14]      ; 0056314e
    PXOR MM7,MM7                        ; 00563151
    SHR EBP,0x8                         ; 00563154
    MOVZX EAX,byte ptr [ESI]            ; 00563157
        ;   Label: LAB_00563157
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 0056315a | DAT_01c6a974
    MOVZX EAX,byte ptr [EBX]            ; 00563162
    IMUL EAX,EBP                        ; 00563165
    CMP dword ptr [0x01c6e2ac],0x1      ; 00563168 | DAT_01c6e2ac
    JZ 0x00563187                       ; 0056316f
        ;   XREF to: 00563187 (CONDITIONAL_JUMP)  ; LAB_00563187
    CMP EAX,0xfde8                      ; 00563171
    JGE 0x0056320a                      ; 00563176
        ;   XREF to: 0056320a (CONDITIONAL_JUMP)  ; LAB_0056320a
    CMP EAX,0xff                        ; 0056317c
    JLE 0x00563246                      ; 00563181
        ;   XREF to: 00563246 (CONDITIONAL_JUMP)  ; LAB_00563246
    SHR EAX,0x8                         ; 00563187
        ;   Label: LAB_00563187
    PUNPCKLBW MM0,MM7                   ; 0056318a
    MOVQ MM1,qword ptr [EAX*0x8 + 0x605710] ; 0056318d | DAT_00605710
    MOVQ MM2,MM1                        ; 00563195
    PXOR MM2,qword ptr [0x00605f08]     ; 00563198 | DAT_00605f08
    MOVZX EAX,word ptr [EDI]            ; 0056319f
    MOVD MM3,EAX                        ; 005631a2
    PAND MM3,qword ptr [0x00604e70]     ; 005631a5 | DAT_00604e70
    PSLLQ MM3,qword ptr [0x00604f00]    ; 005631ac | DAT_00604f00
    MOVD MM4,EAX                        ; 005631b3
    PAND MM4,qword ptr [0x00604e68]     ; 005631b6 | DAT_00604e68
    PSLLQ MM4,qword ptr [0x00604ee0]    ; 005631bd | DAT_00604ee0
    POR MM3,MM4                         ; 005631c4
    MOVD MM5,EAX                        ; 005631c7
    PAND MM5,qword ptr [0x00604e60]     ; 005631ca | DAT_00604e60
    PSLLQ MM5,qword ptr [0x00604ec0]    ; 005631d1 | DAT_00604ec0
    POR MM3,MM5                         ; 005631d8
    PUNPCKLBW MM3,MM7                   ; 005631db
    CMP dword ptr [0x01c6e2ac],0x1      ; 005631de | DAT_01c6e2ac
    JZ 0x005631f9                       ; 005631e5
        ;   XREF to: 005631f9 (CONDITIONAL_JUMP)  ; LAB_005631f9
    PMULLW MM0,MM1                      ; 005631e7
    PMULLW MM3,MM2                      ; 005631ea
    PADDW MM0,MM3                       ; 005631ed
    PSRLW MM0,0x8                       ; 005631f0
    PACKUSWB MM0,MM7                    ; 005631f4
    JMP 0x0056320a                      ; 005631f7
        ;   XREF to: 0056320a (UNCONDITIONAL_JUMP)  ; LAB_0056320a
    PSLLW MM3,0x8                       ; 005631f9
        ;   Label: LAB_005631f9
    PMULLW MM0,MM1                      ; 005631fd
    PADDUSW MM0,MM3                     ; 00563200
    PSRLW MM0,0x8                       ; 00563203
    PACKUSWB MM0,MM7                    ; 00563207
    MOVQ MM2,MM0                        ; 0056320a
        ;   Label: LAB_0056320a
    MOVQ MM4,MM0                        ; 0056320d
    PAND MM0,qword ptr [0x00604eb8]     ; 00563210 | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 00563217 | DAT_00604e98
    PAND MM4,qword ptr [0x00604e78]     ; 0056321e | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00563225 | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 0056322c | DAT_00604ee0
    PSRLQ MM4,qword ptr [0x00604ec0]    ; 00563233 | DAT_00604ec0
    POR MM0,MM2                         ; 0056323a
    POR MM0,MM4                         ; 0056323d
    MOVD EAX,MM0                        ; 00563240
    MOV word ptr [EDI],AX               ; 00563243
    INC ESI                             ; 00563246
        ;   Label: LAB_00563246
    INC EBX                             ; 00563247
    ADD EDI,0x2                         ; 00563248
    DEC ECX                             ; 0056324b
    JG 0x00563157                       ; 0056324c
        ;   XREF to: 00563157 (CONDITIONAL_JUMP)  ; LAB_00563157
    POPAD                               ; 00563252
    EMMS                                ; 00563253
    LEAVE                               ; 00563255
    RET                                 ; 00563256

