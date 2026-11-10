; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004b2d80(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_staticInit_FUN_004b28b0 at 004b28d9
;
; Referenced Globals:
;   undefined4 DAT_01cb7b50
;
; Called Functions:
;   core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10
;   core_game.cpp_FUN_004bb500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2d80
        ;   Label: core_game.cpp_CGame_ctor_FUN_004b2d80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b2d81
    MOV dword ptr [EBX + 0xb1c],0x5f7574 ; 004b2d85
    MOV dword ptr [EBX],0x280           ; 004b2d8f
    MOV dword ptr [EBX + 0x4],0x1e0     ; 004b2d95
    MOV dword ptr [EBX + 0x8],0x20      ; 004b2d9c
    MOV dword ptr [EBX + 0x240],0x10000 ; 004b2da3
    MOV dword ptr [EBX + 0xc],0x0       ; 004b2dad
    MOV dword ptr [EBX + 0x10],0x1      ; 004b2db4
    MOV dword ptr [EBX + 0x14],0x1      ; 004b2dbb
    MOV dword ptr [EBX + 0x18],0x1      ; 004b2dc2
    MOV dword ptr [EBX + 0x1c],0x1      ; 004b2dc9
    MOV dword ptr [EBX + 0x24],0x1      ; 004b2dd0
    MOV dword ptr [EBX + 0x20],0x0      ; 004b2dd7
    PUSH EBX                            ; 004b2dde
    MOV dword ptr [EBX + 0xd0],0x1      ; 004b2ddf
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10 ; 004b2de9
        ;   XREF to: 004b6e10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10(CGame * this_ptr)
    MOV byte ptr [EBX + 0xec],0x0       ; 004b2dee
    MOV dword ptr [EBX + 0x1ec],0x0     ; 004b2df5
    MOV dword ptr [EBX + 0x1f0],0x0     ; 004b2dff
    MOV dword ptr [EBX + 0x1f4],0x0     ; 004b2e09
    MOV dword ptr [EBX + 0x1f8],0x0     ; 004b2e13
    MOV dword ptr [EBX + 0x1fc],0x0     ; 004b2e1d
    MOV dword ptr [EBX + 0x208],0x3f800000 ; 004b2e27
    MOV dword ptr [EBX + 0x20c],0x0     ; 004b2e31
    MOV dword ptr [EBX + 0x210],0x0     ; 004b2e3b
    MOV dword ptr [EBX + 0x214],0x0     ; 004b2e45
    MOV dword ptr [EBX + 0x21c],0x0     ; 004b2e4f
    MOV dword ptr [EBX + 0x220],0x0     ; 004b2e59
    MOV dword ptr [EBX + 0x224],0x0     ; 004b2e63
    MOV dword ptr [EBX + 0x228],0x0     ; 004b2e6d
    MOV dword ptr [EBX + 0x22c],0x0     ; 004b2e77
    MOV dword ptr [EBX + 0x230],0x0     ; 004b2e81
    MOV dword ptr [EBX + 0x234],0x0     ; 004b2e8b
    MOV dword ptr [EBX + 0x238],0x0     ; 004b2e95
    MOV dword ptr [EBX + 0xd4],0x9      ; 004b2e9f
    MOV dword ptr [EBX + 0xdc],0x0      ; 004b2ea9
    MOV dword ptr [EBX + 0x9e0],0x0     ; 004b2eb3
    MOV dword ptr [EBX + 0x9e4],0x3f800000 ; 004b2ebd
    MOV dword ptr [EBX + 0x240],0x10000 ; 004b2ec7
    ADD ESP,0x4                         ; 004b2ed1
    MOV dword ptr [EBX + 0x244],0x0     ; 004b2ed4
    MOV dword ptr [EBX + 0xe0],0x0      ; 004b2ede
    MOV dword ptr [EBX + 0x248],0x1     ; 004b2ee8
    MOV dword ptr [EBX + 0x24c],0x1     ; 004b2ef2
    MOV dword ptr [EBX + 0x250],0x0     ; 004b2efc
    MOV dword ptr [EBX + 0x254],0x0     ; 004b2f06
    MOV byte ptr [EBX + 0x8d8],0x0      ; 004b2f10
    MOV dword ptr [EBX + 0x9d8],0x0     ; 004b2f17
    MOV dword ptr [EBX + 0x9dc],0x0     ; 004b2f21
    MOV dword ptr [EBX + 0x258],0x0     ; 004b2f2b
    MOV dword ptr [EBX + 0x9e8],0x0     ; 004b2f35
    MOV dword ptr [EBX + 0xaec],0x0     ; 004b2f3f
    MOV dword ptr [EBX + 0x25c],0x0     ; 004b2f49
    MOV dword ptr [EBX + 0x260],0x0     ; 004b2f53
    MOV dword ptr [EBX + 0x264],0x0     ; 004b2f5d
    MOV dword ptr [EBX + 0x23c],0x0     ; 004b2f67
    MOV dword ptr [EBX + 0x268],0x0     ; 004b2f71
    PUSH 0x0                            ; 004b2f7b
    MOV dword ptr [EBX + 0x270],0x0     ; 004b2f7d
    PUSH 0x0                            ; 004b2f87
    MOV dword ptr [EBX + 0x26c],0x0     ; 004b2f89
    PUSH 0x0                            ; 004b2f93
    MOV dword ptr [EBX + 0x274],0x0     ; 004b2f95
    PUSH 0x0                            ; 004b2f9f
    MOV dword ptr [EBX + 0x278],0x0     ; 004b2fa1
    PUSH 0x40a00000                     ; 004b2fab
    MOV dword ptr [EBX + 0xe4],0x0      ; 004b2fb0
    PUSH 0x3f800000                     ; 004b2fba
    MOV dword ptr [EBX + 0xe8],0x0      ; 004b2fbf
    PUSH 0x0                            ; 004b2fc9
    XOR AH,AH                           ; 004b2fcb
    PUSH EBX                            ; 004b2fcd
    MOV byte ptr [0x01cb7b50],AH        ; 004b2fce | DAT_01cb7b50
    MOV byte ptr [EBX + 0x9ec],AH       ; 004b2fd4
    CALL core_game.cpp_FUN_004bb500     ; 004b2fda
        ;   XREF to: 004bb500 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004bb500()
    ADD ESP,0x20                        ; 004b2fdf
    MOV EAX,EBX                         ; 004b2fe2
    MOV dword ptr [EBX + 0xb14],0x0     ; 004b2fe4
    POP EBX                             ; 004b2fee
    RET                                 ; 004b2fef

