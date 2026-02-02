; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_ctor_FUN_004d7b40 at 004d7b9f
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fc017
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 005147a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004dbbc0
        ;   Label: core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
    MOV dword ptr [EAX + 0x2c],0x150    ; 004dbbc4
    MOV dword ptr [EAX + 0x30],0x2a     ; 004dbbcb
    MOV dword ptr [EAX + 0x34],0x38     ; 004dbbd2
    MOV dword ptr [EAX + 0x38],0x2c     ; 004dbbd9
    MOV dword ptr [EAX + 0x3c],0x2d     ; 004dbbe0
    MOV dword ptr [EAX + 0x40],0x14d    ; 004dbbe7
    MOV dword ptr [EAX + 0x44],0x14b    ; 004dbbee
    MOV dword ptr [EAX + 0x48],0x39     ; 004dbbf5
    MOV dword ptr [EAX + 0x4c],0x1c     ; 004dbbfc
    MOV dword ptr [EAX + 0x50],0x21     ; 004dbc03
    MOV dword ptr [EAX + 0x54],0x17     ; 004dbc0a
    MOV dword ptr [EAX + 0x58],0x20     ; 004dbc11
    MOV dword ptr [EAX + 0x5c],0x22     ; 004dbc18
    MOV dword ptr [EAX + 0x60],0x10     ; 004dbc1f
    MOV dword ptr [EAX + 0x64],0x1e     ; 004dbc26
    MOV dword ptr [EAX + 0x68],0x2      ; 004dbc2d
    MOV dword ptr [EAX + 0x6c],0x3      ; 004dbc34
    MOV dword ptr [EAX + 0x70],0x4      ; 004dbc3b
    MOV dword ptr [EAX + 0x74],0x5      ; 004dbc42
    MOV dword ptr [EAX + 0x78],0x6      ; 004dbc49
    MOV dword ptr [EAX + 0x80],0xc      ; 004dbc50
    MOV dword ptr [EAX + 0x7c],0xd      ; 004dbc5a
    MOV dword ptr [EAX + 0x84],0x1a     ; 004dbc61
    MOV dword ptr [EAX + 0x88],0x1b     ; 004dbc6b
    MOV dword ptr [EAX + 0x8c],0x35     ; 004dbc75
    MOV dword ptr [EAX + 0x90],0x29     ; 004dbc7f
    MOV dword ptr [EAX + 0x94],0x0      ; 004dbc89
    MOV dword ptr [EAX + 0x98],0x0      ; 004dbc93
    MOV dword ptr [EAX + 0x9c],0x10000  ; 004dbc9d
    MOV dword ptr [EAX + 0xa0],0x10000  ; 004dbca7
    MOV dword ptr [EAX + 0xc4],0x0      ; 004dbcb1
    MOV EDX,dword ptr [EAX + 0xbc]      ; 004dbcbb
    MOV dword ptr [EAX + 0x28],0x148    ; 004dbcc1
    CMP EDX,0x1                         ; 004dbcc8
    JZ 0x004dbcd7                       ; 004dbccb
        ;   XREF to: 004dbcd7 (CONDITIONAL_JUMP)  ; LAB_004dbcd7
    CMP dword ptr [EAX + 0xbc],0x2      ; 004dbccd
    JZ 0x004dbd46                       ; 004dbcd4
        ;   XREF to: 004dbd46 (CONDITIONAL_JUMP)  ; LAB_004dbd46
    RET                                 ; 004dbcd6
    MOV dword ptr [EAX + 0x2c],0x1f     ; 004dbcd7
        ;   Label: LAB_004dbcd7
    MOV dword ptr [EAX + 0x38],0x1e     ; 004dbcde
    MOV dword ptr [EAX + 0x3c],0x20     ; 004dbce5
    MOV dword ptr [EAX + 0x30],0x3a     ; 004dbcec
    MOV dword ptr [EAX + 0x48],0x200    ; 004dbcf3
    MOV dword ptr [EAX + 0x60],0x256    ; 004dbcfa
    MOV dword ptr [EAX + 0x64],0x256    ; 004dbd01
    MOV dword ptr [EAX + 0x44],0x255    ; 004dbd08
    MOV dword ptr [EAX + 0x40],0x255    ; 004dbd0f
    MOV dword ptr [EAX + 0x58],0x12     ; 004dbd16
    MOV dword ptr [EAX + 0x5c],0x22     ; 004dbd1d
    MOV dword ptr [EAX + 0x50],0x10     ; 004dbd24
    MOV dword ptr [EAX + 0xc4],0x2      ; 004dbd2b
    MOV dword ptr [EAX + 0x28],0x11     ; 004dbd35
    CMP dword ptr [EAX + 0xbc],0x2      ; 004dbd3c
    JZ 0x004dbd46                       ; 004dbd43
        ;   XREF to: 004dbd46 (CONDITIONAL_JUMP)  ; LAB_004dbd46
    RET                                 ; 004dbd45
    MOV dword ptr [EAX + 0x58],0x203    ; 004dbd46
        ;   Label: LAB_004dbd46
    MOV dword ptr [EAX + 0x4c],0x204    ; 004dbd4d
    MOV dword ptr [EAX + 0x44],0x251    ; 004dbd54
    MOV dword ptr [EAX + 0x40],0x252    ; 004dbd5b
    MOV dword ptr [EAX + 0x28],0x253    ; 004dbd62
    MOV dword ptr [EAX + 0x2c],0x254    ; 004dbd69
    MOV dword ptr [EAX + 0x48],0x202    ; 004dbd70
    RET                                 ; 004dbd77

