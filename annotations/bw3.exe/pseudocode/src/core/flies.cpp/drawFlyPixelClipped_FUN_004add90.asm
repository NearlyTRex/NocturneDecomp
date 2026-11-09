; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004add90(int screen_x,int screen_y,int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   screen_x
; int              Stack[0x8]:4   screen_y
; int              Stack[0xc]:4   z_depth
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;
; Called Functions:
;   core_flies.cpp_drawFlyPixel_FUN_004add00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004add90
        ;   Label: core_flies.cpp_drawFlyPixelClipped_FUN_004add90
    MOV EAX,dword ptr [ESP + 0x8]       ; 004add94
    TEST EDX,EDX                        ; 004add98
    JL 0x004addb0                       ; 004add9a
        ;   XREF to: 004addb0 (CONDITIONAL_JUMP)  ; LAB_004addb0
    CMP EDX,dword ptr [0x005fba18]      ; 004add9c | DAT_005fba18
    JGE 0x004addb0                      ; 004adda2
        ;   XREF to: 004addb0 (CONDITIONAL_JUMP)  ; LAB_004addb0
    TEST EAX,EAX                        ; 004adda4
    JL 0x004addb0                       ; 004adda6
        ;   XREF to: 004addb0 (CONDITIONAL_JUMP)  ; LAB_004addb0
    CMP EAX,dword ptr [0x005fba1c]      ; 004adda8 | DAT_005fba1c
    JL 0x004addb1                       ; 004addae
        ;   XREF to: 004addb1 (CONDITIONAL_JUMP)  ; LAB_004addb1
    RET                                 ; 004addb0
        ;   Label: LAB_004addb0
    PUSH ESI                            ; 004addb1
        ;   Label: LAB_004addb1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004addb2
    PUSH ESI                            ; 004addb6
    PUSH EAX                            ; 004addb7
    PUSH EDX                            ; 004addb8
    CALL core_flies.cpp_drawFlyPixel_FUN_004add00 ; 004addb9
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_drawFlyPixel_FUN_004add00(int screen_x, int screen_y, int z_depth)
    ADD ESP,0xc                         ; 004addbe
    POP ESI                             ; 004addc1
    RET                                 ; 004addc2

