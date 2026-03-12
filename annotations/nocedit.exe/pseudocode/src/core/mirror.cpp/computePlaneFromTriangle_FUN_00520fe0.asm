; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   out_plane
; CVector3f *      Stack[0x8]:4   vertex_a
; CVector3f *      Stack[0xc]:4   vertex_b
; CVector3f *      Stack[0x10]:4   vertex_c
; Local Variables:
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; SClipPlane       Stack[-0x48]:16  local_48
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; undefined4[3]    Stack[-0x30]:12  local_30
; float[5]         Stack[-0x24]:20  local_24
;
; XREF[1]:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0 at 00522240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520fe0
        ;   Label: core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
    PUSH ESI                            ; 00520fe1
    PUSH EDI                            ; 00520fe2
    PUSH EBP                            ; 00520fe3
    MOV EBP,ESP                         ; 00520fe4
    SUB ESP,0x44                        ; 00520fe6
    AND ESP,0xfffffff8                  ; 00520fe9
    MOV EDX,dword ptr [EBP + 0x14]      ; 00520fec
    MOV EBX,dword ptr [EBP + 0x18]      ; 00520fef
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00520ff2
    MOV ESI,dword ptr [EBP + 0x20]      ; 00520ff5
    FLD float ptr [ECX]                 ; 00520ff8
    FSUB float ptr [EBX]                ; 00520ffa
    FSTP float ptr [ESP + 0x28]         ; 00520ffc
    FLD float ptr [ECX + 0x4]           ; 00521000
    FSUB float ptr [EBX + 0x4]          ; 00521003
    LEA EAX,[ESP + 0x28]                ; 00521006
    FSTP float ptr [ESP + 0x2c]         ; 0052100a
    FLD float ptr [ECX + 0x8]           ; 0052100e
    FSUB float ptr [EBX + 0x8]          ; 00521011
    LEA EDI,[ESP + 0x1c]                ; 00521014
    FSTP float ptr [ESP + 0x30]         ; 00521018
    CMP EDI,EAX                         ; 0052101c
    JNZ 0x00521127                      ; 0052101e
        ;   XREF to: 00521127 (CONDITIONAL_JUMP)  ; LAB_00521127
    FLD float ptr [ESI]                 ; 00521024
        ;   Label: LAB_00521024
    FSUB float ptr [ECX]                ; 00521026
    FSTP float ptr [ESP + 0x34]         ; 00521028
    FLD float ptr [ESI + 0x4]           ; 0052102c
    FSUB float ptr [ECX + 0x4]          ; 0052102f
    LEA EAX,[ESP + 0x34]                ; 00521032
    FSTP float ptr [ESP + 0x38]         ; 00521036
    FLD float ptr [ESI + 0x8]           ; 0052103a
    FSUB float ptr [ECX + 0x8]          ; 0052103d
    LEA ECX,[ESP + 0x4]                 ; 00521040
    FSTP float ptr [ESP + 0x3c]         ; 00521044
    CMP ECX,EAX                         ; 00521048
    JZ 0x00521064                       ; 0052104a
        ;   XREF to: 00521064 (CONDITIONAL_JUMP)  ; LAB_00521064
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052104c
    MOV dword ptr [ESP + 0x4],EAX       ; 00521050
    MOV EAX,dword ptr [ESP + 0x38]      ; 00521054
    MOV dword ptr [ESP + 0x8],EAX       ; 00521058
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0052105c
    MOV dword ptr [ESP + 0xc],EAX       ; 00521060
    FLD float ptr [ESP + 0x20]          ; 00521064
        ;   Label: LAB_00521064
    FMUL float ptr [ESP + 0xc]          ; 00521068
    FLD float ptr [ESP + 0x24]          ; 0052106c
    FMUL float ptr [ESP + 0x4]          ; 00521070
    FLD float ptr [ESP + 0x1c]          ; 00521074
    FMUL float ptr [ESP + 0x8]          ; 00521078
    FLD float ptr [ESP + 0x24]          ; 0052107c
    FMUL float ptr [ESP + 0x8]          ; 00521080
    FLD float ptr [ESP + 0x1c]          ; 00521084
    FMUL float ptr [ESP + 0xc]          ; 00521088
    FLD float ptr [ESP + 0x20]          ; 0052108c
    FMUL float ptr [ESP + 0x4]          ; 00521090
    LEA EAX,[ESP + 0x10]                ; 00521094
    FXCH ST2                            ; 00521098
    FSUBP ST5,ST0                       ; 0052109a
    FSUBP ST3,ST0                       ; 0052109c
    FSUBP                               ; 0052109e
    FXCH                                ; 005210a0
    FSTP float ptr [ESP + 0x14]         ; 005210a2
    FSTP float ptr [ESP + 0x18]         ; 005210a6
    FSTP float ptr [ESP + 0x10]         ; 005210aa
    CMP EDX,EAX                         ; 005210ae
    JZ 0x005210c6                       ; 005210b0
        ;   XREF to: 005210c6 (CONDITIONAL_JUMP)  ; LAB_005210c6
    MOV EAX,dword ptr [ESP + 0x10]      ; 005210b2
    MOV dword ptr [EDX],EAX             ; 005210b6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005210b8
    MOV dword ptr [EDX + 0x4],EAX       ; 005210bc
    MOV EAX,dword ptr [ESP + 0x18]      ; 005210bf
    MOV dword ptr [EDX + 0x8],EAX       ; 005210c3
    FLD float ptr [EDX + 0x4]           ; 005210c6
        ;   Label: LAB_005210c6
    FMUL ST0                            ; 005210c9
    FLD float ptr [EDX]                 ; 005210cb
    FMUL ST0                            ; 005210cd
    FADDP                               ; 005210cf
    FLD float ptr [EDX + 0x8]           ; 005210d1
    FMUL ST0                            ; 005210d4
    FADDP                               ; 005210d6
    FSQRT                               ; 005210d8
    FST float ptr [ESP]                 ; 005210da
    FLDZ                                ; 005210dd
    FCOMPP                              ; 005210df
    FNSTSW AX                           ; 005210e1
    SAHF                                ; 005210e3
    JNC 0x00521144                      ; 005210e4
        ;   XREF to: 00521144 (CONDITIONAL_JUMP)  ; LAB_00521144
    FLD1                                ; 005210e6
    FLD float ptr [EDX]                 ; 005210e8
    FXCH                                ; 005210ea
    FDIV float ptr [ESP]                ; 005210ec
    FXCH                                ; 005210ef
    FMUL ST1                            ; 005210f1
    FLD float ptr [EDX + 0x4]           ; 005210f3
    FMUL ST2                            ; 005210f6
    FLD float ptr [EDX + 0x8]           ; 005210f8
    FMULP ST3                           ; 005210fb
    FXCH                                ; 005210fd
    FSTP float ptr [EDX]                ; 005210ff
    FSTP float ptr [EDX + 0x4]          ; 00521101
    FSTP float ptr [EDX + 0x8]          ; 00521104
    FLD float ptr [EDX + 0x4]           ; 00521107
        ;   Label: LAB_00521107
    FMUL float ptr [EBX + 0x4]          ; 0052110a
    FLD float ptr [EDX]                 ; 0052110d
    FMUL float ptr [EBX]                ; 0052110f
    FADDP                               ; 00521111
    FLD float ptr [EDX + 0x8]           ; 00521113
    FMUL float ptr [EBX + 0x8]          ; 00521116
    FADDP                               ; 00521119
    FCHS                                ; 0052111b
    FSTP float ptr [EDX + 0xc]          ; 0052111d
    MOV ESP,EBP                         ; 00521120
    POP EBP                             ; 00521122
    POP EDI                             ; 00521123
    POP ESI                             ; 00521124
    POP EBX                             ; 00521125
    RET                                 ; 00521126
    MOV EAX,dword ptr [ESP + 0x28]      ; 00521127
        ;   Label: LAB_00521127
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052112b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0052112f
    MOV dword ptr [ESP + 0x20],EAX      ; 00521133
    MOV EAX,dword ptr [ESP + 0x30]      ; 00521137
    MOV dword ptr [ESP + 0x24],EAX      ; 0052113b
    JMP 0x00521024                      ; 0052113f
        ;   XREF to: 00521024 (UNCONDITIONAL_JUMP)  ; LAB_00521024
    MOV dword ptr [EDX + 0x8],0x0       ; 00521144
        ;   Label: LAB_00521144
    MOV EAX,dword ptr [EDX + 0x8]       ; 0052114b
    MOV dword ptr [EDX + 0x4],EAX       ; 0052114e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00521151
    MOV dword ptr [EDX],EAX             ; 00521154
    JMP 0x00521107                      ; 00521156
        ;   XREF to: 00521107 (UNCONDITIONAL_JUMP)  ; LAB_00521107

