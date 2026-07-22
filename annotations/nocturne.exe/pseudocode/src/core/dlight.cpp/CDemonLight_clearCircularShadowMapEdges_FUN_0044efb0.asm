; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(int param_1)
;
;
; XREF[3]:
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 00508624
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 0050986f
;   core_set.cpp_FUN_0050a260 at 0050a3b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044efb0
        ;   Label: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0
    PUSH ESI                            ; 0044efb1
    PUSH EDI                            ; 0044efb2
    PUSH EBP                            ; 0044efb3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0044efb4
    CMP dword ptr [ECX + 0x1cb8],0x0    ; 0044efb8
    JZ 0x0044ef7b                       ; 0044efbf
        ;   XREF to: 0044ef7b (CONDITIONAL_JUMP)  ; LAB_0044ef7b
    XOR ESI,ESI                         ; 0044efc1
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044efc3
        ;   Label: LAB_0044efc3
    MOV EDX,EAX                         ; 0044efc9
    SAR EDX,0x1f                        ; 0044efcb
    SUB EAX,EDX                         ; 0044efce
    SAR EAX,0x1                         ; 0044efd0
    CMP ESI,EAX                         ; 0044efd2
    JGE 0x0044ef7b                      ; 0044efd4
        ;   XREF to: 0044ef7b (CONDITIONAL_JUMP)  ; LAB_0044ef7b
    XOR EBX,EBX                         ; 0044efd6
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0044efd8
        ;   Label: LAB_0044efd8
    MOV EDX,EAX                         ; 0044efde
    SAR EDX,0x1f                        ; 0044efe0
    SUB EAX,EDX                         ; 0044efe3
    SAR EAX,0x1                         ; 0044efe5
    CMP EBX,EAX                         ; 0044efe7
    JL 0x0044efee                       ; 0044efe9
        ;   XREF to: 0044efee (CONDITIONAL_JUMP)  ; LAB_0044efee
    INC ESI                             ; 0044efeb
    JMP 0x0044efc3                      ; 0044efec
        ;   XREF to: 0044efc3 (UNCONDITIONAL_JUMP)  ; LAB_0044efc3
    MOV EDI,EAX                         ; 0044efee
        ;   Label: LAB_0044efee
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044eff0
    MOV EDX,EAX                         ; 0044eff6
    SAR EDX,0x1f                        ; 0044eff8
    SUB EAX,EDX                         ; 0044effb
    SAR EAX,0x1                         ; 0044effd
    MOV EBP,EAX                         ; 0044efff
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0044f001
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044f007
    IMUL EDX,EAX                        ; 0044f00d
    MOV EAX,EDX                         ; 0044f010
    SAR EDX,0x1f                        ; 0044f012
    SHL EDX,0x2                         ; 0044f015
    SBB EAX,EDX                         ; 0044f018
    SAR EAX,0x2                         ; 0044f01a
    SUB EDI,EBX                         ; 0044f01d
    IMUL EDI,EDI                        ; 0044f01f
    SUB EBP,ESI                         ; 0044f022
    IMUL EBP,EBP                        ; 0044f024
    ADD EDI,EBP                         ; 0044f027
    CMP EDI,EAX                         ; 0044f029
    JLE 0x0044f0a9                      ; 0044f02b
        ;   XREF to: 0044f0a9 (CONDITIONAL_JUMP)  ; LAB_0044f0a9
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0044f02d
    IMUL EAX,ESI                        ; 0044f033
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0044f036
    ADD EAX,EBX                         ; 0044f03c
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0044f03e
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0044f044
    LEA EDX,[EAX + -0x1]                ; 0044f04a
    IMUL EAX,ESI                        ; 0044f04d
    SUB EDX,EBX                         ; 0044f050
    ADD EAX,EDX                         ; 0044f052
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0044f054
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0044f05a
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044f060
    DEC EAX                             ; 0044f066
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0044f067
    SUB EAX,ESI                         ; 0044f06d
    IMUL EDX,EAX                        ; 0044f06f
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0044f072
    DEC EAX                             ; 0044f078
    SUB EAX,EBX                         ; 0044f079
    ADD EAX,EDX                         ; 0044f07b
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0044f07d
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0044f083
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044f089
    DEC EAX                             ; 0044f08f
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0044f090
    SUB EAX,ESI                         ; 0044f096
    IMUL EAX,EDX                        ; 0044f098
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0044f09b
    ADD EAX,EBX                         ; 0044f0a1
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0044f0a3
    INC EBX                             ; 0044f0a9
        ;   Label: LAB_0044f0a9
    JMP 0x0044efd8                      ; 0044f0aa
        ;   XREF to: 0044efd8 (UNCONDITIONAL_JUMP)  ; LAB_0044efd8

