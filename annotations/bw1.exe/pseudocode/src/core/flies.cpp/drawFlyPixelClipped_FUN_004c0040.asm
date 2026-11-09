; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004c0040(int screen_x,int screen_y,int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   screen_x
; int              Stack[0x8]:4   screen_y
; int              Stack[0xc]:4   z_depth
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;
; Called Functions:
;   core_flies.cpp_drawFlyPixel_FUN_004bffb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c0040
        ;   Label: core_flies.cpp_drawFlyPixelClipped_FUN_004c0040
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c0044
    TEST EDX,EDX                        ; 004c0048
    JL 0x004c0060                       ; 004c004a
        ;   XREF to: 004c0060 (CONDITIONAL_JUMP)  ; LAB_004c0060
    CMP EDX,dword ptr [0x0061b498]      ; 004c004c | DAT_0061b498
    JGE 0x004c0060                      ; 004c0052
        ;   XREF to: 004c0060 (CONDITIONAL_JUMP)  ; LAB_004c0060
    TEST EAX,EAX                        ; 004c0054
    JL 0x004c0060                       ; 004c0056
        ;   XREF to: 004c0060 (CONDITIONAL_JUMP)  ; LAB_004c0060
    CMP EAX,dword ptr [0x0061b49c]      ; 004c0058 | DAT_0061b49c
    JL 0x004c0061                       ; 004c005e
        ;   XREF to: 004c0061 (CONDITIONAL_JUMP)  ; LAB_004c0061
    RET                                 ; 004c0060
        ;   Label: LAB_004c0060
    PUSH ESI                            ; 004c0061
        ;   Label: LAB_004c0061
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c0062
    PUSH ESI                            ; 004c0066
    PUSH EAX                            ; 004c0067
    PUSH EDX                            ; 004c0068
    CALL core_flies.cpp_drawFlyPixel_FUN_004bffb0 ; 004c0069
        ;   XREF to: 004bffb0 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_drawFlyPixel_FUN_004bffb0(int screen_x, int screen_y, int z_depth)
    ADD ESP,0xc                         ; 004c006e
    POP ESI                             ; 004c0071
    RET                                 ; 004c0072

