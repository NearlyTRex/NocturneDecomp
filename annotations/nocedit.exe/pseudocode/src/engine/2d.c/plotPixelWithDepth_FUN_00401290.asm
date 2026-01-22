; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_plotPixelWithDepth_FUN_00401290(int x_coord, int y_coord, uint depth_value)
;
; Parameters:
; int              Stack[0x4]:4   x_coord
; int              Stack[0x8]:4   y_coord
; uint             Stack[0xc]:4   depth_value
;
; XREF[3]:
;   core_course.cpp_FUN_004436d0 at 0044374c
;   core_course.cpp_FUN_00443760 at 00443ba7
;   engine_2d.c_drawLine3D_FUN_00401320 at 004013aa
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   ushort[256] g_ColorTable16
;   uint[256] g_ColorTable32
;   int g_ActiveRenderColor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401290
        ;   Label: engine_2d.c_plotPixelWithDepth_FUN_00401290
    PUSH EDI                            ; 00401291
    PUSH EBP                            ; 00401292
    MOV EBX,dword ptr [ESP + 0x10]      ; 00401293
    MOV EAX,dword ptr [ESP + 0x14]      ; 00401297
    SHL EAX,0x2                         ; 0040129b
    LEA EDX,[EBX*0x4 + 0x0]             ; 0040129e
    MOV ECX,dword ptr [EAX + 0x2cf7d5c] ; 004012a5 | g_ZBufferScanlineArray
    ADD ECX,EDX                         ; 004012ab
    MOV EDI,dword ptr [ESP + 0x18]      ; 004012ad
    CMP EDI,dword ptr [ECX]             ; 004012b1
    JBE 0x004012e9                      ; 004012b3
        ;   XREF to: 004012e9 (CONDITIONAL_JUMP)  ; LAB_004012e9
    MOV EBP,dword ptr [0x0067939c]      ; 004012b5 | g_BitsPerPixel
    MOV dword ptr [ECX],EDI             ; 004012bb
    CMP EBP,0x8                         ; 004012bd
    JZ 0x004012ed                       ; 004012c0
        ;   XREF to: 004012ed (CONDITIONAL_JUMP)  ; LAB_004012ed
    MOV ECX,dword ptr [0x02d02570]      ; 004012c2 | g_ActiveRenderColor
    AND ECX,0xff                        ; 004012c8
    CMP EBP,0x10                        ; 004012ce
    JNZ 0x00401301                      ; 004012d1
        ;   XREF to: 00401301 (CONDITIONAL_JUMP)  ; LAB_00401301
    LEA EDX,[EBX + EBX*0x1]             ; 004012d3
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 004012d6 | g_ScreenBufferArray
    ADD EDX,EAX                         ; 004012dc
    MOV AX,word ptr [ECX*0x2 + 0x2d01020] ; 004012de | g_ColorTable16
    MOV word ptr [EDX],AX               ; 004012e6
    POP EBP                             ; 004012e9
        ;   Label: LAB_004012e9
    POP EDI                             ; 004012ea
    POP EBX                             ; 004012eb
    RET                                 ; 004012ec
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 004012ed | g_ScreenBufferArray
        ;   Label: LAB_004012ed
    LEA EDX,[EAX + EBX*0x1]             ; 004012f3
    MOV AL,[0x02d02570]                 ; 004012f6 | g_ActiveRenderColor
    MOV byte ptr [EDX],AL               ; 004012fb
    POP EBP                             ; 004012fd
    POP EDI                             ; 004012fe
    POP EBX                             ; 004012ff
    RET                                 ; 00401300
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00401301 | g_ScreenBufferArray
        ;   Label: LAB_00401301
    ADD EDX,EAX                         ; 00401307
    MOV EAX,dword ptr [ECX*0x4 + 0x2d01220] ; 00401309 | g_ColorTable32
    MOV dword ptr [EDX],EAX             ; 00401310
    POP EBP                             ; 00401312
    POP EDI                             ; 00401313
    POP EBX                             ; 00401314
    RET                                 ; 00401315

