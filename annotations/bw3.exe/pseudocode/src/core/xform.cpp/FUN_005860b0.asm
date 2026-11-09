; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005860b0(float *param_1)
;
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[6]:
;   core_boneguy.cpp_FUN_00419550 at 00419725
;   core_boneguy.cpp_FUN_00419790 at 004197c5
;   core_construc.cpp_FUN_00444110 at 004442a4
;   core_construc.cpp_FUN_004443d0 at 00444405
;   core_platfrm.cpp_CPlatform_ctor_FUN_005110e0 at 005111bf
;   core_prye.cpp_FUN_0051c1c0 at 0051cb4b
;
; Referenced Globals:
;   undefined4 DAT_005d81e7
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005860b0
        ;   Label: core_xform.cpp_FUN_005860b0
    PUSH EDI                            ; 005860b1
    SUB ESP,0x38                        ; 005860b2
    MOV EBX,ESI                         ; 005860b5
    MOV ESI,dword ptr [ESP + 0x44]      ; 005860b7
    FLD float ptr [ESI]                 ; 005860bb
    LEA EAX,[ESP + 0x24]                ; 005860bd
    FMUL float ptr [0x005d81e7]         ; 005860c1 | DAT_005d81e7
    PUSH EAX                            ; 005860c7
    LEA EAX,[ESP + 0x1c]                ; 005860c8
    PUSH EAX                            ; 005860cc
    LEA EAX,[ESP + 0x18]                ; 005860cd
    PUSH EAX                            ; 005860d1
    FSTP float ptr [ESP + 0x30]         ; 005860d2
    CALL core_dirmat.cpp_FUN_0045bef0   ; 005860d6
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    FLD float ptr [ESI + 0x8]           ; 005860db
    LEA EAX,[ESP + 0x40]                ; 005860de
    ADD ESP,0xc                         ; 005860e2
    FMUL float ptr [0x005d81e7]         ; 005860e5 | DAT_005d81e7
    PUSH EAX                            ; 005860eb
    LEA EAX,[ESP + 0x20]                ; 005860ec
    PUSH EAX                            ; 005860f0
    LEA EAX,[ESP + 0x1c]                ; 005860f1
    PUSH EAX                            ; 005860f5
    FSTP float ptr [ESP + 0x40]         ; 005860f6
    CALL core_dirmat.cpp_FUN_0045bef0   ; 005860fa
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    FLD float ptr [ESI + 0x4]           ; 005860ff
    LEA EAX,[ESP + 0x38]                ; 00586102
    ADD ESP,0xc                         ; 00586106
    FMUL float ptr [0x005d81e7]         ; 00586109 | DAT_005d81e7
    PUSH EAX                            ; 0058610f
    LEA EAX,[ESP + 0x24]                ; 00586110
    PUSH EAX                            ; 00586114
    LEA EAX,[ESP + 0x30]                ; 00586115
    PUSH EAX                            ; 00586119
    FSTP float ptr [ESP + 0x38]         ; 0058611a
    CALL core_dirmat.cpp_FUN_0045bef0   ; 0058611e
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 00586123
    FLD float ptr [ESP + 0x1c]          ; 00586126
    FMUL float ptr [ESP + 0x18]         ; 0058612a
    FLD float ptr [ESP + 0x1c]          ; 0058612e
    FMUL float ptr [ESP + 0x20]         ; 00586132
    FLD float ptr [ESP + 0x18]          ; 00586136
    FMUL float ptr [ESP + 0x20]         ; 0058613a
    FLD float ptr [ESP + 0x14]          ; 0058613e
    FCHS                                ; 00586142
    FMUL float ptr [ESP + 0x20]         ; 00586144
    FXCH ST2                            ; 00586148
    FMUL float ptr [ESP + 0x10]         ; 0058614a
    FXCH                                ; 0058614e
    FMUL float ptr [ESP + 0x14]         ; 00586150
    FXCH ST2                            ; 00586154
    FMUL float ptr [ESP + 0x10]         ; 00586156
    FXCH ST3                            ; 0058615a
    FST float ptr [ESP + 0x30]          ; 0058615c
    FMUL float ptr [ESP + 0x20]         ; 00586160
    FLD float ptr [ESP + 0x14]          ; 00586164
    FMUL float ptr [ESP + 0x18]         ; 00586168
    FLD float ptr [ESP + 0x1c]          ; 0058616c
    FMUL float ptr [ESP + 0x10]         ; 00586170
    FLD float ptr [ESP + 0x14]          ; 00586174
    FMUL float ptr [ESP + 0x10]         ; 00586178
    FXCH ST2                            ; 0058617c
    FMUL float ptr [ESP + 0x28]         ; 0058617e
    FXCH ST2                            ; 00586182
    FMUL float ptr [ESP + 0x28]         ; 00586184
    FXCH ST2                            ; 00586188
    FADDP ST4,ST0                       ; 0058618a
    FLD float ptr [ESP + 0x30]          ; 0058618c
    FMUL float ptr [ESP + 0x28]         ; 00586190
    FXCH                                ; 00586194
    FMUL float ptr [ESP + 0x28]         ; 00586196
    MOV EDI,EBX                         ; 0058619a
    FXCH                                ; 0058619c
    FADDP ST6,ST0                       ; 0058619e
    MOV ESI,ESP                         ; 005861a0
    FXCH ST5                            ; 005861a2
    FSTP float ptr [ESP + 0x8]          ; 005861a4
    FXCH ST4                            ; 005861a8
    FSUBP ST3,ST0                       ; 005861aa
    FXCH                                ; 005861ac
    FSTP float ptr [ESP + 0x4]          ; 005861ae
    FADDP ST2,ST0                       ; 005861b2
    FSTP float ptr [ESP + 0xc]          ; 005861b4
    FSTP float ptr [ESP]                ; 005861b8
    MOVSD ES:EDI,ESI                    ; 005861bb
    MOVSD ES:EDI,ESI                    ; 005861bc
    MOVSD ES:EDI,ESI                    ; 005861bd
    MOVSD ES:EDI,ESI                    ; 005861be
    MOV EAX,EBX                         ; 005861bf
    ADD ESP,0x38                        ; 005861c1
    POP EDI                             ; 005861c4
    POP EBX                             ; 005861c5
    RET                                 ; 005861c6

