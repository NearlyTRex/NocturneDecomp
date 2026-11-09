; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0270(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004edea0 at 004edf5c
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004ef470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0270
        ;   Label: engine_mini3d.cpp_FUN_004f0270
    PUSH ESI                            ; 004f0271
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f0272
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f0276
    FLD float ptr [ESI]                 ; 004f027a
    LEA EAX,[EBX + 0xc]                 ; 004f027c
    FSTP float ptr [EBX]                ; 004f027f
    FLD float ptr [ESI + 0x4]           ; 004f0281
    PUSH EAX                            ; 004f0284
    FSTP float ptr [EBX + 0x4]          ; 004f0285
    FLD float ptr [ESI + 0x8]           ; 004f0288
    PUSH ESI                            ; 004f028b
    FSTP float ptr [EBX + 0x8]          ; 004f028c
    CALL engine_mini3d.cpp_FUN_004ef470 ; 004f028f
        ;   XREF to: 004ef470 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ef470()
    FLD float ptr [ESI + 0x18]          ; 004f0294
    ADD ESP,0x8                         ; 004f0297
    FSTP float ptr [EBX + 0x1c]         ; 004f029a
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004f029d
    MOV dword ptr [EBX + 0x20],EAX      ; 004f02a0
    POP ESI                             ; 004f02a3
    POP EBX                             ; 004f02a4
    RET                                 ; 004f02a5

