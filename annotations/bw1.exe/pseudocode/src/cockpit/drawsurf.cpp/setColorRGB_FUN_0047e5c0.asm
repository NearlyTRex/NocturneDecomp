; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_0047e5c0(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 0048113a
;
; Referenced Globals:
;   int g_INT_0061b4a0 = 0x8
;   int g_CurrentDrawColor
;   int g_PaletteColorIndex
;   int g_UseRGBConversion
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e5c0
        ;   Label: cockpit_drawsurf.cpp_setColorRGB_FUN_0047e5c0
    PUSH ESI                            ; 0047e5c1
    PUSH EDI                            ; 0047e5c2
    PUSH EBP                            ; 0047e5c3
    SUB ESP,0x8                         ; 0047e5c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047e5c7
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047e5cb
    MOV EBX,dword ptr [ESP + 0x24]      ; 0047e5cf
    AND EAX,0xff                        ; 0047e5d3
    AND ESI,0xff                        ; 0047e5d8
    MOV EDI,EAX                         ; 0047e5de
    MOV ECX,ESI                         ; 0047e5e0
    SAR EDI,0x3                         ; 0047e5e2
    SAR ECX,0x3                         ; 0047e5e5
    SHL EDI,0xa                         ; 0047e5e8
    SHL ECX,0x5                         ; 0047e5eb
    AND EBX,0xff                        ; 0047e5ee
    ADD ECX,EDI                         ; 0047e5f4
    MOV EDI,EBX                         ; 0047e5f6
    SAR EDI,0x3                         ; 0047e5f8
    ADD EDI,ECX                         ; 0047e5fb
    XOR ECX,ECX                         ; 0047e5fd
    MOV CL,byte ptr [EDI + 0x1c45ad0]   ; 0047e5ff
    XOR EDX,EDX                         ; 0047e605
    MOV dword ptr [0x01bc11e8],ECX      ; 0047e607 | g_PaletteColorIndex
    MOV ECX,dword ptr [0x0061b4a0]      ; 0047e60d | g_INT_0061b4a0
    MOV dword ptr [0x01bc11f0],EDX      ; 0047e613 | g_UseRGBConversion
    CMP ECX,0x10                        ; 0047e619
    JNC 0x0047e6eb                      ; 0047e61c
        ;   XREF to: 0047e6eb (CONDITIONAL_JUMP)  ; LAB_0047e6eb
    CMP ECX,0x8                         ; 0047e622
    JNZ 0x0047e6f6                      ; 0047e625
        ;   XREF to: 0047e6f6 (CONDITIONAL_JUMP)  ; LAB_0047e6f6
    XOR EAX,EAX                         ; 0047e62b
    MOV AL,byte ptr [EDI + 0x1c45ad0]   ; 0047e62d
    MOV [0x01bc11e4],EAX                ; 0047e633 | g_CurrentDrawColor
    ADD ESP,0x8                         ; 0047e638
    POP EBP                             ; 0047e63b
    POP EDI                             ; 0047e63c
    POP ESI                             ; 0047e63d
    POP EBX                             ; 0047e63e
    RET                                 ; 0047e63f
    DIV dword ptr [0x01c4e9d8]          ; 0047e640 | g_RedScaleFactor
        ;   Label: LAB_0047e640
    MOV dword ptr [ESP],ESI             ; 0047e646
    MOV EDI,EAX                         ; 0047e649
    XOR EDX,EDX                         ; 0047e64b
    MOV EAX,ESI                         ; 0047e64d
    DIV dword ptr [0x01c4e9e4]          ; 0047e64f | g_GreenScaleFactor
    MOV EBP,dword ptr [0x01c4e9f0]      ; 0047e655 | g_BlueScaleFactor
    MOV dword ptr [ESP],EAX             ; 0047e65b
    XOR EDX,EDX                         ; 0047e65e
    MOV EAX,EBX                         ; 0047e660
    DIV EBP                             ; 0047e662
    MOV CL,byte ptr [0x01c4e9d4]        ; 0047e664 | g_RedBitPosition
    MOV dword ptr [ESP + 0x4],EBX       ; 0047e66a
    SHL EDI,CL                          ; 0047e66e
    MOV CL,byte ptr [0x01c4e9e0]        ; 0047e670 | g_GreenBitPosition
    MOV dword ptr [ESP + 0x4],EAX       ; 0047e676
    MOV EAX,dword ptr [ESP]             ; 0047e67a
    SHL EAX,CL                          ; 0047e67d
    MOV CL,byte ptr [0x01c4e9ec]        ; 0047e67f | g_BlueBitPosition
    OR EDI,EAX                          ; 0047e685
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047e687
    SHL EAX,CL                          ; 0047e68b
    OR EAX,EDI                          ; 0047e68d
    AND EAX,0xffff                      ; 0047e68f
    MOV [0x01bc11e4],EAX                ; 0047e694 | g_CurrentDrawColor
    ADD ESP,0x8                         ; 0047e699
    POP EBP                             ; 0047e69c
    POP EDI                             ; 0047e69d
    POP ESI                             ; 0047e69e
    POP EBX                             ; 0047e69f
    RET                                 ; 0047e6a0
    CMP ECX,ECX                         ; 0047e6a1
        ;   Label: LAB_0047e6a1
    JNZ 0x0047e6d1                      ; 0047e6a3
        ;   XREF to: 0047e6d1 (CONDITIONAL_JUMP)  ; LAB_0047e6d1
    MOV CL,byte ptr [0x01c4e9d4]        ; 0047e6a5 | g_RedBitPosition
    SHL EAX,CL                          ; 0047e6ab
    MOV CL,byte ptr [0x01c4e9e0]        ; 0047e6ad | g_GreenBitPosition
    SHL ESI,CL                          ; 0047e6b3
    MOV CL,byte ptr [0x01c4e9ec]        ; 0047e6b5 | g_BlueBitPosition
    SHL EBX,CL                          ; 0047e6bb
    OR EAX,ESI                          ; 0047e6bd
    MOV ECX,EBX                         ; 0047e6bf
    OR ECX,EAX                          ; 0047e6c1
    MOV dword ptr [0x01bc11e4],ECX      ; 0047e6c3 | g_CurrentDrawColor
    ADD ESP,0x8                         ; 0047e6c9
    POP EBP                             ; 0047e6cc
    POP EDI                             ; 0047e6cd
    POP ESI                             ; 0047e6ce
    POP EBX                             ; 0047e6cf
    RET                                 ; 0047e6d0
    MOV ECX,EAX                         ; 0047e6d1
        ;   Label: LAB_0047e6d1
    SHL ESI,0x8                         ; 0047e6d3
    SHL ECX,0x10                        ; 0047e6d6
    OR ECX,ESI                          ; 0047e6d9
    OR ECX,EBX                          ; 0047e6db
    MOV dword ptr [0x01bc11e4],ECX      ; 0047e6dd | g_CurrentDrawColor
    ADD ESP,0x8                         ; 0047e6e3
    POP EBP                             ; 0047e6e6
    POP EDI                             ; 0047e6e7
    POP ESI                             ; 0047e6e8
    POP EBX                             ; 0047e6e9
    RET                                 ; 0047e6ea
    JBE 0x0047e640                      ; 0047e6eb
        ;   XREF to: 0047e640 (CONDITIONAL_JUMP)  ; LAB_0047e640
        ;   Label: LAB_0047e6eb
    CMP ECX,0x20                        ; 0047e6f1
    JZ 0x0047e6a1                       ; 0047e6f4
        ;   XREF to: 0047e6a1 (CONDITIONAL_JUMP)  ; LAB_0047e6a1
    MOV EAX,0x5db034                    ; 0047e6f6
        ;   Label: LAB_0047e6f6
    MOV EDX,0x11e                       ; 0047e6fb
    PUSH 0x5db04c                       ; 0047e700
    MOV [0x01d1d400],EAX                ; 0047e705 | g_CurrentFilename
    MOV dword ptr [0x01d1d404],EDX      ; 0047e70a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0047e710
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0047e715
    ADD ESP,0x8                         ; 0047e718
    POP EBP                             ; 0047e71b
    POP EDI                             ; 0047e71c
    POP ESI                             ; 0047e71d
    POP EBX                             ; 0047e71e
    RET                                 ; 0047e71f

