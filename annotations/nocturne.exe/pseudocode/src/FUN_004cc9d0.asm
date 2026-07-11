; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cc9d0(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004c85f0 at 004c873b
;
; Referenced Globals:
;   undefined4 DAT_005881c3
;   undefined4 DAT_005881cb
;   undefined4 DAT_005881d3
;
; Called Functions:
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004cc9d0
        ;   Label: FUN_004cc9d0
    MOV EBP,ESP                         ; 004cc9d1
    SUB ESP,0xc                         ; 004cc9d3
    AND ESP,0xfffffff8                  ; 004cc9d6
    XOR EDX,EDX                         ; 004cc9d9
    XOR ECX,ECX                         ; 004cc9db
    FLD double ptr [0x005881d3]         ; 004cc9dd | DAT_005881d3
    FLD double ptr [0x005881cb]         ; 004cc9e3 | DAT_005881cb
    FLD double ptr [0x005881c3]         ; 004cc9e9 | DAT_005881c3
    MOV dword ptr [ESP + 0x8],ECX       ; 004cc9ef
        ;   Label: LAB_004cc9ef
    FILD dword ptr [ESP + 0x8]          ; 004cc9f3
    FMUL ST1                            ; 004cc9f7
    FMUL ST2                            ; 004cc9f9
    FLD ST0                             ; 004cc9fb
    FSIN                                ; 004cc9fd
    FXCH                                ; 004cc9ff
    FCOS                                ; 004cca01
    FXCH                                ; 004cca03
    FMUL ST4                            ; 004cca05
    FXCH                                ; 004cca07
    FMUL ST4                            ; 004cca09
    ADD EDX,0x4                         ; 004cca0b
    FXCH                                ; 004cca0e
    CALL FUN_00563a30                   ; 004cca10
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 004cca15
    CALL FUN_00563a30                   ; 004cca19
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cca1e
    FISTP dword ptr [ESP + 0x8]         ; 004cca22
    MOV dword ptr [EDX + 0x1cc490c],EAX ; 004cca26
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cca2c
    INC ECX                             ; 004cca30
    MOV dword ptr [EDX + 0x1cc4d10],EAX ; 004cca31
    CMP ECX,0x101                       ; 004cca37
    JL 0x004cc9ef                       ; 004cca3d
        ;   XREF to: 004cc9ef (CONDITIONAL_JUMP)  ; LAB_004cc9ef
    FSTP ST0                            ; 004cca3f
    FSTP ST0                            ; 004cca41
    FSTP ST0                            ; 004cca43
    MOV ESP,EBP                         ; 004cca45
    POP EBP                             ; 004cca47
    LEA EAX,[EAX]                       ; 004cca48
    MOV EDX,EDX                         ; 004cca4e

