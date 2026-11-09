; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004a7070(int screen_x,int screen_y,int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   screen_x
; int              Stack[0x8]:4   screen_y
; int              Stack[0xc]:4   z_depth
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; Called Functions:
;   core_flies.cpp_drawFlyPixel_FUN_004a6fe0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a7070
        ;   Label: core_flies.cpp_drawFlyPixelClipped_FUN_004a7070
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a7074
    TEST EDX,EDX                        ; 004a7078
    JL 0x004a7090                       ; 004a707a
        ;   XREF to: 004a7090 (CONDITIONAL_JUMP)  ; LAB_004a7090
    CMP EDX,dword ptr [0x006141b8]      ; 004a707c | DAT_006141b8
    JGE 0x004a7090                      ; 004a7082
        ;   XREF to: 004a7090 (CONDITIONAL_JUMP)  ; LAB_004a7090
    TEST EAX,EAX                        ; 004a7084
    JL 0x004a7090                       ; 004a7086
        ;   XREF to: 004a7090 (CONDITIONAL_JUMP)  ; LAB_004a7090
    CMP EAX,dword ptr [0x006141bc]      ; 004a7088 | DAT_006141bc
    JL 0x004a7091                       ; 004a708e
        ;   XREF to: 004a7091 (CONDITIONAL_JUMP)  ; LAB_004a7091
    RET                                 ; 004a7090
        ;   Label: LAB_004a7090
    PUSH ESI                            ; 004a7091
        ;   Label: LAB_004a7091
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a7092
    PUSH ESI                            ; 004a7096
    PUSH EAX                            ; 004a7097
    PUSH EDX                            ; 004a7098
    CALL core_flies.cpp_drawFlyPixel_FUN_004a6fe0 ; 004a7099
        ;   XREF to: 004a6fe0 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_drawFlyPixel_FUN_004a6fe0(int screen_x, int screen_y, int z_depth)
    ADD ESP,0xc                         ; 004a709e
    POP ESI                             ; 004a70a1
    RET                                 ; 004a70a2

