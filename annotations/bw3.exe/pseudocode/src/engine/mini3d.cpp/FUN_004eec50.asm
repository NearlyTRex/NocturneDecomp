; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004eec50(float *param_1,float *param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f2490 at 004f259c
;
; Referenced Globals:
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76ca8
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d7f53c
;   undefined4 DAT_01d7f540
;   undefined4 DAT_01d7f54c
;   undefined4 DAT_01d7f550
;   undefined4 DAT_01d7f55c
;   undefined4 DAT_01d7f560
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004edcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eec50
        ;   Label: engine_mini3d.cpp_FUN_004eec50
    PUSH ESI                            ; 004eec51
    SUB ESP,0xc                         ; 004eec52
    MOV ESI,dword ptr [ESP + 0x18]      ; 004eec55
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004eec59
    CALL engine_mini3d.cpp_FUN_004edcc0 ; 004eec5d
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcc0()
    MOV EAX,[0x01d76cfc]                ; 004eec62 | DAT_01d76cfc
    FLD float ptr [ESI + 0x4]           ; 004eec67
    FSUB float ptr [EAX + 0x28]         ; 004eec6a
    FLD ST0                             ; 004eec6d
    FMUL float ptr [0x01d7f54c]         ; 004eec6f | DAT_01d7f54c
    FLD float ptr [ESI]                 ; 004eec75
    FSUB float ptr [EAX + 0x24]         ; 004eec77
    FLD ST0                             ; 004eec7a
    FMUL float ptr [0x01d7f540]         ; 004eec7c | DAT_01d7f540
    FXCH                                ; 004eec82
    FMUL float ptr [0x01d7f53c]         ; 004eec84 | DAT_01d7f53c
    FXCH ST3                            ; 004eec8a
    FMUL float ptr [0x01d7f550]         ; 004eec8c | DAT_01d7f550
    FLD float ptr [ESI + 0x8]           ; 004eec92
    FXCH ST4                            ; 004eec95
    FADDP ST3,ST0                       ; 004eec97
    FXCH ST3                            ; 004eec99
    FSUB float ptr [EAX + 0x2c]         ; 004eec9b
    FLD ST0                             ; 004eec9e
    FMUL float ptr [0x01d7f55c]         ; 004eeca0 | DAT_01d7f55c
    FXCH ST4                            ; 004eeca6
    FADDP ST2,ST0                       ; 004eeca8
    MOV dword ptr [EBX + 0x8],0x3f800000 ; 004eecaa
    FMUL float ptr [0x01d7f560]         ; 004eecb1 | DAT_01d7f560
    MOV dword ptr [EBX + 0x10],0x0      ; 004eecb7
    FXCH ST3                            ; 004eecbe
    FADDP ST2,ST0                       ; 004eecc0
    FADDP ST2,ST0                       ; 004eecc2
    FST float ptr [EBX]                 ; 004eecc4
    FLD float ptr [0x01d76ca8]          ; 004eecc6 | DAT_01d76ca8
    FXCH                                ; 004eeccc
    FMUL ST1                            ; 004eecce
    FXCH ST2                            ; 004eecd0
    FST float ptr [EBX + 0x4]           ; 004eecd2
    FMULP                               ; 004eecd5
    MOV dword ptr [EBX + 0xc],0x3f800000 ; 004eecd7
    FLD float ptr [0x01d76c68]          ; 004eecde | DAT_01d76c68
    FLD float ptr [0x01d76c64]          ; 004eece4 | DAT_01d76c64
    FADDP ST3,ST0                       ; 004eecea
    FADDP                               ; 004eecec
    FXCH                                ; 004eecee
    FSTP float ptr [EBX + 0x14]         ; 004eecf0
    FSTP float ptr [EBX + 0x18]         ; 004eecf3
    ADD ESP,0xc                         ; 004eecf6
    POP ESI                             ; 004eecf9
    POP EBX                             ; 004eecfa
    RET                                 ; 004eecfb

