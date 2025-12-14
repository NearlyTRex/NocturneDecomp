; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGame * core_game.cpp_CGame_ctor_FUN_004d7b40(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_staticInit_FUN_004d76d0 at 004d76f9
;
; Referenced Globals:
;   char g_CurrentSaveFile
;
; Called Functions:
;   core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7b40
        ;   Label: core_game.cpp_CGame_ctor_FUN_004d7b40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d7b41
    MOV dword ptr [EBX],0x280           ; 004d7b45
    MOV dword ptr [EBX + 0x4],0x1e0     ; 004d7b4b
    MOV dword ptr [EBX + 0x8],0x20      ; 004d7b52
    MOV dword ptr [EBX + 0x224],0x10000 ; 004d7b59
    MOV dword ptr [EBX + 0xc],0x0       ; 004d7b63
    MOV dword ptr [EBX + 0x10],0x1      ; 004d7b6a
    MOV dword ptr [EBX + 0x14],0x1      ; 004d7b71
    MOV dword ptr [EBX + 0x18],0x1      ; 004d7b78
    MOV dword ptr [EBX + 0x1c],0x1      ; 004d7b7f
    MOV dword ptr [EBX + 0x24],0x1      ; 004d7b86
    MOV dword ptr [EBX + 0x20],0x0      ; 004d7b8d
    PUSH EBX                            ; 004d7b94
    MOV dword ptr [EBX + 0xbc],0x0      ; 004d7b95
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0 ; 004d7b9f
        ;   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0()
    MOV byte ptr [EBX + 0xd0],0x0       ; 004d7ba4
    MOV dword ptr [EBX + 0x1d0],0x0     ; 004d7bab
    MOV dword ptr [EBX + 0x1d4],0x0     ; 004d7bb5
    MOV dword ptr [EBX + 0x1d8],0x0     ; 004d7bbf
    MOV dword ptr [EBX + 0x1dc],0x0     ; 004d7bc9
    MOV dword ptr [EBX + 0x1e0],0x0     ; 004d7bd3
    MOV dword ptr [EBX + 0x1ec],0x3f800000 ; 004d7bdd
    MOV dword ptr [EBX + 0x1f0],0x0     ; 004d7be7
    MOV dword ptr [EBX + 0x1f4],0x0     ; 004d7bf1
    MOV dword ptr [EBX + 0x1f8],0x0     ; 004d7bfb
    MOV dword ptr [EBX + 0x200],0x0     ; 004d7c05
    MOV dword ptr [EBX + 0x204],0x0     ; 004d7c0f
    MOV dword ptr [EBX + 0x208],0x0     ; 004d7c19
    MOV dword ptr [EBX + 0x20c],0x0     ; 004d7c23
    MOV dword ptr [EBX + 0x210],0x0     ; 004d7c2d
    MOV dword ptr [EBX + 0x214],0x0     ; 004d7c37
    MOV dword ptr [EBX + 0x218],0x0     ; 004d7c41
    MOV dword ptr [EBX + 0x21c],0x0     ; 004d7c4b
    MOV dword ptr [EBX + 0xc0],0x0      ; 004d7c55
    MOV dword ptr [EBX + 0xc8],0x0      ; 004d7c5f
    MOV dword ptr [EBX + 0x9bc],0x0     ; 004d7c69
    MOV dword ptr [EBX + 0x9c0],0x3f800000 ; 004d7c73
    MOV dword ptr [EBX + 0x224],0x10000 ; 004d7c7d
    MOV dword ptr [EBX + 0x228],0x0     ; 004d7c87
    MOV dword ptr [EBX + 0xcc],0x0      ; 004d7c91
    MOV dword ptr [EBX + 0x22c],0x1     ; 004d7c9b
    MOV dword ptr [EBX + 0x230],0x1     ; 004d7ca5
    MOV dword ptr [EBX + 0x234],0x0     ; 004d7caf
    MOV dword ptr [EBX + 0x238],0x0     ; 004d7cb9
    MOV byte ptr [EBX + 0x8b4],0x0      ; 004d7cc3
    MOV dword ptr [EBX + 0x9b4],0x0     ; 004d7cca
    MOV dword ptr [EBX + 0x9b8],0x0     ; 004d7cd4
    MOV dword ptr [EBX + 0x23c],0x0     ; 004d7cde
    MOV dword ptr [EBX + 0x9c4],0x0     ; 004d7ce8
    MOV dword ptr [EBX + 0xac8],0x0     ; 004d7cf2
    MOV dword ptr [EBX + 0x240],0x0     ; 004d7cfc
    MOV dword ptr [EBX + 0x244],0x0     ; 004d7d06
    MOV dword ptr [EBX + 0x220],0x0     ; 004d7d10
    MOV dword ptr [EBX + 0x248],0x0     ; 004d7d1a
    MOV dword ptr [EBX + 0x250],0x0     ; 004d7d24
    MOV dword ptr [EBX + 0x24c],0x0     ; 004d7d2e
    ADD ESP,0x4                         ; 004d7d38
    MOV dword ptr [EBX + 0x254],0x0     ; 004d7d3b
    XOR AH,AH                           ; 004d7d45
    MOV dword ptr [EBX + 0x258],0x0     ; 004d7d47
    MOV byte ptr [0x02d82c80],AH        ; 004d7d51 | g_CurrentSaveFile
    MOV byte ptr [EBX + 0x9c8],AH       ; 004d7d57
    MOV EAX,EBX                         ; 004d7d5d
    POP EBX                             ; 004d7d5f
    RET                                 ; 004d7d60

