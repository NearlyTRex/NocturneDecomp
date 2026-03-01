; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_0041b070(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 at 0041a53f
;   core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0 at 00419fe3
;   core_bodypart.cpp_CBodyPart_processInEditor_FUN_0041b260 at 0041b272
;
; Referenced Globals:
;   float FLOAT_00615e9c = 0.5
;   UVector3 g_ZeroVector
;   undefined4 g_ZeroVector+4
;   undefined4 g_ZeroVector+8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
;   core_box.cpp_CBox_setupCorners_FUN_0041dd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b070
        ;   Label: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_0041b070
    SUB ESP,0x48                        ; 0041b071
    MOV EBX,dword ptr [ESP + 0x50]      ; 0041b074
    CMP dword ptr [EBX + 0x174],0x3     ; 0041b078
    JL 0x0041b08a                       ; 0041b07f
        ;   XREF to: 0041b08a (CONDITIONAL_JUMP)  ; LAB_0041b08a
    CMP dword ptr [EBX + 0x180],0x1     ; 0041b081
    JGE 0x0041b0eb                      ; 0041b088
        ;   XREF to: 0041b0eb (CONDITIONAL_JUMP)  ; LAB_0041b0eb
    PUSH 0x0                            ; 0041b08a
        ;   Label: LAB_0041b08a
    PUSH 0x0                            ; 0041b08c
    PUSH EBX                            ; 0041b08e
    MOV dword ptr [EBX + 0x70],0x2      ; 0041b08f
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 ; 0041b096
        ;   XREF to: 004191d0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart * this_ptr, int vertex_count, int tri_count)
    LEA EAX,[EBX + 0x168]               ; 0041b09b
    ADD ESP,0xc                         ; 0041b0a1
    MOV EDX,EAX                         ; 0041b0a4
    CMP EAX,0x3f87558                   ; 0041b0a6 | g_ZeroVector
    JZ 0x0041b0c7                       ; 0041b0ab
        ;   XREF to: 0041b0c7 (CONDITIONAL_JUMP)  ; LAB_0041b0c7
    MOV ECX,dword ptr [0x03f87558]      ; 0041b0ad | g_ZeroVector
    MOV dword ptr [EAX],ECX             ; 0041b0b3
    MOV ECX,dword ptr [0x03f8755c]      ; 0041b0b5 | g_ZeroVector+4
    MOV dword ptr [EAX + 0x4],ECX       ; 0041b0bb
    MOV ECX,dword ptr [0x03f87560]      ; 0041b0be | g_ZeroVector+8
    MOV dword ptr [EAX + 0x8],ECX       ; 0041b0c4
    ADD EBX,0x15c                       ; 0041b0c7
        ;   Label: LAB_0041b0c7
    CMP EBX,EDX                         ; 0041b0cd
    JNZ 0x0041b0d6                      ; 0041b0cf
        ;   XREF to: 0041b0d6 (CONDITIONAL_JUMP)  ; LAB_0041b0d6
    ADD ESP,0x48                        ; 0041b0d1
    POP EBX                             ; 0041b0d4
    RET                                 ; 0041b0d5
    MOV EAX,dword ptr [EDX]             ; 0041b0d6
        ;   Label: LAB_0041b0d6
    MOV dword ptr [EBX],EAX             ; 0041b0d8
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041b0da
    MOV dword ptr [EBX + 0x4],EAX       ; 0041b0dd
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041b0e0
    MOV dword ptr [EBX + 0x8],EAX       ; 0041b0e3
    ADD ESP,0x48                        ; 0041b0e6
    POP EBX                             ; 0041b0e9
    RET                                 ; 0041b0ea
    MOV EAX,ESP                         ; 0041b0eb
        ;   Label: LAB_0041b0eb
    PUSH EAX                            ; 0041b0ed
    MOV EDX,dword ptr [EBX + 0x154]     ; 0041b0ee
    PUSH EBX                            ; 0041b0f4
    CALL dword ptr [EDX + 0x14]         ; 0041b0f5
    ADD ESP,0x8                         ; 0041b0f8
    FLD float ptr [ESP + 0x4]           ; 0041b0fb
    FLD float ptr [ESP]                 ; 0041b0ff
    FADD float ptr [ESP + 0xc]          ; 0041b102
    FXCH                                ; 0041b106
    FADD float ptr [ESP + 0x10]         ; 0041b108
    FXCH                                ; 0041b10c
    FST float ptr [ESP + 0x24]          ; 0041b10e
    FLD float ptr [0x00615e9c]          ; 0041b112 | FLOAT_00615e9c
    FXCH                                ; 0041b118
    FMUL ST1                            ; 0041b11a
    FXCH ST2                            ; 0041b11c
    FST float ptr [ESP + 0x28]          ; 0041b11e
    FMUL ST1                            ; 0041b122
    LEA EAX,[ESP + 0x18]                ; 0041b124
    FLD float ptr [ESP + 0x8]           ; 0041b128
    PUSH EAX                            ; 0041b12c
    FADD float ptr [ESP + 0x18]         ; 0041b12d
    LEA EAX,[ESP + 0x34]                ; 0041b131
    FST float ptr [ESP + 0x30]          ; 0041b135
    PUSH EAX                            ; 0041b139
    FMULP ST2                           ; 0041b13a
    PUSH EBX                            ; 0041b13c
    FXCH ST2                            ; 0041b13d
    FSTP float ptr [ESP + 0x24]         ; 0041b13f
    FXCH                                ; 0041b143
    FSTP float ptr [ESP + 0x28]         ; 0041b145
    FSTP float ptr [ESP + 0x2c]         ; 0041b149
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041b14d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0041b152
    LEA EAX,[ESP + 0x3c]                ; 0041b155
    FLD float ptr [ESP + 0xc]           ; 0041b159
    FLD float ptr [ESP + 0x10]          ; 0041b15d
    PUSH 0x40a00000                     ; 0041b161
    FLD float ptr [ESP + 0x18]          ; 0041b166
    PUSH EAX                            ; 0041b16a
    FXCH ST2                            ; 0041b16b
    FSUB float ptr [ESP + 0x8]          ; 0041b16d
    FXCH                                ; 0041b171
    FSUB float ptr [ESP + 0xc]          ; 0041b173
    FXCH ST2                            ; 0041b177
    FSUB float ptr [ESP + 0x10]         ; 0041b179
    LEA EAX,[EBX + 0x30]                ; 0041b17d
    FXCH                                ; 0041b180
    FSTP float ptr [ESP + 0x44]         ; 0041b182
    PUSH EAX                            ; 0041b186
    LEA EAX,[ESP + 0x3c]                ; 0041b187
    ADD EBX,0xccc                       ; 0041b18b
    PUSH EAX                            ; 0041b191
    FXCH                                ; 0041b192
    FSTP float ptr [ESP + 0x50]         ; 0041b194
    PUSH EBX                            ; 0041b198
    FSTP float ptr [ESP + 0x58]         ; 0041b199
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20 ; 0041b19d
        ;   XREF to: 0041dd20 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 0041b1a2
    ADD ESP,0x48                        ; 0041b1a5
    POP EBX                             ; 0041b1a8
    RET                                 ; 0041b1a9

