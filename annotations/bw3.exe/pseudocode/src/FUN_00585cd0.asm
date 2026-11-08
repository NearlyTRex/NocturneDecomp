; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00585cd0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[8]:
;   FUN_0042cd70 at 0042cf34
;   FUN_00433000 at 0043303e
;   FUN_0051c1c0 at 0051c5bc
;   FUN_0051e6d0 at 0051eb78
;   FUN_0051ee10 at 0051ef9a
;   FUN_0054dfd0 at 0054e0b9
;   FUN_0056c140 at 0056c7d0
;   FUN_0058e8d0 at 0058eb8a
;
; Referenced Globals:
;   undefined4 DAT_005d81a7
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585cd0
        ;   Label: FUN_00585cd0
    SUB ESP,0x18                        ; 00585cd1
    MOV EDX,ESI                         ; 00585cd4
    FLD float ptr [ESP + 0x20]          ; 00585cd6
    FMUL float ptr [0x005d81a7]         ; 00585cda | DAT_005d81a7
    FLD ST0                             ; 00585ce0
    FCOS                                ; 00585ce2
    FXCH                                ; 00585ce4
    FSIN                                ; 00585ce6
    MOV EDI,ESI                         ; 00585ce8
    XOR ECX,ECX                         ; 00585cea
    MOV ESI,ESP                         ; 00585cec
    MOV dword ptr [ESP + 0x8],ECX       ; 00585cee
    MOV dword ptr [ESP + 0xc],ECX       ; 00585cf2
    FXCH                                ; 00585cf6
    FSTP float ptr [ESP]                ; 00585cf8
    FSTP float ptr [ESP + 0x4]          ; 00585cfb
    MOVSD ES:EDI,ESI                    ; 00585cff
    MOVSD ES:EDI,ESI                    ; 00585d00
    MOVSD ES:EDI,ESI                    ; 00585d01
    MOVSD ES:EDI,ESI                    ; 00585d02
    MOV EAX,EDX                         ; 00585d03
    ADD ESP,0x18                        ; 00585d05
    POP EDI                             ; 00585d08
    RET                                 ; 00585d09

