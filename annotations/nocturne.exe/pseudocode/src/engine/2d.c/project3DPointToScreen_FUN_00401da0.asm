; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int x_3d,int y_3d,int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   x_3d
; int              Stack[0x8]:4   y_3d
; int              Stack[0xc]:4   z_depth
;
; XREF[2]:
;   engine_2d.c_FUN_00403780 at 004037c9
;   engine_2d.c_project3DPointClipped_FUN_00401df0 at 00401e1a
;
; Referenced Globals:
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401da0
        ;   Label: engine_2d.c_project3DPointToScreen_FUN_00401da0
    PUSH ESI                            ; 00401da1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401da2
    MOV ECX,dword ptr [ESP + 0x14]      ; 00401da6
    MOV EDX,dword ptr [0x01c00c48]      ; 00401daa | DAT_01c00c48
    MOV EBX,ECX                         ; 00401db0
    IMUL EDX                            ; 00401db2
    IDIV EBX                            ; 00401db4
    MOV ESI,dword ptr [0x01c00c50]      ; 00401db6 | DAT_01c00c50
    MOV EDX,dword ptr [0x01c00c4c]      ; 00401dbc | DAT_01c00c4c
    MOV EBX,ECX                         ; 00401dc2
    ADD ESI,EAX                         ; 00401dc4
    MOV EAX,dword ptr [ESP + 0x10]      ; 00401dc6
    IMUL EDX                            ; 00401dca
    IDIV EBX                            ; 00401dcc
    ADD EAX,dword ptr [0x01c00c54]      ; 00401dce | DAT_01c00c54
    SAR EAX,0x10                        ; 00401dd4
    PUSH EAX                            ; 00401dd7
    SAR ESI,0x10                        ; 00401dd8
    PUSH ESI                            ; 00401ddb
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00401ddc
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 00401de1
    POP ESI                             ; 00401de4
    POP EBX                             ; 00401de5
    RET                                 ; 00401de6

