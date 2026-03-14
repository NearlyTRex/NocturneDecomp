; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; CRect            Stack[-0x34]:16  local_34
; CRect *          Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c6d7
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056aee9
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061f0db
;   TerminatedCString s_CDemonLight_blitZBuffer__0061f0ee
;   int g_DirtySpanCount
;   int[256] g_DirtySpanStarts
;   undefined4 DAT_026a6adc
;   int[256] g_DirtySpanEnds
;   undefined4 DAT_026a6edc
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70
;   core_dstrender.cpp_memcpyMMX_FUN_00492001
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472f80
        ;   Label: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
    PUSH ESI                            ; 00472f81
    PUSH EDI                            ; 00472f82
    PUSH EBP                            ; 00472f83
    SUB ESP,0x24                        ; 00472f84
    MOV EBP,dword ptr [ESP + 0x38]      ; 00472f87
    CMP dword ptr [EBP + 0x168],0x0     ; 00472f8b
    JZ 0x00473182                       ; 00472f92
        ;   XREF to: 00473182 (CONDITIONAL_JUMP)  ; LAB_00473182
    CMP dword ptr [EBP + 0x1d0],0x100   ; 00472f98
    JG 0x00473194                       ; 00472fa2
        ;   XREF to: 00473194 (CONDITIONAL_JUMP)  ; LAB_00473194
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 00472fa8
    JZ 0x004731d1                       ; 00472faf
        ;   XREF to: 004731d1 (CONDITIONAL_JUMP)  ; LAB_004731d1
    MOV EAX,dword ptr [EBP + 0x1d0]     ; 00472fb5
        ;   Label: LAB_00472fb5
    XOR ECX,ECX                         ; 00472fbb
    TEST EAX,EAX                        ; 00472fbd
    JLE 0x0047300d                      ; 00472fbf
        ;   XREF to: 0047300d (CONDITIONAL_JUMP)  ; LAB_0047300d
    LEA EDX,[EBP + 0x1d4]               ; 00472fc1
    MOV EBX,dword ptr [EDX]             ; 00472fc7
        ;   Label: LAB_00472fc7
    MOV EAX,EDX                         ; 00472fc9
    TEST EBX,EBX                        ; 00472fcb
    JL 0x004731f9                       ; 00472fcd
        ;   XREF to: 004731f9 (CONDITIONAL_JUMP)  ; LAB_004731f9
    MOV EBX,dword ptr [EBP + 0x1cc0]    ; 00472fd3
        ;   Label: LAB_00472fd3
    MOV ESI,dword ptr [EAX + 0x4]       ; 00472fd9
    DEC EBX                             ; 00472fdc
    CMP EBX,ESI                         ; 00472fdd
    JGE 0x00472fe4                      ; 00472fdf
        ;   XREF to: 00472fe4 (CONDITIONAL_JUMP)  ; LAB_00472fe4
    MOV dword ptr [EAX + 0x4],EBX       ; 00472fe1
    CMP dword ptr [EAX + 0x8],0x0       ; 00472fe4
        ;   Label: LAB_00472fe4
    JL 0x00473204                       ; 00472fe8
        ;   XREF to: 00473204 (CONDITIONAL_JUMP)  ; LAB_00473204
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 00472fee
        ;   Label: LAB_00472fee
    MOV ESI,dword ptr [EAX + 0xc]       ; 00472ff4
    DEC EBX                             ; 00472ff7
    CMP EBX,ESI                         ; 00472ff8
    JGE 0x00472fff                      ; 00472ffa
        ;   XREF to: 00472fff (CONDITIONAL_JUMP)  ; LAB_00472fff
    MOV dword ptr [EAX + 0xc],EBX       ; 00472ffc
    INC ECX                             ; 00472fff
        ;   Label: LAB_00472fff
    MOV EBX,dword ptr [EBP + 0x1d0]     ; 00473000
    ADD EDX,0x10                        ; 00473006
    CMP ECX,EBX                         ; 00473009
    JL 0x00472fc7                       ; 0047300b
        ;   XREF to: 00472fc7 (CONDITIONAL_JUMP)  ; LAB_00472fc7
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 0047300d
        ;   Label: LAB_0047300d
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 00473013
    XOR ESI,ESI                         ; 00473019
    XOR EDX,EDX                         ; 0047301b
    MOV dword ptr [ESP + 0x14],ESI      ; 0047301d
    TEST EDI,EDI                        ; 00473021
    JLE 0x00473053                      ; 00473023
        ;   XREF to: 00473053 (CONDITIONAL_JUMP)  ; LAB_00473053
    LEA EAX,[EBP + 0x1d4]               ; 00473025
    MOV ESI,dword ptr [EAX + 0x8]       ; 0047302b
        ;   Label: LAB_0047302b
    MOV ECX,EAX                         ; 0047302e
    CMP EBX,ESI                         ; 00473030
    JLE 0x00473036                      ; 00473032
        ;   XREF to: 00473036 (CONDITIONAL_JUMP)  ; LAB_00473036
    MOV EBX,ESI                         ; 00473034
    MOV EDI,dword ptr [ESP + 0x14]      ; 00473036
        ;   Label: LAB_00473036
    MOV ESI,dword ptr [ECX + 0xc]       ; 0047303a
    CMP ESI,EDI                         ; 0047303d
    JLE 0x00473045                      ; 0047303f
        ;   XREF to: 00473045 (CONDITIONAL_JUMP)  ; LAB_00473045
    MOV dword ptr [ESP + 0x14],ESI      ; 00473041
    INC EDX                             ; 00473045
        ;   Label: LAB_00473045
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 00473046
    ADD EAX,0x10                        ; 0047304c
    CMP EDX,EDI                         ; 0047304f
    JL 0x0047302b                       ; 00473051
        ;   XREF to: 0047302b (CONDITIONAL_JUMP)  ; LAB_0047302b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00473053
        ;   Label: LAB_00473053
    MOV dword ptr [ESP + 0x1c],EBX      ; 00473057
    CMP EBX,EAX                         ; 0047305b
    JG 0x00473182                       ; 0047305d
        ;   XREF to: 00473182 (CONDITIONAL_JUMP)  ; LAB_00473182
    LEA EAX,[EBP + 0x1d4]               ; 00473063
    MOV dword ptr [ESP + 0x10],EAX      ; 00473069
    XOR ECX,ECX                         ; 0047306d
        ;   Label: LAB_0047306d
    MOV ESI,dword ptr [EBP + 0x1d0]     ; 0047306f
    MOV dword ptr [ESP + 0x18],ECX      ; 00473075
    MOV dword ptr [0x026a6ad4],ECX      ; 00473079 | g_DirtySpanCount
    TEST ESI,ESI                        ; 0047307f
    JLE 0x0047310f                      ; 00473081
        ;   XREF to: 0047310f (CONDITIONAL_JUMP)  ; LAB_0047310f
    MOV EDI,dword ptr [ESP + 0x10]      ; 00473087
    MOV dword ptr [ESP + 0x20],ECX      ; 0047308b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047308f
        ;   Label: LAB_0047308f
    MOV ESI,dword ptr [EDI + 0x8]       ; 00473093
    MOV EDX,EDI                         ; 00473096
    CMP EAX,ESI                         ; 00473098
    JL 0x004730f9                       ; 0047309a
        ;   XREF to: 004730f9 (CONDITIONAL_JUMP)  ; LAB_004730f9
    CMP EAX,dword ptr [EDI + 0xc]       ; 0047309c
    JG 0x004730f9                       ; 0047309f
        ;   XREF to: 004730f9 (CONDITIONAL_JUMP)  ; LAB_004730f9
    MOV EBX,dword ptr [0x026a6ad4]      ; 004730a1 | g_DirtySpanCount
    XOR ECX,ECX                         ; 004730a7
    TEST EBX,EBX                        ; 004730a9
    JLE 0x004730cc                      ; 004730ab
        ;   XREF to: 004730cc (CONDITIONAL_JUMP)  ; LAB_004730cc
    LEA ESI,[EBX*0x4 + 0x0]             ; 004730ad
    XOR EAX,EAX                         ; 004730b4
    MOV EBX,dword ptr [EDX + 0x4]       ; 004730b6
        ;   Label: LAB_004730b6
    CMP EBX,dword ptr [EAX + 0x26a6ad8] ; 004730b9 | g_DirtySpanStarts | DAT_026a6adc
    JGE 0x00473210                      ; 004730bf
        ;   XREF to: 00473210 (CONDITIONAL_JUMP)  ; LAB_00473210
    ADD EAX,0x4                         ; 004730c5
        ;   Label: LAB_004730c5
    CMP EAX,ESI                         ; 004730c8
    JL 0x004730b6                       ; 004730ca
        ;   XREF to: 004730b6 (CONDITIONAL_JUMP)  ; LAB_004730b6
    TEST ECX,ECX                        ; 004730cc
        ;   Label: LAB_004730cc
    JNZ 0x004730f9                      ; 004730ce
        ;   XREF to: 004730f9 (CONDITIONAL_JUMP)  ; LAB_004730f9
    MOV ECX,dword ptr [ESP + 0x20]      ; 004730d0
    MOV EAX,dword ptr [EDX]             ; 004730d4
    MOV dword ptr [ECX + 0x26a6ad8],EAX ; 004730d6 | g_DirtySpanStarts | DAT_026a6adc
    MOV EAX,dword ptr [EDX + 0x4]       ; 004730dc
    LEA EDX,[ECX + 0x4]                 ; 004730df
    MOV dword ptr [ECX + 0x26a6ed8],EAX ; 004730e2 | g_DirtySpanEnds | DAT_026a6edc
    MOV ECX,dword ptr [0x026a6ad4]      ; 004730e8 | g_DirtySpanCount
    INC ECX                             ; 004730ee
    MOV dword ptr [ESP + 0x20],EDX      ; 004730ef
    MOV dword ptr [0x026a6ad4],ECX      ; 004730f3 | g_DirtySpanCount
    MOV EAX,dword ptr [ESP + 0x18]      ; 004730f9
        ;   Label: LAB_004730f9
    ADD EDI,0x10                        ; 004730fd
    INC EAX                             ; 00473100
    MOV EDX,dword ptr [EBP + 0x1d0]     ; 00473101
    MOV dword ptr [ESP + 0x18],EAX      ; 00473107
    CMP EAX,EDX                         ; 0047310b
    JL 0x0047308f                       ; 0047310d
        ;   XREF to: 0047308f (CONDITIONAL_JUMP)  ; LAB_0047308f
    MOV ECX,dword ptr [0x026a6ad4]      ; 0047310f | g_DirtySpanCount
        ;   Label: LAB_0047310f
    XOR EDI,EDI                         ; 00473115
    TEST ECX,ECX                        ; 00473117
    JLE 0x0047316d                      ; 00473119
        ;   XREF to: 0047316d (CONDITIONAL_JUMP)  ; LAB_0047316d
    XOR ESI,ESI                         ; 0047311b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047311d
        ;   Label: LAB_0047311d
    IMUL EAX,dword ptr [EBP + 0x1cc0]   ; 00473121
    MOV ECX,dword ptr [ESI + 0x26a6ad8] ; 00473128 | g_DirtySpanStarts | DAT_026a6adc
    MOV EBX,dword ptr [ESI + 0x26a6ad8] ; 0047312e | g_DirtySpanStarts | DAT_026a6adc
    ADD EAX,ECX                         ; 00473134
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 00473136
    ADD EAX,EAX                         ; 0047313c
    MOV ECX,dword ptr [EBP + 0x2f9c]    ; 0047313e
    ADD EDX,EAX                         ; 00473144
    ADD ECX,EAX                         ; 00473146
    MOV EAX,dword ptr [ESI + 0x26a6ed8] ; 00473148 | g_DirtySpanEnds | DAT_026a6edc
    SUB EAX,EBX                         ; 0047314e
    ADD EAX,EAX                         ; 00473150
    ADD EAX,0x2                         ; 00473152
    PUSH EAX                            ; 00473155
    PUSH ECX                            ; 00473156
    PUSH EDX                            ; 00473157
    ADD ESI,0x4                         ; 00473158
    INC EDI                             ; 0047315b
    CALL core_dstrender.cpp_memcpyMMX_FUN_00492001 ; 0047315c
        ;   XREF to: 00492001 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_memcpyMMX_FUN_00492001(void * dest, void * src, int byte_count)
    MOV EAX,[0x026a6ad4]                ; 00473161 | g_DirtySpanCount
    ADD ESP,0xc                         ; 00473166
    CMP EDI,EAX                         ; 00473169
    JL 0x0047311d                       ; 0047316b
        ;   XREF to: 0047311d (CONDITIONAL_JUMP)  ; LAB_0047311d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047316d
        ;   Label: LAB_0047316d
    INC EAX                             ; 00473171
    MOV EDX,dword ptr [ESP + 0x14]      ; 00473172
    MOV dword ptr [ESP + 0x1c],EAX      ; 00473176
    CMP EAX,EDX                         ; 0047317a
    JLE 0x0047306d                      ; 0047317c
        ;   XREF to: 0047306d (CONDITIONAL_JUMP)  ; LAB_0047306d
    MOV dword ptr [EBP + 0x1d0],0x0     ; 00473182
        ;   Label: LAB_00473182
    ADD ESP,0x24                        ; 0047318c
    POP EBP                             ; 0047318f
    POP EDI                             ; 00473190
    POP ESI                             ; 00473191
    POP EBX                             ; 00473192
    RET                                 ; 00473193
    XOR EDX,EDX                         ; 00473194
        ;   Label: LAB_00473194
    MOV dword ptr [ESP],EDX             ; 00473196
    MOV dword ptr [ESP + 0x8],EDX       ; 00473199
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 0047319d
    DEC EAX                             ; 004731a3
    MOV dword ptr [ESP + 0x4],EAX       ; 004731a4
    MOV EAX,dword ptr [EBP + 0x1cc4]    ; 004731a8
    DEC EAX                             ; 004731ae
    MOV dword ptr [ESP + 0xc],EAX       ; 004731af
    MOV EAX,ESP                         ; 004731b3
    PUSH EAX                            ; 004731b5
    PUSH EBP                            ; 004731b6
    CALL core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70 ; 004731b7
        ;   XREF to: 00472c70 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70(CDemonLight * this_ptr, CRect * source_rect)
    ADD ESP,0x8                         ; 004731bc
    MOV dword ptr [EBP + 0x1d0],0x0     ; 004731bf
    ADD ESP,0x24                        ; 004731c9
    POP EBP                             ; 004731cc
    POP EDI                             ; 004731cd
    POP ESI                             ; 004731ce
    POP EBX                             ; 004731cf
    RET                                 ; 004731d0
    MOV ESI,0x61f0db                    ; 004731d1 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_004731d1
    MOV EDI,0x202                       ; 004731d6
    PUSH 0x61f0ee                       ; 004731db | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 004731e0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004731e6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004731ec
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004731f1
    JMP 0x00472fb5                      ; 004731f4
        ;   XREF to: 00472fb5 (UNCONDITIONAL_JUMP)  ; LAB_00472fb5
    MOV dword ptr [EDX],0x0             ; 004731f9
        ;   Label: LAB_004731f9
    JMP 0x00472fd3                      ; 004731ff
        ;   XREF to: 00472fd3 (UNCONDITIONAL_JUMP)  ; LAB_00472fd3
    MOV dword ptr [EAX + 0x8],0x0       ; 00473204
        ;   Label: LAB_00473204
    JMP 0x00472fee                      ; 0047320b
        ;   XREF to: 00472fee (UNCONDITIONAL_JUMP)  ; LAB_00472fee
    MOV EBX,dword ptr [EDX]             ; 00473210
        ;   Label: LAB_00473210
    CMP EBX,dword ptr [EAX + 0x26a6ed8] ; 00473212 | DAT_026a6edc
    JG 0x004730c5                       ; 00473218
        ;   XREF to: 004730c5 (CONDITIONAL_JUMP)  ; LAB_004730c5
    CMP EBX,dword ptr [EAX + 0x26a6ad8] ; 0047321e | DAT_026a6adc
    JL 0x00473235                       ; 00473224
        ;   XREF to: 00473235 (CONDITIONAL_JUMP)  ; LAB_00473235
    MOV EBX,dword ptr [EDX + 0x4]       ; 00473226
    CMP EBX,dword ptr [EAX + 0x26a6ed8] ; 00473229 | DAT_026a6edc
    JLE 0x004730f9                      ; 0047322f
        ;   XREF to: 004730f9 (CONDITIONAL_JUMP)  ; LAB_004730f9
    MOV EBX,dword ptr [EDX]             ; 00473235
        ;   Label: LAB_00473235
    CMP EBX,dword ptr [EAX + 0x26a6ad8] ; 00473237 | DAT_026a6adc
    JGE 0x0047324a                      ; 0047323d
        ;   XREF to: 0047324a (CONDITIONAL_JUMP)  ; LAB_0047324a
    MOV ECX,0x1                         ; 0047323f
    MOV dword ptr [EAX + 0x26a6ad8],EBX ; 00473244 | DAT_026a6adc
    MOV EBX,dword ptr [EDX + 0x4]       ; 0047324a
        ;   Label: LAB_0047324a
    CMP EBX,dword ptr [EAX + 0x26a6ed8] ; 0047324d | DAT_026a6edc
    JLE 0x00473260                      ; 00473253
        ;   XREF to: 00473260 (CONDITIONAL_JUMP)  ; LAB_00473260
    MOV dword ptr [EAX + 0x26a6ed8],EBX ; 00473255 | DAT_026a6edc
    JMP 0x004730f9                      ; 0047325b
        ;   XREF to: 004730f9 (UNCONDITIONAL_JUMP)  ; LAB_004730f9
    TEST ECX,ECX                        ; 00473260
        ;   Label: LAB_00473260
    JNZ 0x004730cc                      ; 00473262
        ;   XREF to: 004730cc (CONDITIONAL_JUMP)  ; LAB_004730cc
    JMP 0x004730c5                      ; 00473268
        ;   XREF to: 004730c5 (UNCONDITIONAL_JUMP)  ; LAB_004730c5

