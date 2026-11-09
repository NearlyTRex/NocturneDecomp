; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderAlphaRow32_FUN_005630a3(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
;
; Parameters:
; uint *           Stack[0x4]:4   destPixels
; uchar *          Stack[0x8]:4   srcIndices
; uchar *          Stack[0xc]:4   srcAlpha
; int              Stack[0x10]:4   globalAlpha
; int              Stack[0x14]:4   pixelCount
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 at 0040d7b7
;   engine_alphabit.cpp_FUN_0040d8a0 at 0040d9b5
;
; Referenced Globals:
;   undefined8 DAT_00605710
;   undefined8 DAT_00605f08
;   undefined4 DAT_01c6a974
;   undefined4 DAT_01c6e2ac
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005630a3
        ;   Label: engine_special.cpp_renderAlphaRow32_FUN_005630a3
    MOV EBP,ESP                         ; 005630a4
    PUSHAD                              ; 005630a6
    MOV EDI,dword ptr [EBP + 0x8]       ; 005630a7
    MOV ESI,dword ptr [EBP + 0xc]       ; 005630aa
    MOV EBX,dword ptr [EBP + 0x10]      ; 005630ad
    MOV ECX,dword ptr [EBP + 0x18]      ; 005630b0
    MOV EBP,dword ptr [EBP + 0x14]      ; 005630b3
    PXOR MM7,MM7                        ; 005630b6
    SHR EBP,0x8                         ; 005630b9
    MOVZX EAX,byte ptr [ESI]            ; 005630bc
        ;   Label: LAB_005630bc
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 005630bf | DAT_01c6a974
    MOVZX EAX,byte ptr [EBX]            ; 005630c7
    IMUL EAX,EBP                        ; 005630ca
    CMP dword ptr [0x01c6e2ac],0x1      ; 005630cd | DAT_01c6e2ac
    JZ 0x005630e4                       ; 005630d4
        ;   XREF to: 005630e4 (CONDITIONAL_JUMP)  ; LAB_005630e4
    CMP EAX,0xfde8                      ; 005630d6
    JGE 0x0056312e                      ; 005630db
        ;   XREF to: 0056312e (CONDITIONAL_JUMP)  ; LAB_0056312e
    CMP EAX,0xff                        ; 005630dd
    JLE 0x00563131                      ; 005630e2
        ;   XREF to: 00563131 (CONDITIONAL_JUMP)  ; LAB_00563131
    SHR EAX,0x8                         ; 005630e4
        ;   Label: LAB_005630e4
    PUNPCKLBW MM0,MM7                   ; 005630e7
    MOVQ MM1,qword ptr [EAX*0x8 + 0x605710] ; 005630ea | DAT_00605710
    MOVQ MM2,MM1                        ; 005630f2
    PXOR MM2,qword ptr [0x00605f08]     ; 005630f5 | DAT_00605f08
    MOVD MM3,dword ptr [EDI]            ; 005630fc
    PUNPCKLBW MM3,MM7                   ; 005630ff
    CMP dword ptr [0x01c6e2ac],0x1      ; 00563102 | DAT_01c6e2ac
    JZ 0x0056311d                       ; 00563109
        ;   XREF to: 0056311d (CONDITIONAL_JUMP)  ; LAB_0056311d
    PMULLW MM0,MM1                      ; 0056310b
    PMULLW MM3,MM2                      ; 0056310e
    PADDW MM0,MM3                       ; 00563111
    PSRLW MM0,0x8                       ; 00563114
    PACKUSWB MM0,MM7                    ; 00563118
    JMP 0x0056312e                      ; 0056311b
        ;   XREF to: 0056312e (UNCONDITIONAL_JUMP)  ; LAB_0056312e
    PSLLW MM3,0x8                       ; 0056311d
        ;   Label: LAB_0056311d
    PMULLW MM0,MM1                      ; 00563121
    PADDUSW MM0,MM3                     ; 00563124
    PSRLW MM0,0x8                       ; 00563127
    PACKUSWB MM0,MM7                    ; 0056312b
    MOVD dword ptr [EDI],MM0            ; 0056312e
        ;   Label: LAB_0056312e
    INC ESI                             ; 00563131
        ;   Label: LAB_00563131
    INC EBX                             ; 00563132
    ADD EDI,0x4                         ; 00563133
    DEC ECX                             ; 00563136
    JG 0x005630bc                       ; 00563137
        ;   XREF to: 005630bc (CONDITIONAL_JUMP)  ; LAB_005630bc
    POPAD                               ; 00563139
    EMMS                                ; 0056313a
    LEAVE                               ; 0056313c
    RET                                 ; 0056313d

