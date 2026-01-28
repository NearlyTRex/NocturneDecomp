; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationX_FUN_005f6c40(float angle_radians,CMatrix3x4f *matrix_out)
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
;   core_gabriela.cpp_FUN_004d5550 at 004d5610
;   core_stranger.cpp_CStranger_FUN_005c07b0 at 005c088e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f6c40
        ;   Label: core_xform.cpp_buildRotationX_FUN_005f6c40
    PUSH EDI                            ; 005f6c41
    SUB ESP,0x40                        ; 005f6c42
    MOV EDX,ESI                         ; 005f6c45
    FLD float ptr [ESP + 0x4c]          ; 005f6c47
    FLD ST0                             ; 005f6c4b
    FSIN                                ; 005f6c4d
    FXCH                                ; 005f6c4f
    FCOS                                ; 005f6c51
    MOV ECX,0x3f800000                  ; 005f6c53
    MOV EDI,ESI                         ; 005f6c58
    XOR EBX,EBX                         ; 005f6c5a
    MOV ESI,ESP                         ; 005f6c5c
    MOV dword ptr [ESP],ECX             ; 005f6c5e
    MOV dword ptr [ESP + 0x4],EBX       ; 005f6c61
    MOV dword ptr [ESP + 0x8],EBX       ; 005f6c65
    MOV dword ptr [ESP + 0xc],EBX       ; 005f6c69
    MOV dword ptr [ESP + 0x10],EBX      ; 005f6c6d
    MOV dword ptr [ESP + 0x1c],EBX      ; 005f6c71
    MOV dword ptr [ESP + 0x20],EBX      ; 005f6c75
    MOV dword ptr [ESP + 0x2c],EBX      ; 005f6c79
    MOV ECX,0xc                         ; 005f6c7d
    FSTP float ptr [ESP + 0x38]         ; 005f6c82
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f6c86
    FSTP float ptr [ESP + 0x3c]         ; 005f6c8a
    MOV dword ptr [ESP + 0x14],EAX      ; 005f6c8e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005f6c92
    FLD float ptr [ESP + 0x3c]          ; 005f6c96
    MOV dword ptr [ESP + 0x24],EAX      ; 005f6c9a
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f6c9e
    FCHS                                ; 005f6ca2
    MOV dword ptr [ESP + 0x28],EAX      ; 005f6ca4
    FSTP float ptr [ESP + 0x18]         ; 005f6ca8
    MOVSD.REP ES:EDI,ESI                ; 005f6cac
    MOV EAX,EDX                         ; 005f6cae
    ADD ESP,0x40                        ; 005f6cb0
    POP EDI                             ; 005f6cb3
    POP EBX                             ; 005f6cb4
    RET                                 ; 005f6cb5

