; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_font_cpp_packPixelNative_FUN_004d1170(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_FUN_00577af0 at 00578135
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_RedBitPosition
;   int g_GreenBitPosition
;   int g_BlueBitPosition
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d1170
        ;   Label: engine_font.cpp_packPixelNative_FUN_004d1170
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d1174
    CMP dword ptr [0x0067939c],0x20     ; 004d1178 | g_BitsPerPixel
    JNZ 0x004d11a6                      ; 004d117f
        ;   XREF to: 004d11a6 (CONDITIONAL_JUMP)  ; LAB_004d11a6
    MOV CL,byte ptr [0x02d01f24]        ; 004d1181 | g_RedBitPosition
    SHL EAX,CL                          ; 004d1187
    MOV CL,byte ptr [0x02d01f30]        ; 004d1189 | g_GreenBitPosition
    SHL EDX,CL                          ; 004d118f
    MOV CL,byte ptr [0x02d01f3c]        ; 004d1191 | g_BlueBitPosition
    OR EAX,EDX                          ; 004d1197
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d1199
    SHL EDX,CL                          ; 004d119d
    MOV ECX,EDX                         ; 004d119f
    OR ECX,EAX                          ; 004d11a1
    MOV EAX,ECX                         ; 004d11a3
    RET                                 ; 004d11a5
    PUSH EBX                            ; 004d11a6
        ;   Label: LAB_004d11a6
    MOV ECX,EAX                         ; 004d11a7
    MOV EAX,EDX                         ; 004d11a9
    SHL ECX,0x10                        ; 004d11ab
    SHL EAX,0x8                         ; 004d11ae
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d11b1
    OR ECX,EAX                          ; 004d11b5
    OR ECX,EBX                          ; 004d11b7
    POP EBX                             ; 004d11b9
    MOV EAX,ECX                         ; 004d11ba
    RET                                 ; 004d11bc

