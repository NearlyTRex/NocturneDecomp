; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0044d4f0(CDemonImage *this_ptr,uint red,uint green,uint blue)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   red
; uint             Stack[0xc]:4   green
; uint             Stack[0x10]:4   blue
;
; XREF[1]:
;   core_dimage.cpp_CDemonImage_load_FUN_0044d550 at 0044d6ea
;
; Referenced Globals:
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d4f0
        ;   Label: core_dimage.cpp_CDemonImage_packColor_FUN_0044d4f0
    PUSH ESI                            ; 0044d4f1
    PUSH EDI                            ; 0044d4f2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044d4f3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044d4f7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044d4fb
    MOV ECX,dword ptr [0x01c00628]      ; 0044d4ff | g_RedScaleFactor
    MOV EAX,EDI                         ; 0044d505
    XOR EDX,EDX                         ; 0044d507
    DIV ECX                             ; 0044d509
    MOV EDI,EAX                         ; 0044d50b
    XOR EDX,EDX                         ; 0044d50d
    MOV EAX,EBX                         ; 0044d50f
    MOV EBX,dword ptr [0x01c00634]      ; 0044d511 | g_GreenScaleFactor
    DIV EBX                             ; 0044d517
    MOV EBX,EAX                         ; 0044d519
    XOR EDX,EDX                         ; 0044d51b
    MOV EAX,ESI                         ; 0044d51d
    DIV dword ptr [0x01c00640]          ; 0044d51f | g_BlueScaleFactor
    MOV CL,byte ptr [0x01c00624]        ; 0044d525 | g_RedBitPosition
    SHL EDI,CL                          ; 0044d52b
    MOV CL,byte ptr [0x01c00630]        ; 0044d52d | g_GreenBitPosition
    SHL EBX,CL                          ; 0044d533
    MOV CL,byte ptr [0x01c0063c]        ; 0044d535 | g_BlueBitPosition
    OR EBX,EDI                          ; 0044d53b
    SHL EAX,CL                          ; 0044d53d
    OR EAX,EBX                          ; 0044d53f
    POP EDI                             ; 0044d541
    POP ESI                             ; 0044d542
    POP EBX                             ; 0044d543
    RET                                 ; 0044d544

