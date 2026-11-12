; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationX_FUN_00584f70(float angle_radians,CMatrix3x4f *matrix_out)
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
; XREF[2]:
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042f770 at 0042fa5b
;   core_prye.cpp_FUN_0051f490 at 00520382
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584f70
        ;   Label: core_xform.cpp_buildRotationX_FUN_00584f70
    PUSH EDI                            ; 00584f71
    SUB ESP,0x40                        ; 00584f72
    MOV EDX,ESI                         ; 00584f75
    FLD float ptr [ESP + 0x4c]          ; 00584f77
    FLD ST0                             ; 00584f7b
    FSIN                                ; 00584f7d
    FXCH                                ; 00584f7f
    FCOS                                ; 00584f81
    MOV ECX,0x3f800000                  ; 00584f83
    MOV EDI,ESI                         ; 00584f88
    XOR EBX,EBX                         ; 00584f8a
    MOV ESI,ESP                         ; 00584f8c
    MOV dword ptr [ESP],ECX             ; 00584f8e
    MOV dword ptr [ESP + 0x4],EBX       ; 00584f91
    MOV dword ptr [ESP + 0x8],EBX       ; 00584f95
    MOV dword ptr [ESP + 0xc],EBX       ; 00584f99
    MOV dword ptr [ESP + 0x10],EBX      ; 00584f9d
    MOV dword ptr [ESP + 0x1c],EBX      ; 00584fa1
    MOV dword ptr [ESP + 0x20],EBX      ; 00584fa5
    MOV dword ptr [ESP + 0x2c],EBX      ; 00584fa9
    MOV ECX,0xc                         ; 00584fad
    FSTP float ptr [ESP + 0x38]         ; 00584fb2
    MOV EAX,dword ptr [ESP + 0x38]      ; 00584fb6
    FSTP float ptr [ESP + 0x3c]         ; 00584fba
    MOV dword ptr [ESP + 0x14],EAX      ; 00584fbe
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00584fc2
    FLD float ptr [ESP + 0x3c]          ; 00584fc6
    MOV dword ptr [ESP + 0x24],EAX      ; 00584fca
    MOV EAX,dword ptr [ESP + 0x38]      ; 00584fce
    FCHS                                ; 00584fd2
    MOV dword ptr [ESP + 0x28],EAX      ; 00584fd4
    FSTP float ptr [ESP + 0x18]         ; 00584fd8
    MOVSD.REP ES:EDI,ESI                ; 00584fdc
    MOV EAX,EDX                         ; 00584fde
    ADD ESP,0x40                        ; 00584fe0
    POP EDI                             ; 00584fe3
    POP EBX                             ; 00584fe4
    RET                                 ; 00584fe5

