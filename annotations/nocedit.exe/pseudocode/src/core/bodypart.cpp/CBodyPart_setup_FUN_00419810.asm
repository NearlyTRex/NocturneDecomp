; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00419810(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419810
        ;   Label: core_bodypart.cpp_CBodyPart_setup_FUN_00419810
    PUSH EDI                            ; 00419811
    PUSH EBP                            ; 00419812
    MOV EDI,dword ptr [ESP + 0x10]      ; 00419813
    PUSH EDI                            ; 00419817
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00419818
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    XOR EBX,EBX                         ; 0041981d
    MOV EDX,dword ptr [EDI + 0x18c]     ; 0041981f
    ADD ESP,0x4                         ; 00419825
    TEST EDX,EDX                        ; 00419828
    JLE 0x00419852                      ; 0041982a
        ;   XREF to: 00419852 (CONDITIONAL_JUMP)  ; LAB_00419852
    PUSH ESI                            ; 0041982c
    LEA ESI,[EDI + 0x190]               ; 0041982d
    PUSH ESI                            ; 00419833
        ;   Label: LAB_00419833
    MOV ECX,dword ptr [0x006703ec]      ; 00419834 | g_CDemonRendererPtr2
    PUSH ECX                            ; 0041983a | g_CDemonRendererInstance
    INC EBX                             ; 0041983b
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0041983c
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x18                        ; 00419841
    MOV EBP,dword ptr [EDI + 0x18c]     ; 00419844
    ADD ESP,0x8                         ; 0041984a
    CMP EBX,EBP                         ; 0041984d
    JL 0x00419833                       ; 0041984f
        ;   XREF to: 00419833 (CONDITIONAL_JUMP)  ; LAB_00419833
    POP ESI                             ; 00419851
    CMP dword ptr [EDI + 0xcb4],0x0     ; 00419852
        ;   Label: LAB_00419852
    JNZ 0x00419868                      ; 00419859
        ;   XREF to: 00419868 (CONDITIONAL_JUMP)  ; LAB_00419868
    CMP dword ptr [EDI + 0x74c],0x0     ; 0041985b
    JNZ 0x00419868                      ; 00419862
        ;   XREF to: 00419868 (CONDITIONAL_JUMP)  ; LAB_00419868
    POP EBP                             ; 00419864
    POP EDI                             ; 00419865
    POP EBX                             ; 00419866
    RET                                 ; 00419867
    MOV dword ptr [EDI + 0xfc],0x1      ; 00419868
        ;   Label: LAB_00419868
    POP EBP                             ; 00419872
    POP EDI                             ; 00419873
    POP EBX                             ; 00419874
    RET                                 ; 00419875

