; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00542fd0(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)
;
; Parameters:
; int              Stack[0x4]:4   longitude_index
; int              Stack[0x8]:4   latitude_index
; int              Stack[0xc]:4   vertex_buffer_index
; float            Stack[0x10]:4   radius
;
; Referenced Globals:
;   undefined4 DAT_005d1126
;   undefined4 DAT_005d112a
;   undefined4 DAT_005d1132
;   undefined4 DAT_005d113a
;   undefined4 DAT_005d1142
;   undefined4 DAT_005e3d18
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542fd0
        ;   Label: core_setutil.cpp_generateSphereVertex_FUN_00542fd0
    PUSH ESI                            ; 00542fd1
    SUB ESP,0x3c                        ; 00542fd2
    MOV EAX,dword ptr [ESP + 0x48]      ; 00542fd5
    MOV dword ptr [ESP + 0x38],EAX      ; 00542fd9
    FILD dword ptr [ESP + 0x38]         ; 00542fdd
    FMUL float ptr [0x005d1126]         ; 00542fe1 | DAT_005d1126
    FLD float ptr [0x005d112a]          ; 00542fe7 | DAT_005d112a
    FXCH                                ; 00542fed
    FMUL ST1                            ; 00542fef
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00542ff1
    FMUL double ptr [0x005d1132]        ; 00542ff5 | DAT_005d1132
    MOV dword ptr [ESP + 0x38],EAX      ; 00542ffb
    FLD ST0                             ; 00542fff
    FSIN                                ; 00543001
    FXCH                                ; 00543003
    FCOS                                ; 00543005
    FILD dword ptr [ESP + 0x38]         ; 00543007
    FMUL float ptr [0x005d113a]         ; 0054300b | DAT_005d113a
    FMULP ST3                           ; 00543011
    FLD float ptr [ESP + 0x54]          ; 00543013
    FXCH ST2                            ; 00543017
    FMUL ST2                            ; 00543019
    FXCH ST3                            ; 0054301b
    FMUL double ptr [0x005d1142]        ; 0054301d | DAT_005d1142
    FLD ST0                             ; 00543023
    FCOS                                ; 00543025
    FXCH                                ; 00543027
    FSIN                                ; 00543029
    FXCH ST2                            ; 0054302b
    FMUL ST3                            ; 0054302d
    FMUL ST1                            ; 0054302f
    FXCH ST4                            ; 00543031
    FMULP                               ; 00543033
    FXCH                                ; 00543035
    FMULP ST2                           ; 00543037
    LEA EBX,[ESP + 0xc]                 ; 00543039
    MOV EDX,dword ptr [0x005f2afc]      ; 0054303d | DAT_005f2afc
    FXCH ST2                            ; 00543043
    FSTP float ptr [ESP + 0x8]          ; 00543045
    MOV EAX,ESP                         ; 00543049
    FXCH                                ; 0054304b
    FSTP float ptr [ESP]                ; 0054304d
    FSTP float ptr [ESP + 0x4]          ; 00543050
    FLD float ptr [EAX]                 ; 00543054
    FMUL float ptr [0x005e3d18]         ; 00543056 | DAT_005e3d18
    FISTP dword ptr [EBX]               ; 0054305c
    FLD float ptr [EAX + 0x4]           ; 0054305e
    FMUL float ptr [0x005e3d18]         ; 00543061 | DAT_005e3d18
    FISTP dword ptr [EBX + 0x4]         ; 00543067
    FLD float ptr [EAX + 0x8]           ; 0054306a
    FMUL float ptr [0x005e3d18]         ; 0054306d | DAT_005e3d18
    FISTP dword ptr [EBX + 0x8]         ; 00543073
    MOV EBX,dword ptr [ESP + 0x50]      ; 00543076
    LEA EAX,[ESP + 0xc]                 ; 0054307a
    LEA ESI,[EBX*0x4 + 0x0]             ; 0054307e
    PUSH EAX                            ; 00543085
    SUB ESI,EBX                         ; 00543086
    MOV EAX,dword ptr [EDX]             ; 00543088
    SHL ESI,0x4                         ; 0054308a
    ADD EAX,ESI                         ; 0054308d
    PUSH EAX                            ; 0054308f
    CALL engine_special.cpp_FUN_005632a3 ; 00543090
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 00543095 | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0054309a
    MOV dword ptr [EDX + ESI*0x1 + 0x18],0x800000 ; 0054309c
    MOV EAX,dword ptr [EAX]             ; 005430a4
    ADD ESP,0x8                         ; 005430a6
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 005430a9
    ADD ESP,0x3c                        ; 005430b1
    POP ESI                             ; 005430b4
    POP EBX                             ; 005430b5
    RET                                 ; 005430b6

