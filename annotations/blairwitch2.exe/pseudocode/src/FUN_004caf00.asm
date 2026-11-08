; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004caf00(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004cb700 at 004cb747
;
; Referenced Globals:
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   undefined4 DAT_01d04fc8
;   undefined4 DAT_01d04fcc
;   undefined4 DAT_01d04fd0
;   undefined4 DAT_01d04fd4
;   undefined4 DAT_01d04fd8
;
; Called Functions:
;   FUN_004cae10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004caf00
        ;   Label: FUN_004caf00
    PUSH ESI                            ; 004caf01
    PUSH EDI                            ; 004caf02
    PUSH EBP                            ; 004caf03
    SUB ESP,0x5c                        ; 004caf04
    MOV ESI,dword ptr [ESP + 0x70]      ; 004caf07
    MOV EAX,dword ptr [ESI + 0x14]      ; 004caf0b
    IMUL EAX,dword ptr [ESI + 0x1c]     ; 004caf0e
    SHL EAX,0x8                         ; 004caf12
    MOV dword ptr [ESP + 0x3c],EAX      ; 004caf15
    MOV dword ptr [ESP + 0x40],EAX      ; 004caf19
    MOV dword ptr [ESP + 0x44],EAX      ; 004caf1d
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004caf21
    MOV EAX,[0x01d04fb8]                ; 004caf25 | DAT_01d04fb8
    IMUL EDX                            ; 004caf2a
    SHRD EAX,EDX,0x10                   ; 004caf2c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004caf30
    MOV ECX,EAX                         ; 004caf34
    MOV EAX,[0x01d04fc4]                ; 004caf36 | DAT_01d04fc4
    IMUL EDX                            ; 004caf3b
    SHRD EAX,EDX,0x10                   ; 004caf3d
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004caf41
    ADD ECX,EAX                         ; 004caf45
    MOV EAX,[0x01d04fd0]                ; 004caf47 | DAT_01d04fd0
    IMUL EDX                            ; 004caf4c
    SHRD EAX,EDX,0x10                   ; 004caf4e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004caf52
    ADD ECX,EAX                         ; 004caf56
    MOV EAX,[0x01d04fbc]                ; 004caf58 | DAT_01d04fbc
    MOV dword ptr [ESP],ECX             ; 004caf5d
    IMUL EDX                            ; 004caf60
    SHRD EAX,EDX,0x10                   ; 004caf62
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004caf66
    MOV ECX,EAX                         ; 004caf6a
    MOV EAX,[0x01d04fc8]                ; 004caf6c | DAT_01d04fc8
    IMUL EDX                            ; 004caf71
    SHRD EAX,EDX,0x10                   ; 004caf73
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004caf77
    ADD ECX,EAX                         ; 004caf7b
    MOV EAX,[0x01d04fd4]                ; 004caf7d | DAT_01d04fd4
    IMUL EDX                            ; 004caf82
    SHRD EAX,EDX,0x10                   ; 004caf84
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004caf88
    ADD ECX,EAX                         ; 004caf8c
    MOV EAX,[0x01d04fc0]                ; 004caf8e | DAT_01d04fc0
    MOV dword ptr [ESP + 0x4],ECX       ; 004caf93
    IMUL EDX                            ; 004caf97
    SHRD EAX,EDX,0x10                   ; 004caf99
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004caf9d
    MOV ECX,EAX                         ; 004cafa1
    MOV EAX,[0x01d04fcc]                ; 004cafa3 | DAT_01d04fcc
    IMUL EDX                            ; 004cafa8
    SHRD EAX,EDX,0x10                   ; 004cafaa
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004cafae
    ADD ECX,EAX                         ; 004cafb2
    MOV EAX,[0x01d04fd8]                ; 004cafb4 | DAT_01d04fd8
    IMUL EDX                            ; 004cafb9
    SHRD EAX,EDX,0x10                   ; 004cafbb
    ADD ECX,EAX                         ; 004cafbf
    MOV dword ptr [ESP + 0x8],ECX       ; 004cafc1
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004cafc5
    NEG ECX                             ; 004cafc9
    MOV EAX,[0x01d04fb8]                ; 004cafcb | DAT_01d04fb8
    MOV EDX,ECX                         ; 004cafd0
    MOV dword ptr [ESP + 0x3c],ECX      ; 004cafd2
    IMUL EDX                            ; 004cafd6
    SHRD EAX,EDX,0x10                   ; 004cafd8
    MOV EDX,dword ptr [ESP + 0x40]      ; 004cafdc
    MOV ECX,EAX                         ; 004cafe0
    MOV EAX,[0x01d04fc4]                ; 004cafe2 | DAT_01d04fc4
    IMUL EDX                            ; 004cafe7
    SHRD EAX,EDX,0x10                   ; 004cafe9
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cafed
    ADD ECX,EAX                         ; 004caff1
    MOV EAX,[0x01d04fd0]                ; 004caff3 | DAT_01d04fd0
    IMUL EDX                            ; 004caff8
    SHRD EAX,EDX,0x10                   ; 004caffa
    ADD ECX,EAX                         ; 004caffe
    MOV dword ptr [ESP + 0xc],ECX       ; 004cb000
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004cb004
    MOV EAX,[0x01d04fbc]                ; 004cb008 | DAT_01d04fbc
    IMUL EDX                            ; 004cb00d
    SHRD EAX,EDX,0x10                   ; 004cb00f
    MOV EDX,dword ptr [ESP + 0x40]      ; 004cb013
    MOV ECX,EAX                         ; 004cb017
    MOV EAX,[0x01d04fc8]                ; 004cb019 | DAT_01d04fc8
    IMUL EDX                            ; 004cb01e
    SHRD EAX,EDX,0x10                   ; 004cb020
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cb024
    ADD ECX,EAX                         ; 004cb028
    MOV EAX,[0x01d04fd4]                ; 004cb02a | DAT_01d04fd4
    IMUL EDX                            ; 004cb02f
    SHRD EAX,EDX,0x10                   ; 004cb031
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004cb035
    ADD ECX,EAX                         ; 004cb039
    MOV EAX,[0x01d04fc0]                ; 004cb03b | DAT_01d04fc0
    MOV dword ptr [ESP + 0x10],ECX      ; 004cb040
    IMUL EDX                            ; 004cb044
    SHRD EAX,EDX,0x10                   ; 004cb046
    MOV EDX,dword ptr [ESP + 0x40]      ; 004cb04a
    MOV ECX,EAX                         ; 004cb04e
    MOV EAX,[0x01d04fcc]                ; 004cb050 | DAT_01d04fcc
    MOV EBX,dword ptr [ESP + 0x40]      ; 004cb055
    IMUL EDX                            ; 004cb059
    SHRD EAX,EDX,0x10                   ; 004cb05b
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cb05f
    ADD ECX,EAX                         ; 004cb063
    MOV EAX,[0x01d04fd8]                ; 004cb065 | DAT_01d04fd8
    NEG EBX                             ; 004cb06a
    IMUL EDX                            ; 004cb06c
    SHRD EAX,EDX,0x10                   ; 004cb06e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004cb072
    ADD ECX,EAX                         ; 004cb076
    MOV EAX,[0x01d04fb8]                ; 004cb078 | DAT_01d04fb8
    MOV dword ptr [ESP + 0x14],ECX      ; 004cb07d
    IMUL EDX                            ; 004cb081
    SHRD EAX,EDX,0x10                   ; 004cb083
    MOV ECX,EAX                         ; 004cb087
    MOV EDX,EBX                         ; 004cb089
    MOV EAX,[0x01d04fc4]                ; 004cb08b | DAT_01d04fc4
    IMUL EDX                            ; 004cb090
    SHRD EAX,EDX,0x10                   ; 004cb092
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cb096
    ADD ECX,EAX                         ; 004cb09a
    MOV EAX,[0x01d04fd0]                ; 004cb09c | DAT_01d04fd0
    IMUL EDX                            ; 004cb0a1
    SHRD EAX,EDX,0x10                   ; 004cb0a3
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004cb0a7
    ADD ECX,EAX                         ; 004cb0ab
    MOV EAX,[0x01d04fbc]                ; 004cb0ad | DAT_01d04fbc
    MOV dword ptr [ESP + 0x18],ECX      ; 004cb0b2
    IMUL EDX                            ; 004cb0b6
    SHRD EAX,EDX,0x10                   ; 004cb0b8
    MOV ECX,EAX                         ; 004cb0bc
    MOV EDX,EBX                         ; 004cb0be
    MOV EAX,[0x01d04fc8]                ; 004cb0c0 | DAT_01d04fc8
    IMUL EDX                            ; 004cb0c5
    SHRD EAX,EDX,0x10                   ; 004cb0c7
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cb0cb
    ADD ECX,EAX                         ; 004cb0cf
    MOV EAX,[0x01d04fd4]                ; 004cb0d1 | DAT_01d04fd4
    IMUL EDX                            ; 004cb0d6
    SHRD EAX,EDX,0x10                   ; 004cb0d8
    ADD ECX,EAX                         ; 004cb0dc
    MOV dword ptr [ESP + 0x40],EBX      ; 004cb0de
    MOV dword ptr [ESP + 0x1c],ECX      ; 004cb0e2
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004cb0e6
    MOV EAX,[0x01d04fc0]                ; 004cb0ea | DAT_01d04fc0
    IMUL EDX                            ; 004cb0ef
    SHRD EAX,EDX,0x10                   ; 004cb0f1
    MOV ECX,EAX                         ; 004cb0f5
    MOV EDX,EBX                         ; 004cb0f7
    MOV EAX,[0x01d04fcc]                ; 004cb0f9 | DAT_01d04fcc
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004cb0fe
    IMUL EDX                            ; 004cb102
    SHRD EAX,EDX,0x10                   ; 004cb104
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cb108
    ADD ECX,EAX                         ; 004cb10c
    MOV EAX,[0x01d04fd8]                ; 004cb10e | DAT_01d04fd8
    NEG EDI                             ; 004cb113
    IMUL EDX                            ; 004cb115
    SHRD EAX,EDX,0x10                   ; 004cb117
    MOV EDX,EDI                         ; 004cb11b
    ADD ECX,EAX                         ; 004cb11d
    MOV EAX,[0x01d04fb8]                ; 004cb11f | DAT_01d04fb8
    MOV dword ptr [ESP + 0x20],ECX      ; 004cb124
    IMUL EDX                            ; 004cb128
    SHRD EAX,EDX,0x10                   ; 004cb12a
    MOV ECX,EAX                         ; 004cb12e
    MOV EDX,EBX                         ; 004cb130
    MOV EAX,[0x01d04fc4]                ; 004cb132 | DAT_01d04fc4
    IMUL EDX                            ; 004cb137
    SHRD EAX,EDX,0x10                   ; 004cb139
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cb13d
    ADD ECX,EAX                         ; 004cb141
    MOV EAX,[0x01d04fd0]                ; 004cb143 | DAT_01d04fd0
    IMUL EDX                            ; 004cb148
    SHRD EAX,EDX,0x10                   ; 004cb14a
    MOV EDX,EDI                         ; 004cb14e
    ADD ECX,EAX                         ; 004cb150
    MOV EAX,[0x01d04fbc]                ; 004cb152 | DAT_01d04fbc
    MOV dword ptr [ESP + 0x24],ECX      ; 004cb157
    IMUL EDX                            ; 004cb15b
    SHRD EAX,EDX,0x10                   ; 004cb15d
    MOV ECX,EAX                         ; 004cb161
    MOV EDX,EBX                         ; 004cb163
    MOV EAX,[0x01d04fc8]                ; 004cb165 | DAT_01d04fc8
    IMUL EDX                            ; 004cb16a
    SHRD EAX,EDX,0x10                   ; 004cb16c
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cb170
    ADD ECX,EAX                         ; 004cb174
    MOV EAX,[0x01d04fd4]                ; 004cb176 | DAT_01d04fd4
    IMUL EDX                            ; 004cb17b
    SHRD EAX,EDX,0x10                   ; 004cb17d
    MOV EDX,EDI                         ; 004cb181
    ADD ECX,EAX                         ; 004cb183
    MOV EAX,[0x01d04fc0]                ; 004cb185 | DAT_01d04fc0
    MOV dword ptr [ESP + 0x28],ECX      ; 004cb18a
    IMUL EDX                            ; 004cb18e
    SHRD EAX,EDX,0x10                   ; 004cb190
    MOV ECX,EAX                         ; 004cb194
    MOV EDX,EBX                         ; 004cb196
    MOV EAX,[0x01d04fcc]                ; 004cb198 | DAT_01d04fcc
    IMUL EDX                            ; 004cb19d
    SHRD EAX,EDX,0x10                   ; 004cb19f
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cb1a3
    ADD ECX,EAX                         ; 004cb1a7
    MOV EAX,[0x01d04fd8]                ; 004cb1a9 | DAT_01d04fd8
    IMUL EDX                            ; 004cb1ae
    SHRD EAX,EDX,0x10                   ; 004cb1b0
    ADD ECX,EAX                         ; 004cb1b4
    MOV dword ptr [ESP + 0x3c],EDI      ; 004cb1b6
    MOV dword ptr [ESP + 0x2c],ECX      ; 004cb1ba
    MOV ECX,0x3e7                       ; 004cb1be
    XOR EBP,EBP                         ; 004cb1c3
    MOV EBX,0x3e7                       ; 004cb1c5
    MOV dword ptr [ESP + 0x34],EBP      ; 004cb1ca
    MOV dword ptr [ESP + 0x38],EBP      ; 004cb1ce
    MOV dword ptr [ESP + 0x58],ECX      ; 004cb1d2
    MOV dword ptr [ESP + 0x30],EBP      ; 004cb1d6
    MOV dword ptr [ESP + 0x54],EBX      ; 004cb1da
    MOV ECX,0xfffffc19                  ; 004cb1de
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004cb1e3
    XOR EBX,EBX                         ; 004cb1e6
    SHL EAX,0x8                         ; 004cb1e8
    MOV EBP,ECX                         ; 004cb1eb
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cb1ed
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 004cb1f1
        ;   Label: LAB_004cb1f1
    MOV EDX,EAX                         ; 004cb1f4
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004cb1f6
    SAR EDX,0x1f                        ; 004cb1fa
    IDIV EDI                            ; 004cb1fd
    MOV EDI,EAX                         ; 004cb1ff
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8] ; 004cb201
    MOV EDX,EAX                         ; 004cb205
    SAR EDX,0x1f                        ; 004cb207
    IDIV dword ptr [ESP + 0x4c]         ; 004cb20a
    CMP EDI,dword ptr [ESP + 0x58]      ; 004cb20e
    JL 0x004cb2e5                       ; 004cb212
        ;   XREF to: 004cb2e5 (CONDITIONAL_JUMP)  ; LAB_004cb2e5
    CMP EAX,dword ptr [ESP + 0x54]      ; 004cb218
        ;   Label: LAB_004cb218
    JGE 0x004cb222                      ; 004cb21c
        ;   XREF to: 004cb222 (CONDITIONAL_JUMP)  ; LAB_004cb222
    MOV dword ptr [ESP + 0x54],EAX      ; 004cb21e
    CMP EDI,ECX                         ; 004cb222
        ;   Label: LAB_004cb222
    JLE 0x004cb228                      ; 004cb224
        ;   XREF to: 004cb228 (CONDITIONAL_JUMP)  ; LAB_004cb228
    MOV ECX,EDI                         ; 004cb226
    CMP EAX,EBP                         ; 004cb228
        ;   Label: LAB_004cb228
    JLE 0x004cb22e                      ; 004cb22a
        ;   XREF to: 004cb22e (CONDITIONAL_JUMP)  ; LAB_004cb22e
    MOV EBP,EAX                         ; 004cb22c
    ADD EBX,0xc                         ; 004cb22e
        ;   Label: LAB_004cb22e
    CMP EBX,0x3c                        ; 004cb231
    JNZ 0x004cb1f1                      ; 004cb234
        ;   XREF to: 004cb1f1 (CONDITIONAL_JUMP)  ; LAB_004cb1f1
    MOV EDI,dword ptr [ESP + 0x54]      ; 004cb236
    MOV EBX,dword ptr [ESP + 0x58]      ; 004cb23a
    ADD ECX,0x2                         ; 004cb23e
    ADD EBP,0x2                         ; 004cb241
    MOV EAX,dword ptr [ESI + 0x10]      ; 004cb244
    SUB EDI,0x2                         ; 004cb247
    SUB EBX,0x2                         ; 004cb24a
    MOV dword ptr [ESI + 0x40],ECX      ; 004cb24d
    MOV dword ptr [ESP + 0x50],EAX      ; 004cb250
    MOV dword ptr [ESI + 0x48],EBP      ; 004cb254
    MOV dword ptr [ESP + 0x54],EDI      ; 004cb257
    MOV EBP,EAX                         ; 004cb25b
    MOV dword ptr [ESI + 0x3c],EBX      ; 004cb25d
    MOV dword ptr [ESP + 0x58],EBX      ; 004cb260
    MOV dword ptr [ESI + 0x44],EDI      ; 004cb264
    NEG EBP                             ; 004cb267
    MOV EAX,dword ptr [ESI + 0x3c]      ; 004cb269
    MOV dword ptr [ESP + 0x50],EBP      ; 004cb26c
    CMP EAX,EBP                         ; 004cb270
    JLE 0x004cb278                      ; 004cb272
        ;   XREF to: 004cb278 (CONDITIONAL_JUMP)  ; LAB_004cb278
    MOV dword ptr [ESP + 0x50],EAX      ; 004cb274
    MOV ECX,dword ptr [ESI + 0x40]      ; 004cb278
        ;   Label: LAB_004cb278
    MOV EBP,dword ptr [ESI + 0x10]      ; 004cb27b
    CMP EBP,ECX                         ; 004cb27e
    JLE 0x004cb284                      ; 004cb280
        ;   XREF to: 004cb284 (CONDITIONAL_JUMP)  ; LAB_004cb284
    MOV EBP,ECX                         ; 004cb282
    MOV EAX,dword ptr [ESI + 0x14]      ; 004cb284
        ;   Label: LAB_004cb284
    MOV EBX,dword ptr [ESI + 0x44]      ; 004cb287
    NEG EAX                             ; 004cb28a
    CMP EAX,EBX                         ; 004cb28c
    JGE 0x004cb292                      ; 004cb28e
        ;   XREF to: 004cb292 (CONDITIONAL_JUMP)  ; LAB_004cb292
    MOV EAX,EBX                         ; 004cb290
    MOV ECX,dword ptr [ESI + 0x14]      ; 004cb292
        ;   Label: LAB_004cb292
    MOV dword ptr [ESP + 0x48],ECX      ; 004cb295
    MOV EDI,dword ptr [ESP + 0x48]      ; 004cb299
    MOV ECX,dword ptr [ESI + 0x48]      ; 004cb29d
    CMP ECX,EDI                         ; 004cb2a0
    JGE 0x004cb2a8                      ; 004cb2a2
        ;   XREF to: 004cb2a8 (CONDITIONAL_JUMP)  ; LAB_004cb2a8
    MOV dword ptr [ESP + 0x48],ECX      ; 004cb2a4
    MOV EDX,dword ptr [ESP + 0x48]      ; 004cb2a8
        ;   Label: LAB_004cb2a8
    MOV EDI,EAX                         ; 004cb2ac
    CMP EAX,EDX                         ; 004cb2ae
    JG 0x004cb2dd                       ; 004cb2b0
        ;   XREF to: 004cb2dd (CONDITIONAL_JUMP)  ; LAB_004cb2dd
    MOV EBX,dword ptr [ESP + 0x50]      ; 004cb2b2
        ;   Label: LAB_004cb2b2
    CMP EBP,EBX                         ; 004cb2b6
    JL 0x004cb2d4                       ; 004cb2b8
        ;   XREF to: 004cb2d4 (CONDITIONAL_JUMP)  ; LAB_004cb2d4
    MOV EAX,dword ptr [ESI + 0x30]      ; 004cb2ba
        ;   Label: LAB_004cb2ba
    ADD EAX,EDI                         ; 004cb2bd
    PUSH EAX                            ; 004cb2bf
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004cb2c0
    ADD EAX,EBX                         ; 004cb2c3
    PUSH EAX                            ; 004cb2c5
    PUSH ESI                            ; 004cb2c6
    INC EBX                             ; 004cb2c7
    CALL FUN_004cae10                   ; 004cb2c8
        ;   XREF to: 004cae10 (UNCONDITIONAL_CALL)  ; undefined FUN_004cae10()
    ADD ESP,0xc                         ; 004cb2cd
    CMP EBX,EBP                         ; 004cb2d0
    JLE 0x004cb2ba                      ; 004cb2d2
        ;   XREF to: 004cb2ba (CONDITIONAL_JUMP)  ; LAB_004cb2ba
    MOV ECX,dword ptr [ESP + 0x48]      ; 004cb2d4
        ;   Label: LAB_004cb2d4
    INC EDI                             ; 004cb2d8
    CMP EDI,ECX                         ; 004cb2d9
    JLE 0x004cb2b2                      ; 004cb2db
        ;   XREF to: 004cb2b2 (CONDITIONAL_JUMP)  ; LAB_004cb2b2
    ADD ESP,0x5c                        ; 004cb2dd
        ;   Label: LAB_004cb2dd
    POP EBP                             ; 004cb2e0
    POP EDI                             ; 004cb2e1
    POP ESI                             ; 004cb2e2
    POP EBX                             ; 004cb2e3
    RET                                 ; 004cb2e4
    MOV dword ptr [ESP + 0x58],EDI      ; 004cb2e5
        ;   Label: LAB_004cb2e5
    JMP 0x004cb218                      ; 004cb2e9
        ;   XREF to: 004cb218 (UNCONDITIONAL_JUMP)  ; LAB_004cb218

