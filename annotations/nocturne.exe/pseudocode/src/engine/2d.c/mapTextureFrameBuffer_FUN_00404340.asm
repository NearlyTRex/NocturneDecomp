; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_mapTextureFrameBuffer_FUN_00404340(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005b762c
;   undefined4 DAT_01c02580
;
; Called Functions:
;   engine_2d.c_mapFrameBuffer_FUN_00404120
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404340
        ;   Label: engine_2d.c_mapTextureFrameBuffer_FUN_00404340
    MOV EDX,dword ptr [0x005b762c]      ; 00404341 | DAT_005b762c
    PUSH EDX                            ; 00404347
    PUSH 0x8                            ; 00404348
    PUSH EDX                            ; 0040434a
    PUSH EDX                            ; 0040434b
    MOV ESI,dword ptr [0x01c02580]      ; 0040434c | DAT_01c02580
    PUSH ESI                            ; 00404352
    CALL engine_2d.c_mapFrameBuffer_FUN_00404120 ; 00404353
        ;   XREF to: 00404120 (UNCONDITIONAL_CALL)  ; int engine_2d.c_mapFrameBuffer_FUN_00404120(void * frame_buffer, int width, int height, int bits_per_pixel, ...)
    ADD ESP,0x14                        ; 00404358
    POP ESI                             ; 0040435b
    RET                                 ; 0040435c

