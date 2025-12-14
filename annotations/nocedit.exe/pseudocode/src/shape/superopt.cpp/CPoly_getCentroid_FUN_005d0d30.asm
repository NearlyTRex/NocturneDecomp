; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3d * shape_superopt.cpp_CPoly_getCentroid_FUN_005d0d30(CPoly * this_ptr, CVector3d * out_centroid)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   out_centroid
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_0065430a = 0.333333333333333
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d0d30
        ;   Label: shape_superopt.cpp_CPoly_getCentroid_FUN_005d0d30
    PUSH EDI                            ; 005d0d31
    PUSH EBP                            ; 005d0d32
    MOV EBP,ESP                         ; 005d0d33
    SUB ESP,0x7c                        ; 005d0d35
    AND ESP,0xfffffff8                  ; 005d0d38
    MOV EBX,dword ptr [EBP + 0x10]      ; 005d0d3b
    MOV EDX,ESI                         ; 005d0d3e
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d0d40
    SHL EAX,0x3                         ; 005d0d43
    MOV ESI,dword ptr [EBX]             ; 005d0d46
    MOV ECX,EAX                         ; 005d0d48
    SHL EAX,0x3                         ; 005d0d4a
    MOV ESI,dword ptr [ESI + 0x4]       ; 005d0d4d
    SUB EAX,ECX                         ; 005d0d50
    LEA ECX,[ESI + EAX*0x1]             ; 005d0d52
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d0d55
    SHL EAX,0x3                         ; 005d0d58
    MOV dword ptr [ESP + 0x78],ECX      ; 005d0d5b
    MOV ECX,EAX                         ; 005d0d5f
    SHL EAX,0x3                         ; 005d0d61
    SUB EAX,ECX                         ; 005d0d64
    LEA ECX,[ESI + EAX*0x1]             ; 005d0d66
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d0d69
    SHL EAX,0x3                         ; 005d0d6c
    MOV EBX,EAX                         ; 005d0d6f
    SHL EAX,0x3                         ; 005d0d71
    SUB EAX,EBX                         ; 005d0d74
    LEA EDI,[ESP + 0x30]                ; 005d0d76
    FLD double ptr [ESI + EAX*0x1 + 0x8] ; 005d0d7a
    FLD double ptr [ESI + EAX*0x1 + 0x10] ; 005d0d7e
    FLD double ptr [ESI + EAX*0x1]      ; 005d0d82
    LEA ESI,[ESP + 0x48]                ; 005d0d85
    FADD double ptr [ECX]               ; 005d0d89
    FXCH ST2                            ; 005d0d8b
    FADD double ptr [ECX + 0x8]         ; 005d0d8d
    FXCH                                ; 005d0d90
    FADD double ptr [ECX + 0x10]        ; 005d0d92
    FXCH ST2                            ; 005d0d95
    FSTP double ptr [ESP + 0x48]        ; 005d0d97
    FSTP double ptr [ESP + 0x50]        ; 005d0d9b
    MOV ECX,0x6                         ; 005d0d9f
    FSTP double ptr [ESP + 0x58]        ; 005d0da4
    MOVSD.REP ES:EDI,ESI                ; 005d0da8
    MOV EAX,dword ptr [ESP + 0x78]      ; 005d0daa
    FLD double ptr [ESP + 0x30]         ; 005d0dae
    FLD double ptr [ESP + 0x38]         ; 005d0db2
    FLD double ptr [ESP + 0x40]         ; 005d0db6
    MOV ECX,0x6                         ; 005d0dba
    LEA EDI,[ESP + 0x60]                ; 005d0dbf
    MOV ESI,ESP                         ; 005d0dc3
    FXCH ST2                            ; 005d0dc5
    FADD double ptr [EAX]               ; 005d0dc7
    FXCH                                ; 005d0dc9
    FADD double ptr [EAX + 0x8]         ; 005d0dcb
    FXCH ST2                            ; 005d0dce
    FADD double ptr [EAX + 0x10]        ; 005d0dd0
    FXCH                                ; 005d0dd3
    FSTP double ptr [ESP]               ; 005d0dd5
    FXCH                                ; 005d0dd8
    FSTP double ptr [ESP + 0x8]         ; 005d0dda
    FSTP double ptr [ESP + 0x10]        ; 005d0dde
    MOVSD.REP ES:EDI,ESI                ; 005d0de2
    FLD double ptr [0x0065430a]         ; 005d0de4 | DOUBLE_0065430a
    FLD double ptr [ESP + 0x60]         ; 005d0dea
    FMUL ST1                            ; 005d0dee
    FLD double ptr [ESP + 0x68]         ; 005d0df0
    FMUL ST2                            ; 005d0df4
    FLD double ptr [ESP + 0x70]         ; 005d0df6
    FMULP ST3                           ; 005d0dfa
    MOV ECX,0x6                         ; 005d0dfc
    LEA ESI,[ESP + 0x18]                ; 005d0e01
    MOV EDI,EDX                         ; 005d0e05
    FXCH                                ; 005d0e07
    FSTP double ptr [ESP + 0x18]        ; 005d0e09
    FSTP double ptr [ESP + 0x20]        ; 005d0e0d
    FSTP double ptr [ESP + 0x28]        ; 005d0e11
    MOVSD.REP ES:EDI,ESI                ; 005d0e15
    MOV EAX,EDX                         ; 005d0e17
    MOV ESP,EBP                         ; 005d0e19
    POP EBP                             ; 005d0e1b
    POP EDI                             ; 005d0e1c
    POP EBX                             ; 005d0e1d
    RET                                 ; 005d0e1e

