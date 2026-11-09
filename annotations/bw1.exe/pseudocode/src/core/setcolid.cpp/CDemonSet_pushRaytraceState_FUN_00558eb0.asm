; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_FUN_00408a00 at 00408a16
;   core_fire.cpp_FUN_004b6420 at 004b69a2
;   core_lightgun.cpp_FUN_00500310 at 00500528
;   core_lightpis.cpp_FUN_00501a70 at 00501c88
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005f0ecd
;   TerminatedCString s_CDemonSet_pushRaytraceSt_005f0ee2
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_020af5c8
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558eb0
        ;   Label: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0
    PUSH ESI                            ; 00558eb1
    PUSH EDI                            ; 00558eb2
    PUSH EBP                            ; 00558eb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00558eb4
    CMP dword ptr [0x020af5c8],0x5      ; 00558eb8 | DAT_020af5c8
    JG 0x00559026                       ; 00558ebf
        ;   XREF to: 00559026 (CONDITIONAL_JUMP)  ; LAB_00559026
    MOV EDX,dword ptr [0x020af5c8]      ; 00558ec5 | DAT_020af5c8
        ;   Label: LAB_00558ec5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00558ecb
    ADD EAX,EDX                         ; 00558ed2
    MOV EDI,0x20af5cc                   ; 00558ed4
    SHL EAX,0x5                         ; 00558ed9
    ADD EDI,EAX                         ; 00558edc
    MOV EAX,dword ptr [EBX + 0x15f698]  ; 00558ede
    MOV dword ptr [EDI],EAX             ; 00558ee4
    MOV EAX,dword ptr [EBX + 0x15f69c]  ; 00558ee6
    MOV dword ptr [EDI + 0x4],EAX       ; 00558eec
    MOV EAX,dword ptr [EBX + 0x15f6a0]  ; 00558eef
    MOV dword ptr [EDI + 0x8],EAX       ; 00558ef5
    MOV EAX,dword ptr [EBX + 0x15f6a4]  ; 00558ef8
    MOV dword ptr [EDI + 0xc],EAX       ; 00558efe
    MOV EAX,dword ptr [EBX + 0x15f6a8]  ; 00558f01
    XOR ECX,ECX                         ; 00558f07
    MOV dword ptr [EDI + 0x10],EAX      ; 00558f09
    LEA EBP,[EDX + 0x1]                 ; 00558f0c
    MOV EAX,dword ptr [EBX + 0x15f6ac]  ; 00558f0f
    MOV dword ptr [0x020af5c8],EBP      ; 00558f15 | DAT_020af5c8
    MOV dword ptr [EDI + 0x14],EAX      ; 00558f1b
    TEST EAX,EAX                        ; 00558f1e
    JLE 0x00558f40                      ; 00558f20
        ;   XREF to: 00558f40 (CONDITIONAL_JUMP)  ; LAB_00558f40
    MOV EAX,EBX                         ; 00558f22
    MOV EDX,EDI                         ; 00558f24
    ADD EDX,0x4                         ; 00558f26
        ;   Label: LAB_00558f26
    MOV ESI,dword ptr [EAX + 0x15f6b4]  ; 00558f29
    MOV dword ptr [EDX + 0x18],ESI      ; 00558f2f
    INC ECX                             ; 00558f32
    MOV ESI,dword ptr [EBX + 0x15f6ac]  ; 00558f33
    ADD EAX,0x4                         ; 00558f39
    CMP ECX,ESI                         ; 00558f3c
    JL 0x00558f26                       ; 00558f3e
        ;   XREF to: 00558f26 (CONDITIONAL_JUMP)  ; LAB_00558f26
    MOV EAX,dword ptr [EBX + 0x15f6b0]  ; 00558f40
        ;   Label: LAB_00558f40
    LEA EDX,[EBX + 0x14d110]            ; 00558f46
    MOV dword ptr [EDI + 0x18],EAX      ; 00558f4c
    LEA EAX,[EDI + 0x44]                ; 00558f4f
    CMP EAX,EDX                         ; 00558f52
    JZ 0x00558f66                       ; 00558f54
        ;   XREF to: 00558f66 (CONDITIONAL_JUMP)  ; LAB_00558f66
    MOV ECX,dword ptr [EDX]             ; 00558f56
    MOV dword ptr [EAX],ECX             ; 00558f58
    MOV ECX,dword ptr [EDX + 0x4]       ; 00558f5a
    MOV dword ptr [EAX + 0x4],ECX       ; 00558f5d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00558f60
    MOV dword ptr [EAX + 0x8],ECX       ; 00558f63
    LEA EDX,[EBX + 0x14d11c]            ; 00558f66
        ;   Label: LAB_00558f66
    LEA EAX,[EDI + 0x50]                ; 00558f6c
    CMP EAX,EDX                         ; 00558f6f
    JZ 0x00558f83                       ; 00558f71
        ;   XREF to: 00558f83 (CONDITIONAL_JUMP)  ; LAB_00558f83
    MOV ECX,dword ptr [EDX]             ; 00558f73
    MOV dword ptr [EAX],ECX             ; 00558f75
    MOV ECX,dword ptr [EDX + 0x4]       ; 00558f77
    MOV dword ptr [EAX + 0x4],ECX       ; 00558f7a
    MOV ECX,dword ptr [EDX + 0x8]       ; 00558f7d
    MOV dword ptr [EAX + 0x8],ECX       ; 00558f80
    FLD float ptr [EBX + 0x15f6dc]      ; 00558f83
        ;   Label: LAB_00558f83
    LEA EAX,[EDI + 0x64]                ; 00558f89
    LEA EDX,[EBX + 0x15f6e4]            ; 00558f8c
    FSTP float ptr [EDI + 0x5c]         ; 00558f92
    MOV ECX,dword ptr [EBX + 0x15f6e0]  ; 00558f95
    MOV dword ptr [EDI + 0x60],ECX      ; 00558f9b
    CMP EAX,EDX                         ; 00558f9e
    JZ 0x00558fb2                       ; 00558fa0
        ;   XREF to: 00558fb2 (CONDITIONAL_JUMP)  ; LAB_00558fb2
    MOV ECX,dword ptr [EDX]             ; 00558fa2
    MOV dword ptr [EAX],ECX             ; 00558fa4
    MOV ECX,dword ptr [EDX + 0x4]       ; 00558fa6
    MOV dword ptr [EAX + 0x4],ECX       ; 00558fa9
    MOV ECX,dword ptr [EDX + 0x8]       ; 00558fac
    MOV dword ptr [EAX + 0x8],ECX       ; 00558faf
    MOV EAX,dword ptr [EBX + 0x15f6f0]  ; 00558fb2
        ;   Label: LAB_00558fb2
    LEA EDX,[EBX + 0x14d128]            ; 00558fb8
    MOV dword ptr [EDI + 0x70],EAX      ; 00558fbe
    LEA EAX,[EDI + 0x78]                ; 00558fc1
    CMP EAX,EDX                         ; 00558fc4
    JZ 0x00558fd8                       ; 00558fc6
        ;   XREF to: 00558fd8 (CONDITIONAL_JUMP)  ; LAB_00558fd8
    MOV ECX,dword ptr [EDX]             ; 00558fc8
    MOV dword ptr [EAX],ECX             ; 00558fca
    MOV ECX,dword ptr [EDX + 0x4]       ; 00558fcc
    MOV dword ptr [EAX + 0x4],ECX       ; 00558fcf
    MOV ECX,dword ptr [EDX + 0x8]       ; 00558fd2
    MOV dword ptr [EAX + 0x8],ECX       ; 00558fd5
    MOV EAX,dword ptr [EBX + 0x14d134]  ; 00558fd8
        ;   Label: LAB_00558fd8
    LEA EDX,[EDI + 0x88]                ; 00558fde
    MOV dword ptr [EDI + 0x84],EAX      ; 00558fe4
    LEA EAX,[EBX + 0x14d138]            ; 00558fea
    CMP EDX,EAX                         ; 00558ff0
    JNZ 0x0055904e                      ; 00558ff2
        ;   XREF to: 0055904e (CONDITIONAL_JUMP)  ; LAB_0055904e
    MOV EAX,dword ptr [EBX + 0x14d144]  ; 00558ff4
        ;   Label: LAB_00558ff4
    MOV dword ptr [EDI + 0x94],EAX      ; 00558ffa
    MOV EAX,dword ptr [EBX + 0x14d148]  ; 00559000
    MOV dword ptr [EDI + 0x98],EAX      ; 00559006
    MOV EAX,dword ptr [EBX + 0x14d14c]  ; 0055900c
    MOV dword ptr [EDI + 0x9c],EAX      ; 00559012
    MOV EAX,dword ptr [EBX + 0x15f6f4]  ; 00559018
    MOV dword ptr [EDI + 0x74],EAX      ; 0055901e
    POP EBP                             ; 00559021
    POP EDI                             ; 00559022
    POP ESI                             ; 00559023
    POP EBX                             ; 00559024
    RET                                 ; 00559025
    MOV ECX,0x5f0ecd                    ; 00559026 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00559026
    MOV ESI,0x406                       ; 0055902b
    PUSH 0x5f0ee2                       ; 00559030 | = "CDemonSet::pushRaytraceState - stack ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00559035 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0055903b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00559041
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00559046
    JMP 0x00558ec5                      ; 00559049
        ;   XREF to: 00558ec5 (UNCONDITIONAL_JUMP)  ; LAB_00558ec5
    MOV ECX,dword ptr [EAX]             ; 0055904e
        ;   Label: LAB_0055904e
    MOV dword ptr [EDX],ECX             ; 00559050
    MOV ECX,dword ptr [EAX + 0x4]       ; 00559052
    MOV dword ptr [EDX + 0x4],ECX       ; 00559055
    MOV ECX,dword ptr [EAX + 0x8]       ; 00559058
    MOV dword ptr [EDX + 0x8],ECX       ; 0055905b
    JMP 0x00558ff4                      ; 0055905e
        ;   XREF to: 00558ff4 (UNCONDITIONAL_JUMP)  ; LAB_00558ff4

