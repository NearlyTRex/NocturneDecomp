; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationY_FUN_005f6cc0(float angle_radians,CMatrix3x4f *matrix_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
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
; XREF[3]:
;   core_gabriela.cpp_CGabriella_FUN_004d5550 at 004d563d
;   core_gabriela.cpp_CGabriella_FUN_004d7120 at 004d74b0
;   core_stranger.cpp_CStranger_FUN_005c07b0 at 005c0f09
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f6cc0
        ;   Label: core_xform.cpp_buildRotationY_FUN_005f6cc0
    SUB ESP,0x40                        ; 005f6cc1
    MOV EDX,ESI                         ; 005f6cc4
    FLD float ptr [ESP + 0x48]          ; 005f6cc6
    FLD ST0                             ; 005f6cca
    FSIN                                ; 005f6ccc
    FXCH                                ; 005f6cce
    FCOS                                ; 005f6cd0
    XOR ECX,ECX                         ; 005f6cd2
    MOV EDI,0x3f800000                  ; 005f6cd4
    MOV dword ptr [ESP + 0x4],ECX       ; 005f6cd9
    MOV dword ptr [ESP + 0xc],ECX       ; 005f6cdd
    MOV dword ptr [ESP + 0x10],ECX      ; 005f6ce1
    MOV dword ptr [ESP + 0x14],EDI      ; 005f6ce5
    MOV dword ptr [ESP + 0x18],ECX      ; 005f6ce9
    MOV dword ptr [ESP + 0x1c],ECX      ; 005f6ced
    MOV dword ptr [ESP + 0x24],ECX      ; 005f6cf1
    MOV dword ptr [ESP + 0x2c],ECX      ; 005f6cf5
    MOV ECX,0xc                         ; 005f6cf9
    MOV EDI,ESI                         ; 005f6cfe
    MOV ESI,ESP                         ; 005f6d00
    FSTP float ptr [ESP + 0x38]         ; 005f6d02
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f6d06
    FSTP float ptr [ESP + 0x3c]         ; 005f6d0a
    MOV dword ptr [ESP],EAX             ; 005f6d0e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005f6d11
    FLD float ptr [ESP + 0x3c]          ; 005f6d15
    MOV dword ptr [ESP + 0x8],EAX       ; 005f6d19
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f6d1d
    FCHS                                ; 005f6d21
    MOV dword ptr [ESP + 0x28],EAX      ; 005f6d23
    FSTP float ptr [ESP + 0x20]         ; 005f6d27
    MOVSD.REP ES:EDI,ESI                ; 005f6d2b
    MOV EAX,EDX                         ; 005f6d2d
    ADD ESP,0x40                        ; 005f6d2f
    POP EDI                             ; 005f6d32
    RET                                 ; 005f6d33

