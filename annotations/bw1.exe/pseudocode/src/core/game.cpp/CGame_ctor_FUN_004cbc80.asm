; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004cbc80(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_staticInit_FUN_004cb7d0 at 004cb7f9
;
; Referenced Globals:
;   undefined4 DAT_01cd05c0
;
; Called Functions:
;   core_game.cpp_FUN_004d0400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbc80
        ;   Label: core_game.cpp_CGame_ctor_FUN_004cbc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbc81
    MOV dword ptr [EBX + 0xb00],0x600f94 ; 004cbc85
    MOV dword ptr [EBX],0x280           ; 004cbc8f
    MOV dword ptr [EBX + 0x4],0x1e0     ; 004cbc95
    MOV dword ptr [EBX + 0x8],0x20      ; 004cbc9c
    MOV dword ptr [EBX + 0x240],0x10000 ; 004cbca3
    MOV dword ptr [EBX + 0xc],0x0       ; 004cbcad
    MOV dword ptr [EBX + 0x10],0x1      ; 004cbcb4
    MOV dword ptr [EBX + 0x14],0x1      ; 004cbcbb
    MOV dword ptr [EBX + 0x18],0x1      ; 004cbcc2
    MOV dword ptr [EBX + 0x1c],0x1      ; 004cbcc9
    MOV dword ptr [EBX + 0x24],0x1      ; 004cbcd0
    MOV dword ptr [EBX + 0x20],0x0      ; 004cbcd7
    MOV dword ptr [EBX + 0x280],0x0     ; 004cbcde
    MOV dword ptr [EBX + 0x284],0x0     ; 004cbce8
    PUSH EBX                            ; 004cbcf2
    MOV dword ptr [EBX + 0xd0],0x1      ; 004cbcf3
    CALL core_game.cpp_FUN_004d0400     ; 004cbcfd
        ;   XREF to: 004d0400 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d0400()
    MOV byte ptr [EBX + 0xec],0x0       ; 004cbd02
    MOV dword ptr [EBX + 0x1ec],0x0     ; 004cbd09
    MOV dword ptr [EBX + 0x1f0],0x0     ; 004cbd13
    MOV dword ptr [EBX + 0x1f4],0x0     ; 004cbd1d
    MOV dword ptr [EBX + 0x1f8],0x0     ; 004cbd27
    MOV dword ptr [EBX + 0x1fc],0x0     ; 004cbd31
    MOV dword ptr [EBX + 0x208],0x3f800000 ; 004cbd3b
    MOV dword ptr [EBX + 0x20c],0x0     ; 004cbd45
    MOV dword ptr [EBX + 0x210],0x0     ; 004cbd4f
    MOV dword ptr [EBX + 0x214],0x0     ; 004cbd59
    MOV dword ptr [EBX + 0x21c],0x0     ; 004cbd63
    MOV dword ptr [EBX + 0x220],0x0     ; 004cbd6d
    MOV dword ptr [EBX + 0x224],0x0     ; 004cbd77
    MOV dword ptr [EBX + 0x228],0x0     ; 004cbd81
    MOV dword ptr [EBX + 0x22c],0x0     ; 004cbd8b
    MOV dword ptr [EBX + 0x230],0x0     ; 004cbd95
    MOV dword ptr [EBX + 0x234],0x0     ; 004cbd9f
    MOV dword ptr [EBX + 0x238],0x0     ; 004cbda9
    MOV dword ptr [EBX + 0xd4],0x9      ; 004cbdb3
    MOV dword ptr [EBX + 0xdc],0x0      ; 004cbdbd
    MOV dword ptr [EBX + 0x9f0],0x0     ; 004cbdc7
    MOV dword ptr [EBX + 0x9f4],0x3f800000 ; 004cbdd1
    MOV dword ptr [EBX + 0x240],0x10000 ; 004cbddb
    MOV dword ptr [EBX + 0x244],0x0     ; 004cbde5
    MOV dword ptr [EBX + 0xe0],0x0      ; 004cbdef
    MOV dword ptr [EBX + 0x248],0x1     ; 004cbdf9
    MOV dword ptr [EBX + 0x24c],0x1     ; 004cbe03
    MOV dword ptr [EBX + 0x250],0x0     ; 004cbe0d
    MOV dword ptr [EBX + 0x254],0x0     ; 004cbe17
    MOV byte ptr [EBX + 0x8e8],0x0      ; 004cbe21
    MOV dword ptr [EBX + 0x9e8],0x0     ; 004cbe28
    MOV dword ptr [EBX + 0x9ec],0x0     ; 004cbe32
    MOV dword ptr [EBX + 0x258],0x0     ; 004cbe3c
    MOV dword ptr [EBX + 0x9f8],0x0     ; 004cbe46
    MOV dword ptr [EBX + 0xafc],0x0     ; 004cbe50
    MOV dword ptr [EBX + 0x25c],0x0     ; 004cbe5a
    MOV dword ptr [EBX + 0x260],0x0     ; 004cbe64
    MOV dword ptr [EBX + 0x264],0x0     ; 004cbe6e
    MOV dword ptr [EBX + 0x23c],0x0     ; 004cbe78
    MOV dword ptr [EBX + 0x268],0x0     ; 004cbe82
    MOV dword ptr [EBX + 0x270],0x0     ; 004cbe8c
    MOV dword ptr [EBX + 0x26c],0x0     ; 004cbe96
    MOV dword ptr [EBX + 0x274],0x0     ; 004cbea0
    MOV dword ptr [EBX + 0x27c],0x0     ; 004cbeaa
    MOV dword ptr [EBX + 0x278],0x0     ; 004cbeb4
    MOV dword ptr [EBX + 0xe4],0x0      ; 004cbebe
    MOV dword ptr [EBX + 0xe8],0x0      ; 004cbec8
    ADD ESP,0x4                         ; 004cbed2
    MOV dword ptr [EBX + 0x3b8],0x0     ; 004cbed5
    XOR AH,AH                           ; 004cbedf
    MOV dword ptr [EBX + 0x288],0x1     ; 004cbee1
    MOV byte ptr [0x01cd05c0],AH        ; 004cbeeb | DAT_01cd05c0
    MOV byte ptr [EBX + 0x9fc],AH       ; 004cbef1
    MOV EAX,EBX                         ; 004cbef7
    POP EBX                             ; 004cbef9
    RET                                 ; 004cbefa

