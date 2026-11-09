; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_0044d060(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   right
; SSoftwareEdge *  Stack[0xc]:4   left
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0 at 0045ad50
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170 at 0045d499
;
; Referenced Globals:
;   undefined4 DAT_013405b0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d060
        ;   Label: core_dcamera.cpp_renderCoronaDepthScanline_FUN_0044d060
    PUSH ESI                            ; 0044d061
    PUSH EDI                            ; 0044d062
    PUSH EBP                            ; 0044d063
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044d064
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044d068
    MOV ECX,dword ptr [ESP + 0x14]      ; 0044d06c
    SUB ECX,dword ptr [0x01c6b5ac]      ; 0044d070 | DAT_01c6b5ac
    MOV EBX,dword ptr [0x013405b0]      ; 0044d076 | DAT_013405b0
    MOV dword ptr [ESP + 0x14],ECX      ; 0044d07c
    CMP EBX,0x1                         ; 0044d080
    JNZ 0x0044d090                      ; 0044d083
        ;   XREF to: 0044d090 (CONDITIONAL_JUMP)  ; LAB_0044d090
    TEST byte ptr [ESP + 0x14],0x1      ; 0044d085
    JNZ 0x0044d170                      ; 0044d08a
        ;   XREF to: 0044d170 (CONDITIONAL_JUMP)  ; LAB_0044d170
    CMP dword ptr [0x013405b0],0x2      ; 0044d090 | DAT_013405b0
        ;   Label: LAB_0044d090
    JNZ 0x0044d0a4                      ; 0044d097
        ;   XREF to: 0044d0a4 (CONDITIONAL_JUMP)  ; LAB_0044d0a4
    TEST byte ptr [ESP + 0x14],0x3      ; 0044d099
    JNZ 0x0044d170                      ; 0044d09e
        ;   XREF to: 0044d170 (CONDITIONAL_JUMP)  ; LAB_0044d170
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044d0a4
        ;   Label: LAB_0044d0a4
    MOV CL,byte ptr [0x013405b0]        ; 0044d0a8 | DAT_013405b0
    MOV EAX,[0x01c6b5a8]                ; 0044d0ae | DAT_01c6b5a8
    MOV EBX,dword ptr [EDI + 0x8]       ; 0044d0b3
    MOV ESI,dword ptr [EDX + 0x8]       ; 0044d0b6
    SAR EBX,0x10                        ; 0044d0b9
    SAR ESI,0x10                        ; 0044d0bc
    SAR EBP,CL                          ; 0044d0bf
    SUB EBX,EAX                         ; 0044d0c1
    SUB ESI,EAX                         ; 0044d0c3
    SAR EBX,CL                          ; 0044d0c5
    SAR ESI,CL                          ; 0044d0c7
    MOV dword ptr [ESP + 0x14],EBP      ; 0044d0c9
    CMP EBX,ESI                         ; 0044d0cd
    JLE 0x0044d0dd                      ; 0044d0cf
        ;   XREF to: 0044d0dd (CONDITIONAL_JUMP)  ; LAB_0044d0dd
    MOV EAX,EBX                         ; 0044d0d1
    MOV EBX,ESI                         ; 0044d0d3
    MOV ESI,EAX                         ; 0044d0d5
    MOV EAX,EDI                         ; 0044d0d7
    MOV EDI,EDX                         ; 0044d0d9
    MOV EDX,EAX                         ; 0044d0db
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044d0dd
        ;   Label: LAB_0044d0dd
    SHL EAX,0x2                         ; 0044d0e1
    CMP EBX,dword ptr [EAX + 0x14fb300] ; 0044d0e4
    JNC 0x0044d0fb                      ; 0044d0ea
        ;   XREF to: 0044d0fb (CONDITIONAL_JUMP)  ; LAB_0044d0fb
    MOV dword ptr [EAX + 0x14fb300],EBX ; 0044d0ec
    MOV ECX,dword ptr [EDI + 0x10]      ; 0044d0f2
    MOV dword ptr [EAX + 0x1546a80],ECX ; 0044d0f5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044d0fb
        ;   Label: LAB_0044d0fb
    SHL EAX,0x2                         ; 0044d0ff
    CMP ESI,dword ptr [EAX + 0x14fb6c0] ; 0044d102
    JBE 0x0044d119                      ; 0044d108
        ;   XREF to: 0044d119 (CONDITIONAL_JUMP)  ; LAB_0044d119
    MOV dword ptr [EAX + 0x14fb6c0],ESI ; 0044d10a
    MOV ECX,dword ptr [EDX + 0x10]      ; 0044d110
    MOV dword ptr [EAX + 0x1546e40],ECX ; 0044d113
    MOV EAX,ESI                         ; 0044d119
        ;   Label: LAB_0044d119
    MOV EDX,dword ptr [EDX + 0x28]      ; 0044d11b
    MOV ECX,dword ptr [EDI + 0x28]      ; 0044d11e
    SUB EAX,EBX                         ; 0044d121
    SUB EDX,ECX                         ; 0044d123
    LEA EDI,[EAX + 0x1]                 ; 0044d125
    MOV EAX,EDX                         ; 0044d128
    SAR EDX,0x1f                        ; 0044d12a
    IDIV EDI                            ; 0044d12d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d12f
    MOV EDI,EAX                         ; 0044d133
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044d135
    ADD EAX,EDX                         ; 0044d13c
    MOV EDX,0x14fba80                   ; 0044d13e
    SHL EAX,0x8                         ; 0044d143
    ADD EDX,EAX                         ; 0044d146
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044d148
    ADD EAX,EDX                         ; 0044d14f
    CMP EBX,ESI                         ; 0044d151
    JGE 0x0044d170                      ; 0044d153
        ;   XREF to: 0044d170 (CONDITIONAL_JUMP)  ; LAB_0044d170
    MOV EDX,ECX                         ; 0044d155
        ;   Label: LAB_0044d155
    INC EBX                             ; 0044d157
    ADD EAX,0x4                         ; 0044d158
    SAR EDX,0x8                         ; 0044d15b
    ADD ECX,EDI                         ; 0044d15e
    MOV dword ptr [EAX + -0x4],EDX      ; 0044d160
    CMP EBX,ESI                         ; 0044d163
    JL 0x0044d155                       ; 0044d165
        ;   XREF to: 0044d155 (CONDITIONAL_JUMP)  ; LAB_0044d155
    LEA EAX,[EAX]                       ; 0044d167
    LEA EDX,[EDX]                       ; 0044d16d
    POP EBP                             ; 0044d170
        ;   Label: LAB_0044d170
    POP EDI                             ; 0044d171
    POP ESI                             ; 0044d172
    POP EBX                             ; 0044d173
    RET                                 ; 0044d174

