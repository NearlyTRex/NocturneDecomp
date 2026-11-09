; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005af040(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   direction
; CVector3f *      Stack[0xc]:4   rotation
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f409
;
; Referenced Globals:
;   undefined4 DAT_005f99aa
;   undefined4 DAT_005f99b2
;   undefined4 DAT_005f99ba
;   undefined4 DAT_005f99c2
;   undefined4 DAT_005f99c6
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02c997f8
;   undefined4 DAT_02c997fc
;   undefined4 DAT_02c99800
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_FUN_00557300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af040
        ;   Label: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005af040
    PUSH ESI                            ; 005af041
    PUSH EDI                            ; 005af042
    PUSH EBP                            ; 005af043
    MOV EBP,ESP                         ; 005af044
    SUB ESP,0x40                        ; 005af046
    AND ESP,0xfffffff8                  ; 005af049
    MOV EDI,dword ptr [EBP + 0x18]      ; 005af04c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af04f
    ADD EAX,0x8                         ; 005af052
    CMP EAX,EDI                         ; 005af055
    JNZ 0x005af22b                      ; 005af057
        ;   XREF to: 005af22b (CONDITIONAL_JUMP)  ; LAB_005af22b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af05d
        ;   Label: LAB_005af05d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005af060
    ADD EAX,0x14                        ; 005af063
    CMP EAX,EDX                         ; 005af066
    JZ 0x005af07a                       ; 005af068
        ;   XREF to: 005af07a (CONDITIONAL_JUMP)  ; LAB_005af07a
    MOV ECX,dword ptr [EDX]             ; 005af06a
    MOV dword ptr [EAX],ECX             ; 005af06c
    MOV ECX,dword ptr [EDX + 0x4]       ; 005af06e
    MOV dword ptr [EAX + 0x4],ECX       ; 005af071
    MOV ECX,dword ptr [EDX + 0x8]       ; 005af074
    MOV dword ptr [EAX + 0x8],ECX       ; 005af077
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af07a
        ;   Label: LAB_005af07a
    CMP dword ptr [EAX],0x0             ; 005af07d
    JZ 0x005af224                       ; 005af080
        ;   XREF to: 005af224 (CONDITIONAL_JUMP)  ; LAB_005af224
    MOV EBX,0x2c997f8                   ; 005af086
    XOR ESI,ESI                         ; 005af08b
    PUSH 0x42480000                     ; 005af08d
        ;   Label: LAB_005af08d
    PUSH 0x40a00000                     ; 005af092
    CALL core_actor.cpp_FUN_0040cc00    ; 005af097
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x44],EAX      ; 005af09c
    FLD float ptr [ESP + 0x44]          ; 005af0a0
    ADD ESP,0x8                         ; 005af0a4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005af0a7
    FSTP float ptr [ESP + 0x38]         ; 005af0aa
    FLD float ptr [EAX + 0x4]           ; 005af0ae
    FLD ST0                             ; 005af0b1
    FADD double ptr [0x005f99b2]        ; 005af0b3 | DAT_005f99b2
    SUB ESP,0x4                         ; 005af0b9
    FSTP float ptr [ESP]                ; 005af0bc
    FADD double ptr [0x005f99ba]        ; 005af0bf | DAT_005f99ba
    SUB ESP,0x4                         ; 005af0c5
    FSTP float ptr [ESP]                ; 005af0c8
    CALL core_actor.cpp_FUN_0040cc00    ; 005af0cb
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x44],EAX      ; 005af0d0
    FLD float ptr [ESP + 0x44]          ; 005af0d4
    ADD ESP,0x8                         ; 005af0d8
    FLD ST0                             ; 005af0db
    FSIN                                ; 005af0dd
    FXCH                                ; 005af0df
    FCOS                                ; 005af0e1
    FLD float ptr [ESP + 0x38]          ; 005af0e3
    FXCH ST2                            ; 005af0e7
    FMUL ST2                            ; 005af0e9
    FADD float ptr [EDI]                ; 005af0eb
    FXCH                                ; 005af0ed
    FMULP ST2                           ; 005af0ef
    FSTP float ptr [ESP + 0x18]         ; 005af0f1
    MOV EAX,dword ptr [EDI + 0x4]       ; 005af0f5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005af0f8
    MOV EDX,ESP                         ; 005af0fc
    FADD float ptr [EDI + 0x8]          ; 005af0fe
    LEA EAX,[ESP + 0x18]                ; 005af101
    FSTP float ptr [ESP + 0x20]         ; 005af105
    CMP EDX,EAX                         ; 005af109
    JZ 0x005af124                       ; 005af10b
        ;   XREF to: 005af124 (CONDITIONAL_JUMP)  ; LAB_005af124
    MOV EAX,dword ptr [ESP + 0x18]      ; 005af10d
    MOV dword ptr [ESP],EAX             ; 005af111
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005af114
    MOV dword ptr [ESP + 0x4],EAX       ; 005af118
    MOV EAX,dword ptr [ESP + 0x20]      ; 005af11c
    MOV dword ptr [ESP + 0x8],EAX       ; 005af120
    LEA EAX,[ESP + 0xc]                 ; 005af124
        ;   Label: LAB_005af124
    LEA EDX,[ESP + 0x18]                ; 005af128
    CMP EAX,EDX                         ; 005af12c
    JZ 0x005af148                       ; 005af12e
        ;   XREF to: 005af148 (CONDITIONAL_JUMP)  ; LAB_005af148
    MOV EAX,dword ptr [ESP + 0x18]      ; 005af130
    MOV dword ptr [ESP + 0xc],EAX       ; 005af134
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005af138
    MOV dword ptr [ESP + 0x10],EAX      ; 005af13c
    MOV EAX,dword ptr [ESP + 0x20]      ; 005af140
    MOV dword ptr [ESP + 0x14],EAX      ; 005af144
    FLD float ptr [ESP + 0x4]           ; 005af148
        ;   Label: LAB_005af148
    MOV EAX,[0x00622c18]                ; 005af14c | g_CDemonSetPtr
    FLD float ptr [ESP + 0x10]          ; 005af151
    PUSH EAX                            ; 005af155 | g_CDemonSetInstance
    FXCH                                ; 005af156
    FADD float ptr [0x005f99c2]         ; 005af158 | DAT_005f99c2
    FXCH                                ; 005af15e
    FADD float ptr [0x005f99c6]         ; 005af160 | DAT_005f99c6
    FXCH                                ; 005af166
    FSTP float ptr [ESP + 0x8]          ; 005af168
    FSTP float ptr [ESP + 0x14]         ; 005af16c
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005af170
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005af175
    MOV EDX,dword ptr [0x00622c18]      ; 005af178 | g_CDemonSetPtr
    PUSH EDX                            ; 005af17e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0 ; 005af17f
        ;   XREF to: 005592b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005af184
    LEA EAX,[ESP + 0xc]                 ; 005af187
    PUSH EAX                            ; 005af18b
    LEA EAX,[ESP + 0x4]                 ; 005af18c
    PUSH EAX                            ; 005af190
    MOV ECX,dword ptr [0x00622c18]      ; 005af191 | g_CDemonSetPtr
    PUSH ECX                            ; 005af197 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 005af198
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x48],EAX      ; 005af19d
    FLD float ptr [ESP + 0x48]          ; 005af1a1
    ADD ESP,0xc                         ; 005af1a5
    FLD float ptr [ESP + 0x10]          ; 005af1a8
    FSUB float ptr [ESP + 0x4]          ; 005af1ac
    FMULP                               ; 005af1b0
    PUSH 0x3f800000                     ; 005af1b2
    FADD float ptr [ESP + 0x8]          ; 005af1b7
    PUSH 0x0                            ; 005af1bb
    FST float ptr [ESI + 0x2c9a158]     ; 005af1bd
    FSTP double ptr [ESP + 0x34]        ; 005af1c3
    CALL core_actor.cpp_FUN_0040cc00    ; 005af1c7
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x44],EAX      ; 005af1cc
    FLD float ptr [ESP + 0x44]          ; 005af1d0
    FMUL double ptr [0x005f99aa]        ; 005af1d4 | DAT_005f99aa
    ADD ESP,0x8                         ; 005af1da
    FADD double ptr [ESP + 0x2c]        ; 005af1dd
    LEA EAX,[ESP + 0x18]                ; 005af1e1
    FSTP float ptr [ESP + 0x1c]         ; 005af1e5
    CMP EBX,EAX                         ; 005af1e9
    JZ 0x005af201                       ; 005af1eb
        ;   XREF to: 005af201 (CONDITIONAL_JUMP)  ; LAB_005af201
    MOV EAX,dword ptr [ESP + 0x18]      ; 005af1ed
    MOV dword ptr [EBX],EAX             ; 005af1f1 | DAT_02c997f8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005af1f3
    MOV dword ptr [EBX + 0x4],EAX       ; 005af1f7 | DAT_02c997fc
    MOV EAX,dword ptr [ESP + 0x20]      ; 005af1fa
    MOV dword ptr [EBX + 0x8],EAX       ; 005af1fe | DAT_02c99800
    ADD ESI,0x4                         ; 005af201
        ;   Label: LAB_005af201
    ADD EBX,0xc                         ; 005af204
    CMP ESI,0x320                       ; 005af207
    JNZ 0x005af08d                      ; 005af20d
        ;   XREF to: 005af08d (CONDITIONAL_JUMP)  ; LAB_005af08d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af213
    MOV dword ptr [EAX + 0x28],0x0      ; 005af216
    MOV dword ptr [EAX + 0x24],0x0      ; 005af21d
    MOV ESP,EBP                         ; 005af224
        ;   Label: LAB_005af224
    POP EBP                             ; 005af226
    POP EDI                             ; 005af227
    POP ESI                             ; 005af228
    POP EBX                             ; 005af229
    RET                                 ; 005af22a
    MOV EDX,dword ptr [EDI]             ; 005af22b
        ;   Label: LAB_005af22b
    MOV dword ptr [EAX],EDX             ; 005af22d
    MOV EDX,dword ptr [EDI + 0x4]       ; 005af22f
    MOV dword ptr [EAX + 0x4],EDX       ; 005af232
    MOV EDX,dword ptr [EDI + 0x8]       ; 005af235
    MOV dword ptr [EAX + 0x8],EDX       ; 005af238
    JMP 0x005af05d                      ; 005af23b
        ;   XREF to: 005af05d (UNCONDITIONAL_JUMP)  ; LAB_005af05d

