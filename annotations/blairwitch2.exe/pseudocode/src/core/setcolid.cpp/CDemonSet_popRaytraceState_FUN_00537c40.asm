; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_actor.cpp_FUN_00408c30 at 00408cd9
;   core_fire.cpp_FUN_0049db20 at 0049e0f0
;   core_lightgun.cpp_FUN_004e2e70 at 004e3090
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005e5e9c
;   TerminatedCString s_CDemonSet_popRaytraceSta_005e5eb1
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02093614
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537c40
        ;   Label: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40
    PUSH ESI                            ; 00537c41
    PUSH EDI                            ; 00537c42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00537c43
    CMP dword ptr [0x02093614],0x1      ; 00537c47 | DAT_02093614
    JL 0x00537db5                       ; 00537c4e
        ;   XREF to: 00537db5 (CONDITIONAL_JUMP)  ; LAB_00537db5
    MOV EDI,dword ptr [0x02093614]      ; 00537c54 | DAT_02093614
        ;   Label: LAB_00537c54
    DEC EDI                             ; 00537c5a
    MOV dword ptr [0x02093614],EDI      ; 00537c5b | DAT_02093614
    LEA EAX,[EDI*0x4 + 0x0]             ; 00537c61
    ADD EAX,EDI                         ; 00537c68
    MOV EDI,0x2093618                   ; 00537c6a
    SHL EAX,0x5                         ; 00537c6f
    ADD EDI,EAX                         ; 00537c72
    MOV EAX,dword ptr [EDI]             ; 00537c74
    MOV dword ptr [EBX + 0x15f694],EAX  ; 00537c76
    MOV EAX,dword ptr [EDI + 0x4]       ; 00537c7c
    MOV dword ptr [EBX + 0x15f698],EAX  ; 00537c7f
    MOV EAX,dword ptr [EDI + 0x8]       ; 00537c85
    MOV dword ptr [EBX + 0x15f69c],EAX  ; 00537c88
    MOV EAX,dword ptr [EDI + 0xc]       ; 00537c8e
    MOV dword ptr [EBX + 0x15f6a0],EAX  ; 00537c91
    MOV EAX,dword ptr [EDI + 0x10]      ; 00537c97
    MOV dword ptr [EBX + 0x15f6a4],EAX  ; 00537c9a
    MOV EAX,dword ptr [EDI + 0x14]      ; 00537ca0
    XOR ECX,ECX                         ; 00537ca3
    MOV dword ptr [EBX + 0x15f6a8],EAX  ; 00537ca5
    TEST EAX,EAX                        ; 00537cab
    JLE 0x00537cd0                      ; 00537cad
        ;   XREF to: 00537cd0 (CONDITIONAL_JUMP)  ; LAB_00537cd0
    MOV EAX,EDI                         ; 00537caf
    MOV EDX,EBX                         ; 00537cb1
    ADD EDX,0x4                         ; 00537cb3
        ;   Label: LAB_00537cb3
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00537cb6
    MOV dword ptr [EDX + 0x15f6ac],ESI  ; 00537cb9
    INC ECX                             ; 00537cbf
    MOV ESI,dword ptr [EBX + 0x15f6a8]  ; 00537cc0
    ADD EAX,0x4                         ; 00537cc6
    CMP ECX,ESI                         ; 00537cc9
    JL 0x00537cb3                       ; 00537ccb
        ;   XREF to: 00537cb3 (CONDITIONAL_JUMP)  ; LAB_00537cb3
    LEA EAX,[EAX]                       ; 00537ccd
    MOV EAX,dword ptr [EDI + 0x18]      ; 00537cd0
        ;   Label: LAB_00537cd0
    LEA EDX,[EDI + 0x44]                ; 00537cd3
    MOV dword ptr [EBX + 0x15f6ac],EAX  ; 00537cd6
    LEA EAX,[EBX + 0x14d110]            ; 00537cdc
    CMP EAX,EDX                         ; 00537ce2
    JZ 0x00537cf6                       ; 00537ce4
        ;   XREF to: 00537cf6 (CONDITIONAL_JUMP)  ; LAB_00537cf6
    MOV ECX,dword ptr [EDX]             ; 00537ce6
    MOV dword ptr [EAX],ECX             ; 00537ce8
    MOV ECX,dword ptr [EDX + 0x4]       ; 00537cea
    MOV dword ptr [EAX + 0x4],ECX       ; 00537ced
    MOV ECX,dword ptr [EDX + 0x8]       ; 00537cf0
    MOV dword ptr [EAX + 0x8],ECX       ; 00537cf3
    LEA EDX,[EDI + 0x50]                ; 00537cf6
        ;   Label: LAB_00537cf6
    LEA EAX,[EBX + 0x14d11c]            ; 00537cf9
    CMP EAX,EDX                         ; 00537cff
    JZ 0x00537d13                       ; 00537d01
        ;   XREF to: 00537d13 (CONDITIONAL_JUMP)  ; LAB_00537d13
    MOV ECX,dword ptr [EDX]             ; 00537d03
    MOV dword ptr [EAX],ECX             ; 00537d05
    MOV ECX,dword ptr [EDX + 0x4]       ; 00537d07
    MOV dword ptr [EAX + 0x4],ECX       ; 00537d0a
    MOV ECX,dword ptr [EDX + 0x8]       ; 00537d0d
    MOV dword ptr [EAX + 0x8],ECX       ; 00537d10
    FLD float ptr [EDI + 0x5c]          ; 00537d13
        ;   Label: LAB_00537d13
    LEA EAX,[EBX + 0x15f6e0]            ; 00537d16
    LEA EDX,[EDI + 0x64]                ; 00537d1c
    FSTP float ptr [EBX + 0x15f6d8]     ; 00537d1f
    MOV ECX,dword ptr [EDI + 0x60]      ; 00537d25
    MOV dword ptr [EBX + 0x15f6dc],ECX  ; 00537d28
    CMP EAX,EDX                         ; 00537d2e
    JZ 0x00537d42                       ; 00537d30
        ;   XREF to: 00537d42 (CONDITIONAL_JUMP)  ; LAB_00537d42
    MOV ECX,dword ptr [EDX]             ; 00537d32
    MOV dword ptr [EAX],ECX             ; 00537d34
    MOV ECX,dword ptr [EDX + 0x4]       ; 00537d36
    MOV dword ptr [EAX + 0x4],ECX       ; 00537d39
    MOV ECX,dword ptr [EDX + 0x8]       ; 00537d3c
    MOV dword ptr [EAX + 0x8],ECX       ; 00537d3f
    MOV EAX,dword ptr [EDI + 0x70]      ; 00537d42
        ;   Label: LAB_00537d42
    LEA EDX,[EDI + 0x78]                ; 00537d45
    MOV dword ptr [EBX + 0x15f6ec],EAX  ; 00537d48
    LEA EAX,[EBX + 0x14d128]            ; 00537d4e
    CMP EAX,EDX                         ; 00537d54
    JZ 0x00537d68                       ; 00537d56
        ;   XREF to: 00537d68 (CONDITIONAL_JUMP)  ; LAB_00537d68
    MOV ECX,dword ptr [EDX]             ; 00537d58
    MOV dword ptr [EAX],ECX             ; 00537d5a
    MOV ECX,dword ptr [EDX + 0x4]       ; 00537d5c
    MOV dword ptr [EAX + 0x4],ECX       ; 00537d5f
    MOV ECX,dword ptr [EDX + 0x8]       ; 00537d62
    MOV dword ptr [EAX + 0x8],ECX       ; 00537d65
    MOV EAX,dword ptr [EDI + 0x84]      ; 00537d68
        ;   Label: LAB_00537d68
    LEA EDX,[EBX + 0x14d138]            ; 00537d6e
    MOV dword ptr [EBX + 0x14d134],EAX  ; 00537d74
    LEA EAX,[EDI + 0x88]                ; 00537d7a
    CMP EDX,EAX                         ; 00537d80
    JNZ 0x00537ddd                      ; 00537d82
        ;   XREF to: 00537ddd (CONDITIONAL_JUMP)  ; LAB_00537ddd
    MOV EAX,dword ptr [EDI + 0x94]      ; 00537d84
        ;   Label: LAB_00537d84
    MOV dword ptr [EBX + 0x14d144],EAX  ; 00537d8a
    MOV EAX,dword ptr [EDI + 0x98]      ; 00537d90
    MOV dword ptr [EBX + 0x14d148],EAX  ; 00537d96
    MOV EAX,dword ptr [EDI + 0x9c]      ; 00537d9c
    MOV dword ptr [EBX + 0x14d14c],EAX  ; 00537da2
    MOV EAX,dword ptr [EDI + 0x74]      ; 00537da8
    MOV dword ptr [EBX + 0x15f6f0],EAX  ; 00537dab
    POP EDI                             ; 00537db1
    POP ESI                             ; 00537db2
    POP EBX                             ; 00537db3
    RET                                 ; 00537db4
    MOV ECX,0x5e5e9c                    ; 00537db5 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00537db5
    MOV ESI,0x42a                       ; 00537dba
    PUSH 0x5e5eb1                       ; 00537dbf | = "CDemonSet::popRaytraceState - stack e..."
    MOV dword ptr [0x01d046a0],ECX      ; 00537dc4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00537dca | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00537dd0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00537dd5
    JMP 0x00537c54                      ; 00537dd8
        ;   XREF to: 00537c54 (UNCONDITIONAL_JUMP)  ; LAB_00537c54
    MOV ECX,dword ptr [EAX]             ; 00537ddd
        ;   Label: LAB_00537ddd
    MOV dword ptr [EDX],ECX             ; 00537ddf
    MOV ECX,dword ptr [EAX + 0x4]       ; 00537de1
    MOV dword ptr [EDX + 0x4],ECX       ; 00537de4
    MOV ECX,dword ptr [EAX + 0x8]       ; 00537de7
    MOV dword ptr [EDX + 0x8],ECX       ; 00537dea
    JMP 0x00537d84                      ; 00537ded
        ;   XREF to: 00537d84 (UNCONDITIONAL_JUMP)  ; LAB_00537d84

