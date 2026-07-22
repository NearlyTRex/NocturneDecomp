; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d96c
;   engine_2d.c_FUN_00402c60 at 00402c70
;   engine_2d.c_FUN_00402c80 at 00402cd1
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402a60
;   engine_2d.c_getStringWidth_FUN_00401ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402c20
        ;   Label: engine_2d.c_drawTextCenteredAtColor_FUN_00402c20
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402c21
    PUSH EDX                            ; 00402c25
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402c26
    PUSH ECX                            ; 00402c2a
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 00402c2b
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_getStringWidth_FUN_00401ed0()
    LEA EDX,[EAX + -0x1]                ; 00402c30
    MOV EAX,EDX                         ; 00402c33
    SAR EDX,0x1f                        ; 00402c35
    SUB EAX,EDX                         ; 00402c38
    SAR EAX,0x1                         ; 00402c3a
    ADD ESP,0x4                         ; 00402c3c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402c3f
    SUB EDX,EAX                         ; 00402c43
    PUSH EDX                            ; 00402c45
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402c46
    PUSH EBX                            ; 00402c4a
    CALL engine_2d.c_drawTextColor_FUN_00402a60 ; 00402c4b
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawTextColor_FUN_00402a60()
    ADD ESP,0xc                         ; 00402c50
    POP EBX                             ; 00402c53
    RET                                 ; 00402c54

