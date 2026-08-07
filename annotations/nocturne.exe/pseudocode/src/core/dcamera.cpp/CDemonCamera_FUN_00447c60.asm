; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_FUN_00447c60(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)
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
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0 at 00447348
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;
; Called Functions:
;   core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447c60
        ;   Label: core_dcamera.cpp_CDemonCamera_FUN_00447c60
    PUSH ESI                            ; 00447c61
    PUSH EDI                            ; 00447c62
    PUSH EBP                            ; 00447c63
    SUB ESP,0x4                         ; 00447c64
    MOV EBX,dword ptr [ESP + 0x18]      ; 00447c67
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00447c6b
    MOV EDX,dword ptr [ESP + 0x20]      ; 00447c6f
    MOV EAX,dword ptr [EBX + 0x148]     ; 00447c73
    MOV ESI,dword ptr [EBX + 0x144]     ; 00447c79
    ADD EAX,EDX                         ; 00447c7f
    ADD ESI,ESI                         ; 00447c81
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 00447c83 | g_ScreenBufferArray
    ADD ESI,EAX                         ; 00447c8a
    LEA EAX,[ECX + ECX*0x1]             ; 00447c8c
    ADD ESI,EAX                         ; 00447c8f
    MOV EAX,dword ptr [EBX + 0x13c]     ; 00447c91
    IMUL EAX,EDX                        ; 00447c97
    MOV dword ptr [ESP],ESI             ; 00447c9a
    LEA ESI,[EAX*0x4 + 0x0]             ; 00447c9d
    MOV EAX,dword ptr [EBX + 0x158]     ; 00447ca4
    ADD ESI,EAX                         ; 00447caa
    LEA EAX,[ECX*0x4 + 0x0]             ; 00447cac
    LEA EBP,[ESI + EAX*0x1]             ; 00447cb3
    MOV EAX,EDX                         ; 00447cb6
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00447cb8
    SAR EDX,0x1f                        ; 00447cbe
    IDIV ESI                            ; 00447cc1
    MOV EDX,ECX                         ; 00447cc3
    LEA ESI,[EAX*0x4 + 0x0]             ; 00447cc5
    SAR EDX,0x1f                        ; 00447ccc
    ADD ESI,EAX                         ; 00447ccf
    MOV EAX,ECX                         ; 00447cd1
    IDIV dword ptr [EBX + 0x14c]        ; 00447cd3
    MOV EDI,0xaafdb8                    ; 00447cd9
    SHL ESI,0x6                         ; 00447cde
    ADD EDI,ESI                         ; 00447ce1
    MOV EBX,dword ptr [ESP + 0x24]      ; 00447ce3
    ADD ESI,0x12ceb78                   ; 00447ce7
    ADD EDI,EAX                         ; 00447ced
    ADD EAX,ESI                         ; 00447cef
    ADD EAX,EBX                         ; 00447cf1
    PUSH EAX                            ; 00447cf3
    ADD EDI,EBX                         ; 00447cf4
    PUSH EDI                            ; 00447cf6
    PUSH EBP                            ; 00447cf7
    MOV EDI,dword ptr [ESP + 0xc]       ; 00447cf8
    PUSH EDI                            ; 00447cfc
    CALL core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886 ; 00447cfd
        ;   XREF to: 00466886 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886(ushort * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
    ADD ESP,0x10                        ; 00447d02
    ADD ESP,0x4                         ; 00447d05
    POP EBP                             ; 00447d08
    POP EDI                             ; 00447d09
    POP ESI                             ; 00447d0a
    POP EBX                             ; 00447d0b
    RET                                 ; 00447d0c

