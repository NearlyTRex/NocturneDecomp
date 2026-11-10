; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildRotationX_FUN_00593240(float param_1)
;
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
; XREF[4]:
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00426a10 at 00426cfb
;   core_doc.cpp_FUN_004568e0 at 00456a06
;   core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004b0210 at 004b02e1
;   core_stranger.cpp_FUN_00568500 at 005685ef
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593240
        ;   Label: core_xform.cpp_buildRotationX_FUN_00593240
    PUSH EDI                            ; 00593241
    SUB ESP,0x40                        ; 00593242
    MOV EDX,ESI                         ; 00593245
    FLD float ptr [ESP + 0x4c]          ; 00593247
    FLD ST0                             ; 0059324b
    FSIN                                ; 0059324d
    FXCH                                ; 0059324f
    FCOS                                ; 00593251
    MOV ECX,0x3f800000                  ; 00593253
    MOV EDI,ESI                         ; 00593258
    XOR EBX,EBX                         ; 0059325a
    MOV ESI,ESP                         ; 0059325c
    MOV dword ptr [ESP],ECX             ; 0059325e
    MOV dword ptr [ESP + 0x4],EBX       ; 00593261
    MOV dword ptr [ESP + 0x8],EBX       ; 00593265
    MOV dword ptr [ESP + 0xc],EBX       ; 00593269
    MOV dword ptr [ESP + 0x10],EBX      ; 0059326d
    MOV dword ptr [ESP + 0x1c],EBX      ; 00593271
    MOV dword ptr [ESP + 0x20],EBX      ; 00593275
    MOV dword ptr [ESP + 0x2c],EBX      ; 00593279
    MOV ECX,0xc                         ; 0059327d
    FSTP float ptr [ESP + 0x38]         ; 00593282
    MOV EAX,dword ptr [ESP + 0x38]      ; 00593286
    FSTP float ptr [ESP + 0x3c]         ; 0059328a
    MOV dword ptr [ESP + 0x14],EAX      ; 0059328e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00593292
    FLD float ptr [ESP + 0x3c]          ; 00593296
    MOV dword ptr [ESP + 0x24],EAX      ; 0059329a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059329e
    FCHS                                ; 005932a2
    MOV dword ptr [ESP + 0x28],EAX      ; 005932a4
    FSTP float ptr [ESP + 0x18]         ; 005932a8
    MOVSD.REP ES:EDI,ESI                ; 005932ac
    MOV EAX,EDX                         ; 005932ae
    ADD ESP,0x40                        ; 005932b0
    POP EDI                             ; 005932b3
    POP EBX                             ; 005932b4
    RET                                 ; 005932b5

