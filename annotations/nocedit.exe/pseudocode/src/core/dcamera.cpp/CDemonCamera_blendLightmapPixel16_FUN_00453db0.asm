; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int              Stack[0x10]:4   offset
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 004534b7
;
; Referenced Globals:
;   char[241][320] g_CoronaBlurWorkBuffer
;   SFogImagePlane g_CameraPlaneWorkBuffer
;   void*[1200] g_ScreenBufferArray
;
; Called Functions:
;   core_dstrender.cpp_blendSinglePixelLightmapMMX_FUN_004937b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453db0
        ;   Label: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
    PUSH ESI                            ; 00453db1
    PUSH EDI                            ; 00453db2
    PUSH EBP                            ; 00453db3
    SUB ESP,0x4                         ; 00453db4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00453db7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00453dbb
    MOV EDX,dword ptr [ESP + 0x20]      ; 00453dbf
    LEA EAX,[ECX + ECX*0x1]             ; 00453dc3
    MOV ESI,dword ptr [EDX*0x4 + 0x2cf6a9c] ; 00453dc6 | g_ScreenBufferArray
    LEA EBP,[ESI + EAX*0x1]             ; 00453dcd
    MOV EAX,dword ptr [EBX + 0x144]     ; 00453dd0
    IMUL EAX,EDX                        ; 00453dd6
    LEA ESI,[EAX*0x4 + 0x0]             ; 00453dd9
    MOV EAX,dword ptr [EBX + 0x158]     ; 00453de0
    ADD EAX,ESI                         ; 00453de6
    LEA ESI,[ECX*0x4 + 0x0]             ; 00453de8
    LEA EDI,[EAX + ESI*0x1]             ; 00453def
    MOV EAX,EDX                         ; 00453df2
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00453df4
    SAR EDX,0x1f                        ; 00453dfa
    IDIV ESI                            ; 00453dfd
    LEA ESI,[EAX*0x4 + 0x0]             ; 00453dff
    ADD ESI,EAX                         ; 00453e06
    MOV EAX,0xbbb9b8                    ; 00453e08 | g_CoronaBlurWorkBuffer
    SHL ESI,0x6                         ; 00453e0d
    MOV EDX,ECX                         ; 00453e10
    ADD EAX,ESI                         ; 00453e12
    SAR EDX,0x1f                        ; 00453e14
    MOV dword ptr [ESP],EAX             ; 00453e17
    MOV EAX,ECX                         ; 00453e1a
    IDIV dword ptr [EBX + 0x14c]        ; 00453e1c
    ADD ESI,0x13da778                   ; 00453e22 | g_CameraPlaneWorkBuffer
    MOV EDX,dword ptr [ESP]             ; 00453e28
    MOV EBX,dword ptr [ESP + 0x24]      ; 00453e2b
    ADD EDX,EAX                         ; 00453e2f
    ADD EAX,ESI                         ; 00453e31
    ADD EAX,EBX                         ; 00453e33
    PUSH EAX                            ; 00453e35
    ADD EDX,EBX                         ; 00453e36
    PUSH EDX                            ; 00453e38
    PUSH EDI                            ; 00453e39
    PUSH EBP                            ; 00453e3a
    CALL core_dstrender.cpp_blendSinglePixelLightmapMMX_FUN_004937b6 ; 00453e3b
        ;   XREF to: 004937b6 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_blendSinglePixelLightmapMMX_FUN_004937b6(ushort * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
    ADD ESP,0x10                        ; 00453e40
    ADD ESP,0x4                         ; 00453e43
    POP EBP                             ; 00453e46
    POP EDI                             ; 00453e47
    POP ESI                             ; 00453e48
    POP EBX                             ; 00453e49
    RET                                 ; 00453e4a

