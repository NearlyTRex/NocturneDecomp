; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_004036a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a8
;   undefined4 DAT_01c50930
;
; Called Functions:
;   engine_2d.c_FUN_00403480
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004036a0
        ;   Label: engine_2d.c_mapTextureFrameBuffer_FUN_004036a0
    MOV EDX,dword ptr [0x0061b4a8]      ; 004036a1 | DAT_0061b4a8
    PUSH EDX                            ; 004036a7
    PUSH 0x8                            ; 004036a8
    PUSH EDX                            ; 004036aa
    PUSH EDX                            ; 004036ab
    MOV ESI,dword ptr [0x01c50930]      ; 004036ac | DAT_01c50930
    PUSH ESI                            ; 004036b2
    CALL engine_2d.c_FUN_00403480       ; 004036b3
        ;   XREF to: 00403480 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00403480()
    ADD ESP,0x14                        ; 004036b8
    POP ESI                             ; 004036bb
    RET                                 ; 004036bc

