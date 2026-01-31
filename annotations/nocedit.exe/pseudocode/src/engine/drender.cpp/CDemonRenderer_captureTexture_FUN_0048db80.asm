; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80 (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture
;
; XREF[71]:
;   core_actor.cpp_CDemonActor_FUN_0040dec0 at 0040dfd4
;   core_bodypart.cpp_CBodyPart_FUN_00419340 at 00419464
;   core_chain.cpp_CChain_FUN_004308f0 at 00430979
;   core_charactr.cpp_CCharacter_FUN_00429b40 at 00429ba8
;   core_charactr.cpp_CCharacter_FUN_0042ad00 at 0042ad2b
;   core_curtain.cpp_FUN_0044b060 at 0044b0f1
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044fa78
;   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310 at 0044f381
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 at 00473ec9
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 at 00474571
;   ... and 61 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_006221bf
;   TerminatedCString s_CDR_texture_Too_many_cap_006221d5
;   int g_CaptureTextureCount
;   SMRGLTextureBasic[100] g_CapturedTextureArray
;   undefined4 g_CapturedTextureArray[0].base.count
;   undefined4 DAT_02c9951c
;   undefined4 DAT_02c9951d
;   undefined4 DAT_02c9951e
;   undefined4 DAT_02c9951f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048db80
        ;   Label: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
    PUSH EBP                            ; 0048db81
    MOV ESI,dword ptr [ESP + 0x10]      ; 0048db82
    PUSH ESI                            ; 0048db86
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 0048db87
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 0048db8c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048db8f
    CMP dword ptr [EAX + 0x1c],0x0      ; 0048db93
    JZ 0x0048dc10                       ; 0048db97
        ;   XREF to: 0048dc10 (CONDITIONAL_JUMP)  ; LAB_0048dc10
    PUSH EDI                            ; 0048db99
    MOV ECX,dword ptr [0x02c6d5f0]      ; 0048db9a | g_CaptureTextureCount
    INC ECX                             ; 0048dba0
    MOV dword ptr [0x02c6d5f0],ECX      ; 0048dba1 | g_CaptureTextureCount
    CMP ECX,0x64                        ; 0048dba7
    JLE 0x0048dbcf                      ; 0048dbaa
        ;   XREF to: 0048dbcf (CONDITIONAL_JUMP)  ; LAB_0048dbcf
    MOV EDI,0x6221bf                    ; 0048dbac | = "..\\engine\\drender.cpp"
    MOV EBP,0xbf3                       ; 0048dbb1
    PUSH 0x6221d5                       ; 0048dbb6 | = "CDR::texture - Too many captured text..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0048dbbb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0048dbc1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048dbc7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048dbcc
    MOV EDX,dword ptr [0x02c6d5f0]      ; 0048dbcf | g_CaptureTextureCount
        ;   Label: LAB_0048dbcf
    LEA EAX,[EDX*0x8 + 0x0]             ; 0048dbd5
    ADD EAX,EDX                         ; 0048dbdc
    SHL EAX,0x3                         ; 0048dbde
    MOV EDX,dword ptr [ESI + 0x4]       ; 0048dbe1
    MOV dword ptr [EAX + 0x2c99518],EDX ; 0048dbe4 | g_CapturedTextureArray[0].base.count
    ADD EAX,0x2c99514                   ; 0048dbea | g_CapturedTextureArray
    ADD ESI,0x8                         ; 0048dbef
    LEA EDI,[EAX + 0x8]                 ; 0048dbf2
    PUSH EDI                            ; 0048dbf5
    MOV AL,byte ptr [ESI]               ; 0048dbf6
        ;   Label: LAB_0048dbf6
    MOV byte ptr [EDI],AL               ; 0048dbf8 | DAT_02c9951c | DAT_02c9951e
    CMP AL,0x0                          ; 0048dbfa
    JZ 0x0048dc0e                       ; 0048dbfc
        ;   XREF to: 0048dc0e (CONDITIONAL_JUMP)  ; LAB_0048dc0e
    MOV AL,byte ptr [ESI + 0x1]         ; 0048dbfe
    ADD ESI,0x2                         ; 0048dc01
    MOV byte ptr [EDI + 0x1],AL         ; 0048dc04 | DAT_02c9951d | DAT_02c9951f
    ADD EDI,0x2                         ; 0048dc07
    CMP AL,0x0                          ; 0048dc0a
    JNZ 0x0048dbf6                      ; 0048dc0c
        ;   XREF to: 0048dbf6 (CONDITIONAL_JUMP)  ; LAB_0048dbf6
    POP EDI                             ; 0048dc0e
        ;   Label: LAB_0048dc0e
    POP EDI                             ; 0048dc0f
    POP EBP                             ; 0048dc10
        ;   Label: LAB_0048dc10
    POP ESI                             ; 0048dc11
    RET                                 ; 0048dc12

