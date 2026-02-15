; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulonglong __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004f3ff0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   ulonglong g_RedMask16 = 0xf800
;   ulonglong g_GreenMask16 = 0x7e0
;   ulonglong g_BlueMask16 = 0x1f
;   ulonglong g_RedMask32 = 0xf80000
;   ulonglong g_GreenMask32 = 0xfc00
;   ulonglong g_BlueMask32 = 0xf8
;   ulonglong g_TotalColorBits = 0x8
;   ulonglong g_GreenBlueBits = 0x5
;   ulonglong g_BlueBitShift = 0x3
;   ushort[256] g_ColorTable16
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_RedBitCount
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3ff0
        ;   Label: wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0
    PUSH ESI                            ; 004f3ff1
    PUSH EDI                            ; 004f3ff2
    PUSH EBP                            ; 004f3ff3
    SUB ESP,0x8                         ; 004f3ff4
    XOR EBX,EBX                         ; 004f3ff7
    XOR ESI,ESI                         ; 004f3ff9
    XOR EAX,EAX                         ; 004f3ffb
        ;   Label: LAB_004f3ffb
    MOV EDI,dword ptr [0x02d01f28]      ; 004f3ffd | g_RedScaleFactor
    MOV AL,byte ptr [EBX + 0x2d01f48]   ; 004f4003 | g_SourcePaletteData | CHAR_ARRAY_02d01f4b
    XOR EDX,EDX                         ; 004f4009
    MOV dword ptr [ESP],EAX             ; 004f400b
    DIV EDI                             ; 004f400e
    XOR ECX,ECX                         ; 004f4010
    MOV CL,byte ptr [EBX + 0x2d01f49]   ; 004f4012 | CHAR_ARRAY_02d01f49 | CHAR_ARRAY_02d01f4c
    MOV dword ptr [ESP],EAX             ; 004f4018
    XOR EDX,EDX                         ; 004f401b
    MOV EAX,ECX                         ; 004f401d
    DIV dword ptr [0x02d01f34]          ; 004f401f | g_GreenScaleFactor
    MOVZX EBP,byte ptr [EBX + 0x2d01f4a] ; 004f4025 | CHAR_ARRAY_02d01f4a | CHAR_ARRAY_02d01f4d
    MOV dword ptr [ESP + 0x4],EBP       ; 004f402c
    MOV EDI,EAX                         ; 004f4030
    XOR EDX,EDX                         ; 004f4032
    MOV EAX,EBP                         ; 004f4034
    DIV dword ptr [0x02d01f40]          ; 004f4036 | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 004f403c | g_RedBitPosition
    MOV dword ptr [ESP + 0x4],EAX       ; 004f4042
    MOV EAX,dword ptr [ESP]             ; 004f4046
    SHL EAX,CL                          ; 004f4049
    MOV CL,byte ptr [0x02d01f30]        ; 004f404b | g_GreenBitPosition
    SHL EDI,CL                          ; 004f4051
    MOV CL,byte ptr [0x02d01f3c]        ; 004f4053 | g_BlueBitPosition
    OR EDI,EAX                          ; 004f4059
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f405b
    SHL EAX,CL                          ; 004f405f
    ADD ESI,0x2                         ; 004f4061
    OR EAX,EDI                          ; 004f4064
    ADD EBX,0x3                         ; 004f4066
    MOV word ptr [ESI + 0x2d0101e],AX   ; 004f4069 | g_ColorTable16
    CMP ESI,0x200                       ; 004f4070
    JNZ 0x004f3ffb                      ; 004f4076
        ;   XREF to: 004f3ffb (CONDITIONAL_JUMP)  ; LAB_004f3ffb
    MOV ESI,0xff                        ; 004f4078
    MOV CL,byte ptr [0x02d01f2c]        ; 004f407d | g_RedBitCount
    SHR ESI,CL                          ; 004f4083
    MOV ECX,dword ptr [0x02d01f24]      ; 004f4085 | g_RedBitPosition
    MOV EAX,ESI                         ; 004f408b
    MOV EBX,0xff                        ; 004f408d
    SHL EAX,CL                          ; 004f4092
    MOV CL,byte ptr [0x02d01f38]        ; 004f4094 | g_GreenBitCount
    MOV [0x00682748],EAX                ; 004f409a | g_RedMask16
    SHR EBX,CL                          ; 004f409f
    MOV ECX,dword ptr [0x02d01f30]      ; 004f40a1 | g_GreenBitPosition
    MOV EAX,EBX                         ; 004f40a7
    SHL EAX,CL                          ; 004f40a9
    MOV CL,byte ptr [0x02d01f44]        ; 004f40ab | g_BlueBitCount
    MOV [0x00682750],EAX                ; 004f40b1 | g_GreenMask16
    MOV EAX,0xff                        ; 004f40b6
    SHR EAX,CL                          ; 004f40bb
    MOV ECX,dword ptr [0x02d01f3c]      ; 004f40bd | g_BlueBitPosition
    MOV EDI,EAX                         ; 004f40c3
    SHL EDI,CL                          ; 004f40c5
    MOV CL,byte ptr [0x02d01f2c]        ; 004f40c7 | g_RedBitCount
    SHL ESI,CL                          ; 004f40cd
    MOV CL,byte ptr [0x02d01f38]        ; 004f40cf | g_GreenBitCount
    MOV EDX,dword ptr [0x02d01f38]      ; 004f40d5 | g_GreenBitCount
    SHL EBX,CL                          ; 004f40db
    MOV ECX,dword ptr [0x02d01f44]      ; 004f40dd | g_BlueBitCount
    MOV dword ptr [0x00682758],EDI      ; 004f40e3 | g_BlueMask16
    SHL EAX,CL                          ; 004f40e9
    SHL ESI,0x10                        ; 004f40eb
    MOV [0x006827a0],EAX                ; 004f40ee | g_BlueMask32
    MOV EAX,[0x02d01f2c]                ; 004f40f3 | g_RedBitCount
    MOV dword ptr [0x00682760],ESI      ; 004f40f8 | g_RedMask32
    ADD EAX,EDX                         ; 004f40fe
    SHL EBX,0x8                         ; 004f4100
    ADD EAX,ECX                         ; 004f4103
    MOV dword ptr [0x00682780],EBX      ; 004f4105 | g_GreenMask32
    MOV [0x006827a8],EAX                ; 004f410b | g_TotalColorBits
    LEA EAX,[EDX + ECX*0x1]             ; 004f4110
    MOV dword ptr [0x006827e8],ECX      ; 004f4113 | g_BlueBitShift
    MOV [0x006827c8],EAX                ; 004f4119 | g_GreenBlueBits
    ADD ESP,0x8                         ; 004f411e
    POP EBP                             ; 004f4121
    POP EDI                             ; 004f4122
    POP ESI                             ; 004f4123
    POP EBX                             ; 004f4124
    LEA EAX,[EAX]                       ; 004f4125
    LEA EDX,[EDX]                       ; 004f412b
    MOV EBX,EBX                         ; 004f412e
    RET                                 ; 004f4130

