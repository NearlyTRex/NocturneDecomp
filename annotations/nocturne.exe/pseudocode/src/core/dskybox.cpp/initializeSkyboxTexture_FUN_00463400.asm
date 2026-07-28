; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLSkyTexture * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_00463400(SMRGLSkyTexture *texture)
;
; Parameters:
; SMRGLSkyTexture * Stack[0x4]:4   texture
;
; XREF[1]:
;   core_dskybox.cpp_staticInit_FUN_004633d0 at 004633d5
;
; Referenced Globals:
;   TerminatedCString s_NITESKY_RAW_0057df76
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00463400
        ;   Label: core_dskybox.cpp_initializeSkyboxTexture_FUN_00463400
    PUSH EDI                            ; 00463401
    MOV EDX,dword ptr [ESP + 0xc]       ; 00463402
    MOV ESI,0x57df76                    ; 00463406 | = "NITESKY.RAW"
    LEA EDI,[EDX + 0xc]                 ; 0046340b
    MOV dword ptr [EDX + 0x8],0x0       ; 0046340e
    PUSH EDI                            ; 00463415
    MOV AL,byte ptr [ESI]               ; 00463416
        ;   Label: LAB_00463416
    MOV byte ptr [EDI],AL               ; 00463418
    CMP AL,0x0                          ; 0046341a
    JZ 0x0046342e                       ; 0046341c
        ;   XREF to: 0046342e (CONDITIONAL_JUMP)  ; LAB_0046342e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046341e
    ADD ESI,0x2                         ; 00463421
    MOV byte ptr [EDI + 0x1],AL         ; 00463424
    ADD EDI,0x2                         ; 00463427
    CMP AL,0x0                          ; 0046342a
    JNZ 0x00463416                      ; 0046342c
        ;   XREF to: 00463416 (CONDITIONAL_JUMP)  ; LAB_00463416
    POP EDI                             ; 0046342e
        ;   Label: LAB_0046342e
    MOV EAX,EDX                         ; 0046342f
    POP EDI                             ; 00463431
    POP ESI                             ; 00463432
    RET                                 ; 00463433

