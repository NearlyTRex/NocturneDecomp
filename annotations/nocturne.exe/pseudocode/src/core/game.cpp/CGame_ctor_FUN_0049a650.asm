; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_game_cpp_CGame_ctor_FUN_0049a650(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0049a1e0 at 0049a209
;
; Referenced Globals:
;   undefined4 DAT_01c78598
;
; Called Functions:
;   core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a650
        ;   Label: core_game.cpp_CGame_ctor_FUN_0049a650
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049a651
    MOV dword ptr [EBX],0x280           ; 0049a655
    MOV dword ptr [EBX + 0x4],0x1e0     ; 0049a65b
    MOV dword ptr [EBX + 0x8],0x20      ; 0049a662
    MOV dword ptr [EBX + 0x224],0x10000 ; 0049a669
    MOV dword ptr [EBX + 0xc],0x0       ; 0049a673
    MOV dword ptr [EBX + 0x10],0x1      ; 0049a67a
    MOV dword ptr [EBX + 0x14],0x1      ; 0049a681
    MOV dword ptr [EBX + 0x18],0x1      ; 0049a688
    MOV dword ptr [EBX + 0x1c],0x1      ; 0049a68f
    MOV dword ptr [EBX + 0x24],0x1      ; 0049a696
    MOV dword ptr [EBX + 0x20],0x0      ; 0049a69d
    PUSH EBX                            ; 0049a6a4
    MOV dword ptr [EBX + 0xbc],0x0      ; 0049a6a5
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610 ; 0049a6af
        ;   XREF to: 0049e610 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610()
    MOV byte ptr [EBX + 0xd0],0x0       ; 0049a6b4
    MOV dword ptr [EBX + 0x1d0],0x0     ; 0049a6bb
    MOV dword ptr [EBX + 0x1d4],0x0     ; 0049a6c5
    MOV dword ptr [EBX + 0x1d8],0x0     ; 0049a6cf
    MOV dword ptr [EBX + 0x1dc],0x0     ; 0049a6d9
    MOV dword ptr [EBX + 0x1e0],0x0     ; 0049a6e3
    MOV dword ptr [EBX + 0x1ec],0x3f800000 ; 0049a6ed
    MOV dword ptr [EBX + 0x1f0],0x0     ; 0049a6f7
    MOV dword ptr [EBX + 0x1f4],0x0     ; 0049a701
    MOV dword ptr [EBX + 0x1f8],0x0     ; 0049a70b
    MOV dword ptr [EBX + 0x200],0x0     ; 0049a715
    MOV dword ptr [EBX + 0x204],0x0     ; 0049a71f
    MOV dword ptr [EBX + 0x208],0x0     ; 0049a729
    MOV dword ptr [EBX + 0x20c],0x0     ; 0049a733
    MOV dword ptr [EBX + 0x210],0x0     ; 0049a73d
    MOV dword ptr [EBX + 0x214],0x0     ; 0049a747
    MOV dword ptr [EBX + 0x218],0x0     ; 0049a751
    MOV dword ptr [EBX + 0x21c],0x0     ; 0049a75b
    MOV dword ptr [EBX + 0xc0],0x0      ; 0049a765
    MOV dword ptr [EBX + 0xc8],0x0      ; 0049a76f
    MOV dword ptr [EBX + 0x9bc],0x0     ; 0049a779
    MOV dword ptr [EBX + 0x9c0],0x3f800000 ; 0049a783
    MOV dword ptr [EBX + 0x224],0x10000 ; 0049a78d
    MOV dword ptr [EBX + 0x228],0x0     ; 0049a797
    MOV dword ptr [EBX + 0xcc],0x0      ; 0049a7a1
    MOV dword ptr [EBX + 0x22c],0x1     ; 0049a7ab
    MOV dword ptr [EBX + 0x230],0x1     ; 0049a7b5
    MOV dword ptr [EBX + 0x234],0x0     ; 0049a7bf
    MOV dword ptr [EBX + 0x238],0x0     ; 0049a7c9
    MOV byte ptr [EBX + 0x8b4],0x0      ; 0049a7d3
    MOV dword ptr [EBX + 0x9b4],0x0     ; 0049a7da
    MOV dword ptr [EBX + 0x9b8],0x0     ; 0049a7e4
    MOV dword ptr [EBX + 0x23c],0x0     ; 0049a7ee
    MOV dword ptr [EBX + 0x9c4],0x0     ; 0049a7f8
    MOV dword ptr [EBX + 0xac8],0x0     ; 0049a802
    MOV dword ptr [EBX + 0x240],0x0     ; 0049a80c
    MOV dword ptr [EBX + 0x244],0x0     ; 0049a816
    MOV dword ptr [EBX + 0x220],0x0     ; 0049a820
    MOV dword ptr [EBX + 0x248],0x0     ; 0049a82a
    MOV dword ptr [EBX + 0x250],0x0     ; 0049a834
    MOV dword ptr [EBX + 0x24c],0x0     ; 0049a83e
    ADD ESP,0x4                         ; 0049a848
    MOV dword ptr [EBX + 0x254],0x0     ; 0049a84b
    XOR AH,AH                           ; 0049a855
    MOV dword ptr [EBX + 0x258],0x0     ; 0049a857
    MOV byte ptr [0x01c78598],AH        ; 0049a861 | DAT_01c78598
    MOV byte ptr [EBX + 0x9c8],AH       ; 0049a867
    MOV EAX,EBX                         ; 0049a86d
    POP EBX                             ; 0049a86f
    RET                                 ; 0049a870

