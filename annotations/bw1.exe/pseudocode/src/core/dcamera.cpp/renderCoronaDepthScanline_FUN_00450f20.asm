; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450f20(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   right
; SSoftwareEdge *  Stack[0xc]:4   left
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60 at 0045ebe0
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460 at 00463789
;
; Referenced Globals:
;   undefined4 DAT_01323d00
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450f20
        ;   Label: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450f20
    PUSH ESI                            ; 00450f21
    PUSH EDI                            ; 00450f22
    PUSH EBP                            ; 00450f23
    MOV EDI,dword ptr [ESP + 0x18]      ; 00450f24
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00450f28
    MOV ECX,dword ptr [ESP + 0x14]      ; 00450f2c
    SUB ECX,dword ptr [0x01c4f00c]      ; 00450f30 | DAT_01c4f00c
    MOV EBX,dword ptr [0x01323d00]      ; 00450f36 | DAT_01323d00
    MOV dword ptr [ESP + 0x14],ECX      ; 00450f3c
    CMP EBX,0x1                         ; 00450f40
    JNZ 0x00450f50                      ; 00450f43
        ;   XREF to: 00450f50 (CONDITIONAL_JUMP)  ; LAB_00450f50
    TEST byte ptr [ESP + 0x14],0x1      ; 00450f45
    JNZ 0x00451030                      ; 00450f4a
        ;   XREF to: 00451030 (CONDITIONAL_JUMP)  ; LAB_00451030
    CMP dword ptr [0x01323d00],0x2      ; 00450f50 | DAT_01323d00
        ;   Label: LAB_00450f50
    JNZ 0x00450f64                      ; 00450f57
        ;   XREF to: 00450f64 (CONDITIONAL_JUMP)  ; LAB_00450f64
    TEST byte ptr [ESP + 0x14],0x3      ; 00450f59
    JNZ 0x00451030                      ; 00450f5e
        ;   XREF to: 00451030 (CONDITIONAL_JUMP)  ; LAB_00451030
    MOV EBP,dword ptr [ESP + 0x14]      ; 00450f64
        ;   Label: LAB_00450f64
    MOV CL,byte ptr [0x01323d00]        ; 00450f68 | DAT_01323d00
    MOV EAX,[0x01c4f008]                ; 00450f6e | DAT_01c4f008
    MOV EBX,dword ptr [EDI + 0x8]       ; 00450f73
    MOV ESI,dword ptr [EDX + 0x8]       ; 00450f76
    SAR EBX,0x10                        ; 00450f79
    SAR ESI,0x10                        ; 00450f7c
    SAR EBP,CL                          ; 00450f7f
    SUB EBX,EAX                         ; 00450f81
    SUB ESI,EAX                         ; 00450f83
    SAR EBX,CL                          ; 00450f85
    SAR ESI,CL                          ; 00450f87
    MOV dword ptr [ESP + 0x14],EBP      ; 00450f89
    CMP EBX,ESI                         ; 00450f8d
    JLE 0x00450f9d                      ; 00450f8f
        ;   XREF to: 00450f9d (CONDITIONAL_JUMP)  ; LAB_00450f9d
    MOV EAX,EBX                         ; 00450f91
    MOV EBX,ESI                         ; 00450f93
    MOV ESI,EAX                         ; 00450f95
    MOV EAX,EDI                         ; 00450f97
    MOV EDI,EDX                         ; 00450f99
    MOV EDX,EAX                         ; 00450f9b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00450f9d
        ;   Label: LAB_00450f9d
    SHL EAX,0x2                         ; 00450fa1
    CMP EBX,dword ptr [EAX + 0x14dea50] ; 00450fa4
    JNC 0x00450fbb                      ; 00450faa
        ;   XREF to: 00450fbb (CONDITIONAL_JUMP)  ; LAB_00450fbb
    MOV dword ptr [EAX + 0x14dea50],EBX ; 00450fac
    MOV ECX,dword ptr [EDI + 0x10]      ; 00450fb2
    MOV dword ptr [EAX + 0x152a1d0],ECX ; 00450fb5
    MOV EAX,dword ptr [ESP + 0x14]      ; 00450fbb
        ;   Label: LAB_00450fbb
    SHL EAX,0x2                         ; 00450fbf
    CMP ESI,dword ptr [EAX + 0x14dee10] ; 00450fc2
    JBE 0x00450fd9                      ; 00450fc8
        ;   XREF to: 00450fd9 (CONDITIONAL_JUMP)  ; LAB_00450fd9
    MOV dword ptr [EAX + 0x14dee10],ESI ; 00450fca
    MOV ECX,dword ptr [EDX + 0x10]      ; 00450fd0
    MOV dword ptr [EAX + 0x152a590],ECX ; 00450fd3
    MOV EAX,ESI                         ; 00450fd9
        ;   Label: LAB_00450fd9
    MOV EDX,dword ptr [EDX + 0x28]      ; 00450fdb
    MOV ECX,dword ptr [EDI + 0x28]      ; 00450fde
    SUB EAX,EBX                         ; 00450fe1
    SUB EDX,ECX                         ; 00450fe3
    LEA EDI,[EAX + 0x1]                 ; 00450fe5
    MOV EAX,EDX                         ; 00450fe8
    SAR EDX,0x1f                        ; 00450fea
    IDIV EDI                            ; 00450fed
    MOV EDX,dword ptr [ESP + 0x14]      ; 00450fef
    MOV EDI,EAX                         ; 00450ff3
    LEA EAX,[EDX*0x4 + 0x0]             ; 00450ff5
    ADD EAX,EDX                         ; 00450ffc
    MOV EDX,0x14df1d0                   ; 00450ffe
    SHL EAX,0x8                         ; 00451003
    ADD EDX,EAX                         ; 00451006
    LEA EAX,[EBX*0x4 + 0x0]             ; 00451008
    ADD EAX,EDX                         ; 0045100f
    CMP EBX,ESI                         ; 00451011
    JGE 0x00451030                      ; 00451013
        ;   XREF to: 00451030 (CONDITIONAL_JUMP)  ; LAB_00451030
    MOV EDX,ECX                         ; 00451015
        ;   Label: LAB_00451015
    INC EBX                             ; 00451017
    ADD EAX,0x4                         ; 00451018
    SAR EDX,0x8                         ; 0045101b
    ADD ECX,EDI                         ; 0045101e
    MOV dword ptr [EAX + -0x4],EDX      ; 00451020
    CMP EBX,ESI                         ; 00451023
    JL 0x00451015                       ; 00451025
        ;   XREF to: 00451015 (CONDITIONAL_JUMP)  ; LAB_00451015
    LEA EAX,[EAX]                       ; 00451027
    LEA EDX,[EDX]                       ; 0045102d
    POP EBP                             ; 00451030
        ;   Label: LAB_00451030
    POP EDI                             ; 00451031
    POP ESI                             ; 00451032
    POP EBX                             ; 00451033
    RET                                 ; 00451034

