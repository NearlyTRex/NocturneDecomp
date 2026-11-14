; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00461860(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CCloth_load_FUN_0043c330 at 0043c409
;   core_dmodel.cpp_loadModel_FUN_00462420 at 004624b3
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461860
        ;   Label: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00461860
    PUSH EDI                            ; 00461861
    PUSH EBP                            ; 00461862
    MOV EDI,dword ptr [ESP + 0x10]      ; 00461863
    MOV EDX,dword ptr [EDI + 0x120]     ; 00461867
    XOR EBX,EBX                         ; 0046186d
    TEST EDX,EDX                        ; 0046186f
    JLE 0x00461899                      ; 00461871
        ;   XREF to: 00461899 (CONDITIONAL_JUMP)  ; LAB_00461899
    PUSH ESI                            ; 00461873
    LEA ESI,[EDI + 0x124]               ; 00461874
    PUSH ESI                            ; 0046187a
        ;   Label: LAB_0046187a
    MOV ECX,dword ptr [0x005f2afc]      ; 0046187b | DAT_005f2afc
    PUSH ECX                            ; 00461881
    INC EBX                             ; 00461882
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00461883
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x48                        ; 00461888
    MOV EBP,dword ptr [EDI + 0x120]     ; 0046188b
    ADD ESP,0x8                         ; 00461891
    CMP EBX,EBP                         ; 00461894
    JL 0x0046187a                       ; 00461896
        ;   XREF to: 0046187a (CONDITIONAL_JUMP)  ; LAB_0046187a
    POP ESI                             ; 00461898
    POP EBP                             ; 00461899
        ;   Label: LAB_00461899
    POP EDI                             ; 0046189a
    POP EBX                             ; 0046189b
    RET                                 ; 0046189c

