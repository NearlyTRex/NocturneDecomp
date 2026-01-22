; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi void core_xform.cpp_buildScaleMatrix_FUN_005f6e80(CMatrix3x4f * output_matrix, CVector3f * scale_vector)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   output_matrix
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
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
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f6e80
        ;   Label: core_xform.cpp_buildScaleMatrix_FUN_005f6e80
    PUSH EDI                            ; 005f6e81
    SUB ESP,0x30                        ; 005f6e82
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005f6e85
    MOV EDX,ESI                         ; 005f6e89
    MOV EDI,ESI                         ; 005f6e8b
    MOV EAX,dword ptr [ECX]             ; 005f6e8d
    XOR EBX,EBX                         ; 005f6e8f
    MOV ESI,ESP                         ; 005f6e91
    MOV dword ptr [ESP],EAX             ; 005f6e93
    MOV dword ptr [ESP + 0x4],EBX       ; 005f6e96
    MOV dword ptr [ESP + 0x8],EBX       ; 005f6e9a
    MOV dword ptr [ESP + 0xc],EBX       ; 005f6e9e
    MOV dword ptr [ESP + 0x10],EBX      ; 005f6ea2
    MOV dword ptr [ESP + 0x18],EBX      ; 005f6ea6
    MOV dword ptr [ESP + 0x1c],EBX      ; 005f6eaa
    MOV dword ptr [ESP + 0x20],EBX      ; 005f6eae
    MOV EAX,dword ptr [ECX + 0x4]       ; 005f6eb2
    MOV dword ptr [ESP + 0x24],EBX      ; 005f6eb5
    MOV dword ptr [ESP + 0x14],EAX      ; 005f6eb9
    MOV EAX,dword ptr [ECX + 0x8]       ; 005f6ebd
    MOV ECX,0xc                         ; 005f6ec0
    MOV dword ptr [ESP + 0x2c],EBX      ; 005f6ec5
    MOV dword ptr [ESP + 0x28],EAX      ; 005f6ec9
    MOVSD.REP ES:EDI,ESI                ; 005f6ecd
    MOV EAX,EDX                         ; 005f6ecf
    ADD ESP,0x30                        ; 005f6ed1
    POP EDI                             ; 005f6ed4
    POP EBX                             ; 005f6ed5
    RET                                 ; 005f6ed6

