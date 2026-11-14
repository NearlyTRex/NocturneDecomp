; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00557110(CDemonSet *this_ptr,CVector3f *position)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_sound.cpp_updateListeners_FUN_0057b780 at 0057bd7f
;
; Referenced Globals:
;   undefined4 DAT_005f0e1d
;   undefined4 DAT_005f0e21
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048b150
;   core_setcolid.cpp_FUN_005578b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557110
        ;   Label: core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00557110
    PUSH EBP                            ; 00557111
    MOV EBP,ESP                         ; 00557112
    SUB ESP,0x24                        ; 00557114
    AND ESP,0xfffffff8                  ; 00557117
    MOV EBX,dword ptr [EBP + 0xc]       ; 0055711a
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055711d
    LEA EAX,[ESP + 0x10]                ; 00557120
    CMP EAX,EDX                         ; 00557124
    JNZ 0x0055720f                      ; 00557126
        ;   XREF to: 0055720f (CONDITIONAL_JUMP)  ; LAB_0055720f
    LEA EAX,[ESP + 0x4]                 ; 0055712c
        ;   Label: LAB_0055712c
    CMP EAX,EDX                         ; 00557130
    JZ 0x00557148                       ; 00557132
        ;   XREF to: 00557148 (CONDITIONAL_JUMP)  ; LAB_00557148
    MOV EAX,dword ptr [EDX]             ; 00557134
    MOV dword ptr [ESP + 0x4],EAX       ; 00557136
    MOV EAX,dword ptr [EDX + 0x4]       ; 0055713a
    MOV dword ptr [ESP + 0x8],EAX       ; 0055713d
    MOV EAX,dword ptr [EDX + 0x8]       ; 00557141
    MOV dword ptr [ESP + 0xc],EAX       ; 00557144
    LEA EAX,[EBX + 0x14d134]            ; 00557148
        ;   Label: LAB_00557148
    FLD float ptr [ESP + 0x14]          ; 0055714e
    PUSH EAX                            ; 00557152
    LEA EAX,[EBX + 0x14d128]            ; 00557153
    FLD float ptr [ESP + 0xc]           ; 00557159
    PUSH EAX                            ; 0055715d
    LEA EAX,[ESP + 0xc]                 ; 0055715e
    FXCH                                ; 00557162
    FADD float ptr [0x005f0e1d]         ; 00557164 | DAT_005f0e1d
    PUSH EAX                            ; 0055716a
    LEA EAX,[ESP + 0x1c]                ; 0055716b
    FXCH                                ; 0055716f
    FADD float ptr [0x005f0e21]         ; 00557171 | DAT_005f0e21
    PUSH EAX                            ; 00557177
    FXCH                                ; 00557178
    FSTP float ptr [ESP + 0x24]         ; 0055717a
    PUSH 0x1fe5c1c                      ; 0055717e | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x1c]         ; 00557183
    CALL core_dtrace.cpp_FUN_0048b150   ; 00557187
        ;   XREF to: 0048b150 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048b150()
    MOV dword ptr [ESP + 0x34],EAX      ; 0055718c
    FLD float ptr [ESP + 0x34]          ; 00557190
    ADD ESP,0x14                        ; 00557194
    FST float ptr [ESP]                 ; 00557197
    FLDZ                                ; 0055719a
    FCOMPP                              ; 0055719c
    FNSTSW AX                           ; 0055719e
    SAHF                                ; 005571a0
    JBE 0x005571aa                      ; 005571a1
        ;   XREF to: 005571aa (CONDITIONAL_JUMP)  ; LAB_005571aa
    MOV dword ptr [ESP],0x3f8147ae      ; 005571a3
    FLD float ptr [ESP]                 ; 005571aa
        ;   Label: LAB_005571aa
    FLD1                                ; 005571ad
    FCOMPP                              ; 005571af
    FNSTSW AX                           ; 005571b1
    SAHF                                ; 005571b3
    JBE 0x005571cb                      ; 005571b4
        ;   XREF to: 005571cb (CONDITIONAL_JUMP)  ; LAB_005571cb
    CMP dword ptr [EBX + 0x14d134],0x0  ; 005571b6
    JNZ 0x005571cb                      ; 005571bd
        ;   XREF to: 005571cb (CONDITIONAL_JUMP)  ; LAB_005571cb
    MOV EAX,dword ptr [EBX + 0x15f694]  ; 005571bf
    MOV dword ptr [EBX + 0x14d134],EAX  ; 005571c5
    LEA EAX,[ESP + 0x4]                 ; 005571cb
        ;   Label: LAB_005571cb
    PUSH dword ptr [ESP]                ; 005571cf
    PUSH EAX                            ; 005571d2
    LEA EAX,[ESP + 0x18]                ; 005571d3
    PUSH EAX                            ; 005571d7
    PUSH 0xbf800000                     ; 005571d8
    PUSH EBX                            ; 005571dd
    CALL core_setcolid.cpp_FUN_005578b0 ; 005571de
        ;   XREF to: 005578b0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005578b0()
    MOV dword ptr [ESP + 0x34],EAX      ; 005571e3
    FLD float ptr [ESP + 0x34]          ; 005571e7
    ADD ESP,0x14                        ; 005571eb
    FLD float ptr [ESP + 0x8]           ; 005571ee
    FSUB float ptr [ESP + 0x14]         ; 005571f2
    FXCH                                ; 005571f6
    FSTP float ptr [ESP]                ; 005571f8
    FMUL float ptr [ESP]                ; 005571fb
    FADD float ptr [ESP + 0x14]         ; 005571fe
    FSTP float ptr [ESP + 0x1c]         ; 00557202
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00557206
    MOV ESP,EBP                         ; 0055720a
    POP EBP                             ; 0055720c
    POP EBX                             ; 0055720d
    RET                                 ; 0055720e
    MOV EAX,dword ptr [EDX]             ; 0055720f
        ;   Label: LAB_0055720f
    MOV dword ptr [ESP + 0x10],EAX      ; 00557211
    MOV EAX,dword ptr [EDX + 0x4]       ; 00557215
    MOV dword ptr [ESP + 0x14],EAX      ; 00557218
    MOV EAX,dword ptr [EDX + 0x8]       ; 0055721c
    MOV dword ptr [ESP + 0x18],EAX      ; 0055721f
    JMP 0x0055712c                      ; 00557223
        ;   XREF to: 0055712c (UNCONDITIONAL_JUMP)  ; LAB_0055712c

