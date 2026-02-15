; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_project3DPointClipped_FUN_004017c0(int x_3d,int y_3d,int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   x_3d
; int              Stack[0x8]:4   y_3d
; int              Stack[0xc]:4   z_depth
;
; Called Functions:
;   engine_2d.c_project3DPointToScreen_FUN_00401770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004017c0
        ;   Label: engine_2d.c_project3DPointClipped_FUN_004017c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004017c1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004017c5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004017c9
    TEST EAX,EAX                        ; 004017cd
    JLE 0x004017e5                      ; 004017cf
        ;   XREF to: 004017e5 (CONDITIONAL_JUMP)  ; LAB_004017e5
    CMP EBX,EAX                         ; 004017d1
    JG 0x004017e5                       ; 004017d3
        ;   XREF to: 004017e5 (CONDITIONAL_JUMP)  ; LAB_004017e5
    MOV EDX,EAX                         ; 004017d5
    NEG EDX                             ; 004017d7
    CMP EBX,EDX                         ; 004017d9
    JL 0x004017e5                       ; 004017db
        ;   XREF to: 004017e5 (CONDITIONAL_JUMP)  ; LAB_004017e5
    CMP ECX,EAX                         ; 004017dd
    JG 0x004017e5                       ; 004017df
        ;   XREF to: 004017e5 (CONDITIONAL_JUMP)  ; LAB_004017e5
    CMP ECX,EDX                         ; 004017e1
    JGE 0x004017e7                      ; 004017e3
        ;   XREF to: 004017e7 (CONDITIONAL_JUMP)  ; LAB_004017e7
    POP EBX                             ; 004017e5
        ;   Label: LAB_004017e5
    RET                                 ; 004017e6
    PUSH EAX                            ; 004017e7
        ;   Label: LAB_004017e7
    PUSH ECX                            ; 004017e8
    PUSH EBX                            ; 004017e9
    CALL engine_2d.c_project3DPointToScreen_FUN_00401770 ; 004017ea
        ;   XREF to: 00401770 (UNCONDITIONAL_CALL)  ; void engine_2d.c_project3DPointToScreen_FUN_00401770(int x_3d, int y_3d, int z_depth)
    ADD ESP,0xc                         ; 004017ef
    POP EBX                             ; 004017f2
    RET                                 ; 004017f3

