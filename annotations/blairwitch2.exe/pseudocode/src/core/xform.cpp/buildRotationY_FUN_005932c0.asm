; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildRotationY_FUN_005932c0(float param_1)
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
; XREF[5]:
;   core_charactr.cpp_FUN_00426a10 at 00426ca5
;   core_doc.cpp_FUN_004568e0 at 00456a33
;   core_gabriela.cpp_FUN_004b0210 at 004b030b
;   core_gabriela.cpp_FUN_004b22c0 at 004b2619
;   core_stranger.cpp_FUN_00568500 at 0056861c
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005932c0
        ;   Label: core_xform.cpp_buildRotationY_FUN_005932c0
    SUB ESP,0x40                        ; 005932c1
    MOV EDX,ESI                         ; 005932c4
    FLD float ptr [ESP + 0x48]          ; 005932c6
    FLD ST0                             ; 005932ca
    FSIN                                ; 005932cc
    FXCH                                ; 005932ce
    FCOS                                ; 005932d0
    XOR ECX,ECX                         ; 005932d2
    MOV EDI,0x3f800000                  ; 005932d4
    MOV dword ptr [ESP + 0x4],ECX       ; 005932d9
    MOV dword ptr [ESP + 0xc],ECX       ; 005932dd
    MOV dword ptr [ESP + 0x10],ECX      ; 005932e1
    MOV dword ptr [ESP + 0x14],EDI      ; 005932e5
    MOV dword ptr [ESP + 0x18],ECX      ; 005932e9
    MOV dword ptr [ESP + 0x1c],ECX      ; 005932ed
    MOV dword ptr [ESP + 0x24],ECX      ; 005932f1
    MOV dword ptr [ESP + 0x2c],ECX      ; 005932f5
    MOV ECX,0xc                         ; 005932f9
    MOV EDI,ESI                         ; 005932fe
    MOV ESI,ESP                         ; 00593300
    FSTP float ptr [ESP + 0x38]         ; 00593302
    MOV EAX,dword ptr [ESP + 0x38]      ; 00593306
    FSTP float ptr [ESP + 0x3c]         ; 0059330a
    MOV dword ptr [ESP],EAX             ; 0059330e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00593311
    FLD float ptr [ESP + 0x3c]          ; 00593315
    MOV dword ptr [ESP + 0x8],EAX       ; 00593319
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059331d
    FCHS                                ; 00593321
    MOV dword ptr [ESP + 0x28],EAX      ; 00593323
    FSTP float ptr [ESP + 0x20]         ; 00593327
    MOVSD.REP ES:EDI,ESI                ; 0059332b
    MOV EAX,EDX                         ; 0059332d
    ADD ESP,0x40                        ; 0059332f
    POP EDI                             ; 00593332
    RET                                 ; 00593333

