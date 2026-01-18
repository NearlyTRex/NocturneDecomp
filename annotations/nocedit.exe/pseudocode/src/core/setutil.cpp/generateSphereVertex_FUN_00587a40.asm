; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_generateSphereVertex_FUN_00587a40(int longitude_index, int latitude_index, int vertex_buffer_index, float radius)
;
; Parameters:
; int              Stack[0x4]:4   longitude_index
; int              Stack[0x8]:4   latitude_index
; int              Stack[0xc]:4   vertex_buffer_index
; float            Stack[0x10]:4   radius
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   float FLOAT_00649a83 = 0.0625
;   double DOUBLE_00649a8b = 3.14159265350000
;   double DOUBLE_00649a93 = 2
;   float FLOAT_00649a9b = 0.25
;   double DOUBLE_00649aa3 = 0.5
;   float FLOAT_00662a40 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 DAT_00800000
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587a40
        ;   Label: core_setutil.cpp_generateSphereVertex_FUN_00587a40
    PUSH ESI                            ; 00587a41
    SUB ESP,0x3c                        ; 00587a42
    MOV EAX,dword ptr [ESP + 0x48]      ; 00587a45
    MOV dword ptr [ESP + 0x38],EAX      ; 00587a49
    FILD dword ptr [ESP + 0x38]         ; 00587a4d
    FMUL float ptr [0x00649a83]         ; 00587a51 | FLOAT_00649a83
    FLD double ptr [0x00649a8b]         ; 00587a57 | DOUBLE_00649a8b
    FXCH                                ; 00587a5d
    FMUL ST1                            ; 00587a5f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00587a61
    FMUL double ptr [0x00649a93]        ; 00587a65 | DOUBLE_00649a93
    MOV dword ptr [ESP + 0x38],EAX      ; 00587a6b
    FLD ST0                             ; 00587a6f
    FSIN                                ; 00587a71
    FXCH                                ; 00587a73
    FCOS                                ; 00587a75
    FILD dword ptr [ESP + 0x38]         ; 00587a77
    FMUL float ptr [0x00649a9b]         ; 00587a7b | FLOAT_00649a9b
    FMULP ST3                           ; 00587a81
    FLD float ptr [ESP + 0x54]          ; 00587a83
    FXCH ST2                            ; 00587a87
    FMUL ST2                            ; 00587a89
    FXCH ST3                            ; 00587a8b
    FMUL double ptr [0x00649aa3]        ; 00587a8d | DOUBLE_00649aa3
    FLD ST0                             ; 00587a93
    FCOS                                ; 00587a95
    FXCH                                ; 00587a97
    FSIN                                ; 00587a99
    FXCH ST2                            ; 00587a9b
    FMUL ST3                            ; 00587a9d
    FMUL ST1                            ; 00587a9f
    FXCH ST4                            ; 00587aa1
    FMULP                               ; 00587aa3
    FXCH                                ; 00587aa5
    FMULP ST2                           ; 00587aa7
    LEA EBX,[ESP + 0xc]                 ; 00587aa9
    MOV EDX,dword ptr [0x006703ec]      ; 00587aad | g_CDemonRendererPtr2
    FXCH ST2                            ; 00587ab3
    FSTP float ptr [ESP + 0x8]          ; 00587ab5
    MOV EAX,ESP                         ; 00587ab9
    FXCH                                ; 00587abb
    FSTP float ptr [ESP]                ; 00587abd
    FSTP float ptr [ESP + 0x4]          ; 00587ac0
    FLD float ptr [EAX]                 ; 00587ac4
    FMUL float ptr [0x00662a40]         ; 00587ac6 | FLOAT_00662a40
    FISTP dword ptr [EBX]               ; 00587acc
    FLD float ptr [EAX + 0x4]           ; 00587ace
    FMUL float ptr [0x00662a40]         ; 00587ad1 | FLOAT_00662a40
    FISTP dword ptr [EBX + 0x4]         ; 00587ad7
    FLD float ptr [EAX + 0x8]           ; 00587ada
    FMUL float ptr [0x00662a40]         ; 00587add | FLOAT_00662a40
    FISTP dword ptr [EBX + 0x8]         ; 00587ae3
    MOV EBX,dword ptr [ESP + 0x50]      ; 00587ae6
    LEA EAX,[ESP + 0xc]                 ; 00587aea
    LEA ESI,[EBX*0x4 + 0x0]             ; 00587aee
    PUSH EAX                            ; 00587af5
    SUB ESI,EBX                         ; 00587af6
    MOV EAX,dword ptr [EDX]             ; 00587af8 | g_CDemonRendererInstance
    SHL ESI,0x4                         ; 00587afa
    ADD EAX,ESI                         ; 00587afd
    PUSH EAX                            ; 00587aff
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00587b00
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00587b05 | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 00587b0a | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x18],0x800000 ; 00587b0c | DAT_00800000
    MOV EAX,dword ptr [EAX]             ; 00587b14 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00587b16
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 00587b19 | DAT_00800000
    ADD ESP,0x3c                        ; 00587b21
    POP ESI                             ; 00587b24
    POP EBX                             ; 00587b25
    RET                                 ; 00587b26

