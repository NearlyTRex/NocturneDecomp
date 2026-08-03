; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_0055c830(float angle_radians,CMatrix3x4f *matrix_out)
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
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c830
        ;   Label: core_xform.cpp_buildRotationZ_FUN_0055c830
    PUSH EDI                            ; 0055c831
    SUB ESP,0x40                        ; 0055c832
    MOV EDX,ESI                         ; 0055c835
    FLD float ptr [ESP + 0x4c]          ; 0055c837
    FLD ST0                             ; 0055c83b
    FSIN                                ; 0055c83d
    FXCH                                ; 0055c83f
    FCOS                                ; 0055c841
    MOV EDI,ESI                         ; 0055c843
    XOR ECX,ECX                         ; 0055c845
    XOR EBX,EBX                         ; 0055c847
    MOV ESI,ESP                         ; 0055c849
    MOV dword ptr [ESP + 0x8],ECX       ; 0055c84b
    MOV dword ptr [ESP + 0xc],ECX       ; 0055c84f
    MOV dword ptr [ESP + 0x18],ECX      ; 0055c853
    MOV dword ptr [ESP + 0x1c],ECX      ; 0055c857
    MOV dword ptr [ESP + 0x20],ECX      ; 0055c85b
    MOV dword ptr [ESP + 0x24],ECX      ; 0055c85f
    MOV ECX,0x3f800000                  ; 0055c863
    MOV dword ptr [ESP + 0x2c],EBX      ; 0055c868
    MOV dword ptr [ESP + 0x28],ECX      ; 0055c86c
    MOV ECX,0xc                         ; 0055c870
    FSTP float ptr [ESP + 0x38]         ; 0055c875
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055c879
    FSTP float ptr [ESP + 0x3c]         ; 0055c87d
    MOV dword ptr [ESP],EAX             ; 0055c881
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0055c884
    FLD float ptr [ESP + 0x3c]          ; 0055c888
    MOV dword ptr [ESP + 0x10],EAX      ; 0055c88c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055c890
    FCHS                                ; 0055c894
    MOV dword ptr [ESP + 0x14],EAX      ; 0055c896
    FSTP float ptr [ESP + 0x4]          ; 0055c89a
    MOVSD.REP ES:EDI,ESI                ; 0055c89e
    MOV EAX,EDX                         ; 0055c8a0
    ADD ESP,0x40                        ; 0055c8a2
    POP EDI                             ; 0055c8a5
    POP EBX                             ; 0055c8a6
    RET                                 ; 0055c8a7

