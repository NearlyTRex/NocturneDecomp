; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40 at 00408ae9
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004a2e20 at 004a3213
;   core_lightsta.cpp_CLightStaff_fire_FUN_004e1070 at 004e200c
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005d0bb5
;   TerminatedCString s_CDemonSet_popRaytraceSta_005d0bca
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_021221f0
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ea20
        ;   Label: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20
    PUSH ESI                            ; 0053ea21
    PUSH EDI                            ; 0053ea22
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053ea23
    CMP dword ptr [0x021221f0],0x1      ; 0053ea27 | DAT_021221f0
    JL 0x0053eb95                       ; 0053ea2e
        ;   XREF to: 0053eb95 (CONDITIONAL_JUMP)  ; LAB_0053eb95
    MOV EDI,dword ptr [0x021221f0]      ; 0053ea34 | DAT_021221f0
        ;   Label: LAB_0053ea34
    DEC EDI                             ; 0053ea3a
    MOV dword ptr [0x021221f0],EDI      ; 0053ea3b | DAT_021221f0
    LEA EAX,[EDI*0x4 + 0x0]             ; 0053ea41
    ADD EAX,EDI                         ; 0053ea48
    MOV EDI,0x21221f4                   ; 0053ea4a
    SHL EAX,0x5                         ; 0053ea4f
    ADD EDI,EAX                         ; 0053ea52
    MOV EAX,dword ptr [EDI]             ; 0053ea54
    MOV dword ptr [EBX + 0x15f698],EAX  ; 0053ea56
    MOV EAX,dword ptr [EDI + 0x4]       ; 0053ea5c
    MOV dword ptr [EBX + 0x15f69c],EAX  ; 0053ea5f
    MOV EAX,dword ptr [EDI + 0x8]       ; 0053ea65
    MOV dword ptr [EBX + 0x15f6a0],EAX  ; 0053ea68
    MOV EAX,dword ptr [EDI + 0xc]       ; 0053ea6e
    MOV dword ptr [EBX + 0x15f6a4],EAX  ; 0053ea71
    MOV EAX,dword ptr [EDI + 0x10]      ; 0053ea77
    MOV dword ptr [EBX + 0x15f6a8],EAX  ; 0053ea7a
    MOV EAX,dword ptr [EDI + 0x14]      ; 0053ea80
    XOR ECX,ECX                         ; 0053ea83
    MOV dword ptr [EBX + 0x15f6ac],EAX  ; 0053ea85
    TEST EAX,EAX                        ; 0053ea8b
    JLE 0x0053eab0                      ; 0053ea8d
        ;   XREF to: 0053eab0 (CONDITIONAL_JUMP)  ; LAB_0053eab0
    MOV EAX,EDI                         ; 0053ea8f
    MOV EDX,EBX                         ; 0053ea91
    ADD EDX,0x4                         ; 0053ea93
        ;   Label: LAB_0053ea93
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0053ea96
    MOV dword ptr [EDX + 0x15f6b0],ESI  ; 0053ea99
    INC ECX                             ; 0053ea9f
    MOV ESI,dword ptr [EBX + 0x15f6ac]  ; 0053eaa0
    ADD EAX,0x4                         ; 0053eaa6
    CMP ECX,ESI                         ; 0053eaa9
    JL 0x0053ea93                       ; 0053eaab
        ;   XREF to: 0053ea93 (CONDITIONAL_JUMP)  ; LAB_0053ea93
    LEA EAX,[EAX]                       ; 0053eaad
    MOV EAX,dword ptr [EDI + 0x18]      ; 0053eab0
        ;   Label: LAB_0053eab0
    LEA EDX,[EDI + 0x44]                ; 0053eab3
    MOV dword ptr [EBX + 0x15f6b0],EAX  ; 0053eab6
    LEA EAX,[EBX + 0x14d110]            ; 0053eabc
    CMP EAX,EDX                         ; 0053eac2
    JZ 0x0053ead6                       ; 0053eac4
        ;   XREF to: 0053ead6 (CONDITIONAL_JUMP)  ; LAB_0053ead6
    MOV ECX,dword ptr [EDX]             ; 0053eac6
    MOV dword ptr [EAX],ECX             ; 0053eac8
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053eaca
    MOV dword ptr [EAX + 0x4],ECX       ; 0053eacd
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053ead0
    MOV dword ptr [EAX + 0x8],ECX       ; 0053ead3
    LEA EDX,[EDI + 0x50]                ; 0053ead6
        ;   Label: LAB_0053ead6
    LEA EAX,[EBX + 0x14d11c]            ; 0053ead9
    CMP EAX,EDX                         ; 0053eadf
    JZ 0x0053eaf3                       ; 0053eae1
        ;   XREF to: 0053eaf3 (CONDITIONAL_JUMP)  ; LAB_0053eaf3
    MOV ECX,dword ptr [EDX]             ; 0053eae3
    MOV dword ptr [EAX],ECX             ; 0053eae5
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053eae7
    MOV dword ptr [EAX + 0x4],ECX       ; 0053eaea
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053eaed
    MOV dword ptr [EAX + 0x8],ECX       ; 0053eaf0
    FLD float ptr [EDI + 0x5c]          ; 0053eaf3
        ;   Label: LAB_0053eaf3
    LEA EAX,[EBX + 0x15f6e4]            ; 0053eaf6
    LEA EDX,[EDI + 0x64]                ; 0053eafc
    FSTP float ptr [EBX + 0x15f6dc]     ; 0053eaff
    MOV ECX,dword ptr [EDI + 0x60]      ; 0053eb05
    MOV dword ptr [EBX + 0x15f6e0],ECX  ; 0053eb08
    CMP EAX,EDX                         ; 0053eb0e
    JZ 0x0053eb22                       ; 0053eb10
        ;   XREF to: 0053eb22 (CONDITIONAL_JUMP)  ; LAB_0053eb22
    MOV ECX,dword ptr [EDX]             ; 0053eb12
    MOV dword ptr [EAX],ECX             ; 0053eb14
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053eb16
    MOV dword ptr [EAX + 0x4],ECX       ; 0053eb19
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053eb1c
    MOV dword ptr [EAX + 0x8],ECX       ; 0053eb1f
    MOV EAX,dword ptr [EDI + 0x70]      ; 0053eb22
        ;   Label: LAB_0053eb22
    LEA EDX,[EDI + 0x78]                ; 0053eb25
    MOV dword ptr [EBX + 0x15f6f0],EAX  ; 0053eb28
    LEA EAX,[EBX + 0x14d128]            ; 0053eb2e
    CMP EAX,EDX                         ; 0053eb34
    JZ 0x0053eb48                       ; 0053eb36
        ;   XREF to: 0053eb48 (CONDITIONAL_JUMP)  ; LAB_0053eb48
    MOV ECX,dword ptr [EDX]             ; 0053eb38
    MOV dword ptr [EAX],ECX             ; 0053eb3a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053eb3c
    MOV dword ptr [EAX + 0x4],ECX       ; 0053eb3f
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053eb42
    MOV dword ptr [EAX + 0x8],ECX       ; 0053eb45
    MOV EAX,dword ptr [EDI + 0x84]      ; 0053eb48
        ;   Label: LAB_0053eb48
    LEA EDX,[EBX + 0x14d138]            ; 0053eb4e
    MOV dword ptr [EBX + 0x14d134],EAX  ; 0053eb54
    LEA EAX,[EDI + 0x88]                ; 0053eb5a
    CMP EDX,EAX                         ; 0053eb60
    JNZ 0x0053ebbd                      ; 0053eb62
        ;   XREF to: 0053ebbd (CONDITIONAL_JUMP)  ; LAB_0053ebbd
    MOV EAX,dword ptr [EDI + 0x94]      ; 0053eb64
        ;   Label: LAB_0053eb64
    MOV dword ptr [EBX + 0x14d144],EAX  ; 0053eb6a
    MOV EAX,dword ptr [EDI + 0x98]      ; 0053eb70
    MOV dword ptr [EBX + 0x14d148],EAX  ; 0053eb76
    MOV EAX,dword ptr [EDI + 0x9c]      ; 0053eb7c
    MOV dword ptr [EBX + 0x14d14c],EAX  ; 0053eb82
    MOV EAX,dword ptr [EDI + 0x74]      ; 0053eb88
    MOV dword ptr [EBX + 0x15f6f4],EAX  ; 0053eb8b
    POP EDI                             ; 0053eb91
    POP ESI                             ; 0053eb92
    POP EBX                             ; 0053eb93
    RET                                 ; 0053eb94
    MOV ECX,0x5d0bb5                    ; 0053eb95 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_0053eb95
    MOV ESI,0x42a                       ; 0053eb9a
    PUSH 0x5d0bca                       ; 0053eb9f | = "CDemonSet::popRaytraceState - stack e..."
    MOV dword ptr [0x01d71de0],ECX      ; 0053eba4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0053ebaa | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053ebb0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0053ebb5
    JMP 0x0053ea34                      ; 0053ebb8
        ;   XREF to: 0053ea34 (UNCONDITIONAL_JUMP)  ; LAB_0053ea34
    MOV ECX,dword ptr [EAX]             ; 0053ebbd
        ;   Label: LAB_0053ebbd
    MOV dword ptr [EDX],ECX             ; 0053ebbf
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053ebc1
    MOV dword ptr [EDX + 0x4],ECX       ; 0053ebc4
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053ebc7
    MOV dword ptr [EDX + 0x8],ECX       ; 0053ebca
    JMP 0x0053eb64                      ; 0053ebcd
        ;   XREF to: 0053eb64 (UNCONDITIONAL_JUMP)  ; LAB_0053eb64

