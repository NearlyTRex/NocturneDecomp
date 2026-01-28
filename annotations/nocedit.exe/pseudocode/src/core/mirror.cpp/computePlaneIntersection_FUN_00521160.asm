; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_00521160 (SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b, CVector3f *out_intersection)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   clip_plane
; CVector3f *      Stack[0x8]:4   vertex_a
; CVector3f *      Stack[0xc]:4   vertex_b
; CVector3f *      Stack[0x10]:4   out_intersection
; Local Variables:
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
; XREF[1]:
;   core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290 at 005213aa
;
; Referenced Globals:
;   TerminatedCString s_core_mirror_cpp_00638975
;   TerminatedCString s_Bad_clip_00638988
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521160
        ;   Label: core_mirror.cpp_computePlaneIntersection_FUN_00521160
    PUSH ESI                            ; 00521161
    PUSH EDI                            ; 00521162
    PUSH EBP                            ; 00521163
    SUB ESP,0x2c                        ; 00521164
    MOV ESI,dword ptr [ESP + 0x40]      ; 00521167
    MOV EBX,dword ptr [ESP + 0x44]      ; 0052116b
    MOV EDI,dword ptr [ESP + 0x48]      ; 0052116f
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00521173
    FLD float ptr [EDI + 0x4]           ; 00521177
    FSUB float ptr [EBX + 0x4]          ; 0052117a
    FMUL float ptr [ESI + 0x4]          ; 0052117d
    FLD float ptr [EDI]                 ; 00521180
    FSUB float ptr [EBX]                ; 00521182
    FMUL float ptr [ESI]                ; 00521184
    FADDP                               ; 00521186
    FLD float ptr [EDI + 0x8]           ; 00521188
    FSUB float ptr [EBX + 0x8]          ; 0052118b
    FMUL float ptr [ESI + 0x8]          ; 0052118e
    FADDP                               ; 00521191
    FSTP float ptr [ESP + 0x24]         ; 00521193
    TEST dword ptr [ESP + 0x24],0x7fffffff ; 00521197
    JZ 0x00521231                       ; 0052119f
        ;   XREF to: 00521231 (CONDITIONAL_JUMP)  ; LAB_00521231
    FLD float ptr [ESI]                 ; 005211a5
        ;   Label: LAB_005211a5
    FMUL float ptr [EBX]                ; 005211a7
    FADD float ptr [ESI + 0xc]          ; 005211a9
    FLD float ptr [ESI + 0x4]           ; 005211ac
    FMUL float ptr [EBX + 0x4]          ; 005211af
    FADDP                               ; 005211b2
    FLD float ptr [ESI + 0x8]           ; 005211b4
    FMUL float ptr [EBX + 0x8]          ; 005211b7
    FADDP                               ; 005211ba
    FCHS                                ; 005211bc
    FDIV float ptr [ESP + 0x24]         ; 005211be
    FLD float ptr [EDI]                 ; 005211c2
    FSUB float ptr [EBX]                ; 005211c4
    FST float ptr [ESP + 0x18]          ; 005211c6
    FLD float ptr [EDI + 0x4]           ; 005211ca
    FSUB float ptr [EBX + 0x4]          ; 005211cd
    FXCH ST2                            ; 005211d0
    FSTP float ptr [ESP + 0x28]         ; 005211d2
    FMUL float ptr [ESP + 0x28]         ; 005211d6
    FXCH                                ; 005211da
    FST float ptr [ESP + 0x1c]          ; 005211dc
    FLD float ptr [EDI + 0x8]           ; 005211e0
    FSUB float ptr [EBX + 0x8]          ; 005211e3
    FXCH                                ; 005211e6
    FMUL float ptr [ESP + 0x28]         ; 005211e8
    FXCH                                ; 005211ec
    FST float ptr [ESP + 0x20]          ; 005211ee
    FMUL float ptr [ESP + 0x28]         ; 005211f2
    FXCH ST2                            ; 005211f6
    FSTP float ptr [ESP + 0xc]          ; 005211f8
    FSTP float ptr [ESP + 0x10]         ; 005211fc
    FSTP float ptr [ESP + 0x14]         ; 00521200
    FLD float ptr [EBX]                 ; 00521204
    FADD float ptr [ESP + 0xc]          ; 00521206
    FSTP float ptr [ESP]                ; 0052120a
    FLD float ptr [EBX + 0x4]           ; 0052120d
    FADD float ptr [ESP + 0x10]         ; 00521210
    FSTP float ptr [ESP + 0x4]          ; 00521214
    FLD float ptr [EBX + 0x8]           ; 00521218
    FADD float ptr [ESP + 0x14]         ; 0052121b
    MOV EAX,ESP                         ; 0052121f
    FSTP float ptr [ESP + 0x8]          ; 00521221
    CMP EBP,EAX                         ; 00521225
    JNZ 0x00521258                      ; 00521227
        ;   XREF to: 00521258 (CONDITIONAL_JUMP)  ; LAB_00521258
    ADD ESP,0x2c                        ; 00521229
    POP EBP                             ; 0052122c
    POP EDI                             ; 0052122d
    POP ESI                             ; 0052122e
    POP EBX                             ; 0052122f
    RET                                 ; 00521230
    MOV ECX,0x638975                    ; 00521231 | = "..\\core\\mirror.cpp"
        ;   Label: LAB_00521231
    MOV EAX,0x42                        ; 00521236
    PUSH 0x638988                       ; 0052123b | = "Bad clip!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00521240 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00521246 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052124b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00521250
    JMP 0x005211a5                      ; 00521253
        ;   XREF to: 005211a5 (UNCONDITIONAL_JUMP)  ; LAB_005211a5
    MOV EAX,dword ptr [ESP]             ; 00521258
        ;   Label: LAB_00521258
    MOV dword ptr [EBP],EAX             ; 0052125b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052125e
    MOV dword ptr [EBP + 0x4],EAX       ; 00521262
    MOV EAX,dword ptr [ESP + 0x8]       ; 00521265
    MOV dword ptr [EBP + 0x8],EAX       ; 00521269
    ADD ESP,0x2c                        ; 0052126c
    POP EBP                             ; 0052126f
    POP EDI                             ; 00521270
    POP ESI                             ; 00521271
    POP EBX                             ; 00521272
    RET                                 ; 00521273

