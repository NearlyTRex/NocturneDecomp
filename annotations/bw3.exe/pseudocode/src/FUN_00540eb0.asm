; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540eb0(int *param_1)
;
; Local Variables:
; undefined8       Stack[-0xcc]:8  local_cc
; undefined        Stack[-0xc4]:1  local_c4
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
;   FUN_00535da0 at 005363c7
;
; Referenced Globals:
;   undefined4 DAT_005d0d15
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5fc2c
;   undefined4 DAT_01c6a06f
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_02701528
;   undefined4 DAT_0270f3dc
;   undefined4 DAT_0270f3e0
;
; Called Functions:
;   FUN_00401130
;   FUN_00401fe0
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540eb0
        ;   Label: FUN_00540eb0
    PUSH ESI                            ; 00540eb1
    PUSH EDI                            ; 00540eb2
    PUSH EBP                            ; 00540eb3
    SUB ESP,0xb4                        ; 00540eb4
    MOV EDI,dword ptr [ESP + 0xc8]      ; 00540eba
    MOV EDX,0x2                         ; 00540ec1
    MOV EAX,[0x005fba1c]                ; 00540ec6 | DAT_005fba1c
    MOV ECX,dword ptr [EDI]             ; 00540ecb
    XOR EBP,EBP                         ; 00540ecd
    SUB EAX,0x78                        ; 00540ecf
    MOV dword ptr [ESP + 0x98],EDX      ; 00540ed2
    MOV dword ptr [ESP + 0x84],EAX      ; 00540ed9
    TEST ECX,ECX                        ; 00540ee0
    JLE 0x00540f00                      ; 00540ee2
        ;   XREF to: 00540f00 (CONDITIONAL_JUMP)  ; LAB_00540f00
    XOR EAX,EAX                         ; 00540ee4
    MOV dword ptr [EAX + 0x270f3d8],EBP ; 00540ee6 | DAT_0270f3dc
        ;   Label: LAB_00540ee6
    INC EBP                             ; 00540eec
    MOV EBX,dword ptr [EDI]             ; 00540eed
    ADD EAX,0x4                         ; 00540eef
    CMP EBP,EBX                         ; 00540ef2
    JL 0x00540ee6                       ; 00540ef4
        ;   XREF to: 00540ee6 (CONDITIONAL_JUMP)  ; LAB_00540ee6
    LEA EAX,[EAX]                       ; 00540ef6
    LEA EDX,[EDX]                       ; 00540efc
    XOR EBP,EBP                         ; 00540f00
        ;   Label: LAB_00540f00
    MOV dword ptr [ESP + 0x74],EBP      ; 00540f02
    MOV EAX,dword ptr [EDI]             ; 00540f06
        ;   Label: LAB_00540f06
    DEC EAX                             ; 00540f08
    CMP EBP,EAX                         ; 00540f09
    JGE 0x00540f68                      ; 00540f0b
        ;   XREF to: 00540f68 (CONDITIONAL_JUMP)  ; LAB_00540f68
    LEA ECX,[EBP + 0x1]                 ; 00540f0d
    CMP ECX,dword ptr [EDI]             ; 00540f10
    JGE 0x00540f5a                      ; 00540f12
        ;   XREF to: 00540f5a (CONDITIONAL_JUMP)  ; LAB_00540f5a
    MOV EBX,dword ptr [ESP + 0x74]      ; 00540f14
    LEA EDX,[ECX*0x4 + 0x0]             ; 00540f18
    MOV ESI,dword ptr [EBX + 0x270f3d8] ; 00540f1f | DAT_0270f3dc
        ;   Label: LAB_00540f1f
    MOV EAX,dword ptr [EDX + 0x270f3d8] ; 00540f25 | DAT_0270f3dc | DAT_0270f3e0
    FLD float ptr [ESI*0x4 + 0x2701528] ; 00540f2b | DAT_02701528
    FCOMP float ptr [EAX*0x4 + 0x2701528] ; 00540f32 | DAT_02701528
    FNSTSW AX                           ; 00540f39
    SAHF                                ; 00540f3b
    JNC 0x00540f50                      ; 00540f3c
        ;   XREF to: 00540f50 (CONDITIONAL_JUMP)  ; LAB_00540f50
    MOV EAX,dword ptr [EDX + 0x270f3d8] ; 00540f3e | DAT_0270f3dc | DAT_0270f3e0
    MOV dword ptr [EBX + 0x270f3d8],EAX ; 00540f44
    MOV dword ptr [EDX + 0x270f3d8],ESI ; 00540f4a | DAT_0270f3dc | DAT_0270f3e0
    INC ECX                             ; 00540f50
        ;   Label: LAB_00540f50
    MOV ESI,dword ptr [EDI]             ; 00540f51
    ADD EDX,0x4                         ; 00540f53
    CMP ECX,ESI                         ; 00540f56
    JL 0x00540f1f                       ; 00540f58
        ;   XREF to: 00540f1f (CONDITIONAL_JUMP)  ; LAB_00540f1f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00540f5a
        ;   Label: LAB_00540f5a
    ADD EAX,0x4                         ; 00540f5e
    INC EBP                             ; 00540f61
    MOV dword ptr [ESP + 0x74],EAX      ; 00540f62
    JMP 0x00540f06                      ; 00540f66
        ;   XREF to: 00540f06 (UNCONDITIONAL_JUMP)  ; LAB_00540f06
    MOV EDX,0x9                         ; 00540f68
        ;   Label: LAB_00540f68
    MOV EBP,dword ptr [EDI]             ; 00540f6d
    CMP EBP,EDX                         ; 00540f6f
    JGE 0x00540f75                      ; 00540f71
        ;   XREF to: 00540f75 (CONDITIONAL_JUMP)  ; LAB_00540f75
    MOV EDX,EBP                         ; 00540f73
    TEST EDX,EDX                        ; 00540f75
        ;   Label: LAB_00540f75
    JLE 0x005411ef                      ; 00540f77
        ;   XREF to: 005411ef (CONDITIONAL_JUMP)  ; LAB_005411ef
    MOV EAX,dword ptr [ESP + 0x84]      ; 00540f7d
    SHL EAX,0x2                         ; 00540f84
    LEA ECX,[EAX + 0xc0]                ; 00540f87
    SHL EDX,0x2                         ; 00540f8d
    MOV dword ptr [ESP + 0x7c],EAX      ; 00540f90
    MOV EAX,dword ptr [ESP + 0x84]      ; 00540f94
    ADD EDI,0x4                         ; 00540f9b
    SUB EAX,0xb                         ; 00540f9e
    XOR EBX,EBX                         ; 00540fa1
    MOV dword ptr [ESP + 0x78],EAX      ; 00540fa3
    MOV EAX,dword ptr [ESP + 0x84]      ; 00540fa7
    MOV dword ptr [ESP + 0x8c],EBX      ; 00540fae
    ADD EAX,0x30                        ; 00540fb5
    MOV dword ptr [ESP + 0x68],EDX      ; 00540fb8
    MOV dword ptr [ESP + 0x80],EAX      ; 00540fbc
    MOV EAX,dword ptr [ESP + 0x84]      ; 00540fc3
    MOV dword ptr [ESP + 0x64],EDI      ; 00540fca
    ADD EAX,0x6c                        ; 00540fce
    MOV dword ptr [ESP + 0x6c],ECX      ; 00540fd1
    MOV dword ptr [ESP + 0x70],EAX      ; 00540fd5
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00540fd9
        ;   Label: LAB_00540fd9
    MOV EAX,dword ptr [EAX + 0x270f3d8] ; 00540fe0 | DAT_0270f3dc
    MOV dword ptr [ESP + 0x88],EAX      ; 00540fe6
    IMUL EAX,EAX,0x3000                 ; 00540fed
    CMP dword ptr [0x005fba20],0x20     ; 00540ff3 | DAT_005fba20
    JZ 0x005411fa                       ; 00540ffa
        ;   XREF to: 005411fa (CONDITIONAL_JUMP)  ; LAB_005411fa
    MOV dword ptr [ESP + 0x94],EAX      ; 00541000
    XOR EBP,EBP                         ; 00541007
    ADD EAX,0x100                       ; 00541009
    MOV dword ptr [ESP + 0xac],EBP      ; 0054100e
    MOV dword ptr [ESP + 0xa4],EAX      ; 00541015
    MOV EAX,dword ptr [ESP + 0x84]      ; 0054101c
    MOV EBP,0xff                        ; 00541023
    MOV dword ptr [ESP + 0x9c],EAX      ; 00541028
    MOV EBX,dword ptr [ESP + 0xac]      ; 0054102f
        ;   Label: LAB_0054102f
    MOV EAX,dword ptr [ESP + 0x94]      ; 00541036
    SHL EBX,0x8                         ; 0054103d
    MOV ESI,dword ptr [ESP + 0x98]      ; 00541040
    ADD EBX,EAX                         ; 00541047
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00541049
    MOV EDI,dword ptr [ESP + 0x9c]      ; 00541050
    MOV dword ptr [ESP + 0xb0],EAX      ; 00541057
    MOV EAX,0xffffff                    ; 0054105e
        ;   Label: LAB_0054105e
    MOV ECX,dword ptr [EBX + 0x241351c] ; 00541063
    XOR EDX,EDX                         ; 00541069
    INC ECX                             ; 0054106b
    DIV ECX                             ; 0054106c
    CMP EAX,0xff                        ; 0054106e
    JBE 0x00541077                      ; 00541073
        ;   XREF to: 00541077 (CONDITIONAL_JUMP)  ; LAB_00541077
    MOV EAX,EBP                         ; 00541075
    SHR EAX,0x3                         ; 00541077
        ;   Label: LAB_00541077
    MOV EDX,EAX                         ; 0054107a
    MOV ECX,EAX                         ; 0054107c
    SHL EDX,0xa                         ; 0054107e
    SHL ECX,0x5                         ; 00541081
    ADD ECX,EDX                         ; 00541084
    MOV AL,byte ptr [ECX + EAX*0x1 + 0x1c62070] ; 00541086 | DAT_01c6a06f
    PUSH EDI                            ; 0054108d
    AND EAX,0xff                        ; 0054108e
    PUSH ESI                            ; 00541093
    MOV [0x01c6b5c0],EAX                ; 00541094 | DAT_01c6b5c0
    CALL FUN_00401130                   ; 00541099
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; undefined FUN_00401130()
    ADD ESP,0x8                         ; 0054109e
    ADD EBX,0x4                         ; 005410a1
    MOV EDX,dword ptr [ESP + 0xb0]      ; 005410a4
    INC ESI                             ; 005410ab
    CMP EBX,EDX                         ; 005410ac
    JNZ 0x0054105e                      ; 005410ae
        ;   XREF to: 0054105e (CONDITIONAL_JUMP)  ; LAB_0054105e
    MOV EBX,dword ptr [ESP + 0x9c]      ; 005410b0
    MOV ESI,dword ptr [ESP + 0xac]      ; 005410b7
    MOV ECX,dword ptr [ESP + 0xa4]      ; 005410be
    INC EBX                             ; 005410c5
    INC ESI                             ; 005410c6
    ADD ECX,0x100                       ; 005410c7
    MOV dword ptr [ESP + 0x9c],EBX      ; 005410cd
    MOV dword ptr [ESP + 0xac],ESI      ; 005410d4
    MOV dword ptr [ESP + 0xa4],ECX      ; 005410db
    CMP ESI,0x30                        ; 005410e2
    JL 0x0054102f                       ; 005410e5
        ;   XREF to: 0054102f (CONDITIONAL_JUMP)  ; LAB_0054102f
    MOV EAX,dword ptr [ESP + 0x88]      ; 005410eb
        ;   Label: LAB_005410eb
    SUB ESP,0x8                         ; 005410f2
    FLD float ptr [EAX*0x4 + 0x2701528] ; 005410f5 | DAT_02701528
    FSTP double ptr [ESP]               ; 005410fc
    PUSH 0x5d0d15                       ; 005410ff | DAT_005d0d15
    LEA EAX,[ESP + 0xc]                 ; 00541104
    PUSH EAX                            ; 00541108
    CALL FUN_005a28c0                   ; 00541109
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0054110e
    MOV ECX,dword ptr [ESP + 0x80]      ; 00541111
    PUSH ECX                            ; 00541118
    MOV EBX,dword ptr [ESP + 0x9c]      ; 00541119
    PUSH EBX                            ; 00541120
    LEA EAX,[ESP + 0x8]                 ; 00541121
    PUSH EAX                            ; 00541125
    CALL FUN_00401fe0                   ; 00541126
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0054112b
    IMUL EAX,dword ptr [ESP + 0x88],0x1a4 ; 0054112e
    MOV ESI,dword ptr [ESP + 0x78]      ; 00541139
    PUSH ESI                            ; 0054113d
    MOV EDX,dword ptr [ESP + 0x68]      ; 0054113e
    PUSH EBX                            ; 00541142
    ADD EAX,EDX                         ; 00541143
    PUSH EAX                            ; 00541145
    CALL FUN_00401fe0                   ; 00541146
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    LEA EAX,[EBX + 0x81]                ; 0054114b
    LEA ECX,[EBX + 0x41]                ; 00541151
    ADD ESP,0xc                         ; 00541154
    MOV EBX,dword ptr [0x005fba18]      ; 00541157 | DAT_005fba18
    MOV dword ptr [ESP + 0x98],ECX      ; 0054115d
    CMP EAX,EBX                         ; 00541164
    JLE 0x005411d2                      ; 00541166
        ;   XREF to: 005411d2 (CONDITIONAL_JUMP)  ; LAB_005411d2
    MOV ESI,0x2                         ; 00541168
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054116d
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00541171
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00541175
    MOV EDX,dword ptr [ESP + 0x78]      ; 00541179
    MOV ECX,dword ptr [ESP + 0x80]      ; 0054117d
    MOV dword ptr [ESP + 0x98],ESI      ; 00541184
    ADD EDI,0xf0                        ; 0054118b
    ADD EBP,0xf0                        ; 00541191
    ADD EDX,0x3c                        ; 00541197
    ADD ECX,0x3c                        ; 0054119a
    LEA EBX,[EAX + 0x3c]                ; 0054119d
    MOV ESI,dword ptr [ESP + 0x84]      ; 005411a0
    MOV dword ptr [ESP + 0x6c],EDI      ; 005411a7
    MOV dword ptr [ESP + 0x7c],EBP      ; 005411ab
    MOV dword ptr [ESP + 0x78],EDX      ; 005411af
    MOV dword ptr [ESP + 0x80],ECX      ; 005411b3
    MOV dword ptr [ESP + 0x70],EBX      ; 005411ba
    ADD ESI,0x3c                        ; 005411be
    MOV EDI,dword ptr [0x005fba1c]      ; 005411c1 | DAT_005fba1c
    MOV dword ptr [ESP + 0x84],ESI      ; 005411c7
    CMP EAX,EDI                         ; 005411ce
    JG 0x005411ef                       ; 005411d0
        ;   XREF to: 005411ef (CONDITIONAL_JUMP)  ; LAB_005411ef
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005411d2
        ;   Label: LAB_005411d2
    ADD EDX,0x4                         ; 005411d9
    MOV ECX,dword ptr [ESP + 0x68]      ; 005411dc
    MOV dword ptr [ESP + 0x8c],EDX      ; 005411e0
    CMP EDX,ECX                         ; 005411e7
    JL 0x00540fd9                       ; 005411e9
        ;   XREF to: 00540fd9 (CONDITIONAL_JUMP)  ; LAB_00540fd9
    ADD ESP,0xb4                        ; 005411ef
        ;   Label: LAB_005411ef
    POP EBP                             ; 005411f5
    POP EDI                             ; 005411f6
    POP ESI                             ; 005411f7
    POP EBX                             ; 005411f8
    RET                                 ; 005411f9
    MOV dword ptr [ESP + 0xa0],EAX      ; 005411fa
        ;   Label: LAB_005411fa
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00541201
    MOV dword ptr [ESP + 0xa8],EAX      ; 00541205
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0054120c
    MOV dword ptr [ESP + 0x90],EAX      ; 00541210
    MOV EDI,dword ptr [ESP + 0x98]      ; 00541217
        ;   Label: LAB_00541217
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0054121e
    SHL EDI,0x2                         ; 00541225
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00541228
    MOV ECX,EDI                         ; 0054122f
    ADD EDI,0x100                       ; 00541231
    MOV EAX,0xffffff                    ; 00541237
        ;   Label: LAB_00541237
    MOV ESI,dword ptr [EBX + 0x241351c] ; 0054123c
    XOR EDX,EDX                         ; 00541242
    INC ESI                             ; 00541244
    DIV ESI                             ; 00541245
    CMP EAX,0xff                        ; 00541247
    JBE 0x00541253                      ; 0054124c
        ;   XREF to: 00541253 (CONDITIONAL_JUMP)  ; LAB_00541253
    MOV EAX,0xff                        ; 0054124e
    MOV EDX,EAX                         ; 00541253
        ;   Label: LAB_00541253
    SHL EDX,0x8                         ; 00541255
    ADD ECX,0x4                         ; 00541258
    ADD EDX,EAX                         ; 0054125b
    SHL EAX,0x10                        ; 0054125d
    MOV ESI,dword ptr [EBP + 0x1c5faec] ; 00541260 | DAT_01c5fc2c
    ADD EDX,EAX                         ; 00541266
    ADD EBX,0x4                         ; 00541268
    MOV dword ptr [ECX + ESI*0x1 + -0x4],EDX ; 0054126b
    CMP ECX,EDI                         ; 0054126f
    JNZ 0x00541237                      ; 00541271
        ;   XREF to: 00541237 (CONDITIONAL_JUMP)  ; LAB_00541237
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00541273
    MOV EBP,dword ptr [ESP + 0xa0]      ; 0054127a
    MOV EDX,dword ptr [ESP + 0x90]      ; 00541281
    ADD EAX,0x4                         ; 00541288
    ADD EBP,0x100                       ; 0054128b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00541291
    MOV dword ptr [ESP + 0xa0],EBP      ; 00541298
    CMP EAX,EDX                         ; 0054129f
    JZ 0x005410eb                       ; 005412a1
        ;   XREF to: 005410eb (CONDITIONAL_JUMP)  ; LAB_005410eb
    JMP 0x00541217                      ; 005412a7
        ;   XREF to: 00541217 (UNCONDITIONAL_JUMP)  ; LAB_00541217

