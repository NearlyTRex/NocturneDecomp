; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00582b60(HWND param_1)
;
;
; XREF[1]:
;   FUN_00582eb0 at 00582f2b
;
; Referenced Globals:
;   void* PTR_mciSendStringA_005b344c = 001b3900
;   void* PTR_InvalidateRect_005b34c8 = 001b3b1c
;   void* PTR_UpdateWindow_005b3510 = 001b3c38
;   TerminatedCString s_close_mov_005d800c
;   undefined4 DAT_02d22fac
;   undefined4 DAT_02d22fb0
;
; Called Functions:
;   InvalidateRect
;   mciSendStringA
;   UpdateWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d22fb0],0x0      ; 00582b60 | DAT_02d22fb0
        ;   Label: FUN_00582b60
    JNZ 0x00582b6a                      ; 00582b67
        ;   XREF to: 00582b6a (CONDITIONAL_JUMP)  ; LAB_00582b6a
    RET                                 ; 00582b69
    PUSH ESI                            ; 00582b6a
        ;   Label: LAB_00582b6a
    PUSH 0x0                            ; 00582b6b
    PUSH 0x0                            ; 00582b6d
    PUSH 0x0                            ; 00582b6f
    PUSH 0x5d800c                       ; 00582b71 | = "close mov"
    CALL dword ptr CS:[0x5b344c]        ; 00582b76 | PTR_mciSendStringA_005b344c
    PUSH 0x1                            ; 00582b7d
    XOR ECX,ECX                         ; 00582b7f
    PUSH ECX                            ; 00582b81
    MOV ESI,dword ptr [ESP + 0x10]      ; 00582b82
    PUSH ESI                            ; 00582b86
    MOV dword ptr [0x02d22fac],ECX      ; 00582b87 | DAT_02d22fac
    MOV dword ptr [0x02d22fb0],ECX      ; 00582b8d | DAT_02d22fb0
    CALL dword ptr CS:[0x5b34c8]        ; 00582b93 | PTR_InvalidateRect_005b34c8
    PUSH ESI                            ; 00582b9a
    CALL dword ptr CS:[0x5b3510]        ; 00582b9b | PTR_UpdateWindow_005b3510
    POP ESI                             ; 00582ba2
    RET                                 ; 00582ba3

