; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildZFlipMatrix_FUN_005b70f0(float param_1)
;
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
; XREF[1]:
;   core_mimic.cpp_CMimic_updatePose_FUN_0050f7e0 at 0050f9e2
;
; Referenced Globals:
;   undefined4 DAT_005fa160
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b70f0
        ;   Label: core_xform.cpp_buildZFlipMatrix_FUN_005b70f0
    SUB ESP,0x30                        ; 005b70f1
    MOV EAX,ESI                         ; 005b70f4
    FLD float ptr [ESP + 0x38]          ; 005b70f6
    FMUL float ptr [0x005fa160]         ; 005b70fa | DAT_005fa160
    MOV EDX,0x3f800000                  ; 005b7100
    MOV EDI,0xbf800000                  ; 005b7105
    XOR ECX,ECX                         ; 005b710a
    MOV dword ptr [ESP],EDX             ; 005b710c
    MOV dword ptr [ESP + 0x4],ECX       ; 005b710f
    MOV dword ptr [ESP + 0x8],ECX       ; 005b7113
    MOV dword ptr [ESP + 0xc],ECX       ; 005b7117
    MOV dword ptr [ESP + 0x10],ECX      ; 005b711b
    MOV dword ptr [ESP + 0x14],EDX      ; 005b711f
    MOV dword ptr [ESP + 0x18],ECX      ; 005b7123
    MOV dword ptr [ESP + 0x1c],ECX      ; 005b7127
    MOV dword ptr [ESP + 0x20],ECX      ; 005b712b
    MOV dword ptr [ESP + 0x24],ECX      ; 005b712f
    MOV dword ptr [ESP + 0x28],EDI      ; 005b7133
    MOV ECX,0xc                         ; 005b7137
    MOV EDI,ESI                         ; 005b713c
    MOV ESI,ESP                         ; 005b713e
    FSTP float ptr [ESP + 0x2c]         ; 005b7140
    MOVSD.REP ES:EDI,ESI                ; 005b7144
    ADD ESP,0x30                        ; 005b7146
    POP EDI                             ; 005b7149
    RET                                 ; 005b714a

