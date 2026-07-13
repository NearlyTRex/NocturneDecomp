; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_0057301c(uint param_1,LPCVOID param_2,DWORD param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00571fd1 at 0057205b
;   FUN_00572f40 at 00572fce
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005755a0 = 00175ff4
;   void* PTR_WriteFile_005755ec = 0017613e
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;   undefined4 DAT_005c1d54
;   undefined4 DAT_005c1d80
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   FUN_005670e0
;   FUN_005671e4
;   FUN_00568e80
;   FUN_0056c73c
;   FUN_0056f220
;   FUN_00571150
;   FUN_00572f40
;   SetFilePointer
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057301c
        ;   Label: FUN_0057301c
    PUSH ESI                            ; 0057301d
    PUSH EDI                            ; 0057301e
    PUSH EBP                            ; 0057301f
    MOV EBP,ESP                         ; 00573020
    SUB ESP,0x14                        ; 00573022
    MOV EDI,dword ptr [EBP + 0x14]      ; 00573025
    TEST EDI,EDI                        ; 00573028
    JL 0x00573034                       ; 0057302a
        ;   XREF to: 00573034 (CONDITIONAL_JUMP)  ; LAB_00573034
    CMP EDI,dword ptr [0x005c1f90]      ; 0057302c | DAT_005c1f90
    JBE 0x00573045                      ; 00573032
        ;   XREF to: 00573045 (CONDITIONAL_JUMP)  ; LAB_00573045
    PUSH 0x4                            ; 00573034
        ;   Label: LAB_00573034
    CALL FUN_00568e80                   ; 00573036
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 0057303b
    JMP 0x00573186                      ; 00573040
        ;   XREF to: 00573186 (UNCONDITIONAL_JUMP)  ; LAB_00573186
    MOV EDX,dword ptr [0x005c1f54]      ; 00573045 | DAT_005c1f54
        ;   Label: LAB_00573045
    MOV EAX,dword ptr [EDX + EDI*0x4]   ; 0057304b
    PUSH EDI                            ; 0057304e
    MOV dword ptr [EBP + -0x8],EAX      ; 0057304f
    CALL FUN_0056f220                   ; 00573052
        ;   XREF to: 0056f220 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f220()
    MOV EBX,EAX                         ; 00573057
    ADD ESP,0x4                         ; 00573059
    MOV dword ptr [EBP + -0x4],EAX      ; 0057305c
    TEST EAX,EAX                        ; 0057305f
    JNZ 0x00573079                      ; 00573061
        ;   XREF to: 00573079 (CONDITIONAL_JUMP)  ; LAB_00573079
    PUSH 0x4                            ; 00573063
    CALL FUN_00568e80                   ; 00573065
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 0057306a
    ADD ESP,0x4                         ; 0057306f
    MOV ESP,EBP                         ; 00573072
    POP EBP                             ; 00573074
    POP EDI                             ; 00573075
    POP ESI                             ; 00573076
    POP EBX                             ; 00573077
    RET                                 ; 00573078
    TEST AL,0x2                         ; 00573079
        ;   Label: LAB_00573079
    JNZ 0x00573093                      ; 0057307b
        ;   XREF to: 00573093 (CONDITIONAL_JUMP)  ; LAB_00573093
    PUSH 0x6                            ; 0057307d
    CALL FUN_00568e80                   ; 0057307f
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 00573084
    ADD ESP,0x4                         ; 00573089
    MOV ESP,EBP                         ; 0057308c
    POP EBP                             ; 0057308e
    POP EDI                             ; 0057308f
    POP ESI                             ; 00573090
    POP EBX                             ; 00573091
    RET                                 ; 00573092
    PUSH EDI                            ; 00573093
        ;   Label: LAB_00573093
    CALL dword ptr [0x005c1ac0]         ; 00573094 | PTR_FUN_005c1ac0
    ADD ESP,0x4                         ; 0057309a
    TEST BL,0x80                        ; 0057309d
    JZ 0x005730cc                       ; 005730a0
        ;   XREF to: 005730cc (CONDITIONAL_JUMP)  ; LAB_005730cc
    PUSH 0x2                            ; 005730a2
    PUSH 0x0                            ; 005730a4
    PUSH 0x0                            ; 005730a6
    MOV EBX,dword ptr [EBP + -0x8]      ; 005730a8
    PUSH EBX                            ; 005730ab
    CALL dword ptr CS:[0x5755a0]        ; 005730ac | PTR_SetFilePointer_005755a0
    CMP EAX,-0x1                        ; 005730b3
    JNZ 0x005730cc                      ; 005730b6
        ;   XREF to: 005730cc (CONDITIONAL_JUMP)  ; LAB_005730cc
    PUSH EDI                            ; 005730b8
    CALL dword ptr [0x005c1ac4]         ; 005730b9 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 005730bf
    CALL FUN_0056c73c                   ; 005730c2
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined FUN_0056c73c()
    JMP 0x00573189                      ; 005730c7
        ;   XREF to: 00573189 (UNCONDITIONAL_JUMP)  ; LAB_00573189
    TEST byte ptr [EBP + -0x3],0x80     ; 005730cc
        ;   Label: LAB_005730cc
    JZ 0x005730f5                       ; 005730d0
        ;   XREF to: 005730f5 (CONDITIONAL_JUMP)  ; LAB_005730f5
    PUSH EDI                            ; 005730d2
    CALL FUN_00572f40                   ; 005730d3
        ;   XREF to: 00572f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572f40()
    ADD ESP,0x4                         ; 005730d8
    TEST EAX,EAX                        ; 005730db
    JZ 0x005730f5                       ; 005730dd
        ;   XREF to: 005730f5 (CONDITIONAL_JUMP)  ; LAB_005730f5
    PUSH EDI                            ; 005730df
    CALL dword ptr [0x005c1ac4]         ; 005730e0 | PTR_FUN_005c1ac4
    MOV EAX,0xffffffff                  ; 005730e6
    ADD ESP,0x4                         ; 005730eb
    MOV ESP,EBP                         ; 005730ee
    POP EBP                             ; 005730f0
    POP EDI                             ; 005730f1
    POP ESI                             ; 005730f2
    POP EBX                             ; 005730f3
    RET                                 ; 005730f4
    TEST byte ptr [EBP + -0x4],0x40     ; 005730f5
        ;   Label: LAB_005730f5
    JZ 0x00573190                       ; 005730f9
        ;   XREF to: 00573190 (CONDITIONAL_JUMP)  ; LAB_00573190
    CMP dword ptr [0x005c1d80],0x0      ; 005730ff | DAT_005c1d80
    JZ 0x0057312d                       ; 00573106
        ;   XREF to: 0057312d (CONDITIONAL_JUMP)  ; LAB_0057312d
    PUSH EDI                            ; 00573108
    CALL dword ptr [0x005c1d54]         ; 00573109 | DAT_005c1d54
    ADD ESP,0x4                         ; 0057310f
    TEST EAX,EAX                        ; 00573112
    JZ 0x0057312d                       ; 00573114
        ;   XREF to: 0057312d (CONDITIONAL_JUMP)  ; LAB_0057312d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00573116
    PUSH EDX                            ; 00573119
    MOV EBX,dword ptr [EBP + 0x18]      ; 0057311a
    PUSH EBX                            ; 0057311d
    PUSH EAX                            ; 0057311e
    CALL dword ptr [0x005c1d80]         ; 0057311f | DAT_005c1d80
    ADD ESP,0xc                         ; 00573125
    MOV dword ptr [EBP + -0xc],EAX      ; 00573128
    JMP 0x00573160                      ; 0057312b
        ;   XREF to: 00573160 (UNCONDITIONAL_JUMP)  ; LAB_00573160
    PUSH 0x0                            ; 0057312d
        ;   Label: LAB_0057312d
    LEA EAX,[EBP + -0xc]                ; 0057312f
    PUSH EAX                            ; 00573132
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00573133
    PUSH EBX                            ; 00573136
    MOV ECX,dword ptr [EBP + 0x18]      ; 00573137
    PUSH ECX                            ; 0057313a
    MOV ESI,dword ptr [EBP + -0x8]      ; 0057313b
    PUSH ESI                            ; 0057313e
    CALL dword ptr CS:[0x5755ec]        ; 0057313f | PTR_WriteFile_005755ec
    TEST EAX,EAX                        ; 00573146
    JNZ 0x00573160                      ; 00573148
        ;   XREF to: 00573160 (CONDITIONAL_JUMP)  ; LAB_00573160
    PUSH EDI                            ; 0057314a
    CALL dword ptr [0x005c1ac4]         ; 0057314b | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00573151
    CALL FUN_0056c73c                   ; 00573154
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined FUN_0056c73c()
    MOV ESP,EBP                         ; 00573159
    POP EBP                             ; 0057315b
    POP EDI                             ; 0057315c
    POP ESI                             ; 0057315d
    POP EBX                             ; 0057315e
    RET                                 ; 0057315f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00573160
        ;   Label: LAB_00573160
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00573163
    JZ 0x0057317c                       ; 00573166
        ;   XREF to: 0057317c (CONDITIONAL_JUMP)  ; LAB_0057317c
    PUSH 0xc                            ; 0057316c
    CALL FUN_00568e80                   ; 0057316e
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,dword ptr [EBP + -0xc]      ; 00573173
    ADD ESP,0x4                         ; 00573176
    MOV dword ptr [EBP + 0x1c],EAX      ; 00573179
    PUSH EDI                            ; 0057317c
        ;   Label: LAB_0057317c
    CALL dword ptr [0x005c1ac4]         ; 0057317d | PTR_FUN_005c1ac4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00573183
    ADD ESP,0x4                         ; 00573186
        ;   Label: LAB_00573186
    MOV ESP,EBP                         ; 00573189
        ;   Label: LAB_00573189
    POP EBP                             ; 0057318b
    POP EDI                             ; 0057318c
    POP ESI                             ; 0057318d
    POP EBX                             ; 0057318e
    RET                                 ; 0057318f
    CALL FUN_00571150                   ; 00573190
        ;   XREF to: 00571150 (UNCONDITIONAL_CALL)  ; undefined FUN_00571150()
        ;   Label: LAB_00573190
    MOV dword ptr [EBP + -0x10],EAX     ; 00573195
    CMP EAX,0xb0                        ; 00573198
    JNC 0x005731a4                      ; 0057319d
        ;   XREF to: 005731a4 (CONDITIONAL_JUMP)  ; LAB_005731a4
    CALL FUN_005670e0                   ; 0057319f
        ;   XREF to: 005670e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005670e0()
    MOV ECX,dword ptr [EBP + -0x10]     ; 005731a4
        ;   Label: LAB_005731a4
    MOV EBX,0x200                       ; 005731a7
    CMP ECX,0x230                       ; 005731ac
    JNC 0x005731b9                      ; 005731b2
        ;   XREF to: 005731b9 (CONDITIONAL_JUMP)  ; LAB_005731b9
    MOV EBX,0x80                        ; 005731b4
    LEA EAX,[EBX + 0x3]                 ; 005731b9
        ;   Label: LAB_005731b9
    AND AL,0xfc                         ; 005731bc
    SUB ESP,EAX                         ; 005731be
    XOR EAX,EAX                         ; 005731c0
    MOV dword ptr [EBP + -0x10],EAX     ; 005731c2
    MOV dword ptr [EBP + -0x14],EAX     ; 005731c5
    MOV dword ptr [EBP + -0xc],EAX      ; 005731c8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005731cb
    MOV ESI,ESP                         ; 005731ce
    TEST EAX,EAX                        ; 005731d0
    JBE 0x0057333d                      ; 005731d2
        ;   XREF to: 0057333d (CONDITIONAL_JUMP)  ; LAB_0057333d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005731d8
        ;   Label: LAB_005731d8
    ADD EAX,dword ptr [EBP + -0x10]     ; 005731db
    CMP byte ptr [EAX],0xa              ; 005731de
    JNZ 0x00573285                      ; 005731e1
        ;   XREF to: 00573285 (CONDITIONAL_JUMP)  ; LAB_00573285
    MOV EAX,dword ptr [EBP + -0x14]     ; 005731e7
    MOV byte ptr [ESI + EAX*0x1],0xd    ; 005731ea
    MOV ECX,dword ptr [EBP + -0x14]     ; 005731ee
    INC ECX                             ; 005731f1
    MOV dword ptr [EBP + -0x14],ECX     ; 005731f2
    CMP EBX,ECX                         ; 005731f5
    JNZ 0x00573285                      ; 005731f7
        ;   XREF to: 00573285 (CONDITIONAL_JUMP)  ; LAB_00573285
    CMP dword ptr [0x005c1d80],0x0      ; 005731fd | DAT_005c1d80
    JZ 0x00573225                       ; 00573204
        ;   XREF to: 00573225 (CONDITIONAL_JUMP)  ; LAB_00573225
    PUSH EDI                            ; 00573206
    CALL dword ptr [0x005c1d54]         ; 00573207 | DAT_005c1d54
    ADD ESP,0x4                         ; 0057320d
    TEST EAX,EAX                        ; 00573210
    JZ 0x00573225                       ; 00573212
        ;   XREF to: 00573225 (CONDITIONAL_JUMP)  ; LAB_00573225
    PUSH EBX                            ; 00573214
    PUSH ESI                            ; 00573215
    PUSH EAX                            ; 00573216
    CALL dword ptr [0x005c1d80]         ; 00573217 | DAT_005c1d80
    ADD ESP,0xc                         ; 0057321d
    MOV dword ptr [EBP + -0x14],EAX     ; 00573220
    JMP 0x00573252                      ; 00573223
        ;   XREF to: 00573252 (UNCONDITIONAL_JUMP)  ; LAB_00573252
    PUSH 0x0                            ; 00573225
        ;   Label: LAB_00573225
    LEA EAX,[EBP + -0x14]               ; 00573227
    PUSH EAX                            ; 0057322a
    PUSH EBX                            ; 0057322b
    PUSH ESI                            ; 0057322c
    MOV ECX,dword ptr [EBP + -0x8]      ; 0057322d
    PUSH ECX                            ; 00573230
    CALL dword ptr CS:[0x5755ec]        ; 00573231 | PTR_WriteFile_005755ec
    TEST EAX,EAX                        ; 00573238
    JNZ 0x00573252                      ; 0057323a
        ;   XREF to: 00573252 (CONDITIONAL_JUMP)  ; LAB_00573252
    PUSH EDI                            ; 0057323c
    CALL dword ptr [0x005c1ac4]         ; 0057323d | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00573243
    CALL FUN_0056c73c                   ; 00573246
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined FUN_0056c73c()
    MOV ESP,EBP                         ; 0057324b
    POP EBP                             ; 0057324d
    POP EDI                             ; 0057324e
    POP ESI                             ; 0057324f
    POP EBX                             ; 00573250
    RET                                 ; 00573251
    CMP EBX,dword ptr [EBP + -0x14]     ; 00573252
        ;   Label: LAB_00573252
    JZ 0x0057327a                       ; 00573255
        ;   XREF to: 0057327a (CONDITIONAL_JUMP)  ; LAB_0057327a
    PUSH 0xc                            ; 00573257
    CALL FUN_00568e80                   ; 00573259
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 0057325e
    PUSH EDI                            ; 00573261
    CALL dword ptr [0x005c1ac4]         ; 00573262 | PTR_FUN_005c1ac4
    MOV EAX,dword ptr [EBP + -0xc]      ; 00573268
    MOV EBX,dword ptr [EBP + -0x14]     ; 0057326b
    ADD ESP,0x4                         ; 0057326e
    ADD EAX,EBX                         ; 00573271
    MOV ESP,EBP                         ; 00573273
    POP EBP                             ; 00573275
    POP EDI                             ; 00573276
    POP ESI                             ; 00573277
    POP EBX                             ; 00573278
    RET                                 ; 00573279
    MOV EAX,dword ptr [EBP + -0x10]     ; 0057327a
        ;   Label: LAB_0057327a
    XOR EDX,EDX                         ; 0057327d
    MOV dword ptr [EBP + -0xc],EAX      ; 0057327f
    MOV dword ptr [EBP + -0x14],EDX     ; 00573282
    MOV EAX,dword ptr [EBP + 0x18]      ; 00573285
        ;   Label: LAB_00573285
    ADD EAX,dword ptr [EBP + -0x10]     ; 00573288
    MOV EDX,dword ptr [EBP + -0x14]     ; 0057328b
    MOV AL,byte ptr [EAX]               ; 0057328e
    MOV byte ptr [EDX + ESI*0x1],AL     ; 00573290
    MOV EAX,dword ptr [EBP + -0x10]     ; 00573293
    MOV EDX,dword ptr [EBP + -0x14]     ; 00573296
    INC EAX                             ; 00573299
    INC EDX                             ; 0057329a
    MOV dword ptr [EBP + -0x10],EAX     ; 0057329b
    MOV dword ptr [EBP + -0x14],EDX     ; 0057329e
    CMP EBX,EDX                         ; 005732a1
    JNZ 0x00573331                      ; 005732a3
        ;   XREF to: 00573331 (CONDITIONAL_JUMP)  ; LAB_00573331
    CMP dword ptr [0x005c1d80],0x0      ; 005732a9 | DAT_005c1d80
    JZ 0x005732d1                       ; 005732b0
        ;   XREF to: 005732d1 (CONDITIONAL_JUMP)  ; LAB_005732d1
    PUSH EDI                            ; 005732b2
    CALL dword ptr [0x005c1d54]         ; 005732b3 | DAT_005c1d54
    ADD ESP,0x4                         ; 005732b9
    TEST EAX,EAX                        ; 005732bc
    JZ 0x005732d1                       ; 005732be
        ;   XREF to: 005732d1 (CONDITIONAL_JUMP)  ; LAB_005732d1
    PUSH EBX                            ; 005732c0
    PUSH ESI                            ; 005732c1
    PUSH EAX                            ; 005732c2
    CALL dword ptr [0x005c1d80]         ; 005732c3 | DAT_005c1d80
    ADD ESP,0xc                         ; 005732c9
    MOV dword ptr [EBP + -0x14],EAX     ; 005732cc
    JMP 0x005732fe                      ; 005732cf
        ;   XREF to: 005732fe (UNCONDITIONAL_JUMP)  ; LAB_005732fe
    PUSH 0x0                            ; 005732d1
        ;   Label: LAB_005732d1
    LEA EAX,[EBP + -0x14]               ; 005732d3
    PUSH EAX                            ; 005732d6
    PUSH EBX                            ; 005732d7
    PUSH ESI                            ; 005732d8
    MOV EDX,dword ptr [EBP + -0x8]      ; 005732d9
    PUSH EDX                            ; 005732dc
    CALL dword ptr CS:[0x5755ec]        ; 005732dd | PTR_WriteFile_005755ec
    TEST EAX,EAX                        ; 005732e4
    JNZ 0x005732fe                      ; 005732e6
        ;   XREF to: 005732fe (CONDITIONAL_JUMP)  ; LAB_005732fe
    PUSH EDI                            ; 005732e8
    CALL dword ptr [0x005c1ac4]         ; 005732e9 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 005732ef
    CALL FUN_0056c73c                   ; 005732f2
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined FUN_0056c73c()
    MOV ESP,EBP                         ; 005732f7
    POP EBP                             ; 005732f9
    POP EDI                             ; 005732fa
    POP ESI                             ; 005732fb
    POP EBX                             ; 005732fc
    RET                                 ; 005732fd
    CMP EBX,dword ptr [EBP + -0x14]     ; 005732fe
        ;   Label: LAB_005732fe
    JZ 0x00573326                       ; 00573301
        ;   XREF to: 00573326 (CONDITIONAL_JUMP)  ; LAB_00573326
    PUSH 0xc                            ; 00573303
    CALL FUN_00568e80                   ; 00573305
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 0057330a
    PUSH EDI                            ; 0057330d
    CALL dword ptr [0x005c1ac4]         ; 0057330e | PTR_FUN_005c1ac4
    MOV EAX,dword ptr [EBP + -0xc]      ; 00573314
    MOV EDX,dword ptr [EBP + -0x14]     ; 00573317
    ADD ESP,0x4                         ; 0057331a
    ADD EAX,EDX                         ; 0057331d
    MOV ESP,EBP                         ; 0057331f
    POP EBP                             ; 00573321
    POP EDI                             ; 00573322
    POP ESI                             ; 00573323
    POP EBX                             ; 00573324
    RET                                 ; 00573325
    MOV EAX,dword ptr [EBP + -0x10]     ; 00573326
        ;   Label: LAB_00573326
    MOV dword ptr [EBP + -0xc],EAX      ; 00573329
    XOR EAX,EAX                         ; 0057332c
    MOV dword ptr [EBP + -0x14],EAX     ; 0057332e
    MOV EAX,dword ptr [EBP + -0x10]     ; 00573331
        ;   Label: LAB_00573331
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00573334
    JC 0x005731d8                       ; 00573337
        ;   XREF to: 005731d8 (CONDITIONAL_JUMP)  ; LAB_005731d8
    CMP dword ptr [EBP + -0x14],0x0     ; 0057333d
        ;   Label: LAB_0057333d
    JZ 0x0057317c                       ; 00573341
        ;   XREF to: 0057317c (CONDITIONAL_JUMP)  ; LAB_0057317c
    CMP dword ptr [0x005c1d80],0x0      ; 00573347 | DAT_005c1d80
    JZ 0x00573372                       ; 0057334e
        ;   XREF to: 00573372 (CONDITIONAL_JUMP)  ; LAB_00573372
    PUSH EDI                            ; 00573350
    CALL dword ptr [0x005c1d54]         ; 00573351 | DAT_005c1d54
    ADD ESP,0x4                         ; 00573357
    TEST EAX,EAX                        ; 0057335a
    JZ 0x00573372                       ; 0057335c
        ;   XREF to: 00573372 (CONDITIONAL_JUMP)  ; LAB_00573372
    MOV EBX,dword ptr [EBP + -0x14]     ; 0057335e
    PUSH EBX                            ; 00573361
    PUSH ESI                            ; 00573362
    PUSH EAX                            ; 00573363
    CALL dword ptr [0x005c1d80]         ; 00573364 | DAT_005c1d80
    ADD ESP,0xc                         ; 0057336a
    MOV dword ptr [EBP + -0x10],EAX     ; 0057336d
    JMP 0x005733a2                      ; 00573370
        ;   XREF to: 005733a2 (UNCONDITIONAL_JUMP)  ; LAB_005733a2
    PUSH 0x0                            ; 00573372
        ;   Label: LAB_00573372
    LEA EAX,[EBP + -0x10]               ; 00573374
    PUSH EAX                            ; 00573377
    MOV EAX,dword ptr [EBP + -0x14]     ; 00573378
    PUSH EAX                            ; 0057337b
    PUSH ESI                            ; 0057337c
    MOV EDX,dword ptr [EBP + -0x8]      ; 0057337d
    PUSH EDX                            ; 00573380
    CALL dword ptr CS:[0x5755ec]        ; 00573381 | PTR_WriteFile_005755ec
    TEST EAX,EAX                        ; 00573388
    JNZ 0x005733a2                      ; 0057338a
        ;   XREF to: 005733a2 (CONDITIONAL_JUMP)  ; LAB_005733a2
    PUSH EDI                            ; 0057338c
    CALL dword ptr [0x005c1ac4]         ; 0057338d | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00573393
    CALL FUN_0056c73c                   ; 00573396
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined FUN_0056c73c()
    MOV ESP,EBP                         ; 0057339b
    POP EBP                             ; 0057339d
    POP EDI                             ; 0057339e
    POP ESI                             ; 0057339f
    POP EBX                             ; 005733a0
    RET                                 ; 005733a1
    MOV EAX,dword ptr [EBP + -0x10]     ; 005733a2
        ;   Label: LAB_005733a2
    CMP EAX,dword ptr [EBP + -0x14]     ; 005733a5
    JZ 0x0057317c                       ; 005733a8
        ;   XREF to: 0057317c (CONDITIONAL_JUMP)  ; LAB_0057317c
    PUSH 0xc                            ; 005733ae
    CALL FUN_00568e80                   ; 005733b0
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 005733b5
    PUSH EDI                            ; 005733b8
    CALL dword ptr [0x005c1ac4]         ; 005733b9 | PTR_FUN_005c1ac4
    MOV EAX,dword ptr [EBP + -0xc]      ; 005733bf
    MOV ESI,dword ptr [EBP + -0x10]     ; 005733c2
    ADD ESP,0x4                         ; 005733c5
    ADD EAX,ESI                         ; 005733c8
    MOV ESP,EBP                         ; 005733ca
    POP EBP                             ; 005733cc
    POP EDI                             ; 005733cd
    POP ESI                             ; 005733ce
    POP EBX                             ; 005733cf
    RET                                 ; 005733d0

