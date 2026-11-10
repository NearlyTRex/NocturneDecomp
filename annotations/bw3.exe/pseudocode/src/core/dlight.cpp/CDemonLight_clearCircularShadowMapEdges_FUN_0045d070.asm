; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 00534584
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00535a80 at 00535b8f
;   core_set.cpp_FUN_005365c0 at 00536731
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d070
        ;   Label: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070
    PUSH ESI                            ; 0045d071
    PUSH EDI                            ; 0045d072
    PUSH EBP                            ; 0045d073
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045d074
    CMP dword ptr [ECX + 0x1cb8],0x0    ; 0045d078
    JZ 0x0045d036                       ; 0045d07f
        ;   XREF to: 0045d036 (CONDITIONAL_JUMP)  ; LAB_0045d036
    XOR ESI,ESI                         ; 0045d081
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0045d083
        ;   Label: LAB_0045d083
    MOV EDX,EAX                         ; 0045d089
    SAR EDX,0x1f                        ; 0045d08b
    SUB EAX,EDX                         ; 0045d08e
    SAR EAX,0x1                         ; 0045d090
    CMP ESI,EAX                         ; 0045d092
    JGE 0x0045d036                      ; 0045d094
        ;   XREF to: 0045d036 (CONDITIONAL_JUMP)  ; LAB_0045d036
    XOR EBX,EBX                         ; 0045d096
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0045d098
        ;   Label: LAB_0045d098
    MOV EDX,EAX                         ; 0045d09e
    SAR EDX,0x1f                        ; 0045d0a0
    SUB EAX,EDX                         ; 0045d0a3
    SAR EAX,0x1                         ; 0045d0a5
    CMP EBX,EAX                         ; 0045d0a7
    JL 0x0045d0ae                       ; 0045d0a9
        ;   XREF to: 0045d0ae (CONDITIONAL_JUMP)  ; LAB_0045d0ae
    INC ESI                             ; 0045d0ab
    JMP 0x0045d083                      ; 0045d0ac
        ;   XREF to: 0045d083 (UNCONDITIONAL_JUMP)  ; LAB_0045d083
    MOV EDI,EAX                         ; 0045d0ae
        ;   Label: LAB_0045d0ae
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0045d0b0
    MOV EDX,EAX                         ; 0045d0b6
    SAR EDX,0x1f                        ; 0045d0b8
    SUB EAX,EDX                         ; 0045d0bb
    SAR EAX,0x1                         ; 0045d0bd
    MOV EBP,EAX                         ; 0045d0bf
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0045d0c1
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0045d0c7
    IMUL EDX,EAX                        ; 0045d0cd
    MOV EAX,EDX                         ; 0045d0d0
    SAR EDX,0x1f                        ; 0045d0d2
    SHL EDX,0x2                         ; 0045d0d5
    SBB EAX,EDX                         ; 0045d0d8
    SAR EAX,0x2                         ; 0045d0da
    SUB EDI,EBX                         ; 0045d0dd
    IMUL EDI,EDI                        ; 0045d0df
    SUB EBP,ESI                         ; 0045d0e2
    IMUL EBP,EBP                        ; 0045d0e4
    ADD EDI,EBP                         ; 0045d0e7
    CMP EDI,EAX                         ; 0045d0e9
    JLE 0x0045d169                      ; 0045d0eb
        ;   XREF to: 0045d169 (CONDITIONAL_JUMP)  ; LAB_0045d169
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0045d0ed
    IMUL EAX,ESI                        ; 0045d0f3
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0045d0f6
    ADD EAX,EBX                         ; 0045d0fc
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0045d0fe
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0045d104
    LEA EDX,[EAX + -0x1]                ; 0045d10a
    IMUL EAX,ESI                        ; 0045d10d
    SUB EDX,EBX                         ; 0045d110
    ADD EAX,EDX                         ; 0045d112
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0045d114
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0045d11a
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0045d120
    DEC EAX                             ; 0045d126
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0045d127
    SUB EAX,ESI                         ; 0045d12d
    IMUL EDX,EAX                        ; 0045d12f
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0045d132
    DEC EAX                             ; 0045d138
    SUB EAX,EBX                         ; 0045d139
    ADD EAX,EDX                         ; 0045d13b
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0045d13d
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0045d143
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0045d149
    DEC EAX                             ; 0045d14f
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0045d150
    SUB EAX,ESI                         ; 0045d156
    IMUL EAX,EDX                        ; 0045d158
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0045d15b
    ADD EAX,EBX                         ; 0045d161
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0045d163
    INC EBX                             ; 0045d169
        ;   Label: LAB_0045d169
    JMP 0x0045d098                      ; 0045d16a
        ;   XREF to: 0045d098 (UNCONDITIONAL_JUMP)  ; LAB_0045d098

