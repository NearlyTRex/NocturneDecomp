; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_004036a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c8
;   undefined4 DAT_01c37770
;
; Called Functions:
;   engine_2d.c_mapFrameBuffer_FUN_00403480
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004036a0
        ;   Label: engine_2d.c_mapTextureFrameBuffer_FUN_004036a0
    MOV EDX,dword ptr [0x006141c8]      ; 004036a1 | DAT_006141c8
    PUSH EDX                            ; 004036a7
    PUSH 0x8                            ; 004036a8
    PUSH EDX                            ; 004036aa
    PUSH EDX                            ; 004036ab
    MOV ESI,dword ptr [0x01c37770]      ; 004036ac | DAT_01c37770
    PUSH ESI                            ; 004036b2
    CALL engine_2d.c_mapFrameBuffer_FUN_00403480 ; 004036b3
        ;   XREF to: 00403480 (UNCONDITIONAL_CALL)  ; int engine_2d.c_mapFrameBuffer_FUN_00403480(void * frame_buffer, int width, int height, int bits_per_pixel, ...)
    ADD ESP,0x14                        ; 004036b8
    POP ESI                             ; 004036bb
    RET                                 ; 004036bc

