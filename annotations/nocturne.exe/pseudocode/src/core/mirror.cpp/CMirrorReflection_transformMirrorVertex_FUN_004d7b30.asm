; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_vertex
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0 at 0050b6f9
;
; Referenced Globals:
;   float FLOAT_005a0880 = 256
;   float FLOAT_005a0888 = 0.00390625
;
; Called Functions:
;   core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7b30
        ;   Label: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
    PUSH EDI                            ; 004d7b31
    PUSH EBP                            ; 004d7b32
    SUB ESP,0x30                        ; 004d7b33
    MOV EAX,dword ptr [ESP + 0x44]      ; 004d7b36
    MOV EBP,ESI                         ; 004d7b3a
    MOV EBX,ESP                         ; 004d7b3c
    FILD dword ptr [EAX]                ; 004d7b3e
    FMUL float ptr [0x005a0888]         ; 004d7b40 | FLOAT_005a0888
    FSTP float ptr [EBX]                ; 004d7b46
    FILD dword ptr [EAX + 0x4]          ; 004d7b48
    FMUL float ptr [0x005a0888]         ; 004d7b4b | FLOAT_005a0888
    FSTP float ptr [EBX + 0x4]          ; 004d7b51
    FILD dword ptr [EAX + 0x8]          ; 004d7b54
    FMUL float ptr [0x005a0888]         ; 004d7b57 | FLOAT_005a0888
    FSTP float ptr [EBX + 0x8]          ; 004d7b5d
    MOV EAX,ESP                         ; 004d7b60
    PUSH EAX                            ; 004d7b62
    LEA EAX,[ESP + 0x28]                ; 004d7b63
    PUSH EAX                            ; 004d7b67
    MOV EDX,dword ptr [ESP + 0x48]      ; 004d7b68
    PUSH EDX                            ; 004d7b6c
    CALL core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480 ; 004d7b6d
        ;   XREF to: 004d7480 (UNCONDITIONAL_CALL)  ; CVector3f * core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480(CMirrorReflection * this_ptr, CVector3f * output_buffer, CVector3f * input_vector)
    MOV EDX,EAX                         ; 004d7b72
    LEA EAX,[ESP + 0x18]                ; 004d7b74
    ADD ESP,0xc                         ; 004d7b78
    CMP EAX,EDX                         ; 004d7b7b
    JZ 0x004d7b93                       ; 004d7b7d
        ;   XREF to: 004d7b93 (CONDITIONAL_JUMP)  ; LAB_004d7b93
    MOV EAX,dword ptr [EDX]             ; 004d7b7f
    MOV dword ptr [ESP + 0xc],EAX       ; 004d7b81
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d7b85
    MOV dword ptr [ESP + 0x10],EAX      ; 004d7b88
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d7b8c
    MOV dword ptr [ESP + 0x14],EAX      ; 004d7b8f
    LEA EBX,[ESP + 0x18]                ; 004d7b93
        ;   Label: LAB_004d7b93
    LEA EAX,[ESP + 0xc]                 ; 004d7b97
    LEA ESI,[ESP + 0x18]                ; 004d7b9b
    MOV EDI,EBP                         ; 004d7b9f
    FLD float ptr [EAX]                 ; 004d7ba1
    FMUL float ptr [0x005a0880]         ; 004d7ba3 | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d7ba9
    FLD float ptr [EAX + 0x4]           ; 004d7bab
    FMUL float ptr [0x005a0880]         ; 004d7bae | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d7bb4
    FLD float ptr [EAX + 0x8]           ; 004d7bb7
    FMUL float ptr [0x005a0880]         ; 004d7bba | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d7bc0
    MOVSD ES:EDI,ESI                    ; 004d7bc3
    MOVSD ES:EDI,ESI                    ; 004d7bc4
    MOVSD ES:EDI,ESI                    ; 004d7bc5
    MOV EAX,EBP                         ; 004d7bc6
    ADD ESP,0x30                        ; 004d7bc8
    POP EBP                             ; 004d7bcb
    POP EDI                             ; 004d7bcc
    POP EBX                             ; 004d7bcd
    RET                                 ; 004d7bce

