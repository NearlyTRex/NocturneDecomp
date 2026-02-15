; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(float z_offset,CMatrix3x4f *matrix_out)
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
;   core_mimic.cpp_CMimic_FUN_0051f930 at 0051fb30
;   core_xform.cpp_buildMirrorTransform_FUN_005f7000 at 005f70d0
;
; Referenced Globals:
;   double g_ZFlipMatrixScaleFactor = 2
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f6fa0
        ;   Label: core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
    SUB ESP,0x30                        ; 005f6fa1
    MOV EAX,ESI                         ; 005f6fa4
    FLD float ptr [ESP + 0x38]          ; 005f6fa6
    FMUL double ptr [0x006583d5]        ; 005f6faa | g_ZFlipMatrixScaleFactor
    MOV EDX,0x3f800000                  ; 005f6fb0
    MOV EDI,0xbf800000                  ; 005f6fb5
    XOR ECX,ECX                         ; 005f6fba
    MOV dword ptr [ESP],EDX             ; 005f6fbc
    MOV dword ptr [ESP + 0x4],ECX       ; 005f6fbf
    MOV dword ptr [ESP + 0x8],ECX       ; 005f6fc3
    MOV dword ptr [ESP + 0xc],ECX       ; 005f6fc7
    MOV dword ptr [ESP + 0x10],ECX      ; 005f6fcb
    MOV dword ptr [ESP + 0x14],EDX      ; 005f6fcf
    MOV dword ptr [ESP + 0x18],ECX      ; 005f6fd3
    MOV dword ptr [ESP + 0x1c],ECX      ; 005f6fd7
    MOV dword ptr [ESP + 0x20],ECX      ; 005f6fdb
    MOV dword ptr [ESP + 0x24],ECX      ; 005f6fdf
    MOV dword ptr [ESP + 0x28],EDI      ; 005f6fe3
    MOV ECX,0xc                         ; 005f6fe7
    MOV EDI,ESI                         ; 005f6fec
    MOV ESI,ESP                         ; 005f6fee
    FSTP float ptr [ESP + 0x2c]         ; 005f6ff0
    MOVSD.REP ES:EDI,ESI                ; 005f6ff4
    ADD ESP,0x30                        ; 005f6ff6
    POP EDI                             ; 005f6ff9
    RET                                 ; 005f6ffa

