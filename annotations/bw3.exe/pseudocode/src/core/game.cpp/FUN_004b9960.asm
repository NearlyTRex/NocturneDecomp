; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b9960(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_game.cpp_CGame_playerControls_FUN_004b92e0 at 004b9331
;   core_game.cpp_CGame_processJoystickControls_FUN_004b97b0 at 004b97c8
;   core_game.cpp_FUN_004ba2e0 at 004ba2f4
;
; Referenced Globals:
;   undefined4 DAT_005c2800
;   undefined4 DAT_005c2804
;   undefined4 DAT_005c2808
;   undefined4 DAT_005c280c
;   undefined4 DAT_005c2810
;   undefined4 DAT_005c2818
;   undefined4 DAT_005c2820
;   undefined4 DAT_005c2824
;   undefined4 DAT_005c2828
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00600284
;   undefined4 g_CGameInstance.field788_0x314
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d70a78
;
; Called Functions:
;   core_inv.cpp_FUN_004dbb40
;   core_inv.cpp_FUN_004dbc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9960
        ;   Label: core_game.cpp_FUN_004b9960
    PUSH ESI                            ; 004b9961
    PUSH EDI                            ; 004b9962
    PUSH EBP                            ; 004b9963
    SUB ESP,0x14                        ; 004b9964
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b9967
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004b996b
    CMP dword ptr [EBX + 0x32c],0x0     ; 004b996f
    JNZ 0x004b9eb2                      ; 004b9976
        ;   XREF to: 004b9eb2 (CONDITIONAL_JUMP)  ; LAB_004b9eb2
    MOV dword ptr [ESI + 0x28],0x0      ; 004b997c
        ;   Label: LAB_004b997c
    MOV EAX,dword ptr [EBX + 0x38]      ; 004b9983
    LEA EDX,[ESI + 0x28]                ; 004b9986
    MOV CL,byte ptr [EAX + 0x1c6cef0]   ; 004b9989
    MOV EDI,dword ptr [EBX + 0x3c]      ; 004b998f
    TEST CL,CL                          ; 004b9992
    JZ 0x004b9edd                       ; 004b9994
        ;   XREF to: 004b9edd (CONDITIONAL_JUMP)  ; LAB_004b9edd
    FLD float ptr [EDX]                 ; 004b999a
    FCOMP float ptr [0x005c2804]        ; 004b999c | DAT_005c2804
    FNSTSW AX                           ; 004b99a2
    SAHF                                ; 004b99a4
    JBE 0x004b99cd                      ; 004b99a5
        ;   XREF to: 004b99cd (CONDITIONAL_JUMP)  ; LAB_004b99cd
    MOV EAX,[0x005fe9dc]                ; 004b99a7 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004b99ac | g_CGameInstance.field788_0x314
    FDIV float ptr [0x005c2800]         ; 004b99b2 | DAT_005c2800
    FSUBR float ptr [EDX]               ; 004b99b8
    FST float ptr [EDX]                 ; 004b99ba
    FCOMP float ptr [0x005c2804]        ; 004b99bc | DAT_005c2804
    FNSTSW AX                           ; 004b99c2
    SAHF                                ; 004b99c4
    JNC 0x004b99cd                      ; 004b99c5
        ;   XREF to: 004b99cd (CONDITIONAL_JUMP)  ; LAB_004b99cd
    MOV dword ptr [EDX],0xbf800000      ; 004b99c7
    MOV EAX,dword ptr [EBX + 0x34]      ; 004b99cd
        ;   Label: LAB_004b99cd
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004b99d0
    JZ 0x004b9f83                       ; 004b99d7
        ;   XREF to: 004b9f83 (CONDITIONAL_JUMP)  ; LAB_004b9f83
    MOV EDI,dword ptr [EBX + 0x44]      ; 004b99dd
    LEA EDX,[ESI + 0x28]                ; 004b99e0
    MOV CL,byte ptr [EDI + 0x1c6cef0]   ; 004b99e3
    MOV EAX,dword ptr [EBX + 0x40]      ; 004b99e9
    TEST CL,CL                          ; 004b99ec
    JZ 0x004b9f22                       ; 004b99ee
        ;   XREF to: 004b9f22 (CONDITIONAL_JUMP)  ; LAB_004b9f22
    FLD float ptr [EDX]                 ; 004b99f4
    FCOMP float ptr [0x005c2804]        ; 004b99f6 | DAT_005c2804
    FNSTSW AX                           ; 004b99fc
    SAHF                                ; 004b99fe
    JBE 0x004b9a27                      ; 004b99ff
        ;   XREF to: 004b9a27 (CONDITIONAL_JUMP)  ; LAB_004b9a27
    MOV EAX,[0x005fe9dc]                ; 004b9a01 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004b9a06 | g_CGameInstance.field788_0x314
    FDIV float ptr [0x005c2800]         ; 004b9a0c | DAT_005c2800
    FSUBR float ptr [EDX]               ; 004b9a12
    FST float ptr [EDX]                 ; 004b9a14
    FCOMP float ptr [0x005c2804]        ; 004b9a16 | DAT_005c2804
    FNSTSW AX                           ; 004b9a1c
    SAHF                                ; 004b9a1e
    JNC 0x004b9a27                      ; 004b9a1f
        ;   XREF to: 004b9a27 (CONDITIONAL_JUMP)  ; LAB_004b9a27
    MOV dword ptr [EDX],0xbf800000      ; 004b9a21
    MOV EAX,[0x005fe9dc]                ; 004b9a27 | g_CGamePtr
        ;   Label: LAB_004b9a27
    FLD float ptr [EAX + 0x314]         ; 004b9a2c | g_CGameInstance.field788_0x314
    FMUL float ptr [0x005c2808]         ; 004b9a32 | DAT_005c2808
    FDIV float ptr [0x005c280c]         ; 004b9a38 | DAT_005c280c
    FLDZ                                ; 004b9a3e
    LEA EDX,[ESI + 0x2c]                ; 004b9a40
    FXCH                                ; 004b9a43
    FSTP float ptr [ESP + 0x4]          ; 004b9a45
    FCOMP float ptr [EDX]               ; 004b9a49
    FNSTSW AX                           ; 004b9a4b
    SAHF                                ; 004b9a4d
    JBE 0x004b9f67                      ; 004b9a4e
        ;   XREF to: 004b9f67 (CONDITIONAL_JUMP)  ; LAB_004b9f67
    FLD float ptr [EDX]                 ; 004b9a54
    FADD float ptr [ESP + 0x4]          ; 004b9a56
    FLDZ                                ; 004b9a5a
        ;   Label: LAB_004b9a5a
    FXCH                                ; 004b9a5c
    FSTP float ptr [EDX]                ; 004b9a5e
    FCOMP float ptr [EDX]               ; 004b9a60
    FNSTSW AX                           ; 004b9a62
    SAHF                                ; 004b9a64
    JNC 0x004b9a6d                      ; 004b9a65
        ;   XREF to: 004b9a6d (CONDITIONAL_JUMP)  ; LAB_004b9a6d
    MOV dword ptr [EDX],0x0             ; 004b9a67
        ;   Label: LAB_004b9a67
    MOV EAX,dword ptr [EBX + 0x78]      ; 004b9a6d
        ;   Label: LAB_004b9a6d
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004b9a70
    JZ 0x004ba0a2                       ; 004b9a77
        ;   XREF to: 004ba0a2 (CONDITIONAL_JUMP)  ; LAB_004ba0a2
    FILD dword ptr [EBX + 0xb8]         ; 004b9a7d
        ;   Label: LAB_004b9a7d
    FMUL double ptr [0x005c2828]        ; 004b9a83 | DAT_005c2828
    FMUL double ptr [0x005c2818]        ; 004b9a89 | DAT_005c2818
    MOV EAX,dword ptr [EBX + 0x78]      ; 004b9a8f
    LEA EDX,[ESI + 0x30]                ; 004b9a92
    MOV EDI,dword ptr [EBX + 0x7c]      ; 004b9a95
    MOV CL,byte ptr [EAX + 0x1c6cef0]   ; 004b9a98
    FSTP float ptr [ESP + 0x10]         ; 004b9a9e
    TEST CL,CL                          ; 004b9aa2
    JZ 0x004ba0fd                       ; 004b9aa4
        ;   XREF to: 004ba0fd (CONDITIONAL_JUMP)  ; LAB_004ba0fd
    FLD float ptr [EDX]                 ; 004b9aaa
    FCOMP float ptr [0x005c2820]        ; 004b9aac | DAT_005c2820
    FNSTSW AX                           ; 004b9ab2
    SAHF                                ; 004b9ab4
    JBE 0x004b9ae1                      ; 004b9ab5
        ;   XREF to: 004b9ae1 (CONDITIONAL_JUMP)  ; LAB_004b9ae1
    MOV EAX,[0x005fe9dc]                ; 004b9ab7 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004b9abc | g_CGameInstance.field788_0x314
    FMUL float ptr [0x005c2808]         ; 004b9ac2 | DAT_005c2808
    FDIV float ptr [ESP + 0x10]         ; 004b9ac8
    FSUBR float ptr [EDX]               ; 004b9acc
    FST float ptr [EDX]                 ; 004b9ace
    FCOMP float ptr [0x005c2820]        ; 004b9ad0 | DAT_005c2820
    FNSTSW AX                           ; 004b9ad6
    SAHF                                ; 004b9ad8
    JNC 0x004b9ae1                      ; 004b9ad9
        ;   XREF to: 004b9ae1 (CONDITIONAL_JUMP)  ; LAB_004b9ae1
    MOV dword ptr [EDX],0xbe800000      ; 004b9adb
    CMP dword ptr [EBX + 0xb0],0x0      ; 004b9ae1
        ;   Label: LAB_004b9ae1
    JZ 0x004ba168                       ; 004b9ae8
        ;   XREF to: 004ba168 (CONDITIONAL_JUMP)  ; LAB_004ba168
    MOV EAX,dword ptr [EBX + 0x30]      ; 004b9aee
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004b9af1
    SETZ AL                             ; 004b9af8
    AND EAX,0xff                        ; 004b9afb
        ;   Label: LAB_004b9afb
    MOV dword ptr [ESI + 0x8],EAX       ; 004b9b00
    MOV EDX,dword ptr [EBX + 0x28]      ; 004b9b03
    MOV AL,byte ptr [EDX + 0x1d21fa0]   ; 004b9b06
    MOV CL,byte ptr [EDX + 0x1c6cef0]   ; 004b9b0c
    CMP AL,CL                           ; 004b9b12
    JZ 0x004b9b1c                       ; 004b9b14
        ;   XREF to: 004b9b1c (CONDITIONAL_JUMP)  ; LAB_004b9b1c
    XOR EAX,EAX                         ; 004b9b16
    MOV AL,CL                           ; 004b9b18
    MOV dword ptr [ESI],EAX             ; 004b9b1a
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004b9b1c
        ;   Label: LAB_004b9b1c
    MOV AL,byte ptr [EDX + 0x1d21fa0]   ; 004b9b1f
    MOV CH,byte ptr [EDX + 0x1c6cef0]   ; 004b9b25
    LEA EDI,[ESI + 0x4]                 ; 004b9b2b
    CMP AL,CH                           ; 004b9b2e
    JZ 0x004b9b38                       ; 004b9b30
        ;   XREF to: 004b9b38 (CONDITIONAL_JUMP)  ; LAB_004b9b38
    XOR EAX,EAX                         ; 004b9b32
    MOV AL,CH                           ; 004b9b34
    MOV dword ptr [EDI],EAX             ; 004b9b36
    MOV EAX,[0x01d5ba14]                ; 004b9b38 | DAT_01d5ba14
        ;   Label: LAB_004b9b38
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9b3d
    PUSH EAX                            ; 004b9b44
    MOV EDX,dword ptr [EAX + 0x154]     ; 004b9b45
    CALL dword ptr [EDX + 0x10c]        ; 004b9b4b
    ADD ESP,0x4                         ; 004b9b51
    TEST EAX,EAX                        ; 004b9b54
    JNZ 0x004ba176                      ; 004b9b56
        ;   XREF to: 004ba176 (CONDITIONAL_JUMP)  ; LAB_004ba176
    MOV EDX,dword ptr [EBX + 0x48]      ; 004b9b5c
    MOV AL,byte ptr [EDX + 0x1d21fa0]   ; 004b9b5f
    MOV AH,byte ptr [EDX + 0x1c6cef0]   ; 004b9b65
    LEA EDI,[ESI + 0xc]                 ; 004b9b6b
    CMP AL,AH                           ; 004b9b6e
    JZ 0x004b9b7c                       ; 004b9b70
        ;   XREF to: 004b9b7c (CONDITIONAL_JUMP)  ; LAB_004b9b7c
    XOR EAX,EAX                         ; 004b9b72
    MOV AL,byte ptr [EDX + 0x1c6cef0]   ; 004b9b74
    MOV dword ptr [EDI],EAX             ; 004b9b7a
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004b9b7c
        ;   Label: LAB_004b9b7c
    MOV AL,byte ptr [EDX + 0x1d21fa0]   ; 004b9b7f
    MOV CL,byte ptr [EDX + 0x1c6cef0]   ; 004b9b85
    LEA EDI,[ESI + 0x10]                ; 004b9b8b
    CMP AL,CL                           ; 004b9b8e
    JZ 0x004b9b98                       ; 004b9b90
        ;   XREF to: 004b9b98 (CONDITIONAL_JUMP)  ; LAB_004b9b98
    XOR EAX,EAX                         ; 004b9b92
    MOV AL,CL                           ; 004b9b94
    MOV dword ptr [EDI],EAX             ; 004b9b96
    MOV EDX,dword ptr [EBX + 0x50]      ; 004b9b98
        ;   Label: LAB_004b9b98
    MOV CL,byte ptr [EDX + 0x1d21fa0]   ; 004b9b9b
    MOV CH,byte ptr [EDX + 0x1c6cef0]   ; 004b9ba1
    LEA EAX,[ESI + 0x14]                ; 004b9ba7
    CMP CL,CH                           ; 004b9baa
    JZ 0x004ba189                       ; 004b9bac
        ;   XREF to: 004ba189 (CONDITIONAL_JUMP)  ; LAB_004ba189
    MOV DL,CH                           ; 004b9bb2
    AND EDX,0xff                        ; 004b9bb4
    MOV dword ptr [EAX],EDX             ; 004b9bba
    MOV EDX,dword ptr [EBX + 0x54]      ; 004b9bbc
        ;   Label: LAB_004b9bbc
    MOV CL,byte ptr [EDX + 0x1d21fa0]   ; 004b9bbf
    MOV CH,byte ptr [EDX + 0x1c6cef0]   ; 004b9bc5
    LEA EAX,[ESI + 0x18]                ; 004b9bcb
    CMP CL,CH                           ; 004b9bce
    JZ 0x004ba194                       ; 004b9bd0
        ;   XREF to: 004ba194 (CONDITIONAL_JUMP)  ; LAB_004ba194
    MOV DL,CH                           ; 004b9bd6
    AND EDX,0xff                        ; 004b9bd8
    MOV dword ptr [EAX],EDX             ; 004b9bde
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004b9be0
        ;   Label: LAB_004b9be0
    MOV CL,byte ptr [EDX + 0x1d21fa0]   ; 004b9be3
    MOV CH,byte ptr [EDX + 0x1c6cef0]   ; 004b9be9
    LEA EAX,[ESI + 0x1c]                ; 004b9bef
    CMP CL,CH                           ; 004b9bf2
    JZ 0x004ba19f                       ; 004b9bf4
        ;   XREF to: 004ba19f (CONDITIONAL_JUMP)  ; LAB_004ba19f
    MOV DL,CH                           ; 004b9bfa
    AND EDX,0xff                        ; 004b9bfc
    MOV dword ptr [EAX],EDX             ; 004b9c02
    MOV EDX,dword ptr [EBX + 0x70]      ; 004b9c04
        ;   Label: LAB_004b9c04
    MOV CL,byte ptr [EDX + 0x1d21fa0]   ; 004b9c07
    MOV CH,byte ptr [EDX + 0x1c6cef0]   ; 004b9c0d
    LEA EAX,[ESI + 0x20]                ; 004b9c13
    CMP CL,CH                           ; 004b9c16
    JZ 0x004ba1aa                       ; 004b9c18
        ;   XREF to: 004ba1aa (CONDITIONAL_JUMP)  ; LAB_004ba1aa
    MOV DL,CH                           ; 004b9c1e
    AND EDX,0xff                        ; 004b9c20
    MOV dword ptr [EAX],EDX             ; 004b9c26
    MOV EDX,dword ptr [EBX + 0x74]      ; 004b9c28
        ;   Label: LAB_004b9c28
    MOV CL,byte ptr [EDX + 0x1d21fa0]   ; 004b9c2b
    MOV CH,byte ptr [EDX + 0x1c6cef0]   ; 004b9c31
    LEA EAX,[ESI + 0x24]                ; 004b9c37
    CMP CL,CH                           ; 004b9c3a
    JZ 0x004ba1b5                       ; 004b9c3c
        ;   XREF to: 004ba1b5 (CONDITIONAL_JUMP)  ; LAB_004ba1b5
    MOV DL,CH                           ; 004b9c42
    AND EDX,0xff                        ; 004b9c44
    MOV dword ptr [EAX],EDX             ; 004b9c4a
    MOV ECX,dword ptr [EBX + 0x94]      ; 004b9c4c
        ;   Label: LAB_004b9c4c
    MOV EAX,[0x00600284]                ; 004b9c52 | DAT_00600284
    PUSH ECX                            ; 004b9c57
    MOV EDX,dword ptr [EAX]             ; 004b9c58 | DAT_01d70a78
    PUSH EAX                            ; 004b9c5a | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9c5b
    ADD ESP,0x8                         ; 004b9c5e
    TEST EAX,EAX                        ; 004b9c61
    JZ 0x004b9c85                       ; 004b9c63
        ;   XREF to: 004b9c85 (CONDITIONAL_JUMP)  ; LAB_004b9c85
    PUSH 0x1                            ; 004b9c65
    MOV EAX,[0x01d5ba14]                ; 004b9c67 | DAT_01d5ba14
    PUSH 0x5                            ; 004b9c6c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9c6e
    PUSH 0x0                            ; 004b9c75
    ADD EAX,0x206e8                     ; 004b9c77
    PUSH EAX                            ; 004b9c7c
    CALL core_inv.cpp_FUN_004dbb40      ; 004b9c7d
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004b9c82
    MOV EDI,dword ptr [EBX + 0x98]      ; 004b9c85
        ;   Label: LAB_004b9c85
    MOV EAX,[0x00600284]                ; 004b9c8b | DAT_00600284
    PUSH EDI                            ; 004b9c90
    MOV EDX,dword ptr [EAX]             ; 004b9c91 | DAT_01d70a78
    PUSH EAX                            ; 004b9c93 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9c94
    ADD ESP,0x8                         ; 004b9c97
    TEST EAX,EAX                        ; 004b9c9a
    JZ 0x004b9cbe                       ; 004b9c9c
        ;   XREF to: 004b9cbe (CONDITIONAL_JUMP)  ; LAB_004b9cbe
    PUSH -0x1                           ; 004b9c9e
    MOV EAX,[0x01d5ba14]                ; 004b9ca0 | DAT_01d5ba14
    PUSH 0x5                            ; 004b9ca5
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9ca7
    PUSH 0x0                            ; 004b9cae
    ADD EAX,0x206e8                     ; 004b9cb0
    PUSH EAX                            ; 004b9cb5
    CALL core_inv.cpp_FUN_004dbb40      ; 004b9cb6
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004b9cbb
    MOV EBP,dword ptr [EBX + 0x9c]      ; 004b9cbe
        ;   Label: LAB_004b9cbe
    MOV EAX,[0x00600284]                ; 004b9cc4 | DAT_00600284
    PUSH EBP                            ; 004b9cc9
    MOV EDX,dword ptr [EAX]             ; 004b9cca | DAT_01d70a78
    PUSH EAX                            ; 004b9ccc | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9ccd
    ADD ESP,0x8                         ; 004b9cd0
    TEST EAX,EAX                        ; 004b9cd3
    JZ 0x004b9cf3                       ; 004b9cd5
        ;   XREF to: 004b9cf3 (CONDITIONAL_JUMP)  ; LAB_004b9cf3
    MOV EAX,[0x01d5ba14]                ; 004b9cd7 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9cdc
    PUSH 0x1                            ; 004b9ce3
    ADD EAX,0x206e8                     ; 004b9ce5
    PUSH EAX                            ; 004b9cea
    CALL core_inv.cpp_FUN_004dbc40      ; 004b9ceb
        ;   XREF to: 004dbc40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbc40(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004b9cf0
    MOV ECX,dword ptr [EBX + 0xa0]      ; 004b9cf3
        ;   Label: LAB_004b9cf3
    MOV EAX,[0x00600284]                ; 004b9cf9 | DAT_00600284
    PUSH ECX                            ; 004b9cfe
    MOV EDX,dword ptr [EAX]             ; 004b9cff | DAT_01d70a78
    PUSH EAX                            ; 004b9d01 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9d02
    ADD ESP,0x8                         ; 004b9d05
    TEST EAX,EAX                        ; 004b9d08
    JZ 0x004b9d28                       ; 004b9d0a
        ;   XREF to: 004b9d28 (CONDITIONAL_JUMP)  ; LAB_004b9d28
    MOV EAX,[0x01d5ba14]                ; 004b9d0c | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9d11
    PUSH -0x1                           ; 004b9d18
    ADD EAX,0x206e8                     ; 004b9d1a
    PUSH EAX                            ; 004b9d1f
    CALL core_inv.cpp_FUN_004dbc40      ; 004b9d20
        ;   XREF to: 004dbc40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbc40(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004b9d25
    MOV EAX,[0x01d5ba14]                ; 004b9d28 | DAT_01d5ba14
        ;   Label: LAB_004b9d28
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9d2d
    PUSH EAX                            ; 004b9d34
    MOV EDX,dword ptr [EAX + 0x154]     ; 004b9d35
    CALL dword ptr [EDX + 0x148]        ; 004b9d3b
    ADD ESP,0x4                         ; 004b9d41
    MOV ECX,dword ptr [EBX + 0x80]      ; 004b9d44
    MOV EBP,EAX                         ; 004b9d4a
    PUSH ECX                            ; 004b9d4c
    MOV EDI,EAX                         ; 004b9d4d
    MOV EAX,[0x00600284]                ; 004b9d4f | DAT_00600284
    PUSH EAX                            ; 004b9d54 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b9d55 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9d57
    ADD ESP,0x8                         ; 004b9d5a
    TEST EAX,EAX                        ; 004b9d5d
    JZ 0x004b9d89                       ; 004b9d5f
        ;   XREF to: 004b9d89 (CONDITIONAL_JUMP)  ; LAB_004b9d89
    PUSH 0x1                            ; 004b9d61
    MOV EAX,[0x01d5ba14]                ; 004b9d63 | DAT_01d5ba14
    PUSH 0x0                            ; 004b9d68
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9d6a
    PUSH 0x0                            ; 004b9d71
    ADD EAX,0x206e8                     ; 004b9d73
    PUSH EAX                            ; 004b9d78
    CALL core_inv.cpp_FUN_004dbb40      ; 004b9d79
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004b9d7e
    TEST EBP,EBP                        ; 004b9d81
    JZ 0x004ba1c0                       ; 004b9d83
        ;   XREF to: 004ba1c0 (CONDITIONAL_JUMP)  ; LAB_004ba1c0
    MOV EBP,dword ptr [EBX + 0x84]      ; 004b9d89
        ;   Label: LAB_004b9d89
    MOV EAX,[0x00600284]                ; 004b9d8f | DAT_00600284
    PUSH EBP                            ; 004b9d94
    MOV EDX,dword ptr [EAX]             ; 004b9d95 | DAT_01d70a78
    PUSH EAX                            ; 004b9d97 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9d98
    ADD ESP,0x8                         ; 004b9d9b
    TEST EAX,EAX                        ; 004b9d9e
    JZ 0x004b9dca                       ; 004b9da0
        ;   XREF to: 004b9dca (CONDITIONAL_JUMP)  ; LAB_004b9dca
    PUSH 0x1                            ; 004b9da2
    MOV EAX,[0x01d5ba14]                ; 004b9da4 | DAT_01d5ba14
    PUSH 0x1                            ; 004b9da9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9dab
    PUSH 0x0                            ; 004b9db2
    ADD EAX,0x206e8                     ; 004b9db4
    PUSH EAX                            ; 004b9db9
    CALL core_inv.cpp_FUN_004dbb40      ; 004b9dba
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004b9dbf
    TEST EDI,EDI                        ; 004b9dc2
    JZ 0x004ba1cc                       ; 004b9dc4
        ;   XREF to: 004ba1cc (CONDITIONAL_JUMP)  ; LAB_004ba1cc
    MOV ECX,dword ptr [EBX + 0x88]      ; 004b9dca
        ;   Label: LAB_004b9dca
    MOV EAX,[0x00600284]                ; 004b9dd0 | DAT_00600284
    PUSH ECX                            ; 004b9dd5
    MOV EDX,dword ptr [EAX]             ; 004b9dd6 | DAT_01d70a78
    PUSH EAX                            ; 004b9dd8 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9dd9
    ADD ESP,0x8                         ; 004b9ddc
    TEST EAX,EAX                        ; 004b9ddf
    JZ 0x004b9e0b                       ; 004b9de1
        ;   XREF to: 004b9e0b (CONDITIONAL_JUMP)  ; LAB_004b9e0b
    PUSH 0x1                            ; 004b9de3
    MOV EAX,[0x01d5ba14]                ; 004b9de5 | DAT_01d5ba14
    PUSH 0x2                            ; 004b9dea
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9dec
    PUSH 0x0                            ; 004b9df3
    ADD EAX,0x206e8                     ; 004b9df5
    PUSH EAX                            ; 004b9dfa
    CALL core_inv.cpp_FUN_004dbb40      ; 004b9dfb
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004b9e00
    TEST EDI,EDI                        ; 004b9e03
    JZ 0x004ba1d8                       ; 004b9e05
        ;   XREF to: 004ba1d8 (CONDITIONAL_JUMP)  ; LAB_004ba1d8
    MOV EBP,dword ptr [EBX + 0x8c]      ; 004b9e0b
        ;   Label: LAB_004b9e0b
    MOV EAX,[0x00600284]                ; 004b9e11 | DAT_00600284
    PUSH EBP                            ; 004b9e16
    MOV EDX,dword ptr [EAX]             ; 004b9e17 | DAT_01d70a78
    PUSH EAX                            ; 004b9e19 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9e1a
    ADD ESP,0x8                         ; 004b9e1d
    TEST EAX,EAX                        ; 004b9e20
    JZ 0x004b9e4c                       ; 004b9e22
        ;   XREF to: 004b9e4c (CONDITIONAL_JUMP)  ; LAB_004b9e4c
    PUSH 0x1                            ; 004b9e24
    MOV EAX,[0x01d5ba14]                ; 004b9e26 | DAT_01d5ba14
    PUSH 0x3                            ; 004b9e2b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9e2d
    PUSH 0x0                            ; 004b9e34
    ADD EAX,0x206e8                     ; 004b9e36
    PUSH EAX                            ; 004b9e3b
    CALL core_inv.cpp_FUN_004dbb40      ; 004b9e3c
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004b9e41
    TEST EDI,EDI                        ; 004b9e44
    JZ 0x004ba1e4                       ; 004b9e46
        ;   XREF to: 004ba1e4 (CONDITIONAL_JUMP)  ; LAB_004ba1e4
    MOV ECX,dword ptr [EBX + 0x90]      ; 004b9e4c
        ;   Label: LAB_004b9e4c
    MOV EAX,[0x00600284]                ; 004b9e52 | DAT_00600284
    PUSH ECX                            ; 004b9e57
    MOV EDX,dword ptr [EAX]             ; 004b9e58 | DAT_01d70a78
    PUSH EAX                            ; 004b9e5a | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9e5b
    ADD ESP,0x8                         ; 004b9e5e
    TEST EAX,EAX                        ; 004b9e61
    JZ 0x004b9e90                       ; 004b9e63
        ;   XREF to: 004b9e90 (CONDITIONAL_JUMP)  ; LAB_004b9e90
    PUSH 0x1                            ; 004b9e65
    MOV EAX,[0x01d5ba14]                ; 004b9e67 | DAT_01d5ba14
    PUSH 0x4                            ; 004b9e6c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b9e6e
    PUSH 0x0                            ; 004b9e75
    ADD EAX,0x206e8                     ; 004b9e77
    PUSH EAX                            ; 004b9e7c
    CALL core_inv.cpp_FUN_004dbb40      ; 004b9e7d
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004b9e82
    TEST EDI,EDI                        ; 004b9e85
    JNZ 0x004b9e90                      ; 004b9e87
        ;   XREF to: 004b9e90 (CONDITIONAL_JUMP)  ; LAB_004b9e90
    MOV dword ptr [ESI + 0x1c],0x1      ; 004b9e89
    MOV ESI,dword ptr [EBX + 0x58]      ; 004b9e90
        ;   Label: LAB_004b9e90
    MOV EAX,[0x00600284]                ; 004b9e93 | DAT_00600284
    PUSH ESI                            ; 004b9e98
    MOV EDX,dword ptr [EAX]             ; 004b9e99 | DAT_01d70a78
    PUSH EAX                            ; 004b9e9b | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9e9c
    ADD ESP,0x8                         ; 004b9e9f
    TEST EAX,EAX                        ; 004b9ea2
    JNZ 0x004ba1f0                      ; 004b9ea4
        ;   XREF to: 004ba1f0 (CONDITIONAL_JUMP)  ; LAB_004ba1f0
    ADD ESP,0x14                        ; 004b9eaa
    POP EBP                             ; 004b9ead
    POP EDI                             ; 004b9eae
    POP ESI                             ; 004b9eaf
    POP EBX                             ; 004b9eb0
    RET                                 ; 004b9eb1
    PUSH 0x200                          ; 004b9eb2
        ;   Label: LAB_004b9eb2
    MOV EAX,[0x00600284]                ; 004b9eb7 | DAT_00600284
    PUSH EAX                            ; 004b9ebc | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b9ebd | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9ebf
    ADD ESP,0x8                         ; 004b9ec2
    MOV EAX,[0x00600284]                ; 004b9ec5 | DAT_00600284
    PUSH 0x201                          ; 004b9eca
    MOV EDX,dword ptr [EAX]             ; 004b9ecf | DAT_01d70a78
    PUSH EAX                            ; 004b9ed1 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b9ed2
    ADD ESP,0x8                         ; 004b9ed5
    JMP 0x004b997c                      ; 004b9ed8
        ;   XREF to: 004b997c (UNCONDITIONAL_JUMP)  ; LAB_004b997c
    CMP byte ptr [EDI + 0x1c6cef0],0x0  ; 004b9edd
        ;   Label: LAB_004b9edd
    JZ 0x004b99cd                       ; 004b9ee4
        ;   XREF to: 004b99cd (CONDITIONAL_JUMP)  ; LAB_004b99cd
    CMP dword ptr [EDX],0x3f800000      ; 004b9eea
    JGE 0x004b99cd                      ; 004b9ef0
        ;   XREF to: 004b99cd (CONDITIONAL_JUMP)  ; LAB_004b99cd
    MOV EAX,[0x005fe9dc]                ; 004b9ef6 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004b9efb | g_CGameInstance.field788_0x314
    FDIV float ptr [0x005c2800]         ; 004b9f01 | DAT_005c2800
    FADD float ptr [EDX]                ; 004b9f07
    FSTP float ptr [EDX]                ; 004b9f09
    CMP dword ptr [EDX],0x3f800000      ; 004b9f0b
    JLE 0x004b99cd                      ; 004b9f11
        ;   XREF to: 004b99cd (CONDITIONAL_JUMP)  ; LAB_004b99cd
    MOV dword ptr [EDX],0x3f800000      ; 004b9f17
    JMP 0x004b99cd                      ; 004b9f1d
        ;   XREF to: 004b99cd (UNCONDITIONAL_JUMP)  ; LAB_004b99cd
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004b9f22
        ;   Label: LAB_004b9f22
    JZ 0x004b9a27                       ; 004b9f29
        ;   XREF to: 004b9a27 (CONDITIONAL_JUMP)  ; LAB_004b9a27
    CMP dword ptr [EDX],0x3f800000      ; 004b9f2f
    JGE 0x004b9a27                      ; 004b9f35
        ;   XREF to: 004b9a27 (CONDITIONAL_JUMP)  ; LAB_004b9a27
    MOV EAX,[0x005fe9dc]                ; 004b9f3b | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004b9f40 | g_CGameInstance.field788_0x314
    FDIV float ptr [0x005c2800]         ; 004b9f46 | DAT_005c2800
    FADD float ptr [EDX]                ; 004b9f4c
    FSTP float ptr [EDX]                ; 004b9f4e
    CMP dword ptr [EDX],0x3f800000      ; 004b9f50
    JLE 0x004b9a27                      ; 004b9f56
        ;   XREF to: 004b9a27 (CONDITIONAL_JUMP)  ; LAB_004b9a27
    MOV dword ptr [EDX],0x3f800000      ; 004b9f5c
    JMP 0x004b9a27                      ; 004b9f62
        ;   XREF to: 004b9a27 (UNCONDITIONAL_JUMP)  ; LAB_004b9a27
    FLD float ptr [EDX]                 ; 004b9f67
        ;   Label: LAB_004b9f67
    FSUB float ptr [ESP + 0x4]          ; 004b9f69
    FLDZ                                ; 004b9f6d
    FXCH                                ; 004b9f6f
    FSTP float ptr [EDX]                ; 004b9f71
    FCOMP float ptr [EDX]               ; 004b9f73
    FNSTSW AX                           ; 004b9f75
    SAHF                                ; 004b9f77
    JBE 0x004b9a6d                      ; 004b9f78
        ;   XREF to: 004b9a6d (CONDITIONAL_JUMP)  ; LAB_004b9a6d
    JMP 0x004b9a67                      ; 004b9f7e
        ;   XREF to: 004b9a67 (UNCONDITIONAL_JUMP)  ; LAB_004b9a67
    MOV EAX,dword ptr [EBX + 0x44]      ; 004b9f83
        ;   Label: LAB_004b9f83
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004b9f86
    JZ 0x004ba000                       ; 004b9f8d
        ;   XREF to: 004ba000 (CONDITIONAL_JUMP)  ; LAB_004ba000
    FILD dword ptr [EBX + 0xb4]         ; 004b9f8f
        ;   Label: LAB_004b9f8f
    FMUL double ptr [0x005c2810]        ; 004b9f95 | DAT_005c2810
    FMUL double ptr [0x005c2818]        ; 004b9f9b | DAT_005c2818
    MOV EAX,dword ptr [EBX + 0x44]      ; 004b9fa1
    LEA EDX,[ESI + 0x2c]                ; 004b9fa4
    MOV EDI,dword ptr [EBX + 0x40]      ; 004b9fa7
    MOV CH,byte ptr [EAX + 0x1c6cef0]   ; 004b9faa
    FSTP float ptr [ESP + 0x8]          ; 004b9fb0
    TEST CH,CH                          ; 004b9fb4
    JZ 0x004ba03e                       ; 004b9fb6
        ;   XREF to: 004ba03e (CONDITIONAL_JUMP)  ; LAB_004ba03e
    FLD float ptr [EDX]                 ; 004b9fbc
    FCOMP float ptr [0x005c2820]        ; 004b9fbe | DAT_005c2820
    FNSTSW AX                           ; 004b9fc4
    SAHF                                ; 004b9fc6
    JBE 0x004b9a6d                      ; 004b9fc7
        ;   XREF to: 004b9a6d (CONDITIONAL_JUMP)  ; LAB_004b9a6d
    MOV EAX,[0x005fe9dc]                ; 004b9fcd | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004b9fd2 | g_CGameInstance.field788_0x314
    FMUL float ptr [0x005c2808]         ; 004b9fd8 | DAT_005c2808
    FDIV float ptr [ESP + 0x8]          ; 004b9fde
    FSUBR float ptr [EDX]               ; 004b9fe2
    FST float ptr [EDX]                 ; 004b9fe4
    FCOMP float ptr [0x005c2820]        ; 004b9fe6 | DAT_005c2820
    FNSTSW AX                           ; 004b9fec
    SAHF                                ; 004b9fee
    JNC 0x004b9a6d                      ; 004b9fef
        ;   XREF to: 004b9a6d (CONDITIONAL_JUMP)  ; LAB_004b9a6d
    MOV dword ptr [EDX],0xbe800000      ; 004b9ff5
    JMP 0x004b9a6d                      ; 004b9ffb
        ;   XREF to: 004b9a6d (UNCONDITIONAL_JUMP)  ; LAB_004b9a6d
    MOV EAX,dword ptr [EBX + 0x40]      ; 004ba000
        ;   Label: LAB_004ba000
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004ba003
    JNZ 0x004b9f8f                      ; 004ba00a
        ;   XREF to: 004b9f8f (CONDITIONAL_JUMP)  ; LAB_004b9f8f
    MOV EAX,[0x005fe9dc]                ; 004ba00c | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004ba011 | g_CGameInstance.field788_0x314
    FMUL float ptr [0x005c2808]         ; 004ba017 | DAT_005c2808
    FDIV float ptr [0x005c280c]         ; 004ba01d | DAT_005c280c
    FLDZ                                ; 004ba023
    LEA EDX,[ESI + 0x2c]                ; 004ba025
    FXCH                                ; 004ba028
    FSTP float ptr [ESP]                ; 004ba02a
    FCOMP float ptr [EDX]               ; 004ba02d
    FNSTSW AX                           ; 004ba02f
    SAHF                                ; 004ba031
    JBE 0x004ba087                      ; 004ba032
        ;   XREF to: 004ba087 (CONDITIONAL_JUMP)  ; LAB_004ba087
    FLD float ptr [EDX]                 ; 004ba034
    FADD float ptr [ESP]                ; 004ba036
    JMP 0x004b9a5a                      ; 004ba039
        ;   XREF to: 004b9a5a (UNCONDITIONAL_JUMP)  ; LAB_004b9a5a
    CMP byte ptr [EDI + 0x1c6cef0],0x0  ; 004ba03e
        ;   Label: LAB_004ba03e
    JZ 0x004b9a6d                       ; 004ba045
        ;   XREF to: 004b9a6d (CONDITIONAL_JUMP)  ; LAB_004b9a6d
    CMP dword ptr [EDX],0x3e800000      ; 004ba04b
    JGE 0x004b9a6d                      ; 004ba051
        ;   XREF to: 004b9a6d (CONDITIONAL_JUMP)  ; LAB_004b9a6d
    MOV EAX,[0x005fe9dc]                ; 004ba057 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004ba05c | g_CGameInstance.field788_0x314
    FMUL float ptr [0x005c2808]         ; 004ba062 | DAT_005c2808
    FDIV float ptr [ESP + 0x8]          ; 004ba068
    FADD float ptr [EDX]                ; 004ba06c
    FSTP float ptr [EDX]                ; 004ba06e
    CMP dword ptr [EDX],0x3e800000      ; 004ba070
    JLE 0x004b9a6d                      ; 004ba076
        ;   XREF to: 004b9a6d (CONDITIONAL_JUMP)  ; LAB_004b9a6d
    MOV dword ptr [EDX],0x3e800000      ; 004ba07c
    JMP 0x004b9a6d                      ; 004ba082
        ;   XREF to: 004b9a6d (UNCONDITIONAL_JUMP)  ; LAB_004b9a6d
    FLD float ptr [EDX]                 ; 004ba087
        ;   Label: LAB_004ba087
    FSUB float ptr [ESP]                ; 004ba089
    FLDZ                                ; 004ba08c
    FXCH                                ; 004ba08e
    FSTP float ptr [EDX]                ; 004ba090
    FCOMP float ptr [EDX]               ; 004ba092
    FNSTSW AX                           ; 004ba094
    SAHF                                ; 004ba096
    JBE 0x004b9a6d                      ; 004ba097
        ;   XREF to: 004b9a6d (CONDITIONAL_JUMP)  ; LAB_004b9a6d
    JMP 0x004b9a67                      ; 004ba09d
        ;   XREF to: 004b9a67 (UNCONDITIONAL_JUMP)  ; LAB_004b9a67
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004ba0a2
        ;   Label: LAB_004ba0a2
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004ba0a5
    JNZ 0x004b9a7d                      ; 004ba0ac
        ;   XREF to: 004b9a7d (CONDITIONAL_JUMP)  ; LAB_004b9a7d
    MOV EAX,[0x005fe9dc]                ; 004ba0b2 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004ba0b7 | g_CGameInstance.field788_0x314
    FMUL float ptr [0x005c2808]         ; 004ba0bd | DAT_005c2808
    FDIV float ptr [0x005c2824]         ; 004ba0c3 | DAT_005c2824
    FLDZ                                ; 004ba0c9
    LEA EDX,[ESI + 0x30]                ; 004ba0cb
    FXCH                                ; 004ba0ce
    FSTP float ptr [ESP + 0xc]          ; 004ba0d0
    FCOMP float ptr [EDX]               ; 004ba0d4
    FNSTSW AX                           ; 004ba0d6
    SAHF                                ; 004ba0d8
    JBE 0x004ba146                      ; 004ba0d9
        ;   XREF to: 004ba146 (CONDITIONAL_JUMP)  ; LAB_004ba146
    FLD float ptr [EDX]                 ; 004ba0db
    FADD float ptr [ESP + 0xc]          ; 004ba0dd
    FLDZ                                ; 004ba0e1
    FXCH                                ; 004ba0e3
    FSTP float ptr [EDX]                ; 004ba0e5
    FCOMP float ptr [EDX]               ; 004ba0e7
    FNSTSW AX                           ; 004ba0e9
    SAHF                                ; 004ba0eb
    JNC 0x004b9ae1                      ; 004ba0ec
        ;   XREF to: 004b9ae1 (CONDITIONAL_JUMP)  ; LAB_004b9ae1
    MOV dword ptr [EDX],0x0             ; 004ba0f2
    JMP 0x004b9ae1                      ; 004ba0f8
        ;   XREF to: 004b9ae1 (UNCONDITIONAL_JUMP)  ; LAB_004b9ae1
    CMP byte ptr [EDI + 0x1c6cef0],0x0  ; 004ba0fd
        ;   Label: LAB_004ba0fd
    JZ 0x004b9ae1                       ; 004ba104
        ;   XREF to: 004b9ae1 (CONDITIONAL_JUMP)  ; LAB_004b9ae1
    CMP dword ptr [EDX],0x3e800000      ; 004ba10a
    JGE 0x004b9ae1                      ; 004ba110
        ;   XREF to: 004b9ae1 (CONDITIONAL_JUMP)  ; LAB_004b9ae1
    MOV EAX,[0x005fe9dc]                ; 004ba116 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004ba11b | g_CGameInstance.field788_0x314
    FMUL float ptr [0x005c2808]         ; 004ba121 | DAT_005c2808
    FDIV float ptr [ESP + 0x10]         ; 004ba127
    FADD float ptr [EDX]                ; 004ba12b
    FSTP float ptr [EDX]                ; 004ba12d
    CMP dword ptr [EDX],0x3e800000      ; 004ba12f
    JLE 0x004b9ae1                      ; 004ba135
        ;   XREF to: 004b9ae1 (CONDITIONAL_JUMP)  ; LAB_004b9ae1
    MOV dword ptr [EDX],0x3e800000      ; 004ba13b
    JMP 0x004b9ae1                      ; 004ba141
        ;   XREF to: 004b9ae1 (UNCONDITIONAL_JUMP)  ; LAB_004b9ae1
    FLD float ptr [EDX]                 ; 004ba146
        ;   Label: LAB_004ba146
    FSUB float ptr [ESP + 0xc]          ; 004ba148
    FLDZ                                ; 004ba14c
    FXCH                                ; 004ba14e
    FSTP float ptr [EDX]                ; 004ba150
    FCOMP float ptr [EDX]               ; 004ba152
    FNSTSW AX                           ; 004ba154
    SAHF                                ; 004ba156
    JBE 0x004b9ae1                      ; 004ba157
        ;   XREF to: 004b9ae1 (CONDITIONAL_JUMP)  ; LAB_004b9ae1
    MOV dword ptr [EDX],0x0             ; 004ba15d
    JMP 0x004b9ae1                      ; 004ba163
        ;   XREF to: 004b9ae1 (UNCONDITIONAL_JUMP)  ; LAB_004b9ae1
    MOV EAX,dword ptr [EBX + 0x30]      ; 004ba168
        ;   Label: LAB_004ba168
    MOV AL,byte ptr [EAX + 0x1c6cef0]   ; 004ba16b
    JMP 0x004b9afb                      ; 004ba171
        ;   XREF to: 004b9afb (UNCONDITIONAL_JUMP)  ; LAB_004b9afb
    MOV dword ptr [ESI + 0x10],0x0      ; 004ba176
        ;   Label: LAB_004ba176
    MOV dword ptr [ESI + 0xc],0x0       ; 004ba17d
    JMP 0x004b9b98                      ; 004ba184
        ;   XREF to: 004b9b98 (UNCONDITIONAL_JUMP)  ; LAB_004b9b98
    MOV dword ptr [EAX],0x0             ; 004ba189
        ;   Label: LAB_004ba189
    JMP 0x004b9bbc                      ; 004ba18f
        ;   XREF to: 004b9bbc (UNCONDITIONAL_JUMP)  ; LAB_004b9bbc
    MOV dword ptr [EAX],0x0             ; 004ba194
        ;   Label: LAB_004ba194
    JMP 0x004b9be0                      ; 004ba19a
        ;   XREF to: 004b9be0 (UNCONDITIONAL_JUMP)  ; LAB_004b9be0
    MOV dword ptr [EAX],0x0             ; 004ba19f
        ;   Label: LAB_004ba19f
    JMP 0x004b9c04                      ; 004ba1a5
        ;   XREF to: 004b9c04 (UNCONDITIONAL_JUMP)  ; LAB_004b9c04
    MOV dword ptr [EAX],0x0             ; 004ba1aa
        ;   Label: LAB_004ba1aa
    JMP 0x004b9c28                      ; 004ba1b0
        ;   XREF to: 004b9c28 (UNCONDITIONAL_JUMP)  ; LAB_004b9c28
    MOV dword ptr [EAX],0x0             ; 004ba1b5
        ;   Label: LAB_004ba1b5
    JMP 0x004b9c4c                      ; 004ba1bb
        ;   XREF to: 004b9c4c (UNCONDITIONAL_JUMP)  ; LAB_004b9c4c
    MOV dword ptr [ESI + 0x1c],0x1      ; 004ba1c0
        ;   Label: LAB_004ba1c0
    JMP 0x004b9d89                      ; 004ba1c7
        ;   XREF to: 004b9d89 (UNCONDITIONAL_JUMP)  ; LAB_004b9d89
    MOV dword ptr [ESI + 0x1c],0x1      ; 004ba1cc
        ;   Label: LAB_004ba1cc
    JMP 0x004b9dca                      ; 004ba1d3
        ;   XREF to: 004b9dca (UNCONDITIONAL_JUMP)  ; LAB_004b9dca
    MOV dword ptr [ESI + 0x1c],0x1      ; 004ba1d8
        ;   Label: LAB_004ba1d8
    JMP 0x004b9e0b                      ; 004ba1df
        ;   XREF to: 004b9e0b (UNCONDITIONAL_JUMP)  ; LAB_004b9e0b
    MOV dword ptr [ESI + 0x1c],0x1      ; 004ba1e4
        ;   Label: LAB_004ba1e4
    JMP 0x004b9e4c                      ; 004ba1eb
        ;   XREF to: 004b9e4c (UNCONDITIONAL_JUMP)  ; LAB_004b9e4c
    MOV EAX,[0x01d5ba14]                ; 004ba1f0 | DAT_01d5ba14
        ;   Label: LAB_004ba1f0
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004ba1f5
    PUSH EAX                            ; 004ba1fc
    MOV EDX,dword ptr [EAX + 0x154]     ; 004ba1fd
    CALL dword ptr [EDX + 0x150]        ; 004ba203
    ADD ESP,0x4                         ; 004ba209
    ADD ESP,0x14                        ; 004ba20c
    POP EBP                             ; 004ba20f
    POP EDI                             ; 004ba210
    POP ESI                             ; 004ba211
    POP EBX                             ; 004ba212
    RET                                 ; 004ba213

