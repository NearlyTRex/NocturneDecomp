; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint engine_font.cpp_packPixelScaled_FUN_004d1110(int red, int green, int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_FUN_00577af0 at 00578079
;
; Referenced Globals:
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   int g_BlueBitPosition
;   int g_BlueScaleFactor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1110
        ;   Label: engine_font.cpp_packPixelScaled_FUN_004d1110
    PUSH ESI                            ; 004d1111
    PUSH EDI                            ; 004d1112
    MOV EDI,dword ptr [ESP + 0x10]      ; 004d1113
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d1117
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d111b
    MOV ECX,dword ptr [0x02d01f28]      ; 004d111f | g_RedScaleFactor
    MOV EAX,EDI                         ; 004d1125
    XOR EDX,EDX                         ; 004d1127
    DIV ECX                             ; 004d1129
    MOV EDI,EAX                         ; 004d112b
    XOR EDX,EDX                         ; 004d112d
    MOV EAX,EBX                         ; 004d112f
    MOV EBX,dword ptr [0x02d01f34]      ; 004d1131 | g_GreenScaleFactor
    DIV EBX                             ; 004d1137
    MOV EBX,EAX                         ; 004d1139
    XOR EDX,EDX                         ; 004d113b
    MOV EAX,ESI                         ; 004d113d
    DIV dword ptr [0x02d01f40]          ; 004d113f | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 004d1145 | g_RedBitPosition
    SHL EDI,CL                          ; 004d114b
    MOV CL,byte ptr [0x02d01f30]        ; 004d114d | g_GreenBitPosition
    SHL EBX,CL                          ; 004d1153
    MOV CL,byte ptr [0x02d01f3c]        ; 004d1155 | g_BlueBitPosition
    OR EBX,EDI                          ; 004d115b
    SHL EAX,CL                          ; 004d115d
    OR EAX,EBX                          ; 004d115f
    POP EDI                             ; 004d1161
    POP ESI                             ; 004d1162
    POP EBX                             ; 004d1163
    RET                                 ; 004d1164

