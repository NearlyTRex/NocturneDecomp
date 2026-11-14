; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_00565a90(int width,int height,int bits_per_pixel)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
;
; XREF[2]:
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_0057a0e0 at 0057a190
;   wincore_wddvmem.cpp_videoRestore_FUN_0057ab70 at 0057abbc
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf5fdc
;   undefined4 DAT_02cf5ff4
;   undefined4 DAT_02cf6048
;   undefined4 DAT_02cf6058
;   undefined4 DAT_02cf6108
;   undefined4 DAT_02cf6110
;   undefined4 DAT_02cf6114
;   undefined4 DAT_02cf6118
;   undefined4 DAT_02cf611c
;   undefined4 DAT_02cf6120
;
; Called Functions:
;   engine_special.cpp_FUN_00565820
;   engine_special.cpp_loadExternalRenderer_FUN_00564be0
;   engine_special.cpp_unlockFrame_FUN_00565870
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565a90
        ;   Label: engine_special.cpp_setResolutionAndColorTable_FUN_00565a90
    PUSH ESI                            ; 00565a91
    PUSH EDI                            ; 00565a92
    PUSH EBP                            ; 00565a93
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00565a94
    XOR EDX,EDX                         ; 00565a98
    MOV dword ptr [0x02cf5fdc],EDX      ; 00565a9a | DAT_02cf5fdc
    CMP EBX,0x10                        ; 00565aa0
    JGE 0x00565aaa                      ; 00565aa3
        ;   XREF to: 00565aaa (CONDITIONAL_JUMP)  ; LAB_00565aaa
    MOV EBX,0x10                        ; 00565aa5
    CMP dword ptr [0x02cf6108],0x0      ; 00565aaa | DAT_02cf6108
        ;   Label: LAB_00565aaa
    JNZ 0x00565aca                      ; 00565ab1
        ;   XREF to: 00565aca (CONDITIONAL_JUMP)  ; LAB_00565aca
    MOV ESI,dword ptr [0x02cf611c]      ; 00565ab3 | DAT_02cf611c
    PUSH ESI                            ; 00565ab9
    CALL engine_special.cpp_loadExternalRenderer_FUN_00564be0 ; 00565aba
        ;   XREF to: 00564be0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00564be0(HWND window_handle)
    ADD ESP,0x4                         ; 00565abf
    TEST EAX,EAX                        ; 00565ac2
    JZ 0x00565b79                       ; 00565ac4
        ;   XREF to: 00565b79 (CONDITIONAL_JUMP)  ; LAB_00565b79
    PUSH 0x1c5faec                      ; 00565aca | DAT_01c5faec
        ;   Label: LAB_00565aca
    PUSH EBX                            ; 00565acf
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565ad0
    PUSH EDI                            ; 00565ad4
    MOV EBP,dword ptr [ESP + 0x20]      ; 00565ad5
    PUSH EBP                            ; 00565ad9
    CALL dword ptr [0x02cf5ff4]         ; 00565ada | DAT_02cf5ff4
    ADD ESP,0x10                        ; 00565ae0
    TEST EAX,EAX                        ; 00565ae3
    JZ 0x00565ba3                       ; 00565ae5
        ;   XREF to: 00565ba3 (CONDITIONAL_JUMP)  ; LAB_00565ba3
    PUSH 0x1c6a070                      ; 00565aeb
    PUSH 0x1c6af98                      ; 00565af0 | DAT_01c6af98
    CALL dword ptr [0x02cf6058]         ; 00565af5 | DAT_02cf6058
    ADD ESP,0x8                         ; 00565afb
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0 ; 00565afe
        ;   XREF to: 004d4eb0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0()
    MOV EDX,dword ptr [0x02cf6118]      ; 00565b03 | DAT_02cf6118
    PUSH EDX                            ; 00565b09
    MOV ECX,dword ptr [0x02cf6114]      ; 00565b0a | DAT_02cf6114
    PUSH ECX                            ; 00565b10
    MOV ESI,dword ptr [0x02cf6110]      ; 00565b11 | DAT_02cf6110
    PUSH ESI                            ; 00565b17
    MOV EDI,0x1                         ; 00565b18
    CALL dword ptr [0x02cf6048]         ; 00565b1d | DAT_02cf6048
    ADD ESP,0xc                         ; 00565b23
    MOV dword ptr [0x01c6cee8],EDI      ; 00565b26 | DAT_01c6cee8
    MOV dword ptr [0x02cf6120],EBX      ; 00565b2c | DAT_02cf6120
    CALL engine_special.cpp_FUN_00565820 ; 00565b32
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00565820()
    TEST EAX,EAX                        ; 00565b37
    JZ 0x00565b74                       ; 00565b39
        ;   XREF to: 00565b74 (CONDITIONAL_JUMP)  ; LAB_00565b74
    MOV EBP,dword ptr [0x005fba20]      ; 00565b3b | DAT_005fba20
    CMP EBP,0x10                        ; 00565b41
    JNZ 0x00565b7e                      ; 00565b44
        ;   XREF to: 00565b7e (CONDITIONAL_JUMP)  ; LAB_00565b7e
    MOV EAX,[0x01c5faec]                ; 00565b46 | DAT_01c5faec
    MOV DX,word ptr [EAX]               ; 00565b4b
    MOV word ptr [EAX],0xabcd           ; 00565b4e
    CMP word ptr [EAX],0xabcd           ; 00565b53
    SETNZ BL                            ; 00565b58
    AND EBX,0xff                        ; 00565b5b
    MOV word ptr [EAX],DX               ; 00565b61
    MOV dword ptr [0x02cf5fdc],EBX      ; 00565b64 | DAT_02cf5fdc
        ;   Label: LAB_00565b64
    PUSH 0x0                            ; 00565b6a
        ;   Label: LAB_00565b6a
    CALL engine_special.cpp_unlockFrame_FUN_00565870 ; 00565b6c
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00565870(int clear_lock_flag)
    ADD ESP,0x4                         ; 00565b71
    MOV EAX,0x1                         ; 00565b74
        ;   Label: LAB_00565b74
    POP EBP                             ; 00565b79
        ;   Label: LAB_00565b79
    POP EDI                             ; 00565b7a
    POP ESI                             ; 00565b7b
    POP EBX                             ; 00565b7c
    RET                                 ; 00565b7d
    CMP EBP,0x20                        ; 00565b7e
        ;   Label: LAB_00565b7e
    JNZ 0x00565b6a                      ; 00565b81
        ;   XREF to: 00565b6a (CONDITIONAL_JUMP)  ; LAB_00565b6a
    MOV EAX,[0x01c5faec]                ; 00565b83 | DAT_01c5faec
    MOV EDX,dword ptr [EAX]             ; 00565b88
    MOV dword ptr [EAX],0xaabbccdd      ; 00565b8a
    CMP dword ptr [EAX],0xaabbccdd      ; 00565b90
    SETNZ BL                            ; 00565b96
    AND EBX,0xff                        ; 00565b99
    MOV dword ptr [EAX],EDX             ; 00565b9f
    JMP 0x00565b64                      ; 00565ba1
        ;   XREF to: 00565b64 (UNCONDITIONAL_JUMP)  ; LAB_00565b64
    MOV [0x01c6cee8],EAX                ; 00565ba3 | DAT_01c6cee8
        ;   Label: LAB_00565ba3
    POP EBP                             ; 00565ba8
    POP EDI                             ; 00565ba9
    POP ESI                             ; 00565baa
    POP EBX                             ; 00565bab
    RET                                 ; 00565bac

