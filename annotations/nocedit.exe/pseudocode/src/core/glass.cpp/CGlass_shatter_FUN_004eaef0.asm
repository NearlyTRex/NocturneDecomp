; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_glass_cpp_CGlass_shatter_FUN_004eaef0(CGlass *this_ptr,CVector3f *location)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   location
; Local Variables:
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a6c3
;   core_crossbow.cpp_CCrossbow_FUN_00448f20 at 004494e5
;   core_glass.cpp_CGlass_process_FUN_004e98e0 at 004e9919
;   core_gun.cpp_CGun_FUN_004f0350 at 004f0a57
;   core_hiram.cpp_CHiram_process_FUN_004f4550 at 004f4644
;   core_set.cpp_CDemonSet_FUN_0056b810 at 0056bbe7
;   core_tommygun.cpp_FUN_005ddb30 at 005de270
;   core_turret.cpp_CTurret_fire_FUN_005e3750 at 005e3c02
;
; Referenced Globals:
;   TerminatedCString s_s_7YEARS_RAW_0062e0e9
;   undefined4 s_YEARS.RAW_0062e0ea
;   undefined4 s_EARS.RAW_0062e0eb
;   undefined4 s_ARS.RAW_0062e0ec
;   TerminatedCString s_glass_1_wav_2_0_0062e0f4
;   double DOUBLE_0062e109 = 0.5
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_CurrentTextureDimension = 0x100
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 DAT_00f80000
;   undefined4 DAT_00fe0000
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0
;   core_set.cpp_CDemonSet_FUN_00570c60
;   crt_memory.c___arrinit_FUN_005fe667
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eaef0
        ;   Label: core_glass.cpp_CGlass_shatter_FUN_004eaef0
    PUSH ESI                            ; 004eaef1
    PUSH EDI                            ; 004eaef2
    PUSH EBP                            ; 004eaef3
    SUB ESP,0xbc                        ; 004eaef4
    MOV EBX,dword ptr [ESP + 0xd0]      ; 004eaefa
    CMP dword ptr [EBX + 0x180],0x0     ; 004eaf01
    JNZ 0x004eb1b6                      ; 004eaf08
        ;   XREF to: 004eb1b6 (CONDITIONAL_JUMP)  ; LAB_004eb1b6
    MOV ECX,dword ptr [EBX + 0x1e8]     ; 004eaf0e
    MOV dword ptr [EBX + 0x180],0x1     ; 004eaf14
    TEST ECX,ECX                        ; 004eaf1e
    JNZ 0x004eb1c1                      ; 004eaf20
        ;   XREF to: 004eb1c1 (CONDITIONAL_JUMP)  ; LAB_004eb1c1
    PUSH 0x6598c0                       ; 004eaf26 | g_CVectorTypeInfo
        ;   Label: LAB_004eaf26
    PUSH 0x4                            ; 004eaf2b
    LEA EAX,[ESP + 0x8]                 ; 004eaf2d
    PUSH EAX                            ; 004eaf31
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004eaf32
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    FLD float ptr [EBX + 0x158]         ; 004eaf37
    FMUL double ptr [0x0062e109]        ; 004eaf3d | DOUBLE_0062e109
    ADD ESP,0xc                         ; 004eaf43
    LEA EAX,[ESP + 0xb0]                ; 004eaf46
    XOR EDI,EDI                         ; 004eaf4d
    PUSH EAX                            ; 004eaf4f
    LEA EAX,[ESP + 0x84]                ; 004eaf50
    MOV dword ptr [ESP + 0xb8],EDI      ; 004eaf57
    PUSH EAX                            ; 004eaf5e
    LEA EAX,[EBX + 0x3c]                ; 004eaf5f
    MOV dword ptr [ESP + 0xc0],EDI      ; 004eaf62
    PUSH EAX                            ; 004eaf69
    FSTP float ptr [ESP + 0xbc]         ; 004eaf6a
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004eaf71
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 004eaf76
    FLD float ptr [EDX]                 ; 004eaf79
    FADD float ptr [EAX]                ; 004eaf7b
    ADD ESP,0xc                         ; 004eaf7d
    FSTP float ptr [ESP + 0x8c]         ; 004eaf80
    FLD float ptr [EDX + 0x4]           ; 004eaf87
    FADD float ptr [EAX + 0x4]          ; 004eaf8a
    FSTP float ptr [ESP + 0x90]         ; 004eaf8d
    FLD float ptr [EDX + 0x8]           ; 004eaf94
    MOV EDX,ESP                         ; 004eaf97
    FADD float ptr [EAX + 0x8]          ; 004eaf99
    LEA EAX,[ESP + 0x8c]                ; 004eaf9c
    FSTP float ptr [ESP + 0x94]         ; 004eafa3
    CMP EDX,EAX                         ; 004eafaa
    JZ 0x004eafce                       ; 004eafac
        ;   XREF to: 004eafce (CONDITIONAL_JUMP)  ; LAB_004eafce
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004eafae
    MOV dword ptr [ESP],EAX             ; 004eafb5
    MOV EAX,dword ptr [ESP + 0x90]      ; 004eafb8
    MOV dword ptr [ESP + 0x4],EAX       ; 004eafbf
    MOV EAX,dword ptr [ESP + 0x94]      ; 004eafc3
    MOV dword ptr [ESP + 0x8],EAX       ; 004eafca
    LEA EAX,[ESP + 0xb0]                ; 004eafce
        ;   Label: LAB_004eafce
    PUSH EAX                            ; 004eafd5
    LEA EAX,[ESP + 0x54]                ; 004eafd6
    FLD float ptr [ESP + 0xb8]          ; 004eafda
    PUSH EAX                            ; 004eafe1
    LEA EAX,[EBX + 0x3c]                ; 004eafe2
    FADD float ptr [EBX + 0x15c]        ; 004eafe5
    PUSH EAX                            ; 004eafeb
    FSTP float ptr [ESP + 0xc0]         ; 004eafec
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004eaff3
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 004eaff8
    FLD float ptr [EDX]                 ; 004eaffb
    FADD float ptr [EAX]                ; 004eaffd
    ADD ESP,0xc                         ; 004eafff
    FSTP float ptr [ESP + 0x74]         ; 004eb002
    FLD float ptr [EDX + 0x4]           ; 004eb006
    FADD float ptr [EAX + 0x4]          ; 004eb009
    FSTP float ptr [ESP + 0x78]         ; 004eb00c
    FLD float ptr [EDX + 0x8]           ; 004eb010
    LEA EDX,[ESP + 0x74]                ; 004eb013
    FADD float ptr [EAX + 0x8]          ; 004eb017
    LEA EAX,[ESP + 0xc]                 ; 004eb01a
    FSTP float ptr [ESP + 0x7c]         ; 004eb01e
    CMP EAX,EDX                         ; 004eb022
    JZ 0x004eb03e                       ; 004eb024
        ;   XREF to: 004eb03e (CONDITIONAL_JUMP)  ; LAB_004eb03e
    MOV EAX,dword ptr [ESP + 0x74]      ; 004eb026
    MOV dword ptr [ESP + 0xc],EAX       ; 004eb02a
    MOV EAX,dword ptr [ESP + 0x78]      ; 004eb02e
    MOV dword ptr [ESP + 0x10],EAX      ; 004eb032
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004eb036
    MOV dword ptr [ESP + 0x14],EAX      ; 004eb03a
    XOR byte ptr [ESP + 0xb3],0x80      ; 004eb03e
        ;   Label: LAB_004eb03e
    LEA EAX,[ESP + 0xb0]                ; 004eb046
    PUSH EAX                            ; 004eb04d
    LEA EAX,[ESP + 0x6c]                ; 004eb04e
    PUSH EAX                            ; 004eb052
    LEA EAX,[EBX + 0x3c]                ; 004eb053
    PUSH EAX                            ; 004eb056
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004eb057
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 004eb05c
    FLD float ptr [EDX]                 ; 004eb05f
    FADD float ptr [EAX]                ; 004eb061
    ADD ESP,0xc                         ; 004eb063
    FSTP float ptr [ESP + 0x98]         ; 004eb066
    FLD float ptr [EDX + 0x4]           ; 004eb06d
    FADD float ptr [EAX + 0x4]          ; 004eb070
    FSTP float ptr [ESP + 0x9c]         ; 004eb073
    FLD float ptr [EDX + 0x8]           ; 004eb07a
    LEA EDX,[ESP + 0x18]                ; 004eb07d
    FADD float ptr [EAX + 0x8]          ; 004eb081
    LEA EAX,[ESP + 0x98]                ; 004eb084
    FSTP float ptr [ESP + 0xa0]         ; 004eb08b
    CMP EDX,EAX                         ; 004eb092
    JZ 0x004eb0b7                       ; 004eb094
        ;   XREF to: 004eb0b7 (CONDITIONAL_JUMP)  ; LAB_004eb0b7
    MOV EAX,dword ptr [ESP + 0x98]      ; 004eb096
    MOV dword ptr [ESP + 0x18],EAX      ; 004eb09d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004eb0a1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004eb0a8
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004eb0ac
    MOV dword ptr [ESP + 0x20],EAX      ; 004eb0b3
    XOR EAX,EAX                         ; 004eb0b7
        ;   Label: LAB_004eb0b7
    MOV dword ptr [ESP + 0xb4],EAX      ; 004eb0b9
    LEA EAX,[ESP + 0xb0]                ; 004eb0c0
    PUSH EAX                            ; 004eb0c7
    LEA EAX,[ESP + 0x60]                ; 004eb0c8
    PUSH EAX                            ; 004eb0cc
    LEA EAX,[EBX + 0x3c]                ; 004eb0cd
    PUSH EAX                            ; 004eb0d0
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004eb0d1
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 004eb0d6
    FLD float ptr [EDX]                 ; 004eb0d9
    FADD float ptr [EAX]                ; 004eb0db
    ADD ESP,0xc                         ; 004eb0dd
    FSTP float ptr [ESP + 0xa4]         ; 004eb0e0
    FLD float ptr [EDX + 0x4]           ; 004eb0e7
    FADD float ptr [EAX + 0x4]          ; 004eb0ea
    FSTP float ptr [ESP + 0xa8]         ; 004eb0ed
    FLD float ptr [EDX + 0x8]           ; 004eb0f4
    LEA EDX,[ESP + 0x24]                ; 004eb0f7
    FADD float ptr [EAX + 0x8]          ; 004eb0fb
    LEA EAX,[ESP + 0xa4]                ; 004eb0fe
    FSTP float ptr [ESP + 0xac]         ; 004eb105
    CMP EDX,EAX                         ; 004eb10c
    JZ 0x004eb131                       ; 004eb10e
        ;   XREF to: 004eb131 (CONDITIONAL_JUMP)  ; LAB_004eb131
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004eb110
    MOV dword ptr [ESP + 0x24],EAX      ; 004eb117
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004eb11b
    MOV dword ptr [ESP + 0x28],EAX      ; 004eb122
    MOV EAX,dword ptr [ESP + 0xac]      ; 004eb126
    MOV dword ptr [ESP + 0x2c],EAX      ; 004eb12d
    LEA EAX,[EBX + 0x164]               ; 004eb131
        ;   Label: LAB_004eb131
    PUSH EAX                            ; 004eb137
    MOV EDX,dword ptr [0x006703ec]      ; 004eb138 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004eb13e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004eb13f
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,dword ptr [0x006793a4]      ; 004eb144 | g_CurrentTextureDimension
    ADD ESP,0x8                         ; 004eb14a
    CMP ECX,0x40                        ; 004eb14d
    JNZ 0x004eb204                      ; 004eb150
        ;   XREF to: 004eb204 (CONDITIONAL_JUMP)  ; LAB_004eb204
    MOV EAX,0xf80000                    ; 004eb156 | DAT_00f80000
    MOV EBP,0x80000                     ; 004eb15b
    MOV dword ptr [ESP + 0x40],EAX      ; 004eb160 | DAT_00f80000
    MOV dword ptr [ESP + 0x34],EBP      ; 004eb164
    MOV dword ptr [ESP + 0x44],EBP      ; 004eb168
    MOV dword ptr [ESP + 0x38],EAX      ; 004eb16c | DAT_00f80000
    MOV dword ptr [ESP + 0x48],EBP      ; 004eb170
    MOV dword ptr [ESP + 0x3c],EAX      ; 004eb174 | DAT_00f80000
    MOV dword ptr [ESP + 0x4c],EAX      ; 004eb178 | DAT_00f80000
    MOV dword ptr [ESP + 0x30],EBP      ; 004eb17c
    PUSH 0x0                            ; 004eb180
        ;   Label: LAB_004eb180
    LEA EAX,[ESP + 0x44]                ; 004eb182
    PUSH EAX                            ; 004eb186
    LEA EAX,[ESP + 0x38]                ; 004eb187
    PUSH EAX                            ; 004eb18b
    LEA EAX,[ESP + 0xc]                 ; 004eb18c
    PUSH EAX                            ; 004eb190
    PUSH EBX                            ; 004eb191
    CALL core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0 ; 004eb192
        ;   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass * this_ptr, SQuadVertices * quad_vertices, CVector4i * quad_uv_u, CVector4i * quad_uv_v, ...)
    ADD ESP,0x14                        ; 004eb197
    PUSH 0x62e0f4                       ; 004eb19a | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004eb19f
    PUSH EBX                            ; 004eb1a5
    CALL dword ptr [EAX + 0x24]         ; 004eb1a6
    MOV EDX,dword ptr [EBX + 0x370]     ; 004eb1a9
    ADD ESP,0x8                         ; 004eb1af
    TEST EDX,EDX                        ; 004eb1b2
    JNZ 0x004eb233                      ; 004eb1b4
        ;   XREF to: 004eb233 (CONDITIONAL_JUMP)  ; LAB_004eb233
    ADD ESP,0xbc                        ; 004eb1b6
        ;   Label: LAB_004eb1b6
    POP EBP                             ; 004eb1bc
    POP EDI                             ; 004eb1bd
    POP ESI                             ; 004eb1be
    POP EBX                             ; 004eb1bf
    RET                                 ; 004eb1c0
    MOV ESI,0x62e0e9                    ; 004eb1c1 | = "7YEARS.RAW"
        ;   Label: LAB_004eb1c1
    LEA EDI,[EBX + 0x16c]               ; 004eb1c6
    MOV dword ptr [EBX + 0x17c],0xffff  ; 004eb1cc
    PUSH EDI                            ; 004eb1d6
    MOV AL,byte ptr [ESI]               ; 004eb1d7 | = "7YEARS.RAW" | s_EARS.RAW_0062e0eb
        ;   Label: LAB_004eb1d7
    MOV byte ptr [EDI],AL               ; 004eb1d9
    CMP AL,0x0                          ; 004eb1db
    JZ 0x004eb1ef                       ; 004eb1dd
        ;   XREF to: 004eb1ef (CONDITIONAL_JUMP)  ; LAB_004eb1ef
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb1df | s_YEARS.RAW_0062e0ea | s_ARS.RAW_0062e0ec
    ADD ESI,0x2                         ; 004eb1e2
    MOV byte ptr [EDI + 0x1],AL         ; 004eb1e5
    ADD EDI,0x2                         ; 004eb1e8
    CMP AL,0x0                          ; 004eb1eb
    JNZ 0x004eb1d7                      ; 004eb1ed
        ;   XREF to: 004eb1d7 (CONDITIONAL_JUMP)  ; LAB_004eb1d7
    POP EDI                             ; 004eb1ef
        ;   Label: LAB_004eb1ef
    MOV ESI,dword ptr [0x006810c8]      ; 004eb1f0 | g_CDemonSetPtr
    PUSH ESI                            ; 004eb1f6 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570c60 ; 004eb1f7
        ;   XREF to: 00570c60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570c60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004eb1fc
    JMP 0x004eaf26                      ; 004eb1ff
        ;   XREF to: 004eaf26 (UNCONDITIONAL_JUMP)  ; LAB_004eaf26
    MOV EDI,0xfe0000                    ; 004eb204 | DAT_00fe0000
        ;   Label: LAB_004eb204
    MOV ESI,0x20000                     ; 004eb209
    MOV dword ptr [ESP + 0x40],EDI      ; 004eb20e | DAT_00fe0000
    MOV dword ptr [ESP + 0x34],ESI      ; 004eb212
    MOV dword ptr [ESP + 0x44],ESI      ; 004eb216
    MOV dword ptr [ESP + 0x38],EDI      ; 004eb21a | DAT_00fe0000
    MOV dword ptr [ESP + 0x48],ESI      ; 004eb21e
    MOV dword ptr [ESP + 0x3c],EDI      ; 004eb222 | DAT_00fe0000
    MOV dword ptr [ESP + 0x4c],EDI      ; 004eb226 | DAT_00fe0000
    MOV dword ptr [ESP + 0x30],ESI      ; 004eb22a
    JMP 0x004eb180                      ; 004eb22e
        ;   XREF to: 004eb180 (UNCONDITIONAL_JUMP)  ; LAB_004eb180
    MOV dword ptr [EBX + 0xb3c],0x1     ; 004eb233
        ;   Label: LAB_004eb233
    ADD ESP,0xbc                        ; 004eb23d
    POP EBP                             ; 004eb243
    POP EDI                             ; 004eb244
    POP ESI                             ; 004eb245
    POP EBX                             ; 004eb246
    RET                                 ; 004eb247

