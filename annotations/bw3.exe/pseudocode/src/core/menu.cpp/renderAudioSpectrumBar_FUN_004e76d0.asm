; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004e76d0(int x_center,int y_top,int height_half)
;
; Parameters:
; int              Stack[0x4]:4   x_center
; int              Stack[0x8]:4   y_top
; int              Stack[0xc]:4   height_half
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01d737e0
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e76d0
        ;   Label: core_menu.cpp_renderAudioSpectrumBar_FUN_004e76d0
    SUB ESP,0x28                        ; 004e76d1
    MOV EBP,dword ptr [ESP + 0x30]      ; 004e76d4
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e76d8
    ADD EDX,EDX                         ; 004e76dc
    TEST EDX,EDX                        ; 004e76de
    JLE 0x004e7857                      ; 004e76e0
        ;   XREF to: 004e7857 (CONDITIONAL_JUMP)  ; LAB_004e7857
    PUSH EDI                            ; 004e76e6
    PUSH ESI                            ; 004e76e7
    PUSH EBX                            ; 004e76e8
    MOV EAX,[0x005f2afc]                ; 004e76e9 | DAT_005f2afc
    LEA ECX,[EBP + -0x10]               ; 004e76ee
    MOV EBX,dword ptr [EAX]             ; 004e76f1
    SHL ECX,0x10                        ; 004e76f3
    MOV dword ptr [EBX + 0x10],ECX      ; 004e76f6
    MOV ESI,dword ptr [ESP + 0x40]      ; 004e76f9
    MOV EBX,dword ptr [EAX]             ; 004e76fd
    SHL ESI,0x10                        ; 004e76ff
    MOV dword ptr [EBX + 0x14],ESI      ; 004e7702
    LEA EBX,[EBP + 0x10]                ; 004e7705
    MOV EDI,dword ptr [EAX]             ; 004e7708
    SHL EBX,0x10                        ; 004e770a
    MOV dword ptr [EDI + 0x40],EBX      ; 004e770d
    MOV EDI,dword ptr [EAX]             ; 004e7710
    MOV dword ptr [EDI + 0x44],ESI      ; 004e7712
    MOV ESI,dword ptr [EAX]             ; 004e7715
    MOV dword ptr [ESI + 0x70],EBX      ; 004e7717
    MOV EBX,dword ptr [ESP + 0x40]      ; 004e771a
    SUB EBX,EDX                         ; 004e771e
    MOV EDX,EBX                         ; 004e7720
    MOV EBX,dword ptr [EAX]             ; 004e7722
    SHL EDX,0x10                        ; 004e7724
    MOV dword ptr [EBX + 0x74],EDX      ; 004e7727
    MOV EBX,dword ptr [EAX]             ; 004e772a
    MOV dword ptr [EBX + 0xa0],ECX      ; 004e772c
    MOV ECX,dword ptr [EAX]             ; 004e7732
    MOV dword ptr [ECX + 0xa4],EDX      ; 004e7734
    MOV EDX,dword ptr [EAX]             ; 004e773a
    MOV dword ptr [EDX + 0x18],0x80000  ; 004e773c
    MOV EDX,dword ptr [EAX]             ; 004e7743
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 004e7745
    MOV EDX,dword ptr [EAX]             ; 004e774c
    MOV dword ptr [EDX + 0x48],0xf80000 ; 004e774e
    MOV EDX,dword ptr [EAX]             ; 004e7755
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 004e7757
    MOV EDX,dword ptr [EAX]             ; 004e775e
    MOV dword ptr [EDX + 0x78],0xf80000 ; 004e7760
    MOV EDX,dword ptr [EAX]             ; 004e7767
    MOV dword ptr [EDX + 0x7c],0x80000  ; 004e7769
    MOV EDX,dword ptr [EAX]             ; 004e7770
    MOV dword ptr [EDX + 0xa8],0x80000  ; 004e7772
    MOV EDX,dword ptr [EAX]             ; 004e777c
    MOV dword ptr [EDX + 0xac],0x80000  ; 004e777e
    MOV EDX,0x4                         ; 004e7788
    MOV EBX,0x2                         ; 004e778d
    MOV ESI,0x3                         ; 004e7792
    PUSH 0x8000                         ; 004e7797
    XOR ECX,ECX                         ; 004e779c
    MOV dword ptr [ESP + 0x14],EDX      ; 004e779e
    MOV dword ptr [ESP + 0x24],ECX      ; 004e77a2
    MOV dword ptr [ESP + 0x20],ECX      ; 004e77a6
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e77aa
    MOV dword ptr [ESP + 0x18],ECX      ; 004e77ae
    MOV dword ptr [ESP + 0x28],ECX      ; 004e77b2
    MOV dword ptr [ESP + 0x30],EBX      ; 004e77b6
    PUSH EAX                            ; 004e77ba
    MOV ECX,0x1                         ; 004e77bb
    MOV dword ptr [ESP + 0x38],ESI      ; 004e77c0
    MOV dword ptr [ESP + 0x30],ECX      ; 004e77c4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004e77c8
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e77cd
    PUSH 0x1                            ; 004e77d0
    MOV EDI,dword ptr [0x005f2afc]      ; 004e77d2 | DAT_005f2afc
    PUSH EDI                            ; 004e77d8
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004e77d9
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EAX,[0x01d737e0]                ; 004e77de | DAT_01d737e0
    MOV EDX,EAX                         ; 004e77e3
    SAR EDX,0x1f                        ; 004e77e5
    SHL EDX,0x10                        ; 004e77e8
    SBB EAX,EDX                         ; 004e77eb
    SAR EAX,0x10                        ; 004e77ed
    LEA EDX,[EAX + EBP*0x1]             ; 004e77f0
    AND EDX,0x7                         ; 004e77f3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e77f6
    SUB EAX,EDX                         ; 004e77fd
    SHL EAX,0x3                         ; 004e77ff
    ADD ESP,0x8                         ; 004e7802
    ADD EAX,0x6003b8                    ; 004e7805
    PUSH EAX                            ; 004e780a
    MOV EBP,dword ptr [0x005f2afc]      ; 004e780b | DAT_005f2afc
    PUSH EBP                            ; 004e7811
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004e7812
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004e7817
    PUSH 0x23                           ; 004e781a
    LEA EAX,[ESP + 0x10]                ; 004e781c
    PUSH EAX                            ; 004e7820
    MOV EAX,[0x005f2afc]                ; 004e7821 | DAT_005f2afc
    PUSH EAX                            ; 004e7826
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 004e7827
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004e782c
    PUSH 0x0                            ; 004e782f
    MOV EDX,dword ptr [0x005f2afc]      ; 004e7831 | DAT_005f2afc
    PUSH EDX                            ; 004e7837
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004e7838
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004e783d
    PUSH 0xffff                         ; 004e7840
    MOV ECX,dword ptr [0x005f2afc]      ; 004e7845 | DAT_005f2afc
    PUSH ECX                            ; 004e784b
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004e784c
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e7851
    POP EBX                             ; 004e7854
    POP ESI                             ; 004e7855
    POP EDI                             ; 004e7856
    ADD ESP,0x28                        ; 004e7857
        ;   Label: LAB_004e7857
    POP EBP                             ; 004e785a
    RET                                 ; 004e785b

