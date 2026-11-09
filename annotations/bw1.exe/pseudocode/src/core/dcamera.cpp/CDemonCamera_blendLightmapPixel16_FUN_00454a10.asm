; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00454a10(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)
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
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0 at 00454117
;
; Referenced Globals:
;   undefined4 DAT_01c4354c
;
; Called Functions:
;   core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00489ea6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454a10
        ;   Label: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00454a10
    PUSH ESI                            ; 00454a11
    PUSH EDI                            ; 00454a12
    PUSH EBP                            ; 00454a13
    SUB ESP,0x4                         ; 00454a14
    MOV EBX,dword ptr [ESP + 0x18]      ; 00454a17
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00454a1b
    MOV EDX,dword ptr [ESP + 0x20]      ; 00454a1f
    LEA EAX,[ECX + ECX*0x1]             ; 00454a23
    MOV ESI,dword ptr [EDX*0x4 + 0x1c4354c] ; 00454a26 | DAT_01c4354c
    LEA EBP,[ESI + EAX*0x1]             ; 00454a2d
    MOV EAX,dword ptr [EBX + 0x144]     ; 00454a30
    IMUL EAX,EDX                        ; 00454a36
    LEA ESI,[EAX*0x4 + 0x0]             ; 00454a39
    MOV EAX,dword ptr [EBX + 0x158]     ; 00454a40
    ADD EAX,ESI                         ; 00454a46
    LEA ESI,[ECX*0x4 + 0x0]             ; 00454a48
    LEA EDI,[EAX + ESI*0x1]             ; 00454a4f
    MOV EAX,EDX                         ; 00454a52
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00454a54
    SAR EDX,0x1f                        ; 00454a5a
    IDIV ESI                            ; 00454a5d
    LEA ESI,[EAX*0x4 + 0x0]             ; 00454a5f
    ADD ESI,EAX                         ; 00454a66
    MOV EAX,0xb23458                    ; 00454a68
    SHL ESI,0x6                         ; 00454a6d
    MOV EDX,ECX                         ; 00454a70
    ADD EAX,ESI                         ; 00454a72
    SAR EDX,0x1f                        ; 00454a74
    MOV dword ptr [ESP],EAX             ; 00454a77
    MOV EAX,ECX                         ; 00454a7a
    IDIV dword ptr [EBX + 0x14c]        ; 00454a7c
    ADD ESI,0x1342220                   ; 00454a82
    MOV EDX,dword ptr [ESP]             ; 00454a88
    MOV EBX,dword ptr [ESP + 0x24]      ; 00454a8b
    ADD EDX,EAX                         ; 00454a8f
    ADD EAX,ESI                         ; 00454a91
    ADD EAX,EBX                         ; 00454a93
    PUSH EAX                            ; 00454a95
    ADD EDX,EBX                         ; 00454a96
    PUSH EDX                            ; 00454a98
    PUSH EDI                            ; 00454a99
    PUSH EBP                            ; 00454a9a
    CALL core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00489ea6 ; 00454a9b
        ;   XREF to: 00489ea6 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00489ea6(ushort * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
    ADD ESP,0x10                        ; 00454aa0
    ADD ESP,0x4                         ; 00454aa3
    POP EBP                             ; 00454aa6
    POP EDI                             ; 00454aa7
    POP ESI                             ; 00454aa8
    POP EBX                             ; 00454aa9
    RET                                 ; 00454aaa

