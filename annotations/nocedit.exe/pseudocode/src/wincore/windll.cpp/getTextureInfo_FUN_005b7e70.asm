; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_getTextureInfo_FUN_005b7e70(int texture_size)
;
; Parameters:
; int              Stack[0x4]:4   texture_size
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da8e6
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_getTextureInfo* g_APIDLL_getTextureInfo
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7e70 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_getTextureInfo_FUN_005b7e70
    JNZ 0x005b7e7c                      ; 005b7e77
        ;   XREF to: 005b7e7c (CONDITIONAL_JUMP)  ; LAB_005b7e7c
    XOR EAX,EAX                         ; 005b7e79
    RET                                 ; 005b7e7b
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b7e7c
        ;   Label: LAB_005b7e7c
    PUSH ECX                            ; 005b7e80
    CALL dword ptr [0x03f6b930]         ; 005b7e81 | g_APIDLL_getTextureInfo
    ADD ESP,0x4                         ; 005b7e87
    RET                                 ; 005b7e8a

