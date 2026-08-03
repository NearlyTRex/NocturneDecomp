; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(float z_offset,CMatrix3x4f *matrix_out)
;
; Parameters:
; float            Stack[0x4]:4   z_offset
; Local Variables:
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
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_mimic.cpp_FUN_004d4ba0 at 004d4da0
;   core_xform.cpp_buildMirrorTransform_FUN_0055caf0 at 0055cbc0
;
; Referenced Globals:
;   double DOUBLE_00598346 = 2
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055ca90
        ;   Label: core_xform.cpp_buildZFlipMatrix_FUN_0055ca90
    SUB ESP,0x30                        ; 0055ca91
    MOV EAX,ESI                         ; 0055ca94
    FLD float ptr [ESP + 0x38]          ; 0055ca96
    FMUL double ptr [0x00598346]        ; 0055ca9a | DOUBLE_00598346
    MOV EDX,0x3f800000                  ; 0055caa0
    MOV EDI,0xbf800000                  ; 0055caa5
    XOR ECX,ECX                         ; 0055caaa
    MOV dword ptr [ESP],EDX             ; 0055caac
    MOV dword ptr [ESP + 0x4],ECX       ; 0055caaf
    MOV dword ptr [ESP + 0x8],ECX       ; 0055cab3
    MOV dword ptr [ESP + 0xc],ECX       ; 0055cab7
    MOV dword ptr [ESP + 0x10],ECX      ; 0055cabb
    MOV dword ptr [ESP + 0x14],EDX      ; 0055cabf
    MOV dword ptr [ESP + 0x18],ECX      ; 0055cac3
    MOV dword ptr [ESP + 0x1c],ECX      ; 0055cac7
    MOV dword ptr [ESP + 0x20],ECX      ; 0055cacb
    MOV dword ptr [ESP + 0x24],ECX      ; 0055cacf
    MOV dword ptr [ESP + 0x28],EDI      ; 0055cad3
    MOV ECX,0xc                         ; 0055cad7
    MOV EDI,ESI                         ; 0055cadc
    MOV ESI,ESP                         ; 0055cade
    FSTP float ptr [ESP + 0x2c]         ; 0055cae0
    MOVSD.REP ES:EDI,ESI                ; 0055cae4
    ADD ESP,0x30                        ; 0055cae6
    POP EDI                             ; 0055cae9
    RET                                 ; 0055caea

