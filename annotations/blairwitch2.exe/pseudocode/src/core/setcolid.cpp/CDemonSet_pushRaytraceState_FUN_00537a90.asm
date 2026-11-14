; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408c30 at 00408c46
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0049db20 at 0049e0a2
;   core_lightgun.cpp_CLightGun_fire_FUN_004e2e70 at 004e303e
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005e5e5d
;   TerminatedCString s_CDemonSet_pushRaytraceSt_005e5e72
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02093614
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537a90
        ;   Label: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90
    PUSH ESI                            ; 00537a91
    PUSH EDI                            ; 00537a92
    PUSH EBP                            ; 00537a93
    MOV EBX,dword ptr [ESP + 0x14]      ; 00537a94
    CMP dword ptr [0x02093614],0x5      ; 00537a98 | DAT_02093614
    JG 0x00537c06                       ; 00537a9f
        ;   XREF to: 00537c06 (CONDITIONAL_JUMP)  ; LAB_00537c06
    MOV EDX,dword ptr [0x02093614]      ; 00537aa5 | DAT_02093614
        ;   Label: LAB_00537aa5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00537aab
    ADD EAX,EDX                         ; 00537ab2
    MOV EDI,0x2093618                   ; 00537ab4
    SHL EAX,0x5                         ; 00537ab9
    ADD EDI,EAX                         ; 00537abc
    MOV EAX,dword ptr [EBX + 0x15f694]  ; 00537abe
    MOV dword ptr [EDI],EAX             ; 00537ac4
    MOV EAX,dword ptr [EBX + 0x15f698]  ; 00537ac6
    MOV dword ptr [EDI + 0x4],EAX       ; 00537acc
    MOV EAX,dword ptr [EBX + 0x15f69c]  ; 00537acf
    MOV dword ptr [EDI + 0x8],EAX       ; 00537ad5
    MOV EAX,dword ptr [EBX + 0x15f6a0]  ; 00537ad8
    MOV dword ptr [EDI + 0xc],EAX       ; 00537ade
    MOV EAX,dword ptr [EBX + 0x15f6a4]  ; 00537ae1
    XOR ECX,ECX                         ; 00537ae7
    MOV dword ptr [EDI + 0x10],EAX      ; 00537ae9
    LEA EBP,[EDX + 0x1]                 ; 00537aec
    MOV EAX,dword ptr [EBX + 0x15f6a8]  ; 00537aef
    MOV dword ptr [0x02093614],EBP      ; 00537af5 | DAT_02093614
    MOV dword ptr [EDI + 0x14],EAX      ; 00537afb
    TEST EAX,EAX                        ; 00537afe
    JLE 0x00537b20                      ; 00537b00
        ;   XREF to: 00537b20 (CONDITIONAL_JUMP)  ; LAB_00537b20
    MOV EAX,EBX                         ; 00537b02
    MOV EDX,EDI                         ; 00537b04
    ADD EDX,0x4                         ; 00537b06
        ;   Label: LAB_00537b06
    MOV ESI,dword ptr [EAX + 0x15f6b0]  ; 00537b09
    MOV dword ptr [EDX + 0x18],ESI      ; 00537b0f
    INC ECX                             ; 00537b12
    MOV ESI,dword ptr [EBX + 0x15f6a8]  ; 00537b13
    ADD EAX,0x4                         ; 00537b19
    CMP ECX,ESI                         ; 00537b1c
    JL 0x00537b06                       ; 00537b1e
        ;   XREF to: 00537b06 (CONDITIONAL_JUMP)  ; LAB_00537b06
    MOV EAX,dword ptr [EBX + 0x15f6ac]  ; 00537b20
        ;   Label: LAB_00537b20
    LEA EDX,[EBX + 0x14d110]            ; 00537b26
    MOV dword ptr [EDI + 0x18],EAX      ; 00537b2c
    LEA EAX,[EDI + 0x44]                ; 00537b2f
    CMP EAX,EDX                         ; 00537b32
    JZ 0x00537b46                       ; 00537b34
        ;   XREF to: 00537b46 (CONDITIONAL_JUMP)  ; LAB_00537b46
    MOV ECX,dword ptr [EDX]             ; 00537b36
    MOV dword ptr [EAX],ECX             ; 00537b38
    MOV ECX,dword ptr [EDX + 0x4]       ; 00537b3a
    MOV dword ptr [EAX + 0x4],ECX       ; 00537b3d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00537b40
    MOV dword ptr [EAX + 0x8],ECX       ; 00537b43
    LEA EDX,[EBX + 0x14d11c]            ; 00537b46
        ;   Label: LAB_00537b46
    LEA EAX,[EDI + 0x50]                ; 00537b4c
    CMP EAX,EDX                         ; 00537b4f
    JZ 0x00537b63                       ; 00537b51
        ;   XREF to: 00537b63 (CONDITIONAL_JUMP)  ; LAB_00537b63
    MOV ECX,dword ptr [EDX]             ; 00537b53
    MOV dword ptr [EAX],ECX             ; 00537b55
    MOV ECX,dword ptr [EDX + 0x4]       ; 00537b57
    MOV dword ptr [EAX + 0x4],ECX       ; 00537b5a
    MOV ECX,dword ptr [EDX + 0x8]       ; 00537b5d
    MOV dword ptr [EAX + 0x8],ECX       ; 00537b60
    FLD float ptr [EBX + 0x15f6d8]      ; 00537b63
        ;   Label: LAB_00537b63
    LEA EAX,[EDI + 0x64]                ; 00537b69
    LEA EDX,[EBX + 0x15f6e0]            ; 00537b6c
    FSTP float ptr [EDI + 0x5c]         ; 00537b72
    MOV ECX,dword ptr [EBX + 0x15f6dc]  ; 00537b75
    MOV dword ptr [EDI + 0x60],ECX      ; 00537b7b
    CMP EAX,EDX                         ; 00537b7e
    JZ 0x00537b92                       ; 00537b80
        ;   XREF to: 00537b92 (CONDITIONAL_JUMP)  ; LAB_00537b92
    MOV ECX,dword ptr [EDX]             ; 00537b82
    MOV dword ptr [EAX],ECX             ; 00537b84
    MOV ECX,dword ptr [EDX + 0x4]       ; 00537b86
    MOV dword ptr [EAX + 0x4],ECX       ; 00537b89
    MOV ECX,dword ptr [EDX + 0x8]       ; 00537b8c
    MOV dword ptr [EAX + 0x8],ECX       ; 00537b8f
    MOV EAX,dword ptr [EBX + 0x15f6ec]  ; 00537b92
        ;   Label: LAB_00537b92
    LEA EDX,[EBX + 0x14d128]            ; 00537b98
    MOV dword ptr [EDI + 0x70],EAX      ; 00537b9e
    LEA EAX,[EDI + 0x78]                ; 00537ba1
    CMP EAX,EDX                         ; 00537ba4
    JZ 0x00537bb8                       ; 00537ba6
        ;   XREF to: 00537bb8 (CONDITIONAL_JUMP)  ; LAB_00537bb8
    MOV ECX,dword ptr [EDX]             ; 00537ba8
    MOV dword ptr [EAX],ECX             ; 00537baa
    MOV ECX,dword ptr [EDX + 0x4]       ; 00537bac
    MOV dword ptr [EAX + 0x4],ECX       ; 00537baf
    MOV ECX,dword ptr [EDX + 0x8]       ; 00537bb2
    MOV dword ptr [EAX + 0x8],ECX       ; 00537bb5
    MOV EAX,dword ptr [EBX + 0x14d134]  ; 00537bb8
        ;   Label: LAB_00537bb8
    LEA EDX,[EDI + 0x88]                ; 00537bbe
    MOV dword ptr [EDI + 0x84],EAX      ; 00537bc4
    LEA EAX,[EBX + 0x14d138]            ; 00537bca
    CMP EDX,EAX                         ; 00537bd0
    JNZ 0x00537c2e                      ; 00537bd2
        ;   XREF to: 00537c2e (CONDITIONAL_JUMP)  ; LAB_00537c2e
    MOV EAX,dword ptr [EBX + 0x14d144]  ; 00537bd4
        ;   Label: LAB_00537bd4
    MOV dword ptr [EDI + 0x94],EAX      ; 00537bda
    MOV EAX,dword ptr [EBX + 0x14d148]  ; 00537be0
    MOV dword ptr [EDI + 0x98],EAX      ; 00537be6
    MOV EAX,dword ptr [EBX + 0x14d14c]  ; 00537bec
    MOV dword ptr [EDI + 0x9c],EAX      ; 00537bf2
    MOV EAX,dword ptr [EBX + 0x15f6f0]  ; 00537bf8
    MOV dword ptr [EDI + 0x74],EAX      ; 00537bfe
    POP EBP                             ; 00537c01
    POP EDI                             ; 00537c02
    POP ESI                             ; 00537c03
    POP EBX                             ; 00537c04
    RET                                 ; 00537c05
    MOV ECX,0x5e5e5d                    ; 00537c06 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00537c06
    MOV ESI,0x406                       ; 00537c0b
    PUSH 0x5e5e72                       ; 00537c10 | = "CDemonSet::pushRaytraceState - stack ..."
    MOV dword ptr [0x01d046a0],ECX      ; 00537c15 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00537c1b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00537c21
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00537c26
    JMP 0x00537aa5                      ; 00537c29
        ;   XREF to: 00537aa5 (UNCONDITIONAL_JUMP)  ; LAB_00537aa5
    MOV ECX,dword ptr [EAX]             ; 00537c2e
        ;   Label: LAB_00537c2e
    MOV dword ptr [EDX],ECX             ; 00537c30
    MOV ECX,dword ptr [EAX + 0x4]       ; 00537c32
    MOV dword ptr [EDX + 0x4],ECX       ; 00537c35
    MOV ECX,dword ptr [EAX + 0x8]       ; 00537c38
    MOV dword ptr [EDX + 0x8],ECX       ; 00537c3b
    JMP 0x00537bd4                      ; 00537c3e
        ;   XREF to: 00537bd4 (UNCONDITIONAL_JUMP)  ; LAB_00537bd4

