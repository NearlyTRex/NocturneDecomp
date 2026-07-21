; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(float param_1)
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
;   FUN_004d4ba0 at 004d4e53
;
; Referenced Globals:
;   undefined4 DAT_00598336
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055c9d0
        ;   Label: core_xform.cpp_buildXFlipMatrix_FUN_0055c9d0
    SUB ESP,0x30                        ; 0055c9d1
    MOV EAX,ESI                         ; 0055c9d4
    FLD float ptr [ESP + 0x38]          ; 0055c9d6
    FMUL double ptr [0x00598336]        ; 0055c9da | DAT_00598336
    MOV EDX,0xbf800000                  ; 0055c9e0
    MOV EDI,0x3f800000                  ; 0055c9e5
    XOR ECX,ECX                         ; 0055c9ea
    MOV dword ptr [ESP],EDX             ; 0055c9ec
    MOV dword ptr [ESP + 0x4],ECX       ; 0055c9ef
    MOV dword ptr [ESP + 0x8],ECX       ; 0055c9f3
    MOV dword ptr [ESP + 0x10],ECX      ; 0055c9f7
    MOV dword ptr [ESP + 0x14],EDI      ; 0055c9fb
    MOV dword ptr [ESP + 0x18],ECX      ; 0055c9ff
    MOV dword ptr [ESP + 0x1c],ECX      ; 0055ca03
    MOV dword ptr [ESP + 0x20],ECX      ; 0055ca07
    MOV dword ptr [ESP + 0x24],ECX      ; 0055ca0b
    MOV dword ptr [ESP + 0x28],EDI      ; 0055ca0f
    MOV dword ptr [ESP + 0x2c],ECX      ; 0055ca13
    MOV ECX,0xc                         ; 0055ca17
    MOV EDI,ESI                         ; 0055ca1c
    MOV ESI,ESP                         ; 0055ca1e
    FSTP float ptr [ESP + 0xc]          ; 0055ca20
    MOVSD.REP ES:EDI,ESI                ; 0055ca24
    ADD ESP,0x30                        ; 0055ca26
    POP EDI                             ; 0055ca29
    RET                                 ; 0055ca2a

