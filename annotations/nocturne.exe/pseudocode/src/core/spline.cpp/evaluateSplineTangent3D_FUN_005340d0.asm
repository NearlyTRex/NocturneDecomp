; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_spline_cpp_evaluateSplineTangent3D_FUN_005340d0(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3)
;
; Parameters:
; float *          Stack[0x4]:4   basis
; CVector3f *      Stack[0x8]:4   out
; CVector3f *      Stack[0xc]:4   p0
; CVector3f *      Stack[0x10]:4   p1
; CVector3f *      Stack[0x14]:4   p2
; CVector3f *      Stack[0x18]:4   p3
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
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dracbrid.cpp_CDraculaBride_updateFreakySounds_FUN_0045b020 at 0045b2e3
;   core_dracbrid.cpp_FUN_0045ab40 at 0045af8e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005340d0
        ;   Label: core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0
    PUSH ESI                            ; 005340d1
    PUSH EDI                            ; 005340d2
    PUSH EBP                            ; 005340d3
    SUB ESP,0x48                        ; 005340d4
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005340d7
    MOV EDX,dword ptr [ESP + 0x60]      ; 005340db
    MOV EDI,dword ptr [ESP + 0x64]      ; 005340df
    MOV ESI,dword ptr [ESP + 0x68]      ; 005340e3
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005340e7
    MOV EBP,dword ptr [ESP + 0x70]      ; 005340eb
    LEA EAX,[ECX + 0x1c]                ; 005340ef
    FLD float ptr [EBP]                 ; 005340f2
    FMUL float ptr [EAX]                ; 005340f5
    FSTP float ptr [ESP + 0x24]         ; 005340f7
    FLD float ptr [EBP + 0x4]           ; 005340fb
    FMUL float ptr [EAX]                ; 005340fe
    FSTP float ptr [ESP + 0x28]         ; 00534100
    FLD float ptr [EBP + 0x8]           ; 00534104
    FMUL float ptr [EAX]                ; 00534107
    FSTP float ptr [ESP + 0x2c]         ; 00534109
    LEA EAX,[ECX + 0x18]                ; 0053410d
    FLD float ptr [EBX]                 ; 00534110
    FMUL float ptr [EAX]                ; 00534112
    FSTP float ptr [ESP + 0x30]         ; 00534114
    FLD float ptr [EBX + 0x4]           ; 00534118
    FMUL float ptr [EAX]                ; 0053411b
    FSTP float ptr [ESP + 0x34]         ; 0053411d
    FLD float ptr [EBX + 0x8]           ; 00534121
    FMUL float ptr [EAX]                ; 00534124
    FSTP float ptr [ESP + 0x38]         ; 00534126
    LEA EAX,[ECX + 0x14]                ; 0053412a
    FLD float ptr [ESI]                 ; 0053412d
    FMUL float ptr [EAX]                ; 0053412f
    FSTP float ptr [ESP + 0x18]         ; 00534131
    FLD float ptr [ESI + 0x4]           ; 00534135
    FMUL float ptr [EAX]                ; 00534138
    FSTP float ptr [ESP + 0x1c]         ; 0053413a
    FLD float ptr [ESI + 0x8]           ; 0053413e
    FMUL float ptr [EAX]                ; 00534141
    FSTP float ptr [ESP + 0x20]         ; 00534143
    LEA EAX,[ECX + 0x10]                ; 00534147
    FLD float ptr [EDI]                 ; 0053414a
    FMUL float ptr [EAX]                ; 0053414c
    FSTP float ptr [ESP + 0xc]          ; 0053414e
    FLD float ptr [EDI + 0x4]           ; 00534152
    FMUL float ptr [EAX]                ; 00534155
    FSTP float ptr [ESP + 0x10]         ; 00534157
    FLD float ptr [EDI + 0x8]           ; 0053415b
    FMUL float ptr [EAX]                ; 0053415e
    FLD float ptr [ESP + 0xc]           ; 00534160
    FADD float ptr [ESP + 0x18]         ; 00534164
    FLD float ptr [ESP + 0x10]          ; 00534168
    FADD float ptr [ESP + 0x1c]         ; 0053416c
    FXCH ST2                            ; 00534170
    FSTP float ptr [ESP + 0x14]         ; 00534172
    FSTP float ptr [ESP + 0x3c]         ; 00534176
    FSTP float ptr [ESP + 0x40]         ; 0053417a
    FLD float ptr [ESP + 0x14]          ; 0053417e
    FLD float ptr [ESP + 0x3c]          ; 00534182
    FLD float ptr [ESP + 0x40]          ; 00534186
    FXCH ST2                            ; 0053418a
    FADD float ptr [ESP + 0x20]         ; 0053418c
    FXCH                                ; 00534190
    FADD float ptr [ESP + 0x30]         ; 00534192
    FXCH ST2                            ; 00534196
    FADD float ptr [ESP + 0x34]         ; 00534198
    FXCH                                ; 0053419c
    FSTP float ptr [ESP + 0x44]         ; 0053419e
    FXCH                                ; 005341a2
    FSTP float ptr [ESP]                ; 005341a4
    FSTP float ptr [ESP + 0x4]          ; 005341a7
    FLD float ptr [ESP]                 ; 005341ab
    FLD float ptr [ESP + 0x44]          ; 005341ae
    FADD float ptr [ESP + 0x38]         ; 005341b2
    FXCH                                ; 005341b6
    FADD float ptr [ESP + 0x24]         ; 005341b8
    FXCH                                ; 005341bc
    FSTP float ptr [ESP + 0x8]          ; 005341be
    FSTP float ptr [EDX]                ; 005341c2
    FLD float ptr [ESP + 0x4]           ; 005341c4
    FADD float ptr [ESP + 0x28]         ; 005341c8
    FSTP float ptr [EDX + 0x4]          ; 005341cc
    FLD float ptr [ESP + 0x8]           ; 005341cf
    FADD float ptr [ESP + 0x2c]         ; 005341d3
    MOV EAX,EDX                         ; 005341d7
    FSTP float ptr [EDX + 0x8]          ; 005341d9
    ADD ESP,0x48                        ; 005341dc
    POP EBP                             ; 005341df
    POP EDI                             ; 005341e0
    POP ESI                             ; 005341e1
    POP EBX                             ; 005341e2
    RET                                 ; 005341e3

