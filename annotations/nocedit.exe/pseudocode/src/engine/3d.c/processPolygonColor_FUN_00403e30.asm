; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[3]:
;   core_course.cpp_FUN_00443760 at 00443aba
;   shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920 at 0045d96a
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d163
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentPolygonColor
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00403e30
        ;   Label: engine_3d.c_processPolygonColor_FUN_00403e30
    MOV EDX,dword ptr [EAX + 0x4]       ; 00403e34
    MOV dword ptr [0x00772a5c],EDX      ; 00403e37 | g_CurrentPolygonColor
    MOV DL,byte ptr [EAX + 0x7]         ; 00403e3d
    TEST DL,0x80                        ; 00403e40
    JZ 0x00403e9e                       ; 00403e43
        ;   XREF to: 00403e9e (CONDITIONAL_JUMP)  ; LAB_00403e9e
    TEST DL,0x40                        ; 00403e45
    JNZ 0x00403e9e                      ; 00403e48
        ;   XREF to: 00403e9e (CONDITIONAL_JUMP)  ; LAB_00403e9e
    PUSH ESI                            ; 00403e4a
    PUSH EBX                            ; 00403e4b
    MOV ECX,dword ptr [0x0067939c]      ; 00403e4c | g_BitsPerPixel
    MOV EDX,dword ptr [EAX + 0x4]       ; 00403e52
    MOV EBX,dword ptr [EAX + 0x4]       ; 00403e55
    MOV ESI,dword ptr [EAX + 0x4]       ; 00403e58
    SAR EDX,0x8                         ; 00403e5b
    SAR EBX,0x10                        ; 00403e5e
    AND ESI,0xff                        ; 00403e61
    AND EDX,0xff                        ; 00403e67
    AND EBX,0xff                        ; 00403e6d
    CMP ECX,0x20                        ; 00403e73
    JNZ 0x00403ea2                      ; 00403e76
        ;   XREF to: 00403ea2 (CONDITIONAL_JUMP)  ; LAB_00403ea2
    MOV CL,byte ptr [0x02d01f24]        ; 00403e78 | g_RedBitPosition
    SHL ESI,CL                          ; 00403e7e
    MOV CL,byte ptr [0x02d01f30]        ; 00403e80 | g_GreenBitPosition
    SHL EDX,CL                          ; 00403e86
    MOV CL,byte ptr [0x02d01f3c]        ; 00403e88 | g_BlueBitPosition
    SHL EBX,CL                          ; 00403e8e
    OR EDX,ESI                          ; 00403e90
    MOV ECX,EBX                         ; 00403e92
    OR ECX,EDX                          ; 00403e94
    MOV dword ptr [0x00772a5c],ECX      ; 00403e96 | g_CurrentPolygonColor
    POP EBX                             ; 00403e9c
    POP ESI                             ; 00403e9d
    ADD EAX,0x8                         ; 00403e9e
        ;   Label: LAB_00403e9e
    RET                                 ; 00403ea1
    MOV ECX,ESI                         ; 00403ea2
        ;   Label: LAB_00403ea2
    SHL EDX,0x8                         ; 00403ea4
    SHL ECX,0x10                        ; 00403ea7
    OR ECX,EDX                          ; 00403eaa
    OR ECX,EBX                          ; 00403eac
    MOV dword ptr [0x00772a5c],ECX      ; 00403eae | g_CurrentPolygonColor
    POP EBX                             ; 00403eb4
    POP ESI                             ; 00403eb5
    ADD EAX,0x8                         ; 00403eb6
    RET                                 ; 00403eb9

