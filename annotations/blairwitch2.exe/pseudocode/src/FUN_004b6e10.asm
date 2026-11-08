; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b6e10(int param_1)
;
;
; XREF[3]:
;   FUN_004b2d80 at 004b2de9
;   FUN_004d8d60 at 004d9038
;   FUN_004eed60 at 004efacd
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b6e10
        ;   Label: FUN_004b6e10
    MOV dword ptr [EAX + 0x2c],0x1f     ; 004b6e14
    MOV dword ptr [EAX + 0x30],0x2a     ; 004b6e1b
    MOV dword ptr [EAX + 0x34],0x38     ; 004b6e22
    MOV dword ptr [EAX + 0x38],0x1e     ; 004b6e29
    MOV dword ptr [EAX + 0x3c],0x20     ; 004b6e30
    MOV dword ptr [EAX + 0x40],0x14d    ; 004b6e37
    MOV dword ptr [EAX + 0x44],0x14b    ; 004b6e3e
    MOV dword ptr [EAX + 0x48],0x1d     ; 004b6e45
    MOV dword ptr [EAX + 0x4c],0x1c     ; 004b6e4c
    MOV dword ptr [EAX + 0x50],0x10     ; 004b6e53
    MOV dword ptr [EAX + 0x54],0xffffffff ; 004b6e5a
    MOV dword ptr [EAX + 0x58],0xffffffff ; 004b6e61
    MOV dword ptr [EAX + 0x5c],0xffffffff ; 004b6e68
    MOV dword ptr [EAX + 0x60],0xffffffff ; 004b6e6f
    MOV dword ptr [EAX + 0x64],0xffffffff ; 004b6e76
    MOV dword ptr [EAX + 0x68],0x21     ; 004b6e7d
    MOV dword ptr [EAX + 0x6c],0xffffffff ; 004b6e84
    MOV dword ptr [EAX + 0x70],0xffffffff ; 004b6e8b
    MOV dword ptr [EAX + 0x74],0x148    ; 004b6e92
    MOV dword ptr [EAX + 0x78],0x150    ; 004b6e99
    MOV dword ptr [EAX + 0x7c],0x2      ; 004b6ea0
    MOV dword ptr [EAX + 0x80],0x3      ; 004b6ea7
    MOV dword ptr [EAX + 0x84],0x4      ; 004b6eb1
    MOV dword ptr [EAX + 0x88],0xffffffff ; 004b6ebb
    MOV dword ptr [EAX + 0x8c],0xffffffff ; 004b6ec5
    MOV dword ptr [EAX + 0x94],0xc      ; 004b6ecf
    MOV dword ptr [EAX + 0x90],0xd      ; 004b6ed9
    MOV dword ptr [EAX + 0x98],0x1a     ; 004b6ee3
    MOV dword ptr [EAX + 0x9c],0x1b     ; 004b6eed
    MOV dword ptr [EAX + 0xa0],0x19     ; 004b6ef7
    MOV dword ptr [EAX + 0xa4],0x29     ; 004b6f01
    MOV dword ptr [EAX + 0xaf0],0x12    ; 004b6f0b
    MOV dword ptr [EAX + 0xa8],0x0      ; 004b6f15
    MOV dword ptr [EAX + 0xac],0x0      ; 004b6f1f
    MOV dword ptr [EAX + 0xb0],0x10000  ; 004b6f29
    MOV dword ptr [EAX + 0xb4],0x10000  ; 004b6f33
    MOV dword ptr [EAX + 0xd8],0x0      ; 004b6f3d
    MOV EDX,dword ptr [EAX + 0xd0]      ; 004b6f47
    MOV dword ptr [EAX + 0x28],0x11     ; 004b6f4d
    CMP EDX,0x1                         ; 004b6f54
    JZ 0x004b6f67                       ; 004b6f57
        ;   XREF to: 004b6f67 (CONDITIONAL_JUMP)  ; LAB_004b6f67
    CMP dword ptr [EAX + 0xd0],0x2      ; 004b6f59
    JZ 0x004b7005                       ; 004b6f60
        ;   XREF to: 004b7005 (CONDITIONAL_JUMP)  ; LAB_004b7005
    RET                                 ; 004b6f66
    MOV dword ptr [EAX + 0x34],0x38     ; 004b6f67
        ;   Label: LAB_004b6f67
    MOV dword ptr [EAX + 0x38],0x1e     ; 004b6f6e
    MOV dword ptr [EAX + 0x3c],0x20     ; 004b6f75
    MOV dword ptr [EAX + 0x44],0x255    ; 004b6f7c
    MOV dword ptr [EAX + 0x40],0x255    ; 004b6f83
    MOV dword ptr [EAX + 0x48],0x200    ; 004b6f8a
    MOV dword ptr [EAX + 0x4c],0x1c     ; 004b6f91
    MOV dword ptr [EAX + 0x50],0x138    ; 004b6f98
    MOV dword ptr [EAX + 0x68],0x201    ; 004b6f9f
    MOV dword ptr [EAX + 0x74],0x256    ; 004b6fa6
    MOV dword ptr [EAX + 0x78],0x256    ; 004b6fad
    MOV dword ptr [EAX + 0x7c],0x2      ; 004b6fb4
    MOV dword ptr [EAX + 0x80],0x3      ; 004b6fbb
    MOV dword ptr [EAX + 0x84],0x4      ; 004b6fc5
    MOV dword ptr [EAX + 0x88],0xffffffff ; 004b6fcf
    MOV dword ptr [EAX + 0x8c],0xffffffff ; 004b6fd9
    MOV dword ptr [EAX + 0xaf0],0x12    ; 004b6fe3
    MOV dword ptr [EAX + 0x30],0x2a     ; 004b6fed
    MOV dword ptr [EAX + 0x50],0x10     ; 004b6ff4
    CMP dword ptr [EAX + 0xd0],0x2      ; 004b6ffb
    JZ 0x004b7005                       ; 004b7002
        ;   XREF to: 004b7005 (CONDITIONAL_JUMP)  ; LAB_004b7005
    RET                                 ; 004b7004
    MOV dword ptr [EAX + 0x68],0x203    ; 004b7005
        ;   Label: LAB_004b7005
    MOV dword ptr [EAX + 0x4c],0x204    ; 004b700c
    MOV dword ptr [EAX + 0x44],0x251    ; 004b7013
    MOV dword ptr [EAX + 0x40],0x252    ; 004b701a
    MOV dword ptr [EAX + 0x28],0x253    ; 004b7021
    MOV dword ptr [EAX + 0x2c],0x254    ; 004b7028
    MOV dword ptr [EAX + 0x48],0x202    ; 004b702f
    RET                                 ; 004b7036

