; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_generateSphereVertex_FUN_0053bd40(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)
;
; Parameters:
; int              Stack[0x4]:4   longitude_index
; int              Stack[0x8]:4   latitude_index
; int              Stack[0xc]:4   vertex_buffer_index
; float            Stack[0x10]:4   radius
;
; Referenced Globals:
;   undefined4 DAT_005e64ad
;   undefined4 DAT_005e64b1
;   undefined4 DAT_005e64b9
;   undefined4 DAT_005e64c1
;   undefined4 DAT_005e64c9
;   undefined4 DAT_005fb3c0
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bd40
        ;   Label: core_setutil.cpp_generateSphereVertex_FUN_0053bd40
    PUSH ESI                            ; 0053bd41
    SUB ESP,0x3c                        ; 0053bd42
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053bd45
    MOV dword ptr [ESP + 0x38],EAX      ; 0053bd49
    FILD dword ptr [ESP + 0x38]         ; 0053bd4d
    FMUL float ptr [0x005e64ad]         ; 0053bd51 | DAT_005e64ad
    FLD float ptr [0x005e64b1]          ; 0053bd57 | DAT_005e64b1
    FXCH                                ; 0053bd5d
    FMUL ST1                            ; 0053bd5f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0053bd61
    FMUL double ptr [0x005e64b9]        ; 0053bd65 | DAT_005e64b9
    MOV dword ptr [ESP + 0x38],EAX      ; 0053bd6b
    FLD ST0                             ; 0053bd6f
    FSIN                                ; 0053bd71
    FXCH                                ; 0053bd73
    FCOS                                ; 0053bd75
    FILD dword ptr [ESP + 0x38]         ; 0053bd77
    FMUL float ptr [0x005e64c1]         ; 0053bd7b | DAT_005e64c1
    FMULP ST3                           ; 0053bd81
    FLD float ptr [ESP + 0x54]          ; 0053bd83
    FXCH ST2                            ; 0053bd87
    FMUL ST2                            ; 0053bd89
    FXCH ST3                            ; 0053bd8b
    FMUL double ptr [0x005e64c9]        ; 0053bd8d | DAT_005e64c9
    FLD ST0                             ; 0053bd93
    FCOS                                ; 0053bd95
    FXCH                                ; 0053bd97
    FSIN                                ; 0053bd99
    FXCH ST2                            ; 0053bd9b
    FMUL ST3                            ; 0053bd9d
    FMUL ST1                            ; 0053bd9f
    FXCH ST4                            ; 0053bda1
    FMULP                               ; 0053bda3
    FXCH                                ; 0053bda5
    FMULP ST2                           ; 0053bda7
    LEA EBX,[ESP + 0xc]                 ; 0053bda9
    MOV EDX,dword ptr [0x0060b280]      ; 0053bdad | DAT_0060b280
    FXCH ST2                            ; 0053bdb3
    FSTP float ptr [ESP + 0x8]          ; 0053bdb5
    MOV EAX,ESP                         ; 0053bdb9
    FXCH                                ; 0053bdbb
    FSTP float ptr [ESP]                ; 0053bdbd
    FSTP float ptr [ESP + 0x4]          ; 0053bdc0
    FLD float ptr [EAX]                 ; 0053bdc4
    FMUL float ptr [0x005fb3c0]         ; 0053bdc6 | DAT_005fb3c0
    FISTP dword ptr [EBX]               ; 0053bdcc
    FLD float ptr [EAX + 0x4]           ; 0053bdce
    FMUL float ptr [0x005fb3c0]         ; 0053bdd1 | DAT_005fb3c0
    FISTP dword ptr [EBX + 0x4]         ; 0053bdd7
    FLD float ptr [EAX + 0x8]           ; 0053bdda
    FMUL float ptr [0x005fb3c0]         ; 0053bddd | DAT_005fb3c0
    FISTP dword ptr [EBX + 0x8]         ; 0053bde3
    MOV EBX,dword ptr [ESP + 0x50]      ; 0053bde6
    LEA EAX,[ESP + 0xc]                 ; 0053bdea
    LEA ESI,[EBX*0x4 + 0x0]             ; 0053bdee
    PUSH EAX                            ; 0053bdf5
    SUB ESI,EBX                         ; 0053bdf6
    MOV EAX,dword ptr [EDX]             ; 0053bdf8
    SHL ESI,0x4                         ; 0053bdfa
    ADD EAX,ESI                         ; 0053bdfd
    PUSH EAX                            ; 0053bdff
    CALL engine_special.cpp_FUN_0055d723 ; 0053be00
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0053be05 | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 0053be0a
    MOV dword ptr [EDX + ESI*0x1 + 0x18],0x800000 ; 0053be0c
    MOV EAX,dword ptr [EAX]             ; 0053be14
    ADD ESP,0x8                         ; 0053be16
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 0053be19
    ADD ESP,0x3c                        ; 0053be21
    POP ESI                             ; 0053be24
    POP EBX                             ; 0053be25
    RET                                 ; 0053be26

