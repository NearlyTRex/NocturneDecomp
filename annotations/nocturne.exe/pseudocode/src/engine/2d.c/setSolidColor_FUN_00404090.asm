; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setSolidColor_FUN_00404090(int red_component,int green_component,int blue_component)
;
; Parameters:
; int              Stack[0x4]:4   red_component
; int              Stack[0x8]:4   green_component
; int              Stack[0xc]:4   blue_component
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_UseExternalRenderer
;   ulong g_SolidColorMode
;   int g_SolidRedComponent
;   int g_SolidGreenComponent
;   int g_SolidBlueComponent
;
; Called Functions:
;   engine_special.cpp_setFogColor_FUN_00532af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404090
        ;   Label: engine_2d.c_setSolidColor_FUN_00404090
    PUSH ESI                            ; 00404091
    MOV EAX,dword ptr [ESP + 0xc]       ; 00404092
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404096
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040409a
    MOV dword ptr [0x01c039b0],EBX      ; 0040409e | g_SolidGreenComponent
    MOV dword ptr [0x01c039b4],EDX      ; 004040a4 | g_SolidBlueComponent
    MOV ESI,EBX                         ; 004040aa
    MOV ECX,EAX                         ; 004040ac
    SHL ESI,0x8                         ; 004040ae
    SHL ECX,0x10                        ; 004040b1
    MOV [0x01c039ac],EAX                ; 004040b4 | g_SolidRedComponent
    OR ECX,ESI                          ; 004040b9
    MOV ESI,dword ptr [0x005b7624]      ; 004040bb | g_BitsPerPixel
    OR ECX,EDX                          ; 004040c1
    CMP ESI,0x10                        ; 004040c3
    JZ 0x004040f3                       ; 004040c6
        ;   XREF to: 004040f3 (CONDITIONAL_JUMP)  ; LAB_004040f3
    CMP ESI,0x20                        ; 004040c8
    JNZ 0x004040f3                      ; 004040cb
        ;   XREF to: 004040f3 (CONDITIONAL_JUMP)  ; LAB_004040f3
    PUSH EDI                            ; 004040cd
    MOV CL,byte ptr [0x01c00624]        ; 004040ce | g_RedBitPosition
    MOV ESI,EAX                         ; 004040d4
    MOV EDI,EBX                         ; 004040d6
    SHL ESI,CL                          ; 004040d8
    MOV CL,byte ptr [0x01c00630]        ; 004040da | g_GreenBitPosition
    SHL EDI,CL                          ; 004040e0
    MOV CL,byte ptr [0x01c0063c]        ; 004040e2 | g_BlueBitPosition
    OR ESI,EDI                          ; 004040e8
    MOV EDI,EDX                         ; 004040ea
    SHL EDI,CL                          ; 004040ec
    MOV ECX,EDI                         ; 004040ee
    OR ECX,ESI                          ; 004040f0
    POP EDI                             ; 004040f2
    MOV dword ptr [0x01c039a8],ECX      ; 004040f3 | g_SolidColorMode
        ;   Label: LAB_004040f3
    CMP dword ptr [0x01c02594],0x0      ; 004040f9 | g_UseExternalRenderer
    JNZ 0x00404105                      ; 00404100
        ;   XREF to: 00404105 (CONDITIONAL_JUMP)  ; LAB_00404105
    POP ESI                             ; 00404102
    POP EBX                             ; 00404103
    RET                                 ; 00404104
    PUSH EDX                            ; 00404105
        ;   Label: LAB_00404105
    PUSH EBX                            ; 00404106
    PUSH EAX                            ; 00404107
    CALL engine_special.cpp_setFogColor_FUN_00532af0 ; 00404108
        ;   XREF to: 00532af0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColor_FUN_00532af0(int red, int green, int blue)
    ADD ESP,0xc                         ; 0040410d
    POP ESI                             ; 00404110
    POP EBX                             ; 00404111
    RET                                 ; 00404112

