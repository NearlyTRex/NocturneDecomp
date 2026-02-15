; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00476000(CDemonLight *this_ptr,CRect *rect)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   rect
;
; XREF[1]:
;   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320 at 0042049d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476000
        ;   Label: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000
    PUSH ESI                            ; 00476001
    PUSH EDI                            ; 00476002
    PUSH EBP                            ; 00476003
    MOV EDX,dword ptr [ESP + 0x18]      ; 00476004
    MOV EAX,dword ptr [ESP + 0x18]      ; 00476008
    MOV EDX,dword ptr [EDX]             ; 0047600c
    MOV EAX,dword ptr [EAX]             ; 0047600e
    SAR EDX,0x1f                        ; 00476010
    SHL EDX,0x3                         ; 00476013
    SBB EAX,EDX                         ; 00476016
    SAR EAX,0x3                         ; 00476018
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047601b
    MOV ESI,EAX                         ; 0047601f
    MOV EDX,dword ptr [EDX + 0x4]       ; 00476021
    MOV EAX,dword ptr [ESP + 0x18]      ; 00476024
    SAR EDX,0x1f                        ; 00476028
    MOV EAX,dword ptr [EAX + 0x4]       ; 0047602b
    SHL EDX,0x3                         ; 0047602e
    SBB EAX,EDX                         ; 00476031
    SAR EAX,0x3                         ; 00476033
    MOV EDX,dword ptr [ESP + 0x18]      ; 00476036
    MOV ECX,EAX                         ; 0047603a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047603c
    MOV EDX,dword ptr [EDX + 0x8]       ; 00476040
    MOV EBX,dword ptr [EAX + 0x1cc0]    ; 00476043
    IMUL EDX,EBX                        ; 00476049
    MOV EAX,EDX                         ; 0047604c
    SAR EDX,0x1f                        ; 0047604e
    SHL EDX,0x3                         ; 00476051
    SBB EAX,EDX                         ; 00476054
    SAR EAX,0x3                         ; 00476056
    MOV EBP,dword ptr [ESP + 0x14]      ; 00476059
    MOV EBP,dword ptr [EBP + 0x2fa0]    ; 0047605d
    MOV EDI,dword ptr [ESP + 0x18]      ; 00476063
    ADD EBP,EAX                         ; 00476067
    MOV EAX,dword ptr [ESP + 0x18]      ; 00476069
    MOV EDI,dword ptr [EDI + 0x8]       ; 0047606d
    CMP EDI,dword ptr [EAX + 0xc]       ; 00476070
    JG 0x004760b4                       ; 00476073
        ;   XREF to: 004760b4 (CONDITIONAL_JUMP)  ; LAB_004760b4
    MOV EDX,ESI                         ; 00476075
        ;   Label: LAB_00476075
    CMP ESI,ECX                         ; 00476077
    JG 0x00476089                       ; 00476079
        ;   XREF to: 00476089 (CONDITIONAL_JUMP)  ; LAB_00476089
    LEA EAX,[ESI + EBP*0x1]             ; 0047607b
    CMP byte ptr [EAX],0x0              ; 0047607e
        ;   Label: LAB_0047607e
    JNZ 0x004760bb                      ; 00476081
        ;   XREF to: 004760bb (CONDITIONAL_JUMP)  ; LAB_004760bb
    INC EDX                             ; 00476083
    INC EAX                             ; 00476084
    CMP EDX,ECX                         ; 00476085
    JLE 0x0047607e                      ; 00476087
        ;   XREF to: 0047607e (CONDITIONAL_JUMP)  ; LAB_0047607e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00476089
        ;   Label: LAB_00476089
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047608d
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 00476091
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 00476097
    SAR EDX,0x1f                        ; 0047609d
    SHL EDX,0x3                         ; 004760a0
    SBB EAX,EDX                         ; 004760a3
    SAR EAX,0x3                         ; 004760a5
    ADD EBP,EAX                         ; 004760a8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004760aa
    INC EDI                             ; 004760ae
    CMP EDI,dword ptr [EAX + 0xc]       ; 004760af
    JLE 0x00476075                      ; 004760b2
        ;   XREF to: 00476075 (CONDITIONAL_JUMP)  ; LAB_00476075
    XOR EAX,EAX                         ; 004760b4
        ;   Label: LAB_004760b4
    POP EBP                             ; 004760b6
    POP EDI                             ; 004760b7
    POP ESI                             ; 004760b8
    POP EBX                             ; 004760b9
    RET                                 ; 004760ba
    MOV EAX,0x1                         ; 004760bb
        ;   Label: LAB_004760bb
    POP EBP                             ; 004760c0
    POP EDI                             ; 004760c1
    POP ESI                             ; 004760c2
    POP EBX                             ; 004760c3
    RET                                 ; 004760c4

