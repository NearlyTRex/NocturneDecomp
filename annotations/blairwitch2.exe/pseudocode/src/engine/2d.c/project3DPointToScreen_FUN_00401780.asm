; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401780(int x_3d,int y_3d,int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   x_3d
; int              Stack[0x8]:4   y_3d
; int              Stack[0xc]:4   z_depth
;
; XREF[1]:
;   engine_2d.c_draw320x200SizeDot_FUN_00402ae0 at 00402b29
;
; Referenced Globals:
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401780
        ;   Label: engine_2d.c_project3DPointToScreen_FUN_00401780
    PUSH ESI                            ; 00401781
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401782
    MOV ECX,dword ptr [ESP + 0x14]      ; 00401786
    MOV EDX,dword ptr [0x01c35e38]      ; 0040178a | DAT_01c35e38
    MOV EBX,ECX                         ; 00401790
    IMUL EDX                            ; 00401792
    IDIV EBX                            ; 00401794
    MOV ESI,dword ptr [0x01c35e40]      ; 00401796 | DAT_01c35e40
    MOV EDX,dword ptr [0x01c35e3c]      ; 0040179c | DAT_01c35e3c
    MOV EBX,ECX                         ; 004017a2
    ADD ESI,EAX                         ; 004017a4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004017a6
    IMUL EDX                            ; 004017aa
    IDIV EBX                            ; 004017ac
    ADD EAX,dword ptr [0x01c35e44]      ; 004017ae | DAT_01c35e44
    SAR EAX,0x10                        ; 004017b4
    PUSH EAX                            ; 004017b7
    SAR ESI,0x10                        ; 004017b8
    PUSH ESI                            ; 004017bb
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004017bc
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004017c1
    POP ESI                             ; 004017c4
    POP EBX                             ; 004017c5
    RET                                 ; 004017c6

