; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_font_cpp_packPixelNative_FUN_004b3780(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; Referenced Globals:
;   int g_INT_005fba20 = 0x8
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c6af74
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c6af80
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c6af8c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b3780
        ;   Label: engine_font.cpp_packPixelNative_FUN_004b3780
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b3784
    CMP dword ptr [0x005fba20],0x20     ; 004b3788 | g_INT_005fba20
    JNZ 0x004b37b6                      ; 004b378f
        ;   XREF to: 004b37b6 (CONDITIONAL_JUMP)  ; LAB_004b37b6
    MOV CL,byte ptr [0x01c6af74]        ; 004b3791 | g_BIT_INTEGER32_01c6af74
    SHL EAX,CL                          ; 004b3797
    MOV CL,byte ptr [0x01c6af80]        ; 004b3799 | g_BIT_INTEGER32_01c6af80
    SHL EDX,CL                          ; 004b379f
    MOV CL,byte ptr [0x01c6af8c]        ; 004b37a1 | g_BIT_INTEGER32_01c6af8c
    OR EAX,EDX                          ; 004b37a7
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b37a9
    SHL EDX,CL                          ; 004b37ad
    MOV ECX,EDX                         ; 004b37af
    OR ECX,EAX                          ; 004b37b1
    MOV EAX,ECX                         ; 004b37b3
    RET                                 ; 004b37b5
    PUSH EBX                            ; 004b37b6
        ;   Label: LAB_004b37b6
    MOV ECX,EAX                         ; 004b37b7
    MOV EAX,EDX                         ; 004b37b9
    SHL ECX,0x10                        ; 004b37bb
    SHL EAX,0x8                         ; 004b37be
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b37c1
    OR ECX,EAX                          ; 004b37c5
    OR ECX,EBX                          ; 004b37c7
    POP EBX                             ; 004b37c9
    MOV EAX,ECX                         ; 004b37ca
    RET                                 ; 004b37cc

