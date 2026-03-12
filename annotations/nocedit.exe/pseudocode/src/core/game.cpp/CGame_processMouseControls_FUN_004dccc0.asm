; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004dccc0(CGame *this_ptr,SPlayerControl *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerControl * Stack[0x8]:4   player_control
; Local Variables:
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004dbd80 at 004dbe06
;
; Referenced Globals:
;   double DOUBLE_0062b8a5 = 0.0000152587890625
;   double DOUBLE_0062b8ad = 0.75
;   double DOUBLE_0062b8b5 = -1
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int g_MouseX
;   int g_MouseY
;   char[512] g_KeyboardState
;   int g_StoredCameraValue
;   undefined4 g_CDemonSetInstance.selected_camera_index
;
; Called Functions:
;   core_game.cpp_CGame_processKeyboardControls_FUN_004dc3e0
;   wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dccc0
        ;   Label: core_game.cpp_CGame_processMouseControls_FUN_004dccc0
    PUSH ESI                            ; 004dccc1
    PUSH EDI                            ; 004dccc2
    PUSH EBP                            ; 004dccc3
    MOV EBP,ESP                         ; 004dccc4
    SUB ESP,0x2c                        ; 004dccc6
    AND ESP,0xfffffff8                  ; 004dccc9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004dcccc
    MOV EBX,dword ptr [EBP + 0x18]      ; 004dcccf
    PUSH EBX                            ; 004dccd2
    PUSH EDI                            ; 004dccd3
    CALL core_game.cpp_CGame_processKeyboardControls_FUN_004dc3e0 ; 004dccd4
        ;   XREF to: 004dc3e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processKeyboardControls_FUN_004dc3e0(CGame * this_ptr, SPlayerControl * player_control)
    MOV EDX,dword ptr [EDI + 0x27c]     ; 004dccd9
    ADD ESP,0x8                         ; 004dccdf
    TEST EDX,EDX                        ; 004dcce2
    JZ 0x004dcced                       ; 004dcce4
        ;   XREF to: 004dcced (CONDITIONAL_JUMP)  ; LAB_004dcced
    MOV ESP,EBP                         ; 004dcce6
        ;   Label: LAB_004dcce6
    POP EBP                             ; 004dcce8
    POP EDI                             ; 004dcce9
    POP ESI                             ; 004dccea
    POP EBX                             ; 004dcceb
    RET                                 ; 004dccec
    MOV EAX,[0x00679394]                ; 004dcced | g_WindowWidth
        ;   Label: LAB_004dcced
    MOV EDX,EAX                         ; 004dccf2
    SAR EDX,0x1f                        ; 004dccf4
    SUB EAX,EDX                         ; 004dccf7
    SAR EAX,0x1                         ; 004dccf9
    MOV dword ptr [ESP + 0x20],EAX      ; 004dccfb
    MOV EAX,[0x00679398]                ; 004dccff | g_WindowHeight
    MOV EDX,EAX                         ; 004dcd04
    SAR EDX,0x1f                        ; 004dcd06
    SUB EAX,EDX                         ; 004dcd09
    SAR EAX,0x1                         ; 004dcd0b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004dcd0d
    MOV ESI,EAX                         ; 004dcd11
    MOV EAX,[0x02cf6a8c]                ; 004dcd13 | g_MouseX
    SUB EAX,ECX                         ; 004dcd18
    MOV dword ptr [ESP + 0x18],EAX      ; 004dcd1a
    MOV EAX,[0x02cf6a90]                ; 004dcd1e | g_MouseY
    PUSH ESI                            ; 004dcd23
    SUB EAX,ESI                         ; 004dcd24
    PUSH ECX                            ; 004dcd26
    MOV dword ptr [ESP + 0x24],EAX      ; 004dcd27
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0 ; 004dcd2b
        ;   XREF to: 005f30d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005f30d0(int x, int y)
    MOV EAX,[0x006810c8]                ; 004dcd30 | g_CDemonSetPtr
    MOV EDX,dword ptr [0x02d828cc]      ; 004dcd35 | g_StoredCameraValue
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 004dcd3b | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x8                         ; 004dcd41
    CMP EAX,EDX                         ; 004dcd44
    JNZ 0x004dcce6                      ; 004dcd46
        ;   XREF to: 004dcce6 (CONDITIONAL_JUMP)  ; LAB_004dcce6
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dcd48
    MOV dword ptr [ESP + 0x28],EAX      ; 004dcd4c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dcd50
    MOV dword ptr [ESP + 0x24],EAX      ; 004dcd54
    FILD dword ptr [ESP + 0x28]         ; 004dcd58
    FILD dword ptr [ESP + 0x24]         ; 004dcd5c
    FDIVP                               ; 004dcd60
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dcd62
    MOV dword ptr [ESP + 0x24],EAX      ; 004dcd66
    MOV dword ptr [ESP + 0x28],ESI      ; 004dcd6a
    FILD dword ptr [ESP + 0x24]         ; 004dcd6e
    FILD dword ptr [ESP + 0x28]         ; 004dcd72
    FDIVP                               ; 004dcd76
    FLD double ptr [0x0062b8a5]         ; 004dcd78 | DOUBLE_0062b8a5
    FILD dword ptr [EDI + 0x9c]         ; 004dcd7e
    FMUL ST1                            ; 004dcd84
    FILD dword ptr [EDI + 0xa0]         ; 004dcd86
    FMULP ST2                           ; 004dcd8c
    FMUL double ptr [0x0062b8ad]        ; 004dcd8e | DOUBLE_0062b8ad
    FMUL ST3                            ; 004dcd94
    FXCH ST2                            ; 004dcd96
    FXCH                                ; 004dcd98
    FMUL ST1                            ; 004dcd9a
    FXCH ST2                            ; 004dcd9c
    FSTP ST3                            ; 004dcd9e
    FXCH ST2                            ; 004dcda0
    FST float ptr [ESP + 0x4]           ; 004dcda2
    FXCH                                ; 004dcda6
    FSTP ST2                            ; 004dcda8
    FXCH                                ; 004dcdaa
    FSTP float ptr [ESP]                ; 004dcdac
    FCOMP double ptr [0x0062b8b5]       ; 004dcdaf | DOUBLE_0062b8b5
    FNSTSW AX                           ; 004dcdb5
    SAHF                                ; 004dcdb7
    JNC 0x004dcdc2                      ; 004dcdb8
        ;   XREF to: 004dcdc2 (CONDITIONAL_JUMP)  ; LAB_004dcdc2
    MOV dword ptr [ESP + 0x4],0xbf800000 ; 004dcdba
    FLD float ptr [ESP + 0x4]           ; 004dcdc2
        ;   Label: LAB_004dcdc2
    FLD1                                ; 004dcdc6
    FCOMPP                              ; 004dcdc8
    FNSTSW AX                           ; 004dcdca
    SAHF                                ; 004dcdcc
    JNC 0x004dcdd7                      ; 004dcdcd
        ;   XREF to: 004dcdd7 (CONDITIONAL_JUMP)  ; LAB_004dcdd7
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 004dcdcf
    FLD float ptr [ESP]                 ; 004dcdd7
        ;   Label: LAB_004dcdd7
    FCOMP double ptr [0x0062b8b5]       ; 004dcdda | DOUBLE_0062b8b5
    FNSTSW AX                           ; 004dcde0
    SAHF                                ; 004dcde2
    JNC 0x004dcdec                      ; 004dcde3
        ;   XREF to: 004dcdec (CONDITIONAL_JUMP)  ; LAB_004dcdec
    MOV dword ptr [ESP],0xbf800000      ; 004dcde5
    FLD float ptr [ESP]                 ; 004dcdec
        ;   Label: LAB_004dcdec
    FLD1                                ; 004dcdef
    FCOMPP                              ; 004dcdf1
    FNSTSW AX                           ; 004dcdf3
    SAHF                                ; 004dcdf5
    JNC 0x004dcdff                      ; 004dcdf6
        ;   XREF to: 004dcdff (CONDITIONAL_JUMP)  ; LAB_004dcdff
    MOV dword ptr [ESP],0x3f800000      ; 004dcdf8
    CMP dword ptr [EDI + 0x94],0x0      ; 004dcdff
        ;   Label: LAB_004dcdff
    JZ 0x004dce0d                       ; 004dce06
        ;   XREF to: 004dce0d (CONDITIONAL_JUMP)  ; LAB_004dce0d
    XOR byte ptr [ESP + 0x3],0x80       ; 004dce08
    MOV EAX,dword ptr [EDI + 0x34]      ; 004dce0d
        ;   Label: LAB_004dce0d
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dce10 | g_KeyboardState
    JZ 0x004dce54                       ; 004dce17
        ;   XREF to: 004dce54 (CONDITIONAL_JUMP)  ; LAB_004dce54
    FLD float ptr [EBX + 0x20]          ; 004dce19
    FABS                                ; 004dce1c
    FLD float ptr [ESP + 0x4]           ; 004dce1e
    FABS                                ; 004dce22
    FCOMPP                              ; 004dce24
    FNSTSW AX                           ; 004dce26
    SAHF                                ; 004dce28
    JBE 0x004dce32                      ; 004dce29
        ;   XREF to: 004dce32 (CONDITIONAL_JUMP)  ; LAB_004dce32
    MOV EAX,dword ptr [ESP + 0x4]       ; 004dce2b
    MOV dword ptr [EBX + 0x20],EAX      ; 004dce2f
    FLD float ptr [EBX + 0x28]          ; 004dce32
        ;   Label: LAB_004dce32
    FABS                                ; 004dce35
    FLD float ptr [ESP]                 ; 004dce37
    FABS                                ; 004dce3a
    FCOMPP                              ; 004dce3c
    FNSTSW AX                           ; 004dce3e
    SAHF                                ; 004dce40
    JBE 0x004dcce6                      ; 004dce41
        ;   XREF to: 004dcce6 (CONDITIONAL_JUMP)  ; LAB_004dcce6
    MOV EAX,dword ptr [ESP]             ; 004dce47
    MOV dword ptr [EBX + 0x28],EAX      ; 004dce4a
    MOV ESP,EBP                         ; 004dce4d
    POP EBP                             ; 004dce4f
    POP EDI                             ; 004dce50
    POP ESI                             ; 004dce51
    POP EBX                             ; 004dce52
    RET                                 ; 004dce53
    FLD float ptr [EBX + 0x24]          ; 004dce54
        ;   Label: LAB_004dce54
    FABS                                ; 004dce57
    FLD float ptr [ESP + 0x4]           ; 004dce59
    FABS                                ; 004dce5d
    FCOMPP                              ; 004dce5f
    FNSTSW AX                           ; 004dce61
    SAHF                                ; 004dce63
    JBE 0x004dce32                      ; 004dce64
        ;   XREF to: 004dce32 (CONDITIONAL_JUMP)  ; LAB_004dce32
    MOV EAX,dword ptr [ESP + 0x4]       ; 004dce66
    MOV dword ptr [EBX + 0x24],EAX      ; 004dce6a
    JMP 0x004dce32                      ; 004dce6d
        ;   XREF to: 004dce32 (UNCONDITIONAL_JUMP)  ; LAB_004dce32

