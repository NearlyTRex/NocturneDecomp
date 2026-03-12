; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildUniformScaleMatrix_FUN_005f6e20(float scale_factor,CMatrix3x4f *matrix_out)
;
; Parameters:
; float            Stack[0x4]:4   scale_factor
; Local Variables:
; float[6]         Stack[-0x34]:24  local_34
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f6e20
        ;   Label: core_xform.cpp_buildUniformScaleMatrix_FUN_005f6e20
    SUB ESP,0x30                        ; 005f6e21
    MOV EAX,ESI                         ; 005f6e24
    MOV EDX,dword ptr [ESP + 0x38]      ; 005f6e26
    MOV EDI,ESI                         ; 005f6e2a
    XOR ECX,ECX                         ; 005f6e2c
    MOV ESI,ESP                         ; 005f6e2e
    MOV dword ptr [ESP],EDX             ; 005f6e30
    MOV dword ptr [ESP + 0x18],ECX      ; 005f6e33
    MOV dword ptr [ESP + 0x1c],ECX      ; 005f6e37
    MOV dword ptr [ESP + 0x20],ECX      ; 005f6e3b
    MOV dword ptr [ESP + 0x24],ECX      ; 005f6e3f
    XOR EDX,EDX                         ; 005f6e43
    MOV dword ptr [ESP + 0x2c],ECX      ; 005f6e45
    MOV dword ptr [ESP + 0x4],EDX       ; 005f6e49
    MOV dword ptr [ESP + 0x8],EDX       ; 005f6e4d
    MOV dword ptr [ESP + 0xc],EDX       ; 005f6e51
    MOV dword ptr [ESP + 0x10],EDX      ; 005f6e55
    MOV EDX,dword ptr [ESP + 0x38]      ; 005f6e59
    MOV ECX,0xc                         ; 005f6e5d
    MOV dword ptr [ESP + 0x14],EDX      ; 005f6e62
    MOV dword ptr [ESP + 0x28],EDX      ; 005f6e66
    MOVSD.REP ES:EDI,ESI                ; 005f6e6a
    ADD ESP,0x30                        ; 005f6e6c
    POP EDI                             ; 005f6e6f
    RET                                 ; 005f6e70

