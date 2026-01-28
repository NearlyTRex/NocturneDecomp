; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_updateTextureBGRA_FUN_005b73f6(SMRGLTextureBasic *texture_info,int flags)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
; int              Stack[0x8]:4   flags
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   int g_UseExternalRenderer
;   APIDLL_updateTextureBGRA* g_APIDLL_updateTextureBGRA
;
; *****************************************************************************

section .text

    LEA EAX,[EAX]                       ; 005b73f6
        ;   Label: wincore_windll.cpp_updateTextureBGRA_FUN_005b73f6
    LEA EDX,[EDX]                       ; 005b73fc
    CMP dword ptr [0x02d03e94],0x0      ; 005b7400 | g_UseExternalRenderer
    JZ 0x005b7412                       ; 005b7407
        ;   XREF to: 005b7412 (CONDITIONAL_JUMP)  ; LAB_005b7412
    CMP dword ptr [0x03f6b8c0],0x0      ; 005b7409 | g_APIDLL_updateTextureBGRA
    JNZ 0x005b7415                      ; 005b7410
        ;   XREF to: 005b7415 (CONDITIONAL_JUMP)  ; LAB_005b7415
    XOR EAX,EAX                         ; 005b7412
        ;   Label: LAB_005b7412
    RET                                 ; 005b7414
    PUSH EDI                            ; 005b7415
        ;   Label: LAB_005b7415
    PUSH ESI                            ; 005b7416
    PUSH EBX                            ; 005b7417
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b7418
    PUSH EBX                            ; 005b741c
    MOV ESI,dword ptr [0x006793a4]      ; 005b741d | g_CurrentTextureDimension
    PUSH ESI                            ; 005b7423
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b7424
    PUSH EDI                            ; 005b7428
    CALL dword ptr [0x03f6b8c0]         ; 005b7429 | g_APIDLL_updateTextureBGRA
    ADD ESP,0xc                         ; 005b742f
    POP EBX                             ; 005b7432
    POP ESI                             ; 005b7433
    POP EDI                             ; 005b7434
    RET                                 ; 005b7435

