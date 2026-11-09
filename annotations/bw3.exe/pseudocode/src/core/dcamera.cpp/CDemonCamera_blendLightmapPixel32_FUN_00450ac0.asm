; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)
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
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 004503cd
;
; Referenced Globals:
;   undefined4 DAT_01c5faec
;
; Called Functions:
;   core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00471200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450ac0
        ;   Label: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0
    PUSH ESI                            ; 00450ac1
    PUSH EDI                            ; 00450ac2
    PUSH EBP                            ; 00450ac3
    SUB ESP,0x4                         ; 00450ac4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00450ac7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00450acb
    MOV EDX,dword ptr [ESP + 0x20]      ; 00450acf
    LEA EAX,[ECX*0x4 + 0x0]             ; 00450ad3
    MOV ESI,dword ptr [EDX*0x4 + 0x1c5faec] ; 00450ada | DAT_01c5faec
    ADD ESI,EAX                         ; 00450ae1
    MOV dword ptr [ESP],ESI             ; 00450ae3
    MOV ESI,dword ptr [EBX + 0x144]     ; 00450ae6
    IMUL ESI,EDX                        ; 00450aec
    MOV EDI,dword ptr [EBX + 0x158]     ; 00450aef
    SHL ESI,0x2                         ; 00450af5
    ADD ESI,EDI                         ; 00450af8
    LEA EDI,[ESI + EAX*0x1]             ; 00450afa
    MOV EAX,EDX                         ; 00450afd
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00450aff
    SAR EDX,0x1f                        ; 00450b05
    IDIV ESI                            ; 00450b08
    MOV EDX,ECX                         ; 00450b0a
    LEA ESI,[EAX*0x4 + 0x0]             ; 00450b0c
    SAR EDX,0x1f                        ; 00450b13
    ADD ESI,EAX                         ; 00450b16
    MOV EAX,ECX                         ; 00450b18
    IDIV dword ptr [EBX + 0x14c]        ; 00450b1a
    MOV EBP,0xb3fd08                    ; 00450b20
    SHL ESI,0x6                         ; 00450b25
    ADD EBP,ESI                         ; 00450b28
    MOV EBX,dword ptr [ESP + 0x24]      ; 00450b2a
    ADD ESI,0x135ead0                   ; 00450b2e
    LEA EDX,[EAX + EBP*0x1]             ; 00450b34
    ADD EAX,ESI                         ; 00450b37
    ADD EAX,EBX                         ; 00450b39
    PUSH EAX                            ; 00450b3b
    ADD EDX,EBX                         ; 00450b3c
    PUSH EDX                            ; 00450b3e
    PUSH EDI                            ; 00450b3f
    MOV EDI,dword ptr [ESP + 0xc]       ; 00450b40
    PUSH EDI                            ; 00450b44
    CALL core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00471200 ; 00450b45
        ;   XREF to: 00471200 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00471200(uint * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
    ADD ESP,0x10                        ; 00450b4a
    ADD ESP,0x4                         ; 00450b4d
    POP EBP                             ; 00450b50
    POP EDI                             ; 00450b51
    POP ESI                             ; 00450b52
    POP EBX                             ; 00450b53
    RET                                 ; 00450b54

