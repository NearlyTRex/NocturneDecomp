; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int              Stack[0x10]:4   offset
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 0045361d
;
; Referenced Globals:
;   char[241][320] g_CoronaBlurWorkBuffer
;   SFogImagePlane g_CameraPlaneWorkBuffer
;   void*[1200] g_ScreenBufferArray
;
; Called Functions:
;   core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453d10
        ;   Label: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
    PUSH ESI                            ; 00453d11
    PUSH EDI                            ; 00453d12
    PUSH EBP                            ; 00453d13
    SUB ESP,0x4                         ; 00453d14
    MOV EBX,dword ptr [ESP + 0x18]      ; 00453d17
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00453d1b
    MOV EDX,dword ptr [ESP + 0x20]      ; 00453d1f
    LEA EAX,[ECX*0x4 + 0x0]             ; 00453d23
    MOV ESI,dword ptr [EDX*0x4 + 0x2cf6a9c] ; 00453d2a | g_ScreenBufferArray
    ADD ESI,EAX                         ; 00453d31
    MOV dword ptr [ESP],ESI             ; 00453d33
    MOV ESI,dword ptr [EBX + 0x144]     ; 00453d36
    IMUL ESI,EDX                        ; 00453d3c
    MOV EDI,dword ptr [EBX + 0x158]     ; 00453d3f
    SHL ESI,0x2                         ; 00453d45
    ADD ESI,EDI                         ; 00453d48
    LEA EDI,[ESI + EAX*0x1]             ; 00453d4a
    MOV EAX,EDX                         ; 00453d4d
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00453d4f
    SAR EDX,0x1f                        ; 00453d55
    IDIV ESI                            ; 00453d58
    MOV EDX,ECX                         ; 00453d5a
    LEA ESI,[EAX*0x4 + 0x0]             ; 00453d5c
    SAR EDX,0x1f                        ; 00453d63
    ADD ESI,EAX                         ; 00453d66
    MOV EAX,ECX                         ; 00453d68
    IDIV dword ptr [EBX + 0x14c]        ; 00453d6a
    MOV EBP,0xbbb9b8                    ; 00453d70 | g_CoronaBlurWorkBuffer
    SHL ESI,0x6                         ; 00453d75
    ADD EBP,ESI                         ; 00453d78
    MOV EBX,dword ptr [ESP + 0x24]      ; 00453d7a
    ADD ESI,0x13da778                   ; 00453d7e | g_CameraPlaneWorkBuffer
    LEA EDX,[EAX + EBP*0x1]             ; 00453d84
    ADD EAX,ESI                         ; 00453d87
    ADD EAX,EBX                         ; 00453d89
    PUSH EAX                            ; 00453d8b
    ADD EDX,EBX                         ; 00453d8c
    PUSH EDX                            ; 00453d8e
    PUSH EDI                            ; 00453d8f
    MOV EDI,dword ptr [ESP + 0xc]       ; 00453d90
    PUSH EDI                            ; 00453d94
    CALL core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90 ; 00453d95
        ;   XREF to: 00491f90 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90(uint * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
    ADD ESP,0x10                        ; 00453d9a
    ADD ESP,0x4                         ; 00453d9d
    POP EBP                             ; 00453da0
    POP EDI                             ; 00453da1
    POP ESI                             ; 00453da2
    POP EBX                             ; 00453da3
    RET                                 ; 00453da4

