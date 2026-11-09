; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_FUN_005b2050(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
; float            Stack[0x10]:4   speed
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_box.cpp_CBox_setupCorners_FUN_005b1c80 at 005b1ea5
;
; Referenced Globals:
;   undefined4 DAT_005f12c8
;   undefined4 DAT_005f12d0
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2050
        ;   Label: core_box.cpp_FUN_005b2050
    PUSH ESI                            ; 005b2051
    PUSH EDI                            ; 005b2052
    PUSH EBP                            ; 005b2053
    SUB ESP,0x3c                        ; 005b2054
    MOV EBP,dword ptr [ESP + 0x50]      ; 005b2057
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b205b
    MOV EBX,dword ptr [ESP + 0x58]      ; 005b205f
    CMP EBP,EAX                         ; 005b2063
    JNZ 0x005b2262                      ; 005b2065
        ;   XREF to: 005b2262 (CONDITIONAL_JUMP)  ; LAB_005b2262
    LEA EAX,[EBP + 0xc]                 ; 005b206b
        ;   Label: LAB_005b206b
    CMP EAX,EBX                         ; 005b206e
    JZ 0x005b2082                       ; 005b2070
        ;   XREF to: 005b2082 (CONDITIONAL_JUMP)  ; LAB_005b2082
    MOV EDX,dword ptr [EBX]             ; 005b2072
    MOV dword ptr [EAX],EDX             ; 005b2074
    MOV EDX,dword ptr [EBX + 0x4]       ; 005b2076
    MOV dword ptr [EAX + 0x4],EDX       ; 005b2079
    MOV EDX,dword ptr [EBX + 0x8]       ; 005b207c
    MOV dword ptr [EAX + 0x8],EDX       ; 005b207f
    LEA EAX,[EBP + 0xc]                 ; 005b2082
        ;   Label: LAB_005b2082
    PUSH EAX                            ; 005b2085
    LEA EBX,[EBP + 0x18]                ; 005b2086
    PUSH EBX                            ; 005b2089
    CALL core_dirmat.cpp_FUN_00449280   ; 005b208a
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBP + 0xa8]          ; 005b208f
    FMUL ST0                            ; 005b2095
    FLD float ptr [EBP + 0xa4]          ; 005b2097
    FMUL ST0                            ; 005b209d
    FLD float ptr [EBP + 0xa4]          ; 005b209f
    ADD ESP,0x8                         ; 005b20a5
    FMUL float ptr [EBP + 0xa4]         ; 005b20a8
    FLD float ptr [ESP + 0x5c]          ; 005b20ae
    FMUL double ptr [0x005f12c8]        ; 005b20b2 | DAT_005f12c8
    FLD float ptr [EBP + 0xac]          ; 005b20b8
    FMUL ST0                            ; 005b20be
    FLD float ptr [EBP + 0xac]          ; 005b20c0
    FMUL ST0                            ; 005b20c6
    FLD float ptr [EBP + 0xa8]          ; 005b20c8
    FMUL ST0                            ; 005b20ce
    FXCH ST2                            ; 005b20d0
    FADDP ST6,ST0                       ; 005b20d2
    FXCH ST2                            ; 005b20d4
    FST float ptr [EBP + 0x94]          ; 005b20d6
    FLD double ptr [0x005f12d0]         ; 005b20dc | DAT_005f12d0
    FXCH                                ; 005b20e2
    FMUL ST1                            ; 005b20e4
    FXCH ST3                            ; 005b20e6
    FADDP ST5,ST0                       ; 005b20e8
    FXCH                                ; 005b20ea
    FADDP ST3,ST0                       ; 005b20ec
    FLD float ptr [EBP + 0x94]          ; 005b20ee
    FMUL ST1                            ; 005b20f4
    FLD float ptr [EBP + 0x94]          ; 005b20f6
    FMULP ST2                           ; 005b20fc
    FXCH ST2                            ; 005b20fe
    FMULP ST5                           ; 005b2100
    FXCH                                ; 005b2102
    FMULP ST3                           ; 005b2104
    FMULP                               ; 005b2106
    LEA EAX,[EBP + 0x64]                ; 005b2108
    FXCH ST2                            ; 005b210b
    FSTP float ptr [EBP + 0x98]         ; 005b210d
    FSTP float ptr [EBP + 0x9c]         ; 005b2113
    FSTP float ptr [EBP + 0xa0]         ; 005b2119
    MOV dword ptr [EAX + 0x8],0x0       ; 005b211f
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b2126
    MOV dword ptr [EAX + 0x4],EDX       ; 005b2129
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b212c
    MOV dword ptr [EAX],EDX             ; 005b212f
    LEA EAX,[EBP + 0x88]                ; 005b2131
    MOV dword ptr [EAX + 0x8],0x0       ; 005b2137
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b213e
    MOV dword ptr [EAX + 0x4],EDX       ; 005b2141
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b2144
    MOV dword ptr [EAX],EDX             ; 005b2147
    LEA EAX,[EBP + 0x4c]                ; 005b2149
    MOV dword ptr [EAX + 0x8],0x0       ; 005b214c
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b2153
    MOV dword ptr [EAX + 0x4],EDX       ; 005b2156
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b2159
    MOV dword ptr [EAX],EDX             ; 005b215c
    LEA EAX,[EBP + 0x70]                ; 005b215e
    MOV dword ptr [EAX + 0x8],0x0       ; 005b2161
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b2168
    MOV dword ptr [EAX + 0x4],EDX       ; 005b216b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b216e
    MOV dword ptr [EAX],EDX             ; 005b2171
    LEA EAX,[EBP + 0x58]                ; 005b2173
    MOV dword ptr [EAX + 0x8],0x0       ; 005b2176
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b217d
    MOV dword ptr [EAX + 0x4],EDX       ; 005b2180
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b2183
    MOV dword ptr [EAX],EDX             ; 005b2186
    LEA EAX,[EBP + 0x7c]                ; 005b2188
    MOV dword ptr [EAX + 0x8],0x0       ; 005b218b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b2192
    MOV dword ptr [EAX + 0x4],EDX       ; 005b2195
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b2198
    MOV dword ptr [EAX],EDX             ; 005b219b
    LEA EAX,[EBP + 0x40]                ; 005b219d
    MOV dword ptr [EAX + 0x8],0x0       ; 005b21a0
    XOR EDX,EDX                         ; 005b21a7
    MOV ECX,dword ptr [EAX + 0x8]       ; 005b21a9
    MOV dword ptr [EAX + 0x4],ECX       ; 005b21ac
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b21af
    MOV dword ptr [EAX],ECX             ; 005b21b2
    MOV ECX,dword ptr [EBP + 0xb0]      ; 005b21b4
    MOV dword ptr [ESP + 0x38],EDX      ; 005b21ba
    TEST ECX,ECX                        ; 005b21be
    JLE 0x005b2250                      ; 005b21c0
        ;   XREF to: 005b2250 (CONDITIONAL_JUMP)  ; LAB_005b2250
    LEA EAX,[EBP + 0xb4]                ; 005b21c6
    MOV dword ptr [ESP + 0x34],EBX      ; 005b21cc
    LEA EBX,[EBP + 0xc0]                ; 005b21d0
    MOV dword ptr [ESP + 0x30],EAX      ; 005b21d6
    IMUL EAX,dword ptr [ESP + 0x38],0x34 ; 005b21da
        ;   Label: LAB_005b21da
    ADD EAX,dword ptr [ESP + 0x30]      ; 005b21df
    PUSH EAX                            ; 005b21e3
    MOV ESI,dword ptr [ESP + 0x38]      ; 005b21e4
    PUSH ESI                            ; 005b21e8
    LEA ESI,[ESP + 0x2c]                ; 005b21e9
    LEA EDI,[ESP + 0x20]                ; 005b21ed
    CALL core_dirmat.cpp_FUN_00449530   ; 005b21f1
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x2c]                ; 005b21f6
    ADD ESP,0x8                         ; 005b21fa
    MOVSD ES:EDI,ESI                    ; 005b21fd
    MOVSD ES:EDI,ESI                    ; 005b21fe
    MOVSD ES:EDI,ESI                    ; 005b21ff
    MOV EAX,ESP                         ; 005b2200
    FLD float ptr [EBP]                 ; 005b2202
    FLD float ptr [EBP + 0x4]           ; 005b2205
    FLD float ptr [EBP + 0x8]           ; 005b2208
    MOV EDI,ESP                         ; 005b220b
    LEA ESI,[ESP + 0xc]                 ; 005b220d
    FXCH ST2                            ; 005b2211
    FADD float ptr [ESP + 0x18]         ; 005b2213
    FXCH                                ; 005b2217
    FADD float ptr [ESP + 0x1c]         ; 005b2219
    FXCH ST2                            ; 005b221d
    FADD float ptr [ESP + 0x20]         ; 005b221f
    FXCH                                ; 005b2223
    FSTP float ptr [ESP + 0xc]          ; 005b2225
    FXCH                                ; 005b2229
    FSTP float ptr [ESP + 0x10]         ; 005b222b
    FSTP float ptr [ESP + 0x14]         ; 005b222f
    MOVSD ES:EDI,ESI                    ; 005b2233
    MOVSD ES:EDI,ESI                    ; 005b2234
    MOVSD ES:EDI,ESI                    ; 005b2235
    CMP EBX,EAX                         ; 005b2236
    JNZ 0x005b2278                      ; 005b2238
        ;   XREF to: 005b2278 (CONDITIONAL_JUMP)  ; LAB_005b2278
    MOV ESI,dword ptr [ESP + 0x38]      ; 005b223a
        ;   Label: LAB_005b223a
    ADD EBX,0x34                        ; 005b223e
    INC ESI                             ; 005b2241
    MOV EDI,dword ptr [EBP + 0xb0]      ; 005b2242
    MOV dword ptr [ESP + 0x38],ESI      ; 005b2248
    CMP ESI,EDI                         ; 005b224c
    JL 0x005b21da                       ; 005b224e
        ;   XREF to: 005b21da (CONDITIONAL_JUMP)  ; LAB_005b21da
    MOV dword ptr [EBP + 0x254],0x1     ; 005b2250
        ;   Label: LAB_005b2250
    ADD ESP,0x3c                        ; 005b225a
    POP EBP                             ; 005b225d
    POP EDI                             ; 005b225e
    POP ESI                             ; 005b225f
    POP EBX                             ; 005b2260
    RET                                 ; 005b2261
    MOV EDX,dword ptr [EAX]             ; 005b2262
        ;   Label: LAB_005b2262
    MOV dword ptr [EBP],EDX             ; 005b2264
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b2267
    MOV dword ptr [EBP + 0x4],EDX       ; 005b226a
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b226d
    MOV dword ptr [EBP + 0x8],EDX       ; 005b2270
    JMP 0x005b206b                      ; 005b2273
        ;   XREF to: 005b206b (UNCONDITIONAL_JUMP)  ; LAB_005b206b
    MOV EAX,dword ptr [ESP]             ; 005b2278
        ;   Label: LAB_005b2278
    MOV dword ptr [EBX],EAX             ; 005b227b
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b227d
    MOV dword ptr [EBX + 0x4],EAX       ; 005b2281
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b2284
    MOV dword ptr [EBX + 0x8],EAX       ; 005b2288
    JMP 0x005b223a                      ; 005b228b
        ;   XREF to: 005b223a (UNCONDITIONAL_JUMP)  ; LAB_005b223a

