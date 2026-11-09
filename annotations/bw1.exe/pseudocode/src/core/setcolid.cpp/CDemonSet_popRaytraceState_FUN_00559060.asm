; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_FUN_00408a00 at 00408aa9
;   core_fire.cpp_FUN_004b6420 at 004b69f0
;   core_lightgun.cpp_FUN_00500310 at 0050057c
;   core_lightpis.cpp_FUN_00501a70 at 00501cdc
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005f0f0c
;   TerminatedCString s_CDemonSet_popRaytraceSta_005f0f21
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_020af5c8
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559060
        ;   Label: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060
    PUSH ESI                            ; 00559061
    PUSH EDI                            ; 00559062
    MOV EBX,dword ptr [ESP + 0x10]      ; 00559063
    CMP dword ptr [0x020af5c8],0x1      ; 00559067 | DAT_020af5c8
    JL 0x005591d5                       ; 0055906e
        ;   XREF to: 005591d5 (CONDITIONAL_JUMP)  ; LAB_005591d5
    MOV EDI,dword ptr [0x020af5c8]      ; 00559074 | DAT_020af5c8
        ;   Label: LAB_00559074
    DEC EDI                             ; 0055907a
    MOV dword ptr [0x020af5c8],EDI      ; 0055907b | DAT_020af5c8
    LEA EAX,[EDI*0x4 + 0x0]             ; 00559081
    ADD EAX,EDI                         ; 00559088
    MOV EDI,0x20af5cc                   ; 0055908a
    SHL EAX,0x5                         ; 0055908f
    ADD EDI,EAX                         ; 00559092
    MOV EAX,dword ptr [EDI]             ; 00559094
    MOV dword ptr [EBX + 0x15f698],EAX  ; 00559096
    MOV EAX,dword ptr [EDI + 0x4]       ; 0055909c
    MOV dword ptr [EBX + 0x15f69c],EAX  ; 0055909f
    MOV EAX,dword ptr [EDI + 0x8]       ; 005590a5
    MOV dword ptr [EBX + 0x15f6a0],EAX  ; 005590a8
    MOV EAX,dword ptr [EDI + 0xc]       ; 005590ae
    MOV dword ptr [EBX + 0x15f6a4],EAX  ; 005590b1
    MOV EAX,dword ptr [EDI + 0x10]      ; 005590b7
    MOV dword ptr [EBX + 0x15f6a8],EAX  ; 005590ba
    MOV EAX,dword ptr [EDI + 0x14]      ; 005590c0
    XOR ECX,ECX                         ; 005590c3
    MOV dword ptr [EBX + 0x15f6ac],EAX  ; 005590c5
    TEST EAX,EAX                        ; 005590cb
    JLE 0x005590f0                      ; 005590cd
        ;   XREF to: 005590f0 (CONDITIONAL_JUMP)  ; LAB_005590f0
    MOV EAX,EDI                         ; 005590cf
    MOV EDX,EBX                         ; 005590d1
    ADD EDX,0x4                         ; 005590d3
        ;   Label: LAB_005590d3
    MOV ESI,dword ptr [EAX + 0x1c]      ; 005590d6
    MOV dword ptr [EDX + 0x15f6b0],ESI  ; 005590d9
    INC ECX                             ; 005590df
    MOV ESI,dword ptr [EBX + 0x15f6ac]  ; 005590e0
    ADD EAX,0x4                         ; 005590e6
    CMP ECX,ESI                         ; 005590e9
    JL 0x005590d3                       ; 005590eb
        ;   XREF to: 005590d3 (CONDITIONAL_JUMP)  ; LAB_005590d3
    LEA EAX,[EAX]                       ; 005590ed
    MOV EAX,dword ptr [EDI + 0x18]      ; 005590f0
        ;   Label: LAB_005590f0
    LEA EDX,[EDI + 0x44]                ; 005590f3
    MOV dword ptr [EBX + 0x15f6b0],EAX  ; 005590f6
    LEA EAX,[EBX + 0x14d110]            ; 005590fc
    CMP EAX,EDX                         ; 00559102
    JZ 0x00559116                       ; 00559104
        ;   XREF to: 00559116 (CONDITIONAL_JUMP)  ; LAB_00559116
    MOV ECX,dword ptr [EDX]             ; 00559106
    MOV dword ptr [EAX],ECX             ; 00559108
    MOV ECX,dword ptr [EDX + 0x4]       ; 0055910a
    MOV dword ptr [EAX + 0x4],ECX       ; 0055910d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00559110
    MOV dword ptr [EAX + 0x8],ECX       ; 00559113
    LEA EDX,[EDI + 0x50]                ; 00559116
        ;   Label: LAB_00559116
    LEA EAX,[EBX + 0x14d11c]            ; 00559119
    CMP EAX,EDX                         ; 0055911f
    JZ 0x00559133                       ; 00559121
        ;   XREF to: 00559133 (CONDITIONAL_JUMP)  ; LAB_00559133
    MOV ECX,dword ptr [EDX]             ; 00559123
    MOV dword ptr [EAX],ECX             ; 00559125
    MOV ECX,dword ptr [EDX + 0x4]       ; 00559127
    MOV dword ptr [EAX + 0x4],ECX       ; 0055912a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0055912d
    MOV dword ptr [EAX + 0x8],ECX       ; 00559130
    FLD float ptr [EDI + 0x5c]          ; 00559133
        ;   Label: LAB_00559133
    LEA EAX,[EBX + 0x15f6e4]            ; 00559136
    LEA EDX,[EDI + 0x64]                ; 0055913c
    FSTP float ptr [EBX + 0x15f6dc]     ; 0055913f
    MOV ECX,dword ptr [EDI + 0x60]      ; 00559145
    MOV dword ptr [EBX + 0x15f6e0],ECX  ; 00559148
    CMP EAX,EDX                         ; 0055914e
    JZ 0x00559162                       ; 00559150
        ;   XREF to: 00559162 (CONDITIONAL_JUMP)  ; LAB_00559162
    MOV ECX,dword ptr [EDX]             ; 00559152
    MOV dword ptr [EAX],ECX             ; 00559154
    MOV ECX,dword ptr [EDX + 0x4]       ; 00559156
    MOV dword ptr [EAX + 0x4],ECX       ; 00559159
    MOV ECX,dword ptr [EDX + 0x8]       ; 0055915c
    MOV dword ptr [EAX + 0x8],ECX       ; 0055915f
    MOV EAX,dword ptr [EDI + 0x70]      ; 00559162
        ;   Label: LAB_00559162
    LEA EDX,[EDI + 0x78]                ; 00559165
    MOV dword ptr [EBX + 0x15f6f0],EAX  ; 00559168
    LEA EAX,[EBX + 0x14d128]            ; 0055916e
    CMP EAX,EDX                         ; 00559174
    JZ 0x00559188                       ; 00559176
        ;   XREF to: 00559188 (CONDITIONAL_JUMP)  ; LAB_00559188
    MOV ECX,dword ptr [EDX]             ; 00559178
    MOV dword ptr [EAX],ECX             ; 0055917a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0055917c
    MOV dword ptr [EAX + 0x4],ECX       ; 0055917f
    MOV ECX,dword ptr [EDX + 0x8]       ; 00559182
    MOV dword ptr [EAX + 0x8],ECX       ; 00559185
    MOV EAX,dword ptr [EDI + 0x84]      ; 00559188
        ;   Label: LAB_00559188
    LEA EDX,[EBX + 0x14d138]            ; 0055918e
    MOV dword ptr [EBX + 0x14d134],EAX  ; 00559194
    LEA EAX,[EDI + 0x88]                ; 0055919a
    CMP EDX,EAX                         ; 005591a0
    JNZ 0x005591fd                      ; 005591a2
        ;   XREF to: 005591fd (CONDITIONAL_JUMP)  ; LAB_005591fd
    MOV EAX,dword ptr [EDI + 0x94]      ; 005591a4
        ;   Label: LAB_005591a4
    MOV dword ptr [EBX + 0x14d144],EAX  ; 005591aa
    MOV EAX,dword ptr [EDI + 0x98]      ; 005591b0
    MOV dword ptr [EBX + 0x14d148],EAX  ; 005591b6
    MOV EAX,dword ptr [EDI + 0x9c]      ; 005591bc
    MOV dword ptr [EBX + 0x14d14c],EAX  ; 005591c2
    MOV EAX,dword ptr [EDI + 0x74]      ; 005591c8
    MOV dword ptr [EBX + 0x15f6f4],EAX  ; 005591cb
    POP EDI                             ; 005591d1
    POP ESI                             ; 005591d2
    POP EBX                             ; 005591d3
    RET                                 ; 005591d4
    MOV ECX,0x5f0f0c                    ; 005591d5 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_005591d5
    MOV ESI,0x42a                       ; 005591da
    PUSH 0x5f0f21                       ; 005591df | = "CDemonSet::popRaytraceState - stack e..."
    MOV dword ptr [0x01d1d400],ECX      ; 005591e4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005591ea | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005591f0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005591f5
    JMP 0x00559074                      ; 005591f8
        ;   XREF to: 00559074 (UNCONDITIONAL_JUMP)  ; LAB_00559074
    MOV ECX,dword ptr [EAX]             ; 005591fd
        ;   Label: LAB_005591fd
    MOV dword ptr [EDX],ECX             ; 005591ff
    MOV ECX,dword ptr [EAX + 0x4]       ; 00559201
    MOV dword ptr [EDX + 0x4],ECX       ; 00559204
    MOV ECX,dword ptr [EAX + 0x8]       ; 00559207
    MOV dword ptr [EDX + 0x8],ECX       ; 0055920a
    JMP 0x005591a4                      ; 0055920d
        ;   XREF to: 005591a4 (UNCONDITIONAL_JUMP)  ; LAB_005591a4

