; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00593fe0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[18]:
;   FUN_00429b40 at 00429ba1
;   FUN_00450c60 at 00451721
;   FUN_00453d80 at 00453ff8
;   FUN_00455170 at 00455211
;   FUN_004555c0 at 00455ad5
;   FUN_00455d10 at 00455dc3
;   FUN_004562a0 at 004562e1
;   FUN_004afa20 at 004afbdf
;   FUN_004fef30 at 004ff244
;   FUN_00520140 at 00520186
;   ... and 8 more
;
; Referenced Globals:
;   undefined4 DAT_005eedae
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00593fe0
        ;   Label: FUN_00593fe0
    SUB ESP,0x18                        ; 00593fe1
    MOV EDX,ESI                         ; 00593fe4
    FLD float ptr [ESP + 0x20]          ; 00593fe6
    FMUL float ptr [0x005eedae]         ; 00593fea | DAT_005eedae
    FLD ST0                             ; 00593ff0
    FCOS                                ; 00593ff2
    FXCH                                ; 00593ff4
    FSIN                                ; 00593ff6
    MOV EDI,ESI                         ; 00593ff8
    XOR ECX,ECX                         ; 00593ffa
    MOV ESI,ESP                         ; 00593ffc
    MOV dword ptr [ESP + 0x4],ECX       ; 00593ffe
    MOV dword ptr [ESP + 0xc],ECX       ; 00594002
    FXCH                                ; 00594006
    FSTP float ptr [ESP]                ; 00594008
    FSTP float ptr [ESP + 0x8]          ; 0059400b
    MOVSD ES:EDI,ESI                    ; 0059400f
    MOVSD ES:EDI,ESI                    ; 00594010
    MOVSD ES:EDI,ESI                    ; 00594011
    MOVSD ES:EDI,ESI                    ; 00594012
    MOV EAX,EDX                         ; 00594013
    ADD ESP,0x18                        ; 00594015
    POP EDI                             ; 00594018
    RET                                 ; 00594019

