; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_font_cpp_packPixelNative_FUN_004abbf0(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; Referenced Globals:
;   int g_INT_006141c0 = 0x8
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004abbf0
        ;   Label: engine_font.cpp_packPixelNative_FUN_004abbf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004abbf4
    CMP dword ptr [0x006141c0],0x20     ; 004abbf8 | g_INT_006141c0
    JNZ 0x004abc26                      ; 004abbff
        ;   XREF to: 004abc26 (CONDITIONAL_JUMP)  ; LAB_004abc26
    MOV CL,byte ptr [0x01c35814]        ; 004abc01 | g_RedBitPosition
    SHL EAX,CL                          ; 004abc07
    MOV CL,byte ptr [0x01c35820]        ; 004abc09 | g_GreenBitPosition
    SHL EDX,CL                          ; 004abc0f
    MOV CL,byte ptr [0x01c3582c]        ; 004abc11 | g_BlueBitPosition
    OR EAX,EDX                          ; 004abc17
    MOV EDX,dword ptr [ESP + 0xc]       ; 004abc19
    SHL EDX,CL                          ; 004abc1d
    MOV ECX,EDX                         ; 004abc1f
    OR ECX,EAX                          ; 004abc21
    MOV EAX,ECX                         ; 004abc23
    RET                                 ; 004abc25
    PUSH EBX                            ; 004abc26
        ;   Label: LAB_004abc26
    MOV ECX,EAX                         ; 004abc27
    MOV EAX,EDX                         ; 004abc29
    SHL ECX,0x10                        ; 004abc2b
    SHL EAX,0x8                         ; 004abc2e
    MOV EBX,dword ptr [ESP + 0x10]      ; 004abc31
    OR ECX,EAX                          ; 004abc35
    OR ECX,EBX                          ; 004abc37
    POP EBX                             ; 004abc39
    MOV EAX,ECX                         ; 004abc3a
    RET                                 ; 004abc3c

