; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_005f6d40(float angle_radians,CMatrix3x4f *matrix_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
; Local Variables:
; float[5]         Stack[-0x48]:20  local_48
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f6d40
        ;   Label: core_xform.cpp_buildRotationZ_FUN_005f6d40
    PUSH EDI                            ; 005f6d41
    SUB ESP,0x40                        ; 005f6d42
    MOV EDX,ESI                         ; 005f6d45
    FLD float ptr [ESP + 0x4c]          ; 005f6d47
    FLD ST0                             ; 005f6d4b
    FSIN                                ; 005f6d4d
    FXCH                                ; 005f6d4f
    FCOS                                ; 005f6d51
    MOV EDI,ESI                         ; 005f6d53
    XOR ECX,ECX                         ; 005f6d55
    XOR EBX,EBX                         ; 005f6d57
    MOV ESI,ESP                         ; 005f6d59
    MOV dword ptr [ESP + 0x8],ECX       ; 005f6d5b
    MOV dword ptr [ESP + 0xc],ECX       ; 005f6d5f
    MOV dword ptr [ESP + 0x18],ECX      ; 005f6d63
    MOV dword ptr [ESP + 0x1c],ECX      ; 005f6d67
    MOV dword ptr [ESP + 0x20],ECX      ; 005f6d6b
    MOV dword ptr [ESP + 0x24],ECX      ; 005f6d6f
    MOV ECX,0x3f800000                  ; 005f6d73
    MOV dword ptr [ESP + 0x2c],EBX      ; 005f6d78
    MOV dword ptr [ESP + 0x28],ECX      ; 005f6d7c
    MOV ECX,0xc                         ; 005f6d80
    FSTP float ptr [ESP + 0x38]         ; 005f6d85
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f6d89
    FSTP float ptr [ESP + 0x3c]         ; 005f6d8d
    MOV dword ptr [ESP],EAX             ; 005f6d91
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005f6d94
    FLD float ptr [ESP + 0x3c]          ; 005f6d98
    MOV dword ptr [ESP + 0x10],EAX      ; 005f6d9c
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f6da0
    FCHS                                ; 005f6da4
    MOV dword ptr [ESP + 0x14],EAX      ; 005f6da6
    FSTP float ptr [ESP + 0x4]          ; 005f6daa
    MOVSD.REP ES:EDI,ESI                ; 005f6dae
    MOV EAX,EDX                         ; 005f6db0
    ADD ESP,0x40                        ; 005f6db2
    POP EDI                             ; 005f6db5
    POP EBX                             ; 005f6db6
    RET                                 ; 005f6db7

