; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildRotationX_FUN_0055c730(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310 at 004275be
;   core_gabriela.cpp_FUN_004980d0 at 00498190
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760 at 0053a83e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c730
        ;   Label: core_xform.cpp_buildRotationX_FUN_0055c730
    PUSH EDI                            ; 0055c731
    SUB ESP,0x40                        ; 0055c732
    MOV EDX,ESI                         ; 0055c735
    FLD float ptr [ESP + 0x4c]          ; 0055c737
    FLD ST0                             ; 0055c73b
    FSIN                                ; 0055c73d
    FXCH                                ; 0055c73f
    FCOS                                ; 0055c741
    MOV ECX,0x3f800000                  ; 0055c743
    MOV EDI,ESI                         ; 0055c748
    XOR EBX,EBX                         ; 0055c74a
    MOV ESI,ESP                         ; 0055c74c
    MOV dword ptr [ESP],ECX             ; 0055c74e
    MOV dword ptr [ESP + 0x4],EBX       ; 0055c751
    MOV dword ptr [ESP + 0x8],EBX       ; 0055c755
    MOV dword ptr [ESP + 0xc],EBX       ; 0055c759
    MOV dword ptr [ESP + 0x10],EBX      ; 0055c75d
    MOV dword ptr [ESP + 0x1c],EBX      ; 0055c761
    MOV dword ptr [ESP + 0x20],EBX      ; 0055c765
    MOV dword ptr [ESP + 0x2c],EBX      ; 0055c769
    MOV ECX,0xc                         ; 0055c76d
    FSTP float ptr [ESP + 0x38]         ; 0055c772
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055c776
    FSTP float ptr [ESP + 0x3c]         ; 0055c77a
    MOV dword ptr [ESP + 0x14],EAX      ; 0055c77e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0055c782
    FLD float ptr [ESP + 0x3c]          ; 0055c786
    MOV dword ptr [ESP + 0x24],EAX      ; 0055c78a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055c78e
    FCHS                                ; 0055c792
    MOV dword ptr [ESP + 0x28],EAX      ; 0055c794
    FSTP float ptr [ESP + 0x18]         ; 0055c798
    MOVSD.REP ES:EDI,ESI                ; 0055c79c
    MOV EAX,EDX                         ; 0055c79e
    ADD ESP,0x40                        ; 0055c7a0
    POP EDI                             ; 0055c7a3
    POP EBX                             ; 0055c7a4
    RET                                 ; 0055c7a5

