; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005935a0(float param_1)
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
;   FUN_004f0a50 at 004f0c52
;
; Referenced Globals:
;   undefined4 DAT_005eed8e
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005935a0
        ;   Label: FUN_005935a0
    SUB ESP,0x30                        ; 005935a1
    MOV EAX,ESI                         ; 005935a4
    FLD float ptr [ESP + 0x38]          ; 005935a6
    FMUL float ptr [0x005eed8e]         ; 005935aa | DAT_005eed8e
    MOV EDX,0x3f800000                  ; 005935b0
    MOV EDI,0xbf800000                  ; 005935b5
    XOR ECX,ECX                         ; 005935ba
    MOV dword ptr [ESP],EDX             ; 005935bc
    MOV dword ptr [ESP + 0x4],ECX       ; 005935bf
    MOV dword ptr [ESP + 0x8],ECX       ; 005935c3
    MOV dword ptr [ESP + 0xc],ECX       ; 005935c7
    MOV dword ptr [ESP + 0x10],ECX      ; 005935cb
    MOV dword ptr [ESP + 0x14],EDX      ; 005935cf
    MOV dword ptr [ESP + 0x18],ECX      ; 005935d3
    MOV dword ptr [ESP + 0x1c],ECX      ; 005935d7
    MOV dword ptr [ESP + 0x20],ECX      ; 005935db
    MOV dword ptr [ESP + 0x24],ECX      ; 005935df
    MOV dword ptr [ESP + 0x28],EDI      ; 005935e3
    MOV ECX,0xc                         ; 005935e7
    MOV EDI,ESI                         ; 005935ec
    MOV ESI,ESP                         ; 005935ee
    FSTP float ptr [ESP + 0x2c]         ; 005935f0
    MOVSD.REP ES:EDI,ESI                ; 005935f4
    ADD ESP,0x30                        ; 005935f6
    POP EDI                             ; 005935f9
    RET                                 ; 005935fa

