; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_water_cpp_calculateWaveHeight_FUN_005771de(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; Referenced Globals:
;   undefined4 DAT_005d714b
;   undefined4 DAT_005d7153
;   undefined4 DAT_00606b24
;   undefined4 DAT_02d059a8
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 005771de
        ;   Label: core_water.cpp_calculateWaveHeight_FUN_005771de
    SUB ESP,0x8                         ; 005771e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005771e3
    MOV dword ptr [ESP + 0x4],EAX       ; 005771e7
    FLD float ptr [0x005d714b]          ; 005771eb | DAT_005d714b
    FILD dword ptr [ESP + 0x4]          ; 005771f1
    FMUL ST1                            ; 005771f5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005771f7
    FMUL double ptr [0x005d7153]        ; 005771fb | DAT_005d7153
    MOV dword ptr [ESP + 0x4],EAX       ; 00577201
    FILD dword ptr [ESP + 0x4]          ; 00577205
    FMULP ST2                           ; 00577209
    FADDP                               ; 0057720b
    FADD float ptr [0x02d059a8]         ; 0057720d | DAT_02d059a8
    FSIN                                ; 00577213
    FMUL float ptr [0x00606b24]         ; 00577215 | DAT_00606b24
    FSTP float ptr [ESP]                ; 0057721b
    MOV EAX,dword ptr [ESP]             ; 0057721e
    ADD ESP,0x8                         ; 00577221
    RET                                 ; 00577224

