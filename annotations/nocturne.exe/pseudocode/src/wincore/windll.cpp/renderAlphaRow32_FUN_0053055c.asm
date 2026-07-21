; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl wincore_windll_cpp_renderAlphaRow32_FUN_0053055c(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
;
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 at 0040e7d7
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0 at 0040e94e
;
; Referenced Globals:
;   undefined8 DAT_005bfe70
;   undefined8 DAT_005c0668
;   undefined4 DAT_01c00024
;   undefined4 DAT_01c03998
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0053055c
        ;   Label: wincore_windll.cpp_renderAlphaRow32_FUN_0053055c
    MOV EBP,ESP                         ; 0053055d
    PUSHAD                              ; 0053055f
    MOV EDI,dword ptr [EBP + 0x8]       ; 00530560
    MOV ESI,dword ptr [EBP + 0xc]       ; 00530563
    MOV EBX,dword ptr [EBP + 0x10]      ; 00530566
    MOV ECX,dword ptr [EBP + 0x18]      ; 00530569
    MOV EBP,dword ptr [EBP + 0x14]      ; 0053056c
    PXOR MM7,MM7                        ; 0053056f
    SHR EBP,0x8                         ; 00530572
    MOVZX EAX,byte ptr [ESI]            ; 00530575
        ;   Label: LAB_00530575
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c00024] ; 00530578 | DAT_01c00024
    MOVZX EAX,byte ptr [EBX]            ; 00530580
    IMUL EAX,EBP                        ; 00530583
    CMP dword ptr [0x01c03998],0x1      ; 00530586 | DAT_01c03998
    JZ 0x0053059d                       ; 0053058d
        ;   XREF to: 0053059d (CONDITIONAL_JUMP)  ; LAB_0053059d
    CMP EAX,0xfde8                      ; 0053058f
    JGE 0x005305e7                      ; 00530594
        ;   XREF to: 005305e7 (CONDITIONAL_JUMP)  ; LAB_005305e7
    CMP EAX,0xff                        ; 00530596
    JLE 0x005305ea                      ; 0053059b
        ;   XREF to: 005305ea (CONDITIONAL_JUMP)  ; LAB_005305ea
    SHR EAX,0x8                         ; 0053059d
        ;   Label: LAB_0053059d
    PUNPCKLBW MM0,MM7                   ; 005305a0
    MOVQ MM1,qword ptr [EAX*0x8 + 0x5bfe70] ; 005305a3 | DAT_005bfe70
    MOVQ MM2,MM1                        ; 005305ab
    PXOR MM2,qword ptr [0x005c0668]     ; 005305ae | DAT_005c0668
    MOVD MM3,dword ptr [EDI]            ; 005305b5
    PUNPCKLBW MM3,MM7                   ; 005305b8
    CMP dword ptr [0x01c03998],0x1      ; 005305bb | DAT_01c03998
    JZ 0x005305d6                       ; 005305c2
        ;   XREF to: 005305d6 (CONDITIONAL_JUMP)  ; LAB_005305d6
    PMULLW MM0,MM1                      ; 005305c4
    PMULLW MM3,MM2                      ; 005305c7
    PADDW MM0,MM3                       ; 005305ca
    PSRLW MM0,0x8                       ; 005305cd
    PACKUSWB MM0,MM7                    ; 005305d1
    JMP 0x005305e7                      ; 005305d4
        ;   XREF to: 005305e7 (UNCONDITIONAL_JUMP)  ; LAB_005305e7
    PSLLW MM3,0x8                       ; 005305d6
        ;   Label: LAB_005305d6
    PMULLW MM0,MM1                      ; 005305da
    PADDUSW MM0,MM3                     ; 005305dd
    PSRLW MM0,0x8                       ; 005305e0
    PACKUSWB MM0,MM7                    ; 005305e4
    MOVD dword ptr [EDI],MM0            ; 005305e7
        ;   Label: LAB_005305e7
    INC ESI                             ; 005305ea
        ;   Label: LAB_005305ea
    INC EBX                             ; 005305eb
    ADD EDI,0x4                         ; 005305ec
    DEC ECX                             ; 005305ef
    JG 0x00530575                       ; 005305f0
        ;   XREF to: 00530575 (CONDITIONAL_JUMP)  ; LAB_00530575
    POPAD                               ; 005305f2
    EMMS                                ; 005305f3
    LEAVE                               ; 005305f5
    RET                                 ; 005305f6

