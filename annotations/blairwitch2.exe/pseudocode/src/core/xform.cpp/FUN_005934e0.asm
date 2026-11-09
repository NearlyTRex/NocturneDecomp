; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005934e0(float param_1)
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
;   core_mimic.cpp_FUN_004f0a50 at 004f0d05
;
; Referenced Globals:
;   undefined4 DAT_005eed86
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005934e0
        ;   Label: core_xform.cpp_FUN_005934e0
    SUB ESP,0x30                        ; 005934e1
    MOV EAX,ESI                         ; 005934e4
    FLD float ptr [ESP + 0x38]          ; 005934e6
    FMUL float ptr [0x005eed86]         ; 005934ea | DAT_005eed86
    MOV EDX,0xbf800000                  ; 005934f0
    MOV EDI,0x3f800000                  ; 005934f5
    XOR ECX,ECX                         ; 005934fa
    MOV dword ptr [ESP],EDX             ; 005934fc
    MOV dword ptr [ESP + 0x4],ECX       ; 005934ff
    MOV dword ptr [ESP + 0x8],ECX       ; 00593503
    MOV dword ptr [ESP + 0x10],ECX      ; 00593507
    MOV dword ptr [ESP + 0x14],EDI      ; 0059350b
    MOV dword ptr [ESP + 0x18],ECX      ; 0059350f
    MOV dword ptr [ESP + 0x1c],ECX      ; 00593513
    MOV dword ptr [ESP + 0x20],ECX      ; 00593517
    MOV dword ptr [ESP + 0x24],ECX      ; 0059351b
    MOV dword ptr [ESP + 0x28],EDI      ; 0059351f
    MOV dword ptr [ESP + 0x2c],ECX      ; 00593523
    MOV ECX,0xc                         ; 00593527
    MOV EDI,ESI                         ; 0059352c
    MOV ESI,ESP                         ; 0059352e
    FSTP float ptr [ESP + 0xc]          ; 00593530
    MOVSD.REP ES:EDI,ESI                ; 00593534
    ADD ESP,0x30                        ; 00593536
    POP EDI                             ; 00593539
    RET                                 ; 0059353a

