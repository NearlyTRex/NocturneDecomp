; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_0043fb20(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   right
; SSoftwareEdge *  Stack[0xc]:4   left
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40 at 00533fc2
;
; Referenced Globals:
;   undefined4 DAT_01308800
;   undefined4 DAT_01465928
;   undefined4 DAT_0150f450
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fb20
        ;   Label: core_dcamera.cpp_renderFlatColorScanline_FUN_0043fb20
    PUSH ESI                            ; 0043fb21
    PUSH EDI                            ; 0043fb22
    PUSH EBP                            ; 0043fb23
    SUB ESP,0x18                        ; 0043fb24
    MOV ESI,dword ptr [0x01465928]      ; 0043fb27 | DAT_01465928
    MOV EBP,dword ptr [ESP + 0x30]      ; 0043fb2d
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043fb31
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043fb35
    SUB ECX,dword ptr [0x01c35e4c]      ; 0043fb39 | DAT_01c35e4c
    MOV EBX,dword ptr [0x01308800]      ; 0043fb3f | DAT_01308800
    MOV dword ptr [ESP + 0x2c],ECX      ; 0043fb45
    CMP EBX,0x1                         ; 0043fb49
    JNZ 0x0043fb59                      ; 0043fb4c
        ;   XREF to: 0043fb59 (CONDITIONAL_JUMP)  ; LAB_0043fb59
    TEST byte ptr [ESP + 0x2c],0x1      ; 0043fb4e
    JNZ 0x0043fccb                      ; 0043fb53
        ;   XREF to: 0043fccb (CONDITIONAL_JUMP)  ; LAB_0043fccb
    CMP dword ptr [0x01308800],0x2      ; 0043fb59 | DAT_01308800
        ;   Label: LAB_0043fb59
    JNZ 0x0043fb6d                      ; 0043fb60
        ;   XREF to: 0043fb6d (CONDITIONAL_JUMP)  ; LAB_0043fb6d
    TEST byte ptr [ESP + 0x2c],0x3      ; 0043fb62
    JNZ 0x0043fccb                      ; 0043fb67
        ;   XREF to: 0043fccb (CONDITIONAL_JUMP)  ; LAB_0043fccb
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043fb6d
        ;   Label: LAB_0043fb6d
    MOV EAX,[0x01c35e48]                ; 0043fb70 | DAT_01c35e48
    SAR EDI,0x10                        ; 0043fb75
    SUB EDI,EAX                         ; 0043fb78
    MOV EAX,dword ptr [EDX + 0x8]       ; 0043fb7a
    MOV ECX,dword ptr [0x01c35e48]      ; 0043fb7d | DAT_01c35e48
    SAR EAX,0x10                        ; 0043fb83
    SUB EAX,ECX                         ; 0043fb86
    MOV dword ptr [ESP + 0x10],EAX      ; 0043fb88
    CMP EDI,EAX                         ; 0043fb8c
    JLE 0x0043fba0                      ; 0043fb8e
        ;   XREF to: 0043fba0 (CONDITIONAL_JUMP)  ; LAB_0043fba0
    MOV EAX,EDI                         ; 0043fb90
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043fb92
    MOV dword ptr [ESP + 0x10],EAX      ; 0043fb96
    MOV EAX,EBP                         ; 0043fb9a
    MOV EBP,EDX                         ; 0043fb9c
    MOV EDX,EAX                         ; 0043fb9e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043fba0
        ;   Label: LAB_0043fba0
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0043fba4
    LEA ECX,[EDI*0x4 + 0x0]             ; 0043fba8
    MOV EBP,dword ptr [EBP + 0x28]      ; 0043fbaf
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2b64c] ; 0043fbb2
    MOV EDX,dword ptr [EDX + 0x28]      ; 0043fbb9
    ADD EAX,ECX                         ; 0043fbbc
    MOV CL,byte ptr [0x01308800]        ; 0043fbbe | DAT_01308800
    MOV dword ptr [ESP + 0x14],EAX      ; 0043fbc4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043fbc8
    SUB EDX,EBP                         ; 0043fbcc
    SAR EAX,CL                          ; 0043fbce
    SAR EDI,CL                          ; 0043fbd0
    MOV dword ptr [ESP + 0x10],EAX      ; 0043fbd2
    SUB EAX,EDI                         ; 0043fbd6
    SAR EBX,CL                          ; 0043fbd8
    LEA ECX,[EAX + 0x1]                 ; 0043fbda
    MOV EAX,EDX                         ; 0043fbdd
    SAR EDX,0x1f                        ; 0043fbdf
    IDIV ECX                            ; 0043fbe2
    MOV dword ptr [ESP + 0xc],EAX       ; 0043fbe4
    MOV EAX,[0x0150f450]                ; 0043fbe8 | DAT_0150f450
    MOV EDX,EAX                         ; 0043fbed
    SAR EDX,0x1f                        ; 0043fbef
    SHL EDX,0x8                         ; 0043fbf2
    SBB EAX,EDX                         ; 0043fbf5
    SAR EAX,0x8                         ; 0043fbf7
    MOV dword ptr [ESP + 0x2c],EBX      ; 0043fbfa
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043fbfe
    MOV BL,AL                           ; 0043fc02
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043fc04
    ADD EAX,EDX                         ; 0043fc0b
    SHL EAX,0x6                         ; 0043fc0d
    CMP ESI,0x1                         ; 0043fc10
    JLE 0x0043fc7f                      ; 0043fc13
        ;   XREF to: 0043fc7f (CONDITIONAL_JUMP)  ; LAB_0043fc7f
    MOV EDX,0x1                         ; 0043fc15
    MOV CL,byte ptr [0x01308800]        ; 0043fc1a | DAT_01308800
    SHL EDX,CL                          ; 0043fc20
    LEA ECX,[EDX*0x4 + 0x0]             ; 0043fc22
    MOV dword ptr [ESP + 0x4],EAX       ; 0043fc29
    MOV dword ptr [ESP + 0x8],ECX       ; 0043fc2d
    XOR ECX,ECX                         ; 0043fc31
    CMP EDI,dword ptr [ESP + 0x10]      ; 0043fc33
        ;   Label: LAB_0043fc33
    JGE 0x0043fccb                      ; 0043fc37
        ;   XREF to: 0043fccb (CONDITIONAL_JUMP)  ; LAB_0043fccb
    MOV EAX,EBP                         ; 0043fc3d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043fc3f
    SAR EAX,0x8                         ; 0043fc43
    CMP EAX,dword ptr [EDX]             ; 0043fc46
    JA 0x0043fc61                       ; 0043fc48
        ;   XREF to: 0043fc61 (CONDITIONAL_JUMP)  ; LAB_0043fc61
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043fc4a
        ;   Label: LAB_0043fc4a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043fc4e
    INC EDI                             ; 0043fc52
    ADD EDX,EAX                         ; 0043fc53
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043fc55
    MOV dword ptr [ESP + 0x14],EDX      ; 0043fc59
    ADD EBP,EAX                         ; 0043fc5d
    JMP 0x0043fc33                      ; 0043fc5f
        ;   XREF to: 0043fc33 (UNCONDITIONAL_JUMP)  ; LAB_0043fc33
    MOV EDX,ECX                         ; 0043fc61
        ;   Label: LAB_0043fc61
    TEST ESI,ESI                        ; 0043fc63
    JLE 0x0043fc4a                      ; 0043fc65
        ;   XREF to: 0043fc4a (CONDITIONAL_JUMP)  ; LAB_0043fc4a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043fc67
    ADD EAX,EDI                         ; 0043fc6b
    ADD EAX,0x12c00                     ; 0043fc6d
        ;   Label: LAB_0043fc6d
    INC EDX                             ; 0043fc72
    MOV byte ptr [EAX + 0x1326d20],BL   ; 0043fc73
    CMP EDX,ESI                         ; 0043fc79
    JL 0x0043fc6d                       ; 0043fc7b
        ;   XREF to: 0043fc6d (CONDITIONAL_JUMP)  ; LAB_0043fc6d
    JMP 0x0043fc4a                      ; 0043fc7d
        ;   XREF to: 0043fc4a (UNCONDITIONAL_JUMP)  ; LAB_0043fc4a
    ADD EAX,0x1326d20                   ; 0043fc7f
        ;   Label: LAB_0043fc7f
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043fc84
    ADD EAX,EDI                         ; 0043fc88
    CMP EDI,EDX                         ; 0043fc8a
    JGE 0x0043fccb                      ; 0043fc8c
        ;   XREF to: 0043fccb (CONDITIONAL_JUMP)  ; LAB_0043fccb
    MOV EDX,EBP                         ; 0043fc8e
        ;   Label: LAB_0043fc8e
    SAR EDX,0x8                         ; 0043fc90
    MOV dword ptr [ESP],EDX             ; 0043fc93
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043fc96
    MOV ECX,dword ptr [ESP]             ; 0043fc9a
    CMP ECX,dword ptr [EDX]             ; 0043fc9d
    JA 0x0043fcd9                       ; 0043fc9f
        ;   XREF to: 0043fcd9 (CONDITIONAL_JUMP)  ; LAB_0043fcd9
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043fca1
        ;   Label: LAB_0043fca1
    MOV EDX,0x1                         ; 0043fca5
    ADD EBP,ECX                         ; 0043fcaa
    MOV CL,byte ptr [0x01308800]        ; 0043fcac | DAT_01308800
    INC EDI                             ; 0043fcb2
    SHL EDX,CL                          ; 0043fcb3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043fcb5
    SHL EDX,0x2                         ; 0043fcb9
    INC EAX                             ; 0043fcbc
    ADD ECX,EDX                         ; 0043fcbd
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043fcbf
    MOV dword ptr [ESP + 0x14],ECX      ; 0043fcc3
    CMP EDI,EDX                         ; 0043fcc7
    JL 0x0043fc8e                       ; 0043fcc9
        ;   XREF to: 0043fc8e (CONDITIONAL_JUMP)  ; LAB_0043fc8e
    MOV dword ptr [0x01465928],ESI      ; 0043fccb | DAT_01465928
        ;   Label: LAB_0043fccb
    ADD ESP,0x18                        ; 0043fcd1
        ;   Label: LAB_0043fcd1
    POP EBP                             ; 0043fcd4
    POP EDI                             ; 0043fcd5
    POP ESI                             ; 0043fcd6
    POP EBX                             ; 0043fcd7
    RET                                 ; 0043fcd8
    MOV byte ptr [EAX],BL               ; 0043fcd9
        ;   Label: LAB_0043fcd9
    JMP 0x0043fca1                      ; 0043fcdb
        ;   XREF to: 0043fca1 (UNCONDITIONAL_JUMP)  ; LAB_0043fca1

