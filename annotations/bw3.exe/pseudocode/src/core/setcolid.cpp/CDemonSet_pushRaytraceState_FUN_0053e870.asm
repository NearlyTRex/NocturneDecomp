; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40 at 00408a56
;   core_fire.cpp_FUN_004a2e20 at 004a31c2
;   core_lightsta.cpp_CLightStaff_fire_FUN_004e1070 at 004e1f73
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005d0b76
;   TerminatedCString s_CDemonSet_pushRaytraceSt_005d0b8b
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_021221f0
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e870
        ;   Label: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870
    PUSH ESI                            ; 0053e871
    PUSH EDI                            ; 0053e872
    PUSH EBP                            ; 0053e873
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053e874
    CMP dword ptr [0x021221f0],0x5      ; 0053e878 | DAT_021221f0
    JG 0x0053e9e6                       ; 0053e87f
        ;   XREF to: 0053e9e6 (CONDITIONAL_JUMP)  ; LAB_0053e9e6
    MOV EDX,dword ptr [0x021221f0]      ; 0053e885 | DAT_021221f0
        ;   Label: LAB_0053e885
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053e88b
    ADD EAX,EDX                         ; 0053e892
    MOV EDI,0x21221f4                   ; 0053e894
    SHL EAX,0x5                         ; 0053e899
    ADD EDI,EAX                         ; 0053e89c
    MOV EAX,dword ptr [EBX + 0x15f698]  ; 0053e89e
    MOV dword ptr [EDI],EAX             ; 0053e8a4
    MOV EAX,dword ptr [EBX + 0x15f69c]  ; 0053e8a6
    MOV dword ptr [EDI + 0x4],EAX       ; 0053e8ac
    MOV EAX,dword ptr [EBX + 0x15f6a0]  ; 0053e8af
    MOV dword ptr [EDI + 0x8],EAX       ; 0053e8b5
    MOV EAX,dword ptr [EBX + 0x15f6a4]  ; 0053e8b8
    MOV dword ptr [EDI + 0xc],EAX       ; 0053e8be
    MOV EAX,dword ptr [EBX + 0x15f6a8]  ; 0053e8c1
    XOR ECX,ECX                         ; 0053e8c7
    MOV dword ptr [EDI + 0x10],EAX      ; 0053e8c9
    LEA EBP,[EDX + 0x1]                 ; 0053e8cc
    MOV EAX,dword ptr [EBX + 0x15f6ac]  ; 0053e8cf
    MOV dword ptr [0x021221f0],EBP      ; 0053e8d5 | DAT_021221f0
    MOV dword ptr [EDI + 0x14],EAX      ; 0053e8db
    TEST EAX,EAX                        ; 0053e8de
    JLE 0x0053e900                      ; 0053e8e0
        ;   XREF to: 0053e900 (CONDITIONAL_JUMP)  ; LAB_0053e900
    MOV EAX,EBX                         ; 0053e8e2
    MOV EDX,EDI                         ; 0053e8e4
    ADD EDX,0x4                         ; 0053e8e6
        ;   Label: LAB_0053e8e6
    MOV ESI,dword ptr [EAX + 0x15f6b4]  ; 0053e8e9
    MOV dword ptr [EDX + 0x18],ESI      ; 0053e8ef
    INC ECX                             ; 0053e8f2
    MOV ESI,dword ptr [EBX + 0x15f6ac]  ; 0053e8f3
    ADD EAX,0x4                         ; 0053e8f9
    CMP ECX,ESI                         ; 0053e8fc
    JL 0x0053e8e6                       ; 0053e8fe
        ;   XREF to: 0053e8e6 (CONDITIONAL_JUMP)  ; LAB_0053e8e6
    MOV EAX,dword ptr [EBX + 0x15f6b0]  ; 0053e900
        ;   Label: LAB_0053e900
    LEA EDX,[EBX + 0x14d110]            ; 0053e906
    MOV dword ptr [EDI + 0x18],EAX      ; 0053e90c
    LEA EAX,[EDI + 0x44]                ; 0053e90f
    CMP EAX,EDX                         ; 0053e912
    JZ 0x0053e926                       ; 0053e914
        ;   XREF to: 0053e926 (CONDITIONAL_JUMP)  ; LAB_0053e926
    MOV ECX,dword ptr [EDX]             ; 0053e916
    MOV dword ptr [EAX],ECX             ; 0053e918
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053e91a
    MOV dword ptr [EAX + 0x4],ECX       ; 0053e91d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053e920
    MOV dword ptr [EAX + 0x8],ECX       ; 0053e923
    LEA EDX,[EBX + 0x14d11c]            ; 0053e926
        ;   Label: LAB_0053e926
    LEA EAX,[EDI + 0x50]                ; 0053e92c
    CMP EAX,EDX                         ; 0053e92f
    JZ 0x0053e943                       ; 0053e931
        ;   XREF to: 0053e943 (CONDITIONAL_JUMP)  ; LAB_0053e943
    MOV ECX,dword ptr [EDX]             ; 0053e933
    MOV dword ptr [EAX],ECX             ; 0053e935
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053e937
    MOV dword ptr [EAX + 0x4],ECX       ; 0053e93a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053e93d
    MOV dword ptr [EAX + 0x8],ECX       ; 0053e940
    FLD float ptr [EBX + 0x15f6dc]      ; 0053e943
        ;   Label: LAB_0053e943
    LEA EAX,[EDI + 0x64]                ; 0053e949
    LEA EDX,[EBX + 0x15f6e4]            ; 0053e94c
    FSTP float ptr [EDI + 0x5c]         ; 0053e952
    MOV ECX,dword ptr [EBX + 0x15f6e0]  ; 0053e955
    MOV dword ptr [EDI + 0x60],ECX      ; 0053e95b
    CMP EAX,EDX                         ; 0053e95e
    JZ 0x0053e972                       ; 0053e960
        ;   XREF to: 0053e972 (CONDITIONAL_JUMP)  ; LAB_0053e972
    MOV ECX,dword ptr [EDX]             ; 0053e962
    MOV dword ptr [EAX],ECX             ; 0053e964
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053e966
    MOV dword ptr [EAX + 0x4],ECX       ; 0053e969
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053e96c
    MOV dword ptr [EAX + 0x8],ECX       ; 0053e96f
    MOV EAX,dword ptr [EBX + 0x15f6f0]  ; 0053e972
        ;   Label: LAB_0053e972
    LEA EDX,[EBX + 0x14d128]            ; 0053e978
    MOV dword ptr [EDI + 0x70],EAX      ; 0053e97e
    LEA EAX,[EDI + 0x78]                ; 0053e981
    CMP EAX,EDX                         ; 0053e984
    JZ 0x0053e998                       ; 0053e986
        ;   XREF to: 0053e998 (CONDITIONAL_JUMP)  ; LAB_0053e998
    MOV ECX,dword ptr [EDX]             ; 0053e988
    MOV dword ptr [EAX],ECX             ; 0053e98a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053e98c
    MOV dword ptr [EAX + 0x4],ECX       ; 0053e98f
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053e992
    MOV dword ptr [EAX + 0x8],ECX       ; 0053e995
    MOV EAX,dword ptr [EBX + 0x14d134]  ; 0053e998
        ;   Label: LAB_0053e998
    LEA EDX,[EDI + 0x88]                ; 0053e99e
    MOV dword ptr [EDI + 0x84],EAX      ; 0053e9a4
    LEA EAX,[EBX + 0x14d138]            ; 0053e9aa
    CMP EDX,EAX                         ; 0053e9b0
    JNZ 0x0053ea0e                      ; 0053e9b2
        ;   XREF to: 0053ea0e (CONDITIONAL_JUMP)  ; LAB_0053ea0e
    MOV EAX,dword ptr [EBX + 0x14d144]  ; 0053e9b4
        ;   Label: LAB_0053e9b4
    MOV dword ptr [EDI + 0x94],EAX      ; 0053e9ba
    MOV EAX,dword ptr [EBX + 0x14d148]  ; 0053e9c0
    MOV dword ptr [EDI + 0x98],EAX      ; 0053e9c6
    MOV EAX,dword ptr [EBX + 0x14d14c]  ; 0053e9cc
    MOV dword ptr [EDI + 0x9c],EAX      ; 0053e9d2
    MOV EAX,dword ptr [EBX + 0x15f6f4]  ; 0053e9d8
    MOV dword ptr [EDI + 0x74],EAX      ; 0053e9de
    POP EBP                             ; 0053e9e1
    POP EDI                             ; 0053e9e2
    POP ESI                             ; 0053e9e3
    POP EBX                             ; 0053e9e4
    RET                                 ; 0053e9e5
    MOV ECX,0x5d0b76                    ; 0053e9e6 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_0053e9e6
    MOV ESI,0x406                       ; 0053e9eb
    PUSH 0x5d0b8b                       ; 0053e9f0 | = "CDemonSet::pushRaytraceState - stack ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0053e9f5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0053e9fb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053ea01
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0053ea06
    JMP 0x0053e885                      ; 0053ea09
        ;   XREF to: 0053e885 (UNCONDITIONAL_JUMP)  ; LAB_0053e885
    MOV ECX,dword ptr [EAX]             ; 0053ea0e
        ;   Label: LAB_0053ea0e
    MOV dword ptr [EDX],ECX             ; 0053ea10
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053ea12
    MOV dword ptr [EDX + 0x4],ECX       ; 0053ea15
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053ea18
    MOV dword ptr [EDX + 0x8],ECX       ; 0053ea1b
    JMP 0x0053e9b4                      ; 0053ea1e
        ;   XREF to: 0053e9b4 (UNCONDITIONAL_JUMP)  ; LAB_0053e9b4

