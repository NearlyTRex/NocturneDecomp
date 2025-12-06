; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_selectTextureBGRA_FUN_005b73be(SMRGLTextureBasic * texture_info, int flags)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
; int              Stack[0x8]:4   flags
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   int g_UseExternalRenderer
;   APIDLL_selectTextureBGRA* g_APIDLL_selectTextureBGRA
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 005b73be
        ;   Label: wincore_windll.cpp_selectTextureBGRA_FUN_005b73be
    CMP dword ptr [0x02d03e94],0x0      ; 005b73c0 | int g_UseExternalRenderer
    JZ 0x005b73d2                       ; 005b73c7 | LAB_005b73d2
        ;   XREF to: 005b73d2 (CONDITIONAL_JUMP)
    CMP dword ptr [0x03f6b8bc],0x0      ; 005b73c9 | APIDLL_selectTextureBGRA * g_APIDLL_selectTextureBGRA
    JNZ 0x005b73d5                      ; 005b73d0 | LAB_005b73d5
        ;   XREF to: 005b73d5 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b73d2
        ;   Label: LAB_005b73d2
    RET                                 ; 005b73d4
    PUSH EDI                            ; 005b73d5
        ;   Label: LAB_005b73d5
    PUSH ESI                            ; 005b73d6
    PUSH EBX                            ; 005b73d7
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b73d8
    PUSH EBX                            ; 005b73dc
    MOV ESI,dword ptr [0x006793a4]      ; 005b73dd | int g_CurrentTextureDimension
    PUSH ESI                            ; 005b73e3
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b73e4
    PUSH EDI                            ; 005b73e8
    CALL dword ptr [0x03f6b8bc]         ; 005b73e9 | APIDLL_selectTextureBGRA * g_APIDLL_selectTextureBGRA
    ADD ESP,0xc                         ; 005b73ef
    POP EBX                             ; 005b73f2
    POP ESI                             ; 005b73f3
    POP EDI                             ; 005b73f4
    RET                                 ; 005b73f5

