; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationX_FUN_005b6d90(float angle_radians,CMatrix3x4f *matrix_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
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
; XREF[4]:
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00430440 at 0043072b
;   core_doc.cpp_FUN_0046f740 at 0046f834
;   core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004c91b0 at 004c9273
;   core_stranger.cpp_FUN_0058afe0 at 0058b0d8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6d90
        ;   Label: core_xform.cpp_buildRotationX_FUN_005b6d90
    PUSH EDI                            ; 005b6d91
    SUB ESP,0x40                        ; 005b6d92
    MOV EDX,ESI                         ; 005b6d95
    FLD float ptr [ESP + 0x4c]          ; 005b6d97
    FLD ST0                             ; 005b6d9b
    FSIN                                ; 005b6d9d
    FXCH                                ; 005b6d9f
    FCOS                                ; 005b6da1
    MOV ECX,0x3f800000                  ; 005b6da3
    MOV EDI,ESI                         ; 005b6da8
    XOR EBX,EBX                         ; 005b6daa
    MOV ESI,ESP                         ; 005b6dac
    MOV dword ptr [ESP],ECX             ; 005b6dae
    MOV dword ptr [ESP + 0x4],EBX       ; 005b6db1
    MOV dword ptr [ESP + 0x8],EBX       ; 005b6db5
    MOV dword ptr [ESP + 0xc],EBX       ; 005b6db9
    MOV dword ptr [ESP + 0x10],EBX      ; 005b6dbd
    MOV dword ptr [ESP + 0x1c],EBX      ; 005b6dc1
    MOV dword ptr [ESP + 0x20],EBX      ; 005b6dc5
    MOV dword ptr [ESP + 0x2c],EBX      ; 005b6dc9
    MOV ECX,0xc                         ; 005b6dcd
    FSTP float ptr [ESP + 0x38]         ; 005b6dd2
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b6dd6
    FSTP float ptr [ESP + 0x3c]         ; 005b6dda
    MOV dword ptr [ESP + 0x14],EAX      ; 005b6dde
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b6de2
    FLD float ptr [ESP + 0x3c]          ; 005b6de6
    MOV dword ptr [ESP + 0x24],EAX      ; 005b6dea
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b6dee
    FCHS                                ; 005b6df2
    MOV dword ptr [ESP + 0x28],EAX      ; 005b6df4
    FSTP float ptr [ESP + 0x18]         ; 005b6df8
    MOVSD.REP ES:EDI,ESI                ; 005b6dfc
    MOV EAX,EDX                         ; 005b6dfe
    ADD ESP,0x40                        ; 005b6e00
    POP EDI                             ; 005b6e03
    POP EBX                             ; 005b6e04
    RET                                 ; 005b6e05

