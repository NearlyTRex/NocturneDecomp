; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_004432c0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)
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
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 00442bcd
;
; Referenced Globals:
;   undefined4 DAT_01c2a38c
;
; Called Functions:
;   core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00470190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004432c0
        ;   Label: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_004432c0
    PUSH ESI                            ; 004432c1
    PUSH EDI                            ; 004432c2
    PUSH EBP                            ; 004432c3
    SUB ESP,0x4                         ; 004432c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004432c7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004432cb
    MOV EDX,dword ptr [ESP + 0x20]      ; 004432cf
    LEA EAX,[ECX*0x4 + 0x0]             ; 004432d3
    MOV ESI,dword ptr [EDX*0x4 + 0x1c2a38c] ; 004432da | DAT_01c2a38c
    ADD ESI,EAX                         ; 004432e1
    MOV dword ptr [ESP],ESI             ; 004432e3
    MOV ESI,dword ptr [EBX + 0x144]     ; 004432e6
    IMUL ESI,EDX                        ; 004432ec
    MOV EDI,dword ptr [EBX + 0x158]     ; 004432ef
    SHL ESI,0x2                         ; 004432f5
    ADD ESI,EDI                         ; 004432f8
    LEA EDI,[ESI + EAX*0x1]             ; 004432fa
    MOV EAX,EDX                         ; 004432fd
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004432ff
    SAR EDX,0x1f                        ; 00443305
    IDIV ESI                            ; 00443308
    MOV EDX,ECX                         ; 0044330a
    LEA ESI,[EAX*0x4 + 0x0]             ; 0044330c
    SAR EDX,0x1f                        ; 00443313
    ADD ESI,EAX                         ; 00443316
    MOV EAX,ECX                         ; 00443318
    IDIV dword ptr [EBX + 0x14c]        ; 0044331a
    MOV EBP,0xb07f58                    ; 00443320
    SHL ESI,0x6                         ; 00443325
    ADD EBP,ESI                         ; 00443328
    MOV EBX,dword ptr [ESP + 0x24]      ; 0044332a
    ADD ESI,0x1326d20                   ; 0044332e
    LEA EDX,[EAX + EBP*0x1]             ; 00443334
    ADD EAX,ESI                         ; 00443337
    ADD EAX,EBX                         ; 00443339
    PUSH EAX                            ; 0044333b
    ADD EDX,EBX                         ; 0044333c
    PUSH EDX                            ; 0044333e
    PUSH EDI                            ; 0044333f
    MOV EDI,dword ptr [ESP + 0xc]       ; 00443340
    PUSH EDI                            ; 00443344
    CALL core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00470190 ; 00443345
        ;   XREF to: 00470190 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00470190(uint * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
    ADD ESP,0x10                        ; 0044334a
    ADD ESP,0x4                         ; 0044334d
    POP EBP                             ; 00443350
    POP EDI                             ; 00443351
    POP ESI                             ; 00443352
    POP EBX                             ; 00443353
    RET                                 ; 00443354

