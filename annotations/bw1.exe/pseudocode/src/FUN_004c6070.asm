; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c6070(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00600d70
;   undefined4 DAT_00600d74
;   undefined4 DAT_00600d78
;   undefined4 DAT_00600d7c
;   undefined4 DAT_00600d80
;   undefined4 DAT_00600d84
;   undefined4 DAT_01cc90c8
;   undefined4 DAT_01cc90cc
;   undefined4 DAT_01cc90d0
;   undefined4 DAT_01cc90d4
;   undefined4 DAT_01cc90d8
;   undefined4 DAT_01cc90dc
;   undefined4 DAT_01cc90e0
;   undefined4 DAT_01cc90e4
;   undefined4 DAT_01cc90e8
;   ... and 6 more
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6070
        ;   Label: FUN_004c6070
    PUSH ESI                            ; 004c6071
    PUSH EDI                            ; 004c6072
    PUSH EBP                            ; 004c6073
    FLD float ptr [0x00600d70]          ; 004c6074 | DAT_00600d70
    FMUL float ptr [0x00600d74]         ; 004c607a | DAT_00600d74
    FLD float ptr [0x00600d78]          ; 004c6080 | DAT_00600d78
    FMUL float ptr [0x00600d7c]         ; 004c6086 | DAT_00600d7c
    FLD float ptr [0x00600d80]          ; 004c608c | DAT_00600d80
    FMUL float ptr [0x00600d84]         ; 004c6092 | DAT_00600d84
    MOV EDX,0x3f028f5c                  ; 004c6098
    MOV ECX,0xbca3d70a                  ; 004c609d
    MOV EBX,0x3db851ec                  ; 004c60a2
    MOV ESI,0x3e4ccccd                  ; 004c60a7
    MOV EDI,0xbea147ae                  ; 004c60ac
    PUSH 0x1d06ad8                      ; 004c60b1
    MOV EAX,0x3fc90fdb                  ; 004c60b6
    XOR EBP,EBP                         ; 004c60bb
    PUSH 0x3                            ; 004c60bd
    MOV dword ptr [0x01cc90d4],EDX      ; 004c60bf | DAT_01cc90d4
    MOV dword ptr [0x01cc90d8],ECX      ; 004c60c5 | DAT_01cc90d8
    MOV dword ptr [0x01cc90dc],EBX      ; 004c60cb | DAT_01cc90dc
    MOV dword ptr [0x01cc90e0],ESI      ; 004c60d1 | DAT_01cc90e0
    MOV dword ptr [0x01cc90e4],EDI      ; 004c60d7 | DAT_01cc90e4
    MOV dword ptr [0x01cc90e8],EBP      ; 004c60dd | DAT_01cc90e8
    MOV [0x01cc90ec],EAX                ; 004c60e3 | DAT_01cc90ec
    MOV dword ptr [0x01cc90f0],EBP      ; 004c60e8 | DAT_01cc90f0
    MOV dword ptr [0x01cc9100],EBP      ; 004c60ee | DAT_01cc9100
    FXCH ST2                            ; 004c60f4
    FSTP float ptr [0x01cc90c8]         ; 004c60f6 | DAT_01cc90c8
    FSTP float ptr [0x01cc90cc]         ; 004c60fc | DAT_01cc90cc
    PUSH 0x61d884                       ; 004c6102
    FSTP float ptr [0x01cc90d0]         ; 004c6107 | DAT_01cc90d0
    PUSH 0x4c6240                       ; 004c610d
    MOV ECX,0x3eb33333                  ; 004c6112
    MOV EBX,0x40133333                  ; 004c6117
    PUSH 0x5e0df4                       ; 004c611c
    MOV ESI,0x408ccccd                  ; 004c6121
    MOV dword ptr [0x01cc90f4],ECX      ; 004c6126 | DAT_01cc90f4
    PUSH 0x1cc9158                      ; 004c612c
    MOV dword ptr [0x01cc90f8],EBX      ; 004c6131 | DAT_01cc90f8
    MOV dword ptr [0x01cc90fc],ESI      ; 004c6137 | DAT_01cc90fc
    CALL FUN_0040c160                   ; 004c613d
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004c6142
    POP EBP                             ; 004c6145
    POP EDI                             ; 004c6146
    POP ESI                             ; 004c6147
    POP EBX                             ; 004c6148
    RET                                 ; 004c6149

