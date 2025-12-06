; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_setSolidColor_FUN_004033a0(int red_component, int green_component, int blue_component)
;
; Parameters:
; int              Stack[0x4]:4   red_component
; int              Stack[0x8]:4   green_component
; int              Stack[0xc]:4   blue_component
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_RedBitPosition
;   int g_GreenBitPosition
;   int g_BlueBitPosition
;   int g_UseExternalRenderer
;   int g_SolidColorMode
;   int g_SolidRedComponent
;   int g_SolidGreenComponent
;   int g_SolidBlueComponent
;
; Called Functions:
;   wincore_windll.cpp_setFogColor_FUN_005b7b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004033a0
        ;   Label: engine_2d.c_setSolidColor_FUN_004033a0
    PUSH ESI                            ; 004033a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004033a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004033a6
    MOV EDX,dword ptr [ESP + 0x14]      ; 004033aa
    MOV dword ptr [0x02d052b0],EBX      ; 004033ae | int g_SolidGreenComponent
    MOV dword ptr [0x02d052b4],EDX      ; 004033b4 | int g_SolidBlueComponent
    MOV ESI,EBX                         ; 004033ba
    MOV ECX,EAX                         ; 004033bc
    SHL ESI,0x8                         ; 004033be
    SHL ECX,0x10                        ; 004033c1
    MOV [0x02d052ac],EAX                ; 004033c4 | int g_SolidRedComponent
    OR ECX,ESI                          ; 004033c9
    MOV ESI,dword ptr [0x0067939c]      ; 004033cb | int g_BitsPerPixel
    OR ECX,EDX                          ; 004033d1
    CMP ESI,0x10                        ; 004033d3
    JZ 0x00403403                       ; 004033d6 | LAB_00403403
        ;   XREF to: 00403403 (CONDITIONAL_JUMP)
    CMP ESI,0x20                        ; 004033d8
    JNZ 0x00403403                      ; 004033db | LAB_00403403
        ;   XREF to: 00403403 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004033dd
    MOV CL,byte ptr [0x02d01f24]        ; 004033de | int g_RedBitPosition
    MOV ESI,EAX                         ; 004033e4
    MOV EDI,EBX                         ; 004033e6
    SHL ESI,CL                          ; 004033e8
    MOV CL,byte ptr [0x02d01f30]        ; 004033ea | int g_GreenBitPosition
    SHL EDI,CL                          ; 004033f0
    MOV CL,byte ptr [0x02d01f3c]        ; 004033f2 | int g_BlueBitPosition
    OR ESI,EDI                          ; 004033f8
    MOV EDI,EDX                         ; 004033fa
    SHL EDI,CL                          ; 004033fc
    MOV ECX,EDI                         ; 004033fe
    OR ECX,ESI                          ; 00403400
    POP EDI                             ; 00403402
    MOV dword ptr [0x02d052a8],ECX      ; 00403403 | int g_SolidColorMode
        ;   Label: LAB_00403403
    CMP dword ptr [0x02d03e94],0x0      ; 00403409 | int g_UseExternalRenderer
    JNZ 0x00403415                      ; 00403410 | LAB_00403415
        ;   XREF to: 00403415 (CONDITIONAL_JUMP)
    POP ESI                             ; 00403412
    POP EBX                             ; 00403413
    RET                                 ; 00403414
    PUSH EDX                            ; 00403415
        ;   Label: LAB_00403415
    PUSH EBX                            ; 00403416
    PUSH EAX                            ; 00403417
    CALL wincore_windll.cpp_setFogColor_FUN_005b7b80 ; 00403418 | int wincore_windll.cpp_setFogColor_FUN_005b7b80(int red, int green, int blue)
        ;   XREF to: 005b7b80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040341d
    POP ESI                             ; 00403420
    POP EBX                             ; 00403421
    RET                                 ; 00403422

