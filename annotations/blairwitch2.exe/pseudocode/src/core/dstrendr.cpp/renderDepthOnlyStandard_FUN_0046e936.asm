; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936(void)
;
;
; XREF[14]:
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030 at 0046a08c
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 at 0046aba5
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20 at 0046ac95
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270 at 0046a2cc
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0 at 0046c18e
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80 at 0046bddd
;   engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_0046ad70 at 0046adc5
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670 at 00469689
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 at 00469738
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 at 00469c88
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35e74
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046e936
        ;   Label: core_dstrendr.cpp_renderDepthOnlyStandard_FUN_0046e936
    PUSH EDI                            ; 0046e937
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046e938
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046e93b
    CMP EAX,ECX                         ; 0046e93e
    JBE 0x0046e945                      ; 0046e940
        ;   XREF to: 0046e945 (CONDITIONAL_JUMP)  ; LAB_0046e945
    XCHG EAX,ECX                        ; 0046e942
    XCHG EDI,ESI                        ; 0046e943
    SHR EAX,0x10                        ; 0046e945
        ;   Label: LAB_0046e945
    SHR ECX,0x10                        ; 0046e948
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0046e94b | DAT_01c2a38c
    SUB ECX,EAX                         ; 0046e952
    JLE 0x0046e981                      ; 0046e954
        ;   XREF to: 0046e981 (CONDITIONAL_JUMP)  ; LAB_0046e981
    SHL EAX,0x1                         ; 0046e956
    ADD EBX,EAX                         ; 0046e958
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046e95a
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046e95d
    IMUL dword ptr [ECX*0x4 + 0x1c35e74] ; 0046e960 | DAT_01c35e74
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046e967
    MOV EAX,ESI                         ; 0046e96a
        ;   Label: LAB_0046e96a
    SAR EAX,0x8                         ; 0046e96c
    MOVZX EDI,word ptr [EBX]            ; 0046e96f
    CMP EAX,EDI                         ; 0046e972
    JNC 0x0046e979                      ; 0046e974
        ;   XREF to: 0046e979 (CONDITIONAL_JUMP)  ; LAB_0046e979
    MOV word ptr [EBX],AX               ; 0046e976
    ADD ESI,EDX                         ; 0046e979
        ;   Label: LAB_0046e979
    ADD EBX,0x2                         ; 0046e97b
    DEC ECX                             ; 0046e97e
    JG 0x0046e96a                       ; 0046e97f
        ;   XREF to: 0046e96a (CONDITIONAL_JUMP)  ; LAB_0046e96a
    POP EDI                             ; 0046e981
        ;   Label: LAB_0046e981
    POP ESI                             ; 0046e982
    RET                                 ; 0046e983

