; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0(CDemonLight *this_ptr,CRect *rect)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   rect
;
; XREF[1]:
;   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0 at 0041ce5d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451aa0
        ;   Label: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0
    PUSH ESI                            ; 00451aa1
    PUSH EDI                            ; 00451aa2
    PUSH EBP                            ; 00451aa3
    MOV EDX,dword ptr [ESP + 0x18]      ; 00451aa4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00451aa8
    MOV EDX,dword ptr [EDX]             ; 00451aac
    MOV EAX,dword ptr [EAX]             ; 00451aae
    SAR EDX,0x1f                        ; 00451ab0
    SHL EDX,0x3                         ; 00451ab3
    SBB EAX,EDX                         ; 00451ab6
    SAR EAX,0x3                         ; 00451ab8
    MOV EDX,dword ptr [ESP + 0x18]      ; 00451abb
    MOV ESI,EAX                         ; 00451abf
    MOV EDX,dword ptr [EDX + 0x4]       ; 00451ac1
    MOV EAX,dword ptr [ESP + 0x18]      ; 00451ac4
    SAR EDX,0x1f                        ; 00451ac8
    MOV EAX,dword ptr [EAX + 0x4]       ; 00451acb
    SHL EDX,0x3                         ; 00451ace
    SBB EAX,EDX                         ; 00451ad1
    SAR EAX,0x3                         ; 00451ad3
    MOV EDX,dword ptr [ESP + 0x18]      ; 00451ad6
    MOV ECX,EAX                         ; 00451ada
    MOV EAX,dword ptr [ESP + 0x14]      ; 00451adc
    MOV EDX,dword ptr [EDX + 0x8]       ; 00451ae0
    MOV EBX,dword ptr [EAX + 0x1cc0]    ; 00451ae3
    IMUL EDX,EBX                        ; 00451ae9
    MOV EAX,EDX                         ; 00451aec
    SAR EDX,0x1f                        ; 00451aee
    SHL EDX,0x3                         ; 00451af1
    SBB EAX,EDX                         ; 00451af4
    SAR EAX,0x3                         ; 00451af6
    MOV EBP,dword ptr [ESP + 0x14]      ; 00451af9
    MOV EBP,dword ptr [EBP + 0x2fa0]    ; 00451afd
    MOV EDI,dword ptr [ESP + 0x18]      ; 00451b03
    ADD EBP,EAX                         ; 00451b07
    MOV EAX,dword ptr [ESP + 0x18]      ; 00451b09
    MOV EDI,dword ptr [EDI + 0x8]       ; 00451b0d
    CMP EDI,dword ptr [EAX + 0xc]       ; 00451b10
    JG 0x00451b54                       ; 00451b13
        ;   XREF to: 00451b54 (CONDITIONAL_JUMP)  ; LAB_00451b54
    MOV EDX,ESI                         ; 00451b15
        ;   Label: LAB_00451b15
    CMP ESI,ECX                         ; 00451b17
    JG 0x00451b29                       ; 00451b19
        ;   XREF to: 00451b29 (CONDITIONAL_JUMP)  ; LAB_00451b29
    LEA EAX,[ESI + EBP*0x1]             ; 00451b1b
    CMP byte ptr [EAX],0x0              ; 00451b1e
        ;   Label: LAB_00451b1e
    JNZ 0x00451b5b                      ; 00451b21
        ;   XREF to: 00451b5b (CONDITIONAL_JUMP)  ; LAB_00451b5b
    INC EDX                             ; 00451b23
    INC EAX                             ; 00451b24
    CMP EDX,ECX                         ; 00451b25
    JLE 0x00451b1e                      ; 00451b27
        ;   XREF to: 00451b1e (CONDITIONAL_JUMP)  ; LAB_00451b1e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00451b29
        ;   Label: LAB_00451b29
    MOV EAX,dword ptr [ESP + 0x14]      ; 00451b2d
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 00451b31
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 00451b37
    SAR EDX,0x1f                        ; 00451b3d
    SHL EDX,0x3                         ; 00451b40
    SBB EAX,EDX                         ; 00451b43
    SAR EAX,0x3                         ; 00451b45
    ADD EBP,EAX                         ; 00451b48
    MOV EAX,dword ptr [ESP + 0x18]      ; 00451b4a
    INC EDI                             ; 00451b4e
    CMP EDI,dword ptr [EAX + 0xc]       ; 00451b4f
    JLE 0x00451b15                      ; 00451b52
        ;   XREF to: 00451b15 (CONDITIONAL_JUMP)  ; LAB_00451b15
    XOR EAX,EAX                         ; 00451b54
        ;   Label: LAB_00451b54
    POP EBP                             ; 00451b56
    POP EDI                             ; 00451b57
    POP ESI                             ; 00451b58
    POP EBX                             ; 00451b59
    RET                                 ; 00451b5a
    MOV EAX,0x1                         ; 00451b5b
        ;   Label: LAB_00451b5b
    POP EBP                             ; 00451b60
    POP EDI                             ; 00451b61
    POP ESI                             ; 00451b62
    POP EBX                             ; 00451b63
    RET                                 ; 00451b64

