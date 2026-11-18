; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_initializeColorMasks_FUN_004ecda0(void)
;
;
; Referenced Globals:
;   _MMX_INTEGER g_RedMask16
;   _MMX_INTEGER g_GreenMask16
;   _MMX_INTEGER g_BlueMask16
;   qword g_RedMask32 = 0xf80000
;   qword g_GreenMask32 = 0xfc00
;   qword g_BlueMask32 = 0xf8
;   qword g_TotalDitherShift = 0x8
;   qword g_GreenBlueDitherShift = 0x5
;   qword g_BlueBitShift = 0x3
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_RedDitherShift
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_GreenDitherShift
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecda0
        ;   Label: core_hero.cpp_initializeColorMasks_FUN_004ecda0
    PUSH ESI                            ; 004ecda1
    PUSH EDI                            ; 004ecda2
    PUSH EBP                            ; 004ecda3
    SUB ESP,0x8                         ; 004ecda4
    XOR EBX,EBX                         ; 004ecda7
    XOR ESI,ESI                         ; 004ecda9
    XOR EAX,EAX                         ; 004ecdab
        ;   Label: LAB_004ecdab
    MOV EDI,dword ptr [0x01c4e9d8]      ; 004ecdad | g_RedScaleFactor
    MOV AL,byte ptr [EBX + 0x1c4e9f8]   ; 004ecdb3
    XOR EDX,EDX                         ; 004ecdb9
    MOV dword ptr [ESP],EAX             ; 004ecdbb
    DIV EDI                             ; 004ecdbe
    XOR ECX,ECX                         ; 004ecdc0
    MOV CL,byte ptr [EBX + 0x1c4e9f9]   ; 004ecdc2
    MOV dword ptr [ESP],EAX             ; 004ecdc8
    XOR EDX,EDX                         ; 004ecdcb
    MOV EAX,ECX                         ; 004ecdcd
    DIV dword ptr [0x01c4e9e4]          ; 004ecdcf | g_GreenScaleFactor
    MOVZX EBP,byte ptr [EBX + 0x1c4e9fa] ; 004ecdd5
    MOV dword ptr [ESP + 0x4],EBP       ; 004ecddc
    MOV EDI,EAX                         ; 004ecde0
    XOR EDX,EDX                         ; 004ecde2
    MOV EAX,EBP                         ; 004ecde4
    DIV dword ptr [0x01c4e9f0]          ; 004ecde6 | g_BlueScaleFactor
    MOV CL,byte ptr [0x01c4e9d4]        ; 004ecdec | g_RedBitPosition
    MOV dword ptr [ESP + 0x4],EAX       ; 004ecdf2
    MOV EAX,dword ptr [ESP]             ; 004ecdf6
    SHL EAX,CL                          ; 004ecdf9
    MOV CL,byte ptr [0x01c4e9e0]        ; 004ecdfb | g_GreenBitPosition
    SHL EDI,CL                          ; 004ece01
    MOV CL,byte ptr [0x01c4e9ec]        ; 004ece03 | g_BlueBitPosition
    OR EDI,EAX                          ; 004ece09
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ece0b
    SHL EAX,CL                          ; 004ece0f
    ADD ESI,0x2                         ; 004ece11
    OR EAX,EDI                          ; 004ece14
    ADD EBX,0x3                         ; 004ece16
    MOV word ptr [ESI + 0x1c4dace],AX   ; 004ece19
    CMP ESI,0x200                       ; 004ece20
    JNZ 0x004ecdab                      ; 004ece26
        ;   XREF to: 004ecdab (CONDITIONAL_JUMP)  ; LAB_004ecdab
    MOV ESI,0xff                        ; 004ece28
    MOV CL,byte ptr [0x01c4e9dc]        ; 004ece2d | g_RedDitherShift
    SHR ESI,CL                          ; 004ece33
    MOV ECX,dword ptr [0x01c4e9d4]      ; 004ece35 | g_RedBitPosition
    MOV EAX,ESI                         ; 004ece3b
    MOV EBX,0xff                        ; 004ece3d
    SHL EAX,CL                          ; 004ece42
    MOV CL,byte ptr [0x01c4e9e8]        ; 004ece44 | g_GreenDitherShift
    MOV [0x00623f20],EAX                ; 004ece4a | g_RedMask16
    SHR EBX,CL                          ; 004ece4f
    MOV ECX,dword ptr [0x01c4e9e0]      ; 004ece51 | g_GreenBitPosition
    MOV EAX,EBX                         ; 004ece57
    SHL EAX,CL                          ; 004ece59
    MOV CL,byte ptr [0x01c4e9f4]        ; 004ece5b | g_BlueDitherShift
    MOV [0x00623f28],EAX                ; 004ece61 | g_GreenMask16
    MOV EAX,0xff                        ; 004ece66
    SHR EAX,CL                          ; 004ece6b
    MOV ECX,dword ptr [0x01c4e9ec]      ; 004ece6d | g_BlueBitPosition
    MOV EDI,EAX                         ; 004ece73
    SHL EDI,CL                          ; 004ece75
    MOV CL,byte ptr [0x01c4e9dc]        ; 004ece77 | g_RedDitherShift
    SHL ESI,CL                          ; 004ece7d
    MOV CL,byte ptr [0x01c4e9e8]        ; 004ece7f | g_GreenDitherShift
    MOV EDX,dword ptr [0x01c4e9e8]      ; 004ece85 | g_GreenDitherShift
    SHL EBX,CL                          ; 004ece8b
    MOV ECX,dword ptr [0x01c4e9f4]      ; 004ece8d | g_BlueDitherShift
    MOV dword ptr [0x00623f30],EDI      ; 004ece93 | g_BlueMask16
    SHL EAX,CL                          ; 004ece99
    SHL ESI,0x10                        ; 004ece9b
    MOV [0x00623f78],EAX                ; 004ece9e | g_BlueMask32
    MOV EAX,[0x01c4e9dc]                ; 004ecea3 | g_RedDitherShift
    MOV dword ptr [0x00623f38],ESI      ; 004ecea8 | g_RedMask32
    ADD EAX,EDX                         ; 004eceae
    SHL EBX,0x8                         ; 004eceb0
    ADD EAX,ECX                         ; 004eceb3
    MOV dword ptr [0x00623f58],EBX      ; 004eceb5 | g_GreenMask32
    MOV [0x00623f80],EAX                ; 004ecebb | g_TotalDitherShift
    LEA EAX,[EDX + ECX*0x1]             ; 004ecec0
    MOV dword ptr [0x00623fc0],ECX      ; 004ecec3 | g_BlueBitShift
    MOV [0x00623fa0],EAX                ; 004ecec9 | g_GreenBlueDitherShift
    ADD ESP,0x8                         ; 004ecece
    POP EBP                             ; 004eced1
    POP EDI                             ; 004eced2
    POP ESI                             ; 004eced3
    POP EBX                             ; 004eced4
    LEA EAX,[EAX]                       ; 004eced5
    LEA EDX,[EDX]                       ; 004ecedb
    MOV EBX,EBX                         ; 004ecede
    RET                                 ; 004ecee0

