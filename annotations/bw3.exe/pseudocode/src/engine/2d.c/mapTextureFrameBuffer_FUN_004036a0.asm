; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_004036a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba28
;   undefined4 DAT_01c6ced0
;
; Called Functions:
;   engine_2d.c_FUN_00403480
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004036a0
        ;   Label: engine_2d.c_mapTextureFrameBuffer_FUN_004036a0
    MOV EDX,dword ptr [0x005fba28]      ; 004036a1 | DAT_005fba28
    PUSH EDX                            ; 004036a7
    PUSH 0x8                            ; 004036a8
    PUSH EDX                            ; 004036aa
    PUSH EDX                            ; 004036ab
    MOV ESI,dword ptr [0x01c6ced0]      ; 004036ac | DAT_01c6ced0
    PUSH ESI                            ; 004036b2
    CALL engine_2d.c_FUN_00403480       ; 004036b3
        ;   XREF to: 00403480 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00403480()
    ADD ESP,0x14                        ; 004036b8
    POP ESI                             ; 004036bb
    RET                                 ; 004036bc

