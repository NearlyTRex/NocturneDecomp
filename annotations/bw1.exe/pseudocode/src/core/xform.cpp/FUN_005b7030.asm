; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b7030(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_mimic.cpp_FUN_0050f7e0 at 0050fa95
;
; Referenced Globals:
;   undefined4 DAT_005fa158
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b7030
        ;   Label: core_xform.cpp_FUN_005b7030
    SUB ESP,0x30                        ; 005b7031
    MOV EAX,ESI                         ; 005b7034
    FLD float ptr [ESP + 0x38]          ; 005b7036
    FMUL float ptr [0x005fa158]         ; 005b703a | DAT_005fa158
    MOV EDX,0xbf800000                  ; 005b7040
    MOV EDI,0x3f800000                  ; 005b7045
    XOR ECX,ECX                         ; 005b704a
    MOV dword ptr [ESP],EDX             ; 005b704c
    MOV dword ptr [ESP + 0x4],ECX       ; 005b704f
    MOV dword ptr [ESP + 0x8],ECX       ; 005b7053
    MOV dword ptr [ESP + 0x10],ECX      ; 005b7057
    MOV dword ptr [ESP + 0x14],EDI      ; 005b705b
    MOV dword ptr [ESP + 0x18],ECX      ; 005b705f
    MOV dword ptr [ESP + 0x1c],ECX      ; 005b7063
    MOV dword ptr [ESP + 0x20],ECX      ; 005b7067
    MOV dword ptr [ESP + 0x24],ECX      ; 005b706b
    MOV dword ptr [ESP + 0x28],EDI      ; 005b706f
    MOV dword ptr [ESP + 0x2c],ECX      ; 005b7073
    MOV ECX,0xc                         ; 005b7077
    MOV EDI,ESI                         ; 005b707c
    MOV ESI,ESP                         ; 005b707e
    FSTP float ptr [ESP + 0xc]          ; 005b7080
    MOVSD.REP ES:EDI,ESI                ; 005b7084
    ADD ESP,0x30                        ; 005b7086
    POP EDI                             ; 005b7089
    RET                                 ; 005b708a

