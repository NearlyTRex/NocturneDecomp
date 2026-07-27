; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildRotationY_FUN_0055c7b0(float param_1)
;
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
; XREF[4]:
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310 at 0042756b
;   core_gabriela.cpp_FUN_004980d0 at 004981bd
;   core_gabriela.cpp_FUN_00499ca0 at 00499f57
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760 at 0053a86b
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055c7b0
        ;   Label: core_xform.cpp_buildRotationY_FUN_0055c7b0
    SUB ESP,0x40                        ; 0055c7b1
    MOV EDX,ESI                         ; 0055c7b4
    FLD float ptr [ESP + 0x48]          ; 0055c7b6
    FLD ST0                             ; 0055c7ba
    FSIN                                ; 0055c7bc
    FXCH                                ; 0055c7be
    FCOS                                ; 0055c7c0
    XOR ECX,ECX                         ; 0055c7c2
    MOV EDI,0x3f800000                  ; 0055c7c4
    MOV dword ptr [ESP + 0x4],ECX       ; 0055c7c9
    MOV dword ptr [ESP + 0xc],ECX       ; 0055c7cd
    MOV dword ptr [ESP + 0x10],ECX      ; 0055c7d1
    MOV dword ptr [ESP + 0x14],EDI      ; 0055c7d5
    MOV dword ptr [ESP + 0x18],ECX      ; 0055c7d9
    MOV dword ptr [ESP + 0x1c],ECX      ; 0055c7dd
    MOV dword ptr [ESP + 0x24],ECX      ; 0055c7e1
    MOV dword ptr [ESP + 0x2c],ECX      ; 0055c7e5
    MOV ECX,0xc                         ; 0055c7e9
    MOV EDI,ESI                         ; 0055c7ee
    MOV ESI,ESP                         ; 0055c7f0
    FSTP float ptr [ESP + 0x38]         ; 0055c7f2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055c7f6
    FSTP float ptr [ESP + 0x3c]         ; 0055c7fa
    MOV dword ptr [ESP],EAX             ; 0055c7fe
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0055c801
    FLD float ptr [ESP + 0x3c]          ; 0055c805
    MOV dword ptr [ESP + 0x8],EAX       ; 0055c809
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055c80d
    FCHS                                ; 0055c811
    MOV dword ptr [ESP + 0x28],EAX      ; 0055c813
    FSTP float ptr [ESP + 0x20]         ; 0055c817
    MOVSD.REP ES:EDI,ESI                ; 0055c81b
    MOV EAX,EDX                         ; 0055c81d
    ADD ESP,0x40                        ; 0055c81f
    POP EDI                             ; 0055c822
    RET                                 ; 0055c823

