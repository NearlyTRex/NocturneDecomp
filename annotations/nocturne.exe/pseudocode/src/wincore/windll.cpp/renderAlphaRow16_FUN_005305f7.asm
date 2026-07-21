; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl wincore_windll_cpp_renderAlphaRow16_FUN_005305f7(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
;
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 at 0040e87b
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0 at 0040e9ab
;
; Referenced Globals:
;   undefined4 DAT_005bf5b8
;   undefined4 DAT_005bf5c0
;   undefined4 DAT_005bf5c8
;   undefined4 DAT_005bf5d0
;   undefined4 DAT_005bf5f0
;   undefined4 DAT_005bf610
;   undefined4 DAT_005bf618
;   undefined4 DAT_005bf638
;   undefined4 DAT_005bf658
;   undefined8 DAT_005bfe70
;   undefined8 DAT_005c0668
;   undefined4 DAT_01c00024
;   undefined4 DAT_01c03998
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005305f7
        ;   Label: wincore_windll.cpp_renderAlphaRow16_FUN_005305f7
    MOV EBP,ESP                         ; 005305f8
    PUSHAD                              ; 005305fa
    MOV EDI,dword ptr [EBP + 0x8]       ; 005305fb
    MOV ESI,dword ptr [EBP + 0xc]       ; 005305fe
    MOV EBX,dword ptr [EBP + 0x10]      ; 00530601
    MOV ECX,dword ptr [EBP + 0x18]      ; 00530604
    MOV EBP,dword ptr [EBP + 0x14]      ; 00530607
    PXOR MM7,MM7                        ; 0053060a
    SHR EBP,0x8                         ; 0053060d
    MOVZX EAX,byte ptr [ESI]            ; 00530610
        ;   Label: LAB_00530610
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c00024] ; 00530613 | DAT_01c00024
    MOVZX EAX,byte ptr [EBX]            ; 0053061b
    IMUL EAX,EBP                        ; 0053061e
    CMP dword ptr [0x01c03998],0x1      ; 00530621 | DAT_01c03998
    JZ 0x00530640                       ; 00530628
        ;   XREF to: 00530640 (CONDITIONAL_JUMP)  ; LAB_00530640
    CMP EAX,0xfde8                      ; 0053062a
    JGE 0x005306c3                      ; 0053062f
        ;   XREF to: 005306c3 (CONDITIONAL_JUMP)  ; LAB_005306c3
    CMP EAX,0xff                        ; 00530635
    JLE 0x005306ff                      ; 0053063a
        ;   XREF to: 005306ff (CONDITIONAL_JUMP)  ; LAB_005306ff
    SHR EAX,0x8                         ; 00530640
        ;   Label: LAB_00530640
    PUNPCKLBW MM0,MM7                   ; 00530643
    MOVQ MM1,qword ptr [EAX*0x8 + 0x5bfe70] ; 00530646 | DAT_005bfe70
    MOVQ MM2,MM1                        ; 0053064e
    PXOR MM2,qword ptr [0x005c0668]     ; 00530651 | DAT_005c0668
    MOVZX EAX,word ptr [EDI]            ; 00530658
    MOVD MM3,EAX                        ; 0053065b
    PAND MM3,qword ptr [0x005bf5c8]     ; 0053065e | DAT_005bf5c8
    PSLLQ MM3,qword ptr [0x005bf658]    ; 00530665 | DAT_005bf658
    MOVD MM4,EAX                        ; 0053066c
    PAND MM4,qword ptr [0x005bf5c0]     ; 0053066f | DAT_005bf5c0
    PSLLQ MM4,qword ptr [0x005bf638]    ; 00530676 | DAT_005bf638
    POR MM3,MM4                         ; 0053067d
    MOVD MM5,EAX                        ; 00530680
    PAND MM5,qword ptr [0x005bf5b8]     ; 00530683 | DAT_005bf5b8
    PSLLQ MM5,qword ptr [0x005bf618]    ; 0053068a | DAT_005bf618
    POR MM3,MM5                         ; 00530691
    PUNPCKLBW MM3,MM7                   ; 00530694
    CMP dword ptr [0x01c03998],0x1      ; 00530697 | DAT_01c03998
    JZ 0x005306b2                       ; 0053069e
        ;   XREF to: 005306b2 (CONDITIONAL_JUMP)  ; LAB_005306b2
    PMULLW MM0,MM1                      ; 005306a0
    PMULLW MM3,MM2                      ; 005306a3
    PADDW MM0,MM3                       ; 005306a6
    PSRLW MM0,0x8                       ; 005306a9
    PACKUSWB MM0,MM7                    ; 005306ad
    JMP 0x005306c3                      ; 005306b0
        ;   XREF to: 005306c3 (UNCONDITIONAL_JUMP)  ; LAB_005306c3
    PSLLW MM3,0x8                       ; 005306b2
        ;   Label: LAB_005306b2
    PMULLW MM0,MM1                      ; 005306b6
    PADDUSW MM0,MM3                     ; 005306b9
    PSRLW MM0,0x8                       ; 005306bc
    PACKUSWB MM0,MM7                    ; 005306c0
    MOVQ MM2,MM0                        ; 005306c3
        ;   Label: LAB_005306c3
    MOVQ MM4,MM0                        ; 005306c6
    PAND MM0,qword ptr [0x005bf610]     ; 005306c9 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 005306d0 | DAT_005bf5f0
    PAND MM4,qword ptr [0x005bf5d0]     ; 005306d7 | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 005306de | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 005306e5 | DAT_005bf638
    PSRLQ MM4,qword ptr [0x005bf618]    ; 005306ec | DAT_005bf618
    POR MM0,MM2                         ; 005306f3
    POR MM0,MM4                         ; 005306f6
    MOVD EAX,MM0                        ; 005306f9
    MOV word ptr [EDI],AX               ; 005306fc
    INC ESI                             ; 005306ff
        ;   Label: LAB_005306ff
    INC EBX                             ; 00530700
    ADD EDI,0x2                         ; 00530701
    DEC ECX                             ; 00530704
    JG 0x00530610                       ; 00530705
        ;   XREF to: 00530610 (CONDITIONAL_JUMP)  ; LAB_00530610
    POPAD                               ; 0053070b
    EMMS                                ; 0053070c
    LEAVE                               ; 0053070e
    RET                                 ; 0053070f

