; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00584ff0(float param_1)
;
; Local Variables:
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
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_0042f770 at 0042fa05
;   FUN_0051f490 at 005203af
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00584ff0
        ;   Label: FUN_00584ff0
    SUB ESP,0x40                        ; 00584ff1
    MOV EDX,ESI                         ; 00584ff4
    FLD float ptr [ESP + 0x48]          ; 00584ff6
    FLD ST0                             ; 00584ffa
    FSIN                                ; 00584ffc
    FXCH                                ; 00584ffe
    FCOS                                ; 00585000
    XOR ECX,ECX                         ; 00585002
    MOV EDI,0x3f800000                  ; 00585004
    MOV dword ptr [ESP + 0x4],ECX       ; 00585009
    MOV dword ptr [ESP + 0xc],ECX       ; 0058500d
    MOV dword ptr [ESP + 0x10],ECX      ; 00585011
    MOV dword ptr [ESP + 0x14],EDI      ; 00585015
    MOV dword ptr [ESP + 0x18],ECX      ; 00585019
    MOV dword ptr [ESP + 0x1c],ECX      ; 0058501d
    MOV dword ptr [ESP + 0x24],ECX      ; 00585021
    MOV dword ptr [ESP + 0x2c],ECX      ; 00585025
    MOV ECX,0xc                         ; 00585029
    MOV EDI,ESI                         ; 0058502e
    MOV ESI,ESP                         ; 00585030
    FSTP float ptr [ESP + 0x38]         ; 00585032
    MOV EAX,dword ptr [ESP + 0x38]      ; 00585036
    FSTP float ptr [ESP + 0x3c]         ; 0058503a
    MOV dword ptr [ESP],EAX             ; 0058503e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00585041
    FLD float ptr [ESP + 0x3c]          ; 00585045
    MOV dword ptr [ESP + 0x8],EAX       ; 00585049
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058504d
    FCHS                                ; 00585051
    MOV dword ptr [ESP + 0x28],EAX      ; 00585053
    FSTP float ptr [ESP + 0x20]         ; 00585057
    MOVSD.REP ES:EDI,ESI                ; 0058505b
    MOV EAX,EDX                         ; 0058505d
    ADD ESP,0x40                        ; 0058505f
    POP EDI                             ; 00585062
    RET                                 ; 00585063

