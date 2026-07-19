; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_00403650(void)
;
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   uchar* g_CurrentTextureData
;
; Called Functions:
;   engine_2d.c_mapFrameBuffer_FUN_00403430
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00403650
        ;   Label: engine_2d.c_mapTextureFrameBuffer_FUN_00403650
    MOV EDX,dword ptr [0x006793a4]      ; 00403651 | g_CurrentTextureDimension
    PUSH EDX                            ; 00403657
    PUSH 0x8                            ; 00403658
    PUSH EDX                            ; 0040365a
    PUSH EDX                            ; 0040365b
    MOV ESI,dword ptr [0x02d03e80]      ; 0040365c | g_CurrentTextureData
    PUSH ESI                            ; 00403662
    CALL engine_2d.c_mapFrameBuffer_FUN_00403430 ; 00403663
        ;   XREF to: 00403430 (UNCONDITIONAL_CALL)  ; int engine_2d.c_mapFrameBuffer_FUN_00403430(void * frame_buffer, int width, int height, int bits_per_pixel, ...)
    ADD ESP,0x14                        ; 00403668
    POP ESI                             ; 0040366b
    RET                                 ; 0040366c

