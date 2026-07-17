; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30(uchar *source_palette,ushort *color_table)
;
; Parameters:
; uchar *          Stack[0x4]:4   source_palette
; ushort *         Stack[0x8]:4   color_table
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   IDirectDrawSurface* g_BackBufferSurface = 00000000
;   TerminatedCString s_Could_not_lock_back_buff_10016b50
;   TerminatedCString s_Could_not_unlock_back_bu_10016b6c
;   uchar* g_ColorPalette = 00000000
;   ushort* g_ColorTable16 = 00000000
;   CExternalRendererBridge g_ExternalRendererBridge
;   undefined4 g_ExternalRendererBridge.red_scale_factor
;   undefined4 g_ExternalRendererBridge.red_dither_shift
;   undefined4 g_ExternalRendererBridge.green_bit_position
;   undefined4 g_ExternalRendererBridge.green_scale_factor
;   undefined4 g_ExternalRendererBridge.green_dither_shift
;   undefined4 g_ExternalRendererBridge.blue_bit_position
;   undefined4 g_ExternalRendererBridge.blue_scale_factor
;   undefined4 g_ExternalRendererBridge.blue_dither_shift
;
; Called Functions:
;   dll_dx7.cpp_fatalError_FUN_10002340
;   dll_dx7.cpp_floorLog2_FUN_10004d10
;   dll_dx7.cpp_lockSurface_FUN_10002e20
;   dll_dx7.cpp_unlockSurface_FUN_10002cb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10004b30
        ;   Label: dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30
    SUB ESP,0x7c                        ; 10004b34
    MOV [0x10215e40],EAX                ; 10004b37 | g_ColorPalette
    PUSH EBX                            ; 10004b3c
    MOV ECX,dword ptr [ESP + 0x88]      ; 10004b3d
    PUSH ESI                            ; 10004b44
    PUSH EDI                            ; 10004b45
    XOR EAX,EAX                         ; 10004b46
    LEA EDI,[ESP + 0xc]                 ; 10004b48
    PUSH EBP                            ; 10004b4c
    LEA EDX,[ESP + 0x10]                ; 10004b4d
    MOV dword ptr [0x10226868],ECX      ; 10004b51 | g_ColorTable16
    MOV ECX,0x1f                        ; 10004b57
    PUSH EDX                            ; 10004b5c
    STOSD.REP ES:EDI                    ; 10004b5d
    MOV dword ptr [ESP + 0x14],0x7c     ; 10004b5f
    MOV EAX,[0x10014180]                ; 10004b67 | g_BackBufferSurface
    PUSH EAX                            ; 10004b6c
    CALL dll_dx7.cpp_lockSurface_FUN_10002e20 ; 10004b6d
        ;   XREF to: 10002e20 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_lockSurface_FUN_10002e20(IDirectDrawSurface * surface, DDSURFACEDESC2 * surface_desc)
    ADD ESP,0x8                         ; 10004b72
    TEST EAX,EAX                        ; 10004b75
    JNZ 0x10004b86                      ; 10004b77
        ;   XREF to: 10004b86 (CONDITIONAL_JUMP)  ; LAB_10004b86
    PUSH 0x10016b50                     ; 10004b79 | = "Could not lock back buffer"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10004b7e
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    MOV EAX,[0x10014180]                ; 10004b86 | g_BackBufferSurface
        ;   Label: LAB_10004b86
    PUSH EAX                            ; 10004b8b
    CALL dll_dx7.cpp_unlockSurface_FUN_10002cb0 ; 10004b8c
        ;   XREF to: 10002cb0 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_unlockSurface_FUN_10002cb0(IDirectDrawSurface * surface)
    ADD ESP,0x4                         ; 10004b91
    TEST EAX,EAX                        ; 10004b94
    JNZ 0x10004ba5                      ; 10004b96
        ;   XREF to: 10004ba5 (CONDITIONAL_JUMP)  ; LAB_10004ba5
    PUSH 0x10016b6c                     ; 10004b98 | = "Could not unlock back buffer"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10004b9d
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    XOR ECX,ECX                         ; 10004ba5
        ;   Label: LAB_10004ba5
    MOV EAX,dword ptr [ESP + 0x68]      ; 10004ba7
    TEST AL,0x1                         ; 10004bab
    JNZ 0x10004bb7                      ; 10004bad
        ;   XREF to: 10004bb7 (CONDITIONAL_JUMP)  ; LAB_10004bb7
    SHR EAX,0x1                         ; 10004baf
        ;   Label: LAB_10004baf
    INC ECX                             ; 10004bb2
    TEST AL,0x1                         ; 10004bb3
    JZ 0x10004baf                       ; 10004bb5
        ;   XREF to: 10004baf (CONDITIONAL_JUMP)  ; LAB_10004baf
    MOV EAX,[0x102268b8]                ; 10004bb7 | g_ExternalRendererBridge
        ;   Label: LAB_10004bb7
    SUB EDX,EDX                         ; 10004bbc
    MOV dword ptr [EAX],ECX             ; 10004bbe
    MOV EAX,0xff                        ; 10004bc0
    MOV ESI,dword ptr [ESP + 0x68]      ; 10004bc5
    SHR ESI,CL                          ; 10004bc9
    MOV ECX,dword ptr [0x102268bc]      ; 10004bcb | g_ExternalRendererBridge.red_scale_factor
    DIV ESI                             ; 10004bd1
    MOV dword ptr [ECX],EAX             ; 10004bd3
    MOV ECX,dword ptr [0x102268bc]      ; 10004bd5 | g_ExternalRendererBridge.red_scale_factor
    MOV EAX,dword ptr [ECX]             ; 10004bdb
    PUSH EAX                            ; 10004bdd
    CALL dll_dx7.cpp_floorLog2_FUN_10004d10 ; 10004bde
        ;   XREF to: 10004d10 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_floorLog2_FUN_10004d10(uint value)
    ADD ESP,0x4                         ; 10004be3
    MOV ECX,dword ptr [0x102268c0]      ; 10004be6 | g_ExternalRendererBridge.red_dither_shift
    MOV dword ptr [ECX],EAX             ; 10004bec
    XOR ECX,ECX                         ; 10004bee
    MOV EAX,dword ptr [ESP + 0x6c]      ; 10004bf0
    TEST AL,0x1                         ; 10004bf4
    JNZ 0x10004c00                      ; 10004bf6
        ;   XREF to: 10004c00 (CONDITIONAL_JUMP)  ; LAB_10004c00
    SHR EAX,0x1                         ; 10004bf8
        ;   Label: LAB_10004bf8
    INC ECX                             ; 10004bfb
    TEST AL,0x1                         ; 10004bfc
    JZ 0x10004bf8                       ; 10004bfe
        ;   XREF to: 10004bf8 (CONDITIONAL_JUMP)  ; LAB_10004bf8
    MOV EAX,[0x102268c4]                ; 10004c00 | g_ExternalRendererBridge.green_bit_position
        ;   Label: LAB_10004c00
    SUB EDX,EDX                         ; 10004c05
    MOV dword ptr [EAX],ECX             ; 10004c07
    MOV EAX,0xff                        ; 10004c09
    MOV ESI,dword ptr [ESP + 0x6c]      ; 10004c0e
    SHR ESI,CL                          ; 10004c12
    MOV ECX,dword ptr [0x102268c8]      ; 10004c14 | g_ExternalRendererBridge.green_scale_factor
    DIV ESI                             ; 10004c1a
    MOV dword ptr [ECX],EAX             ; 10004c1c
    MOV ECX,dword ptr [0x102268c8]      ; 10004c1e | g_ExternalRendererBridge.green_scale_factor
    MOV EAX,dword ptr [ECX]             ; 10004c24
    PUSH EAX                            ; 10004c26
    CALL dll_dx7.cpp_floorLog2_FUN_10004d10 ; 10004c27
        ;   XREF to: 10004d10 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_floorLog2_FUN_10004d10(uint value)
    ADD ESP,0x4                         ; 10004c2c
    MOV ECX,dword ptr [0x102268cc]      ; 10004c2f | g_ExternalRendererBridge.green_dither_shift
    MOV dword ptr [ECX],EAX             ; 10004c35
    XOR ECX,ECX                         ; 10004c37
    MOV EAX,dword ptr [ESP + 0x70]      ; 10004c39
    TEST AL,0x1                         ; 10004c3d
    JNZ 0x10004c49                      ; 10004c3f
        ;   XREF to: 10004c49 (CONDITIONAL_JUMP)  ; LAB_10004c49
    SHR EAX,0x1                         ; 10004c41
        ;   Label: LAB_10004c41
    INC ECX                             ; 10004c44
    TEST AL,0x1                         ; 10004c45
    JZ 0x10004c41                       ; 10004c47
        ;   XREF to: 10004c41 (CONDITIONAL_JUMP)  ; LAB_10004c41
    MOV EAX,[0x102268d0]                ; 10004c49 | g_ExternalRendererBridge.blue_bit_position
        ;   Label: LAB_10004c49
    SUB EDX,EDX                         ; 10004c4e
    MOV dword ptr [EAX],ECX             ; 10004c50
    MOV EAX,0xff                        ; 10004c52
    MOV ESI,dword ptr [ESP + 0x70]      ; 10004c57
    SHR ESI,CL                          ; 10004c5b
    MOV ECX,dword ptr [0x102268d4]      ; 10004c5d | g_ExternalRendererBridge.blue_scale_factor
    DIV ESI                             ; 10004c63
    MOV dword ptr [ECX],EAX             ; 10004c65
    MOV ECX,dword ptr [0x102268d4]      ; 10004c67 | g_ExternalRendererBridge.blue_scale_factor
    MOV EAX,dword ptr [ECX]             ; 10004c6d
    PUSH EAX                            ; 10004c6f
    CALL dll_dx7.cpp_floorLog2_FUN_10004d10 ; 10004c70
        ;   XREF to: 10004d10 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_floorLog2_FUN_10004d10(uint value)
    ADD ESP,0x4                         ; 10004c75
    MOV ECX,dword ptr [0x102268d8]      ; 10004c78 | g_ExternalRendererBridge.blue_dither_shift
    MOV EBX,dword ptr [0x10215e40]      ; 10004c7e | g_ColorPalette
    MOV EDI,dword ptr [0x10226868]      ; 10004c84 | g_ColorTable16
    ADD EBX,0x2                         ; 10004c8a
    MOV ESI,0x100                       ; 10004c8d
    MOV dword ptr [ECX],EAX             ; 10004c92
    XOR EAX,EAX                         ; 10004c94
        ;   Label: LAB_10004c94
    MOV ECX,dword ptr [0x102268bc]      ; 10004c96 | g_ExternalRendererBridge.red_scale_factor
    MOV AL,byte ptr [EBX + -0x2]        ; 10004c9c
    SUB EDX,EDX                         ; 10004c9f
    DIV dword ptr [ECX]                 ; 10004ca1
    MOV EBP,EAX                         ; 10004ca3
    SUB EDX,EDX                         ; 10004ca5
    MOV EAX,[0x102268b8]                ; 10004ca7 | g_ExternalRendererBridge
    ADD EBX,0x3                         ; 10004cac
    ADD EDI,0x2                         ; 10004caf
    MOV CL,byte ptr [EAX]               ; 10004cb2
    XOR EAX,EAX                         ; 10004cb4
    SHL BP,CL                           ; 10004cb6
    MOV AL,byte ptr [EBX + -0x4]        ; 10004cb9
    MOV ECX,dword ptr [0x102268c8]      ; 10004cbc | g_ExternalRendererBridge.green_scale_factor
    DIV dword ptr [ECX]                 ; 10004cc2
    MOV EDX,dword ptr [0x102268c4]      ; 10004cc4 | g_ExternalRendererBridge.green_bit_position
    MOV CL,byte ptr [EDX]               ; 10004cca
    SUB EDX,EDX                         ; 10004ccc
    SHL AX,CL                           ; 10004cce
    OR BP,AX                            ; 10004cd1
    MOV ECX,dword ptr [0x102268d4]      ; 10004cd4 | g_ExternalRendererBridge.blue_scale_factor
    XOR EAX,EAX                         ; 10004cda
    MOV AL,byte ptr [EBX + -0x3]        ; 10004cdc
    DIV dword ptr [ECX]                 ; 10004cdf
    MOV EDX,dword ptr [0x102268d0]      ; 10004ce1 | g_ExternalRendererBridge.blue_bit_position
    MOV CL,byte ptr [EDX]               ; 10004ce7
    SHL AX,CL                           ; 10004ce9
    OR BP,AX                            ; 10004cec
    DEC ESI                             ; 10004cef
    MOV word ptr [EDI + -0x2],BP        ; 10004cf0
    JNZ 0x10004c94                      ; 10004cf4
        ;   XREF to: 10004c94 (CONDITIONAL_JUMP)  ; LAB_10004c94
    MOV EAX,0x1                         ; 10004cf6
    POP EBP                             ; 10004cfb
    POP EDI                             ; 10004cfc
    POP ESI                             ; 10004cfd
    POP EBX                             ; 10004cfe
    ADD ESP,0x7c                        ; 10004cff
    RET                                 ; 10004d02

