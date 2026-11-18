; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0(void)
;
;
; XREF[2]:
;   engine_special.cpp_kill_FUN_0055f4d0 at 0055f4e5
;   engine_special.cpp_loadExternalRenderer_FUN_0055e8c0 at 0055f26d
;
; Referenced Globals:
;   int g_INT_01c37788
;   void* g_APIDLL_init
;   void* g_PTR_0264bbbc
;   void* g_PTR_0264bbc0
;   int g_INT_0264bbc4
;   void* g_PTR_0264bbc8
;   void* g_PTR_0264bbcc
;   void* g_PTR_0264bbd0
;   void* g_PTR_0264bbd4
;   void* g_PTR_0264bbd8
;   void* g_PTR_0264bbdc
;   void* g_PTR_0264bbe0
;   void* g_PTR_0264bbe4
;   void* g_PTR_0264bbf0
;   void* g_PTR_0264bbf4
;   ... and 59 more
;
; Called Functions:
;   wincore_wddvmem.cpp_freeLibrary_FUN_00589960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dcf0
        ;   Label: engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0
    PUSH EBP                            ; 0055dcf1
    XOR EDX,EDX                         ; 0055dcf2
    MOV EBX,dword ptr [0x0264bce0]      ; 0055dcf4 | g_RendererDLLHandle
    MOV dword ptr [0x01c37788],EDX      ; 0055dcfa | g_INT_01c37788
    MOV dword ptr [0x0264bcdc],EDX      ; 0055dd00 | g_LoadedExternalDLLRenderer
    TEST EBX,EBX                        ; 0055dd06
    JNZ 0x0055debd                      ; 0055dd08
        ;   XREF to: 0055debd (CONDITIONAL_JUMP)  ; LAB_0055debd
    XOR EBP,EBP                         ; 0055dd0e
        ;   Label: LAB_0055dd0e
    MOV dword ptr [0x0264bbbc],EBP      ; 0055dd10 | g_PTR_0264bbbc
    MOV dword ptr [0x0264bbc0],EBP      ; 0055dd16 | g_PTR_0264bbc0
    MOV dword ptr [0x0264bbc4],EBP      ; 0055dd1c | g_INT_0264bbc4
    MOV dword ptr [0x0264bbc8],EBP      ; 0055dd22 | g_PTR_0264bbc8
    MOV dword ptr [0x0264bbcc],EBP      ; 0055dd28 | g_PTR_0264bbcc
    MOV dword ptr [0x0264bbd0],EBP      ; 0055dd2e | g_PTR_0264bbd0
    MOV dword ptr [0x0264bbd4],EBP      ; 0055dd34 | g_PTR_0264bbd4
    MOV dword ptr [0x0264bbd8],EBP      ; 0055dd3a | g_PTR_0264bbd8
    MOV dword ptr [0x0264bbdc],EBP      ; 0055dd40 | g_PTR_0264bbdc
    MOV dword ptr [0x0264bbe0],EBP      ; 0055dd46 | g_PTR_0264bbe0
    MOV dword ptr [0x0264bbe4],EBP      ; 0055dd4c | g_PTR_0264bbe4
    MOV dword ptr [0x0264bbf0],EBP      ; 0055dd52 | g_PTR_0264bbf0
    MOV dword ptr [0x0264bbf4],EBP      ; 0055dd58 | g_PTR_0264bbf4
    MOV dword ptr [0x0264bbf8],EBP      ; 0055dd5e | g_PTR_0264bbf8
    MOV dword ptr [0x0264bbfc],EBP      ; 0055dd64 | g_PTR_0264bbfc
    MOV dword ptr [0x0264bc00],EBP      ; 0055dd6a | g_PTR_0264bc00
    MOV dword ptr [0x0264bc04],EBP      ; 0055dd70 | g_PTR_0264bc04
    MOV dword ptr [0x0264bc08],EBP      ; 0055dd76 | g_PTR_0264bc08
    MOV dword ptr [0x0264bc0c],EBP      ; 0055dd7c | g_PTR_0264bc0c
    MOV dword ptr [0x0264bc10],EBP      ; 0055dd82 | g_PTR_0264bc10
    MOV dword ptr [0x0264bc14],EBP      ; 0055dd88 | g_PTR_0264bc14
    MOV dword ptr [0x0264bc18],EBP      ; 0055dd8e | g_PTR_0264bc18
    MOV dword ptr [0x0264bc1c],EBP      ; 0055dd94 | g_PTR_0264bc1c
    MOV dword ptr [0x0264bc20],EBP      ; 0055dd9a | g_PTR_0264bc20
    MOV dword ptr [0x0264bc24],EBP      ; 0055dda0 | g_PTR_0264bc24
    MOV dword ptr [0x0264bc28],EBP      ; 0055dda6 | g_PTR_0264bc28
    MOV dword ptr [0x0264bc2c],EBP      ; 0055ddac | g_PTR_0264bc2c
    MOV dword ptr [0x0264bc30],EBP      ; 0055ddb2 | DAT_0264bc30
    MOV dword ptr [0x0264bc34],EBP      ; 0055ddb8 | DAT_0264bc34
    MOV dword ptr [0x0264bc38],EBP      ; 0055ddbe | g_PTR_0264bc38
    MOV dword ptr [0x0264bc3c],EBP      ; 0055ddc4 | g_PTR_0264bc3c
    MOV dword ptr [0x0264bc40],EBP      ; 0055ddca | g_PTR_0264bc40
    MOV dword ptr [0x0264bc44],EBP      ; 0055ddd0 | g_PTR_0264bc44
    MOV dword ptr [0x0264bc48],EBP      ; 0055ddd6 | g_PTR_0264bc48
    MOV dword ptr [0x0264bc4c],EBP      ; 0055dddc | g_PTR_0264bc4c
    MOV dword ptr [0x0264bc50],EBP      ; 0055dde2 | g_PTR_0264bc50
    MOV dword ptr [0x0264bc54],EBP      ; 0055dde8 | g_PTR_0264bc54
    MOV dword ptr [0x0264bc58],EBP      ; 0055ddee | g_PTR_0264bc58
    MOV dword ptr [0x0264bc5c],EBP      ; 0055ddf4 | g_PTR_0264bc5c
    MOV dword ptr [0x0264bc60],EBP      ; 0055ddfa | g_PTR_0264bc60
    MOV dword ptr [0x0264bc64],EBP      ; 0055de00 | DAT_0264bc64
    MOV dword ptr [0x0264bc68],EBP      ; 0055de06 | g_APIDLL_getDisplayContext
    MOV dword ptr [0x0264bc6c],EBP      ; 0055de0c | DAT_0264bc6c
    MOV dword ptr [0x0264bc70],EBP      ; 0055de12 | g_PTR_0264bc70
    MOV dword ptr [0x0264bc74],EBP      ; 0055de18 | g_PTR_0264bc74
    MOV dword ptr [0x0264bc78],EBP      ; 0055de1e | g_PTR_0264bc78
    MOV dword ptr [0x0264bc7c],EBP      ; 0055de24 | g_PTR_0264bc7c
    MOV dword ptr [0x0264bc80],EBP      ; 0055de2a | g_PTR_0264bc80
    MOV dword ptr [0x0264bc84],EBP      ; 0055de30 | g_APIDLL_lockHoldBuffer
    MOV dword ptr [0x0264bc88],EBP      ; 0055de36 | g_APIDLL_unlockHoldBuffer
    MOV dword ptr [0x0264bc8c],EBP      ; 0055de3c | g_APIDLL_lockTexture
    MOV dword ptr [0x0264bc90],EBP      ; 0055de42 | g_APIDLL_unlockTexture
    MOV dword ptr [0x0264bc94],EBP      ; 0055de48 | g_APIDLL_getTextureInfo
    MOV dword ptr [0x0264bc98],EBP      ; 0055de4e | g_APIDLL_setVideoModeX
    MOV dword ptr [0x0264bc9c],EBP      ; 0055de54 | g_APIDLL_restoreVideoModeX
    MOV dword ptr [0x0264bca0],EBP      ; 0055de5a | g_APIDLL_lockFrameX
    MOV dword ptr [0x0264bca4],EBP      ; 0055de60 | DAT_0264bca4
    MOV dword ptr [0x0264bca8],EBP      ; 0055de66 | DAT_0264bca8
    MOV dword ptr [0x0264bcac],EBP      ; 0055de6c | DAT_0264bcac
    MOV dword ptr [0x0264bcb0],EBP      ; 0055de72 | g_APIDLL_setLightConstants
    MOV dword ptr [0x0264bcb4],EBP      ; 0055de78 | g_APIDLL_setLightVector
    MOV dword ptr [0x0264bcb8],EBP      ; 0055de7e | g_APIDLL_setAmbientLight
    MOV dword ptr [0x0264bcbc],EBP      ; 0055de84 | g_APIDLL_setTransform
    MOV dword ptr [0x0264bcc0],EBP      ; 0055de8a | DAT_0264bcc0
    MOV dword ptr [0x0264bcc4],EBP      ; 0055de90 | g_APIDLL_getTextureHandle
    MOV dword ptr [0x0264bcc8],EBP      ; 0055de96 | g_APIDLL_selectTextureByHandle
    MOV dword ptr [0x0264bccc],EBP      ; 0055de9c | g_APIDLL_enableCulling
    MOV dword ptr [0x0264bcd0],EBP      ; 0055dea2 | g_APIDLL_enableClipping
    MOV dword ptr [0x0264bcd4],EBP      ; 0055dea8 | g_APIDLL_setTextureClamp
    MOV dword ptr [0x0264bcd8],EBP      ; 0055deae | g_APIDLL_setFog
    MOV dword ptr [0x0264bbb8],EBP      ; 0055deb4 | g_APIDLL_init
    POP EBP                             ; 0055deba
    POP EBX                             ; 0055debb
    RET                                 ; 0055debc
    PUSH EDI                            ; 0055debd
        ;   Label: LAB_0055debd
    PUSH EBX                            ; 0055debe
    CALL wincore_wddvmem.cpp_freeLibrary_FUN_00589960 ; 0055debf
        ;   XREF to: 00589960 (UNCONDITIONAL_CALL)  ; BOOL wincore_wddvmem.cpp_freeLibrary_FUN_00589960(HMODULE hLibModule)
    XOR EDI,EDI                         ; 0055dec4
    ADD ESP,0x4                         ; 0055dec6
    MOV dword ptr [0x0264bce0],EDI      ; 0055dec9 | g_RendererDLLHandle
    POP EDI                             ; 0055decf
    JMP 0x0055dd0e                      ; 0055ded0
        ;   XREF to: 0055dd0e (UNCONDITIONAL_JUMP)  ; LAB_0055dd0e

