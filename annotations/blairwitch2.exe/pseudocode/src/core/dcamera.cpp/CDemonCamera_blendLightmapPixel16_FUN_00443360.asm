; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00443360(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)
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
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 00442a67
;
; Referenced Globals:
;   undefined4 DAT_01c2a38c
;
; Called Functions:
;   core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004719b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443360
        ;   Label: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00443360
    PUSH ESI                            ; 00443361
    PUSH EDI                            ; 00443362
    PUSH EBP                            ; 00443363
    SUB ESP,0x4                         ; 00443364
    MOV EBX,dword ptr [ESP + 0x18]      ; 00443367
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0044336b
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044336f
    LEA EAX,[ECX + ECX*0x1]             ; 00443373
    MOV ESI,dword ptr [EDX*0x4 + 0x1c2a38c] ; 00443376 | DAT_01c2a38c
    LEA EBP,[ESI + EAX*0x1]             ; 0044337d
    MOV EAX,dword ptr [EBX + 0x144]     ; 00443380
    IMUL EAX,EDX                        ; 00443386
    LEA ESI,[EAX*0x4 + 0x0]             ; 00443389
    MOV EAX,dword ptr [EBX + 0x158]     ; 00443390
    ADD EAX,ESI                         ; 00443396
    LEA ESI,[ECX*0x4 + 0x0]             ; 00443398
    LEA EDI,[EAX + ESI*0x1]             ; 0044339f
    MOV EAX,EDX                         ; 004433a2
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004433a4
    SAR EDX,0x1f                        ; 004433aa
    IDIV ESI                            ; 004433ad
    LEA ESI,[EAX*0x4 + 0x0]             ; 004433af
    ADD ESI,EAX                         ; 004433b6
    MOV EAX,0xb07f58                    ; 004433b8
    SHL ESI,0x6                         ; 004433bd
    MOV EDX,ECX                         ; 004433c0
    ADD EAX,ESI                         ; 004433c2
    SAR EDX,0x1f                        ; 004433c4
    MOV dword ptr [ESP],EAX             ; 004433c7
    MOV EAX,ECX                         ; 004433ca
    IDIV dword ptr [EBX + 0x14c]        ; 004433cc
    ADD ESI,0x1326d20                   ; 004433d2
    MOV EDX,dword ptr [ESP]             ; 004433d8
    MOV EBX,dword ptr [ESP + 0x24]      ; 004433db
    ADD EDX,EAX                         ; 004433df
    ADD EAX,ESI                         ; 004433e1
    ADD EAX,EBX                         ; 004433e3
    PUSH EAX                            ; 004433e5
    ADD EDX,EBX                         ; 004433e6
    PUSH EDX                            ; 004433e8
    PUSH EDI                            ; 004433e9
    PUSH EBP                            ; 004433ea
    CALL core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004719b6 ; 004433eb
        ;   XREF to: 004719b6 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004719b6(ushort * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
    ADD ESP,0x10                        ; 004433f0
    ADD ESP,0x4                         ; 004433f3
    POP EBP                             ; 004433f6
    POP EDI                             ; 004433f7
    POP ESI                             ; 004433f8
    POP EBX                             ; 004433f9
    RET                                 ; 004433fa

