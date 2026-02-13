; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c245
;
; Referenced Globals:
;   char[241][320] g_CoronaBlurOutputBuffer
;   int INT_00c199f8
;   int g_BackdropSaveActive
;   SFogImagePlane g_CameraPlaneWorkBuffer
;   SFogImagePlane[16] g_CameraImageDecompressBuffer
;   int g_ImageProcessingState1
;   int g_ImageProcessingState2
;   int g_ImageBytesPerPixel
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160
;   crt_watcom.c__memcpy_FUN_004b1a78
;   crt_watcom.c__memset_FUN_004b19d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451130
        ;   Label: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
    MOV EBX,dword ptr [ESP + 0x8]       ; 00451131
    MOV EAX,dword ptr [EBX + 0x11e8]    ; 00451135
    MOV EDX,EAX                         ; 0045113b
    SAR EDX,0x1f                        ; 0045113d
    SHL EDX,0x8                         ; 00451140
    SBB EAX,EDX                         ; 00451143
    SAR EAX,0x8                         ; 00451145
    MOV EDX,EAX                         ; 00451148
    SAR EDX,0x1f                        ; 0045114a
    SHL EDX,0x2                         ; 0045114d
    SBB EAX,EDX                         ; 00451150
    SAR EAX,0x2                         ; 00451152
    PUSH 0x12c00                        ; 00451155
    MOV [0x00c199f8],EAX                ; 0045115a | INT_00c199f8
    XOR EDX,EDX                         ; 0045115f
    MOV ECX,0xba8c78                    ; 00451161 | g_CoronaBlurOutputBuffer
    MOV DL,byte ptr [0x00c199f8]        ; 00451166 | INT_00c199f8
    CALL crt_watcom.c__memset_FUN_004b19d0 ; 0045116c
        ;   XREF to: 004b19d0 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memset_FUN_004b19d0(void * dest, int fill_byte, uint size)
    CMP dword ptr [0x01519380],0x1      ; 00451171 | g_ImageBytesPerPixel
    JG 0x00451185                       ; 00451178
        ;   XREF to: 00451185 (CONDITIONAL_JUMP)  ; LAB_00451185
    CMP dword ptr [0x013bbe2c],0x0      ; 0045117a | g_BackdropSaveActive
    JNZ 0x004511a2                      ; 00451181
        ;   XREF to: 004511a2 (CONDITIONAL_JUMP)  ; LAB_004511a2
    POP EBX                             ; 00451183
    RET                                 ; 00451184
    PUSH EDI                            ; 00451185
        ;   Label: LAB_00451185
    PUSH ESI                            ; 00451186
    MOV ESI,dword ptr [0x0151937c]      ; 00451187 | g_ImageProcessingState2
    PUSH ESI                            ; 0045118d
    MOV EDI,dword ptr [0x01519378]      ; 0045118e | g_ImageProcessingState1
    PUSH EDI                            ; 00451194
    PUSH EBX                            ; 00451195
    CALL core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160 ; 00451196
        ;   XREF to: 00453160 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160(CDemonCamera * this_ptr, int plane_index, uint blend_alpha)
    ADD ESP,0xc                         ; 0045119b
    POP ESI                             ; 0045119e
    POP EDI                             ; 0045119f
    POP EBX                             ; 004511a0
    RET                                 ; 004511a1
    PUSH 0x12c00                        ; 004511a2
        ;   Label: LAB_004511a2
    MOV EDX,0x13ed378                   ; 004511a7 | g_CameraImageDecompressBuffer
    MOV ECX,0x13da778                   ; 004511ac | g_CameraPlaneWorkBuffer
    XOR EBX,EBX                         ; 004511b1
    CALL crt_watcom.c__memcpy_FUN_004b1a78 ; 004511b3
        ;   XREF to: 004b1a78 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_004b1a78(void * dest, void * src, uint size)
    MOV dword ptr [0x013bbe2c],EBX      ; 004511b8 | g_BackdropSaveActive
    POP EBX                             ; 004511be
    RET                                 ; 004511bf

