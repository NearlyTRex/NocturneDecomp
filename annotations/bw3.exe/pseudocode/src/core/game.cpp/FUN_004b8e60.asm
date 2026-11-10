; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b8e60(int param_1)
;
;
; XREF[3]:
;   core_game.cpp_CGame_ctor_FUN_004b4180 at 004b41fd
;   core_inivar.cpp_readIniData_FUN_004d8e70 at 004d90b9
;   core_menu.cpp_FUN_004eae80 at 004ebdfd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8e60
        ;   Label: core_game.cpp_FUN_004b8e60
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b8e61
    MOV dword ptr [EAX + 0x2c],0x150    ; 004b8e65
    MOV dword ptr [EAX + 0x30],0x2a     ; 004b8e6c
    MOV dword ptr [EAX + 0x34],0x38     ; 004b8e73
    MOV dword ptr [EAX + 0x38],0x2c     ; 004b8e7a
    MOV dword ptr [EAX + 0x3c],0x2d     ; 004b8e81
    MOV dword ptr [EAX + 0x40],0x14d    ; 004b8e88
    MOV dword ptr [EAX + 0x44],0x14b    ; 004b8e8f
    MOV dword ptr [EAX + 0x48],0x39     ; 004b8e96
    MOV dword ptr [EAX + 0x4c],0x138    ; 004b8e9d
    MOV dword ptr [EAX + 0x50],0x1c     ; 004b8ea4
    MOV dword ptr [EAX + 0x54],0x26     ; 004b8eab
    MOV dword ptr [EAX + 0x58],0x31     ; 004b8eb2
    MOV dword ptr [EAX + 0x5c],0x24     ; 004b8eb9
    MOV dword ptr [EAX + 0x60],0xf      ; 004b8ec0
    MOV dword ptr [EAX + 0x64],0x2e     ; 004b8ec7
    MOV dword ptr [EAX + 0x68],0x2f     ; 004b8ece
    MOV dword ptr [EAX + 0x6c],0x20     ; 004b8ed5
    MOV dword ptr [EAX + 0x70],0x39     ; 004b8edc
    MOV dword ptr [EAX + 0x74],0x14f    ; 004b8ee3
    MOV dword ptr [EAX + 0x78],0x10     ; 004b8eea
    MOV dword ptr [EAX + 0x7c],0x1e     ; 004b8ef1
    MOV dword ptr [EAX + 0x80],0x2      ; 004b8ef8
    MOV dword ptr [EAX + 0x84],0x3      ; 004b8f02
    MOV dword ptr [EAX + 0x88],0x4      ; 004b8f0c
    MOV dword ptr [EAX + 0x8c],0x5      ; 004b8f16
    MOV dword ptr [EAX + 0x90],0x6      ; 004b8f20
    MOV dword ptr [EAX + 0x98],0xc      ; 004b8f2a
    MOV dword ptr [EAX + 0x94],0xd      ; 004b8f34
    MOV dword ptr [EAX + 0x9c],0x1a     ; 004b8f3e
    MOV dword ptr [EAX + 0xa0],0x1b     ; 004b8f48
    MOV dword ptr [EAX + 0xa4],0x19     ; 004b8f52
    MOV dword ptr [EAX + 0xa8],0x29     ; 004b8f5c
    MOV dword ptr [EAX + 0xac],0x0      ; 004b8f66
    MOV dword ptr [EAX + 0xb0],0x0      ; 004b8f70
    MOV dword ptr [EAX + 0xb4],0x10000  ; 004b8f7a
    MOV dword ptr [EAX + 0xb8],0x10000  ; 004b8f84
    MOV dword ptr [EAX + 0xdc],0x0      ; 004b8f8e
    MOV EDX,dword ptr [EAX + 0xd4]      ; 004b8f98
    MOV dword ptr [EAX + 0x28],0x148    ; 004b8f9e
    CMP EDX,0x1                         ; 004b8fa5
    JZ 0x004b90cb                       ; 004b8fa8
        ;   XREF to: 004b90cb (CONDITIONAL_JUMP)  ; LAB_004b90cb
    MOV ECX,dword ptr [EAX + 0xd4]      ; 004b8fae
        ;   Label: LAB_004b8fae
    CMP ECX,0x2                         ; 004b8fb4
    JNZ 0x004b90ba                      ; 004b8fb7
        ;   XREF to: 004b90ba (CONDITIONAL_JUMP)  ; LAB_004b90ba
    MOV dword ptr [EAX + 0x2c],0x254    ; 004b8fbd
    MOV dword ptr [EAX + 0x30],0x2a     ; 004b8fc4
    MOV dword ptr [EAX + 0x34],0x205    ; 004b8fcb
    MOV dword ptr [EAX + 0x38],0x2c     ; 004b8fd2
    MOV dword ptr [EAX + 0x3c],0x2d     ; 004b8fd9
    MOV dword ptr [EAX + 0x44],0x251    ; 004b8fe0
    MOV dword ptr [EAX + 0x40],0x252    ; 004b8fe7
    MOV dword ptr [EAX + 0x48],0x202    ; 004b8fee
    MOV dword ptr [EAX + 0x4c],0x204    ; 004b8ff5
    MOV dword ptr [EAX + 0x50],0x203    ; 004b8ffc
    MOV dword ptr [EAX + 0x54],0x26     ; 004b9003
    MOV dword ptr [EAX + 0x58],0x31     ; 004b900a
    MOV dword ptr [EAX + 0x5c],0x24     ; 004b9011
    MOV dword ptr [EAX + 0x60],0xf      ; 004b9018
    MOV dword ptr [EAX + 0x64],0x2e     ; 004b901f
    MOV dword ptr [EAX + 0x68],0x2f     ; 004b9026
    MOV dword ptr [EAX + 0x6c],0x52     ; 004b902d
    MOV dword ptr [EAX + 0x74],0x14f    ; 004b9034
    MOV dword ptr [EAX + 0x78],0x10     ; 004b903b
    MOV dword ptr [EAX + 0x7c],0x1e     ; 004b9042
    MOV dword ptr [EAX + 0x84],0x3      ; 004b9049
    MOV dword ptr [EAX + 0x88],0x4      ; 004b9053
    MOV dword ptr [EAX + 0x8c],0x5      ; 004b905d
    MOV dword ptr [EAX + 0x90],0x6      ; 004b9067
    MOV dword ptr [EAX + 0x98],0xc      ; 004b9071
    MOV dword ptr [EAX + 0x94],0xd      ; 004b907b
    MOV dword ptr [EAX + 0x9c],0x1a     ; 004b9085
    MOV dword ptr [EAX + 0xa0],0x1b     ; 004b908f
    MOV dword ptr [EAX + 0xa4],0x19     ; 004b9099
    MOV dword ptr [EAX + 0xa8],0x29     ; 004b90a3
    MOV dword ptr [EAX + 0x28],0x253    ; 004b90ad
    MOV dword ptr [EAX + 0x80],ECX      ; 004b90b4
    MOV EBX,dword ptr [EAX + 0xd4]      ; 004b90ba
        ;   Label: LAB_004b90ba
    CMP EBX,0x3                         ; 004b90c0
    JZ 0x004b91d1                       ; 004b90c3
        ;   XREF to: 004b91d1 (CONDITIONAL_JUMP)  ; LAB_004b91d1
    POP EBX                             ; 004b90c9
    RET                                 ; 004b90ca
    MOV dword ptr [EAX + 0x2c],0x150    ; 004b90cb
        ;   Label: LAB_004b90cb
    MOV dword ptr [EAX + 0x30],0x36     ; 004b90d2
    MOV dword ptr [EAX + 0x34],0x11d    ; 004b90d9
    MOV dword ptr [EAX + 0x38],0x14b    ; 004b90e0
    MOV dword ptr [EAX + 0x3c],0x14d    ; 004b90e7
    MOV dword ptr [EAX + 0x44],0x255    ; 004b90ee
    MOV dword ptr [EAX + 0x40],0x255    ; 004b90f5
    MOV dword ptr [EAX + 0x48],0x200    ; 004b90fc
    MOV dword ptr [EAX + 0x4c],0x201    ; 004b9103
    MOV dword ptr [EAX + 0x50],0x1c     ; 004b910a
    MOV dword ptr [EAX + 0x54],0x26     ; 004b9111
    MOV dword ptr [EAX + 0x58],0x31     ; 004b9118
    MOV dword ptr [EAX + 0x5c],0x24     ; 004b911f
    MOV dword ptr [EAX + 0x60],0xf      ; 004b9126
    MOV dword ptr [EAX + 0x64],0x2e     ; 004b912d
    MOV dword ptr [EAX + 0x68],0x2f     ; 004b9134
    MOV dword ptr [EAX + 0x6c],0x52     ; 004b913b
    MOV dword ptr [EAX + 0x74],0x14f    ; 004b9142
    MOV dword ptr [EAX + 0x78],0x256    ; 004b9149
    MOV dword ptr [EAX + 0x7c],0x256    ; 004b9150
    MOV dword ptr [EAX + 0x80],0x2      ; 004b9157
    MOV dword ptr [EAX + 0x84],0x3      ; 004b9161
    MOV dword ptr [EAX + 0x88],0x4      ; 004b916b
    MOV dword ptr [EAX + 0x8c],0x5      ; 004b9175
    MOV dword ptr [EAX + 0x90],0x6      ; 004b917f
    MOV dword ptr [EAX + 0x98],0xc      ; 004b9189
    MOV dword ptr [EAX + 0x94],0xd      ; 004b9193
    MOV dword ptr [EAX + 0x9c],0x1a     ; 004b919d
    MOV dword ptr [EAX + 0xa0],0x1b     ; 004b91a7
    MOV dword ptr [EAX + 0xa4],0x19     ; 004b91b1
    MOV dword ptr [EAX + 0xa8],0x29     ; 004b91bb
    MOV dword ptr [EAX + 0x28],0x148    ; 004b91c5
    JMP 0x004b8fae                      ; 004b91cc
        ;   XREF to: 004b8fae (UNCONDITIONAL_JUMP)  ; LAB_004b8fae
    MOV dword ptr [EAX + 0x2c],0x150    ; 004b91d1
        ;   Label: LAB_004b91d1
    MOV dword ptr [EAX + 0x30],0x36     ; 004b91d8
    MOV dword ptr [EAX + 0x34],0x11d    ; 004b91df
    MOV dword ptr [EAX + 0x38],0x2c     ; 004b91e6
    MOV dword ptr [EAX + 0x3c],0x2d     ; 004b91ed
    MOV dword ptr [EAX + 0x44],0x255    ; 004b91f4
    MOV dword ptr [EAX + 0x40],0x255    ; 004b91fb
    MOV dword ptr [EAX + 0x48],0x201    ; 004b9202
    MOV dword ptr [EAX + 0x4c],0x39     ; 004b9209
    MOV dword ptr [EAX + 0x50],0x1c     ; 004b9210
    MOV dword ptr [EAX + 0x54],0x26     ; 004b9217
    MOV dword ptr [EAX + 0x58],0x31     ; 004b921e
    MOV dword ptr [EAX + 0x5c],0x24     ; 004b9225
    MOV dword ptr [EAX + 0x60],0xf      ; 004b922c
    MOV dword ptr [EAX + 0x64],0x2e     ; 004b9233
    MOV dword ptr [EAX + 0x68],0x2f     ; 004b923a
    MOV dword ptr [EAX + 0x6c],0x52     ; 004b9241
    MOV dword ptr [EAX + 0x74],0x14f    ; 004b9248
    MOV dword ptr [EAX + 0x78],0x256    ; 004b924f
    MOV dword ptr [EAX + 0x7c],0x256    ; 004b9256
    MOV dword ptr [EAX + 0x80],0x2      ; 004b925d
    MOV dword ptr [EAX + 0x88],0x4      ; 004b9267
    MOV dword ptr [EAX + 0x8c],0x5      ; 004b9271
    MOV dword ptr [EAX + 0x90],0x6      ; 004b927b
    MOV dword ptr [EAX + 0x98],0xc      ; 004b9285
    MOV dword ptr [EAX + 0x94],0xd      ; 004b928f
    MOV dword ptr [EAX + 0x9c],0x1a     ; 004b9299
    MOV dword ptr [EAX + 0xa0],0x1b     ; 004b92a3
    MOV dword ptr [EAX + 0xa4],0x19     ; 004b92ad
    MOV dword ptr [EAX + 0xa8],0x29     ; 004b92b7
    MOV dword ptr [EAX + 0x28],0x200    ; 004b92c1
    MOV dword ptr [EAX + 0x84],EBX      ; 004b92c8
    POP EBX                             ; 004b92ce
    RET                                 ; 004b92cf

