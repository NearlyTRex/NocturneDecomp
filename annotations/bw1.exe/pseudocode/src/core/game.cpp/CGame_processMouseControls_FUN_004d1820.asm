; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004d1820(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004d0860 at 004d0901
;
; Referenced Globals:
;   undefined4 DAT_005e19f4
;   undefined4 DAT_005e19fc
;   undefined4 DAT_005e1a04
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c50950
;   undefined4 DAT_01cd01f4
;   undefined4 g_CDemonSetInstance.selected_camera_index
;
; Called Functions:
;   core_game.cpp_FUN_004d0ee0
;   wincore_winrun.cpp_setCursorPosition_FUN_005b2750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1820
        ;   Label: core_game.cpp_CGame_processMouseControls_FUN_004d1820
    PUSH ESI                            ; 004d1821
    PUSH EDI                            ; 004d1822
    PUSH EBP                            ; 004d1823
    MOV EBP,ESP                         ; 004d1824
    SUB ESP,0x2c                        ; 004d1826
    AND ESP,0xfffffff8                  ; 004d1829
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d182c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004d182f
    PUSH EBX                            ; 004d1832
    PUSH EDI                            ; 004d1833
    CALL core_game.cpp_FUN_004d0ee0     ; 004d1834
        ;   XREF to: 004d0ee0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d0ee0(CGame * this_ptr, SPlayerInput * player_control)
    MOV EDX,dword ptr [EDI + 0x2ac]     ; 004d1839
    ADD ESP,0x8                         ; 004d183f
    TEST EDX,EDX                        ; 004d1842
    JZ 0x004d184d                       ; 004d1844
        ;   XREF to: 004d184d (CONDITIONAL_JUMP)  ; LAB_004d184d
    MOV ESP,EBP                         ; 004d1846
        ;   Label: LAB_004d1846
    POP EBP                             ; 004d1848
    POP EDI                             ; 004d1849
    POP ESI                             ; 004d184a
    POP EBX                             ; 004d184b
    RET                                 ; 004d184c
    MOV EAX,[0x0061b498]                ; 004d184d | DAT_0061b498
        ;   Label: LAB_004d184d
    MOV EDX,EAX                         ; 004d1852
    SAR EDX,0x1f                        ; 004d1854
    SUB EAX,EDX                         ; 004d1857
    SAR EAX,0x1                         ; 004d1859
    MOV dword ptr [ESP + 0x20],EAX      ; 004d185b
    MOV EAX,[0x0061b49c]                ; 004d185f | DAT_0061b49c
    MOV EDX,EAX                         ; 004d1864
    SAR EDX,0x1f                        ; 004d1866
    SUB EAX,EDX                         ; 004d1869
    SAR EAX,0x1                         ; 004d186b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d186d
    MOV ESI,EAX                         ; 004d1871
    MOV EAX,[0x01c4353c]                ; 004d1873 | DAT_01c4353c
    SUB EAX,ECX                         ; 004d1878
    MOV dword ptr [ESP + 0x18],EAX      ; 004d187a
    MOV EAX,[0x01c43540]                ; 004d187e | DAT_01c43540
    PUSH ESI                            ; 004d1883
    SUB EAX,ESI                         ; 004d1884
    PUSH ECX                            ; 004d1886
    MOV dword ptr [ESP + 0x24],EAX      ; 004d1887
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005b2750 ; 004d188b
        ;   XREF to: 005b2750 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005b2750(int x, int y)
    MOV EAX,[0x00622c18]                ; 004d1890 | g_CDemonSetPtr
    MOV EDX,dword ptr [0x01cd01f4]      ; 004d1895 | DAT_01cd01f4
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004d189b | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x8                         ; 004d18a1
    CMP EAX,EDX                         ; 004d18a4
    JNZ 0x004d1846                      ; 004d18a6
        ;   XREF to: 004d1846 (CONDITIONAL_JUMP)  ; LAB_004d1846
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d18a8
    MOV dword ptr [ESP + 0x28],EAX      ; 004d18ac
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d18b0
    MOV dword ptr [ESP + 0x24],EAX      ; 004d18b4
    FILD dword ptr [ESP + 0x28]         ; 004d18b8
    FILD dword ptr [ESP + 0x24]         ; 004d18bc
    FDIVP                               ; 004d18c0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004d18c2
    MOV dword ptr [ESP + 0x24],EAX      ; 004d18c6
    MOV dword ptr [ESP + 0x28],ESI      ; 004d18ca
    FILD dword ptr [ESP + 0x24]         ; 004d18ce
    FILD dword ptr [ESP + 0x28]         ; 004d18d2
    FDIVP                               ; 004d18d6
    FLD double ptr [0x005e19f4]         ; 004d18d8 | DAT_005e19f4
    FILD dword ptr [EDI + 0xb0]         ; 004d18de
    FMUL ST1                            ; 004d18e4
    FILD dword ptr [EDI + 0xb4]         ; 004d18e6
    FMULP ST2                           ; 004d18ec
    FMUL double ptr [0x005e19fc]        ; 004d18ee | DAT_005e19fc
    FMUL ST3                            ; 004d18f4
    FXCH ST2                            ; 004d18f6
    FXCH                                ; 004d18f8
    FMUL ST1                            ; 004d18fa
    FXCH ST2                            ; 004d18fc
    FSTP ST3                            ; 004d18fe
    FXCH ST2                            ; 004d1900
    FST float ptr [ESP + 0x4]           ; 004d1902
    FXCH                                ; 004d1906
    FSTP ST2                            ; 004d1908
    FXCH                                ; 004d190a
    FSTP float ptr [ESP]                ; 004d190c
    FCOMP double ptr [0x005e1a04]       ; 004d190f | DAT_005e1a04
    FNSTSW AX                           ; 004d1915
    SAHF                                ; 004d1917
    JNC 0x004d1922                      ; 004d1918
        ;   XREF to: 004d1922 (CONDITIONAL_JUMP)  ; LAB_004d1922
    MOV dword ptr [ESP + 0x4],0xbf800000 ; 004d191a
    FLD float ptr [ESP + 0x4]           ; 004d1922
        ;   Label: LAB_004d1922
    FLD1                                ; 004d1926
    FCOMPP                              ; 004d1928
    FNSTSW AX                           ; 004d192a
    SAHF                                ; 004d192c
    JNC 0x004d1937                      ; 004d192d
        ;   XREF to: 004d1937 (CONDITIONAL_JUMP)  ; LAB_004d1937
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 004d192f
    FLD float ptr [ESP]                 ; 004d1937
        ;   Label: LAB_004d1937
    FCOMP double ptr [0x005e1a04]       ; 004d193a | DAT_005e1a04
    FNSTSW AX                           ; 004d1940
    SAHF                                ; 004d1942
    JNC 0x004d194c                      ; 004d1943
        ;   XREF to: 004d194c (CONDITIONAL_JUMP)  ; LAB_004d194c
    MOV dword ptr [ESP],0xbf800000      ; 004d1945
    FLD float ptr [ESP]                 ; 004d194c
        ;   Label: LAB_004d194c
    FLD1                                ; 004d194f
    FCOMPP                              ; 004d1951
    FNSTSW AX                           ; 004d1953
    SAHF                                ; 004d1955
    JNC 0x004d195f                      ; 004d1956
        ;   XREF to: 004d195f (CONDITIONAL_JUMP)  ; LAB_004d195f
    MOV dword ptr [ESP],0x3f800000      ; 004d1958
    CMP dword ptr [EDI + 0xa8],0x0      ; 004d195f
        ;   Label: LAB_004d195f
    JZ 0x004d196d                       ; 004d1966
        ;   XREF to: 004d196d (CONDITIONAL_JUMP)  ; LAB_004d196d
    XOR byte ptr [ESP + 0x3],0x80       ; 004d1968
    MOV EAX,dword ptr [EDI + 0x34]      ; 004d196d
        ;   Label: LAB_004d196d
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d1970 | DAT_01c50950
    JZ 0x004d19b4                       ; 004d1977
        ;   XREF to: 004d19b4 (CONDITIONAL_JUMP)  ; LAB_004d19b4
    FLD float ptr [EBX + 0x24]          ; 004d1979
    FABS                                ; 004d197c
    FLD float ptr [ESP + 0x4]           ; 004d197e
    FABS                                ; 004d1982
    FCOMPP                              ; 004d1984
    FNSTSW AX                           ; 004d1986
    SAHF                                ; 004d1988
    JBE 0x004d1992                      ; 004d1989
        ;   XREF to: 004d1992 (CONDITIONAL_JUMP)  ; LAB_004d1992
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d198b
    MOV dword ptr [EBX + 0x24],EAX      ; 004d198f
    FLD float ptr [EBX + 0x2c]          ; 004d1992
        ;   Label: LAB_004d1992
    FABS                                ; 004d1995
    FLD float ptr [ESP]                 ; 004d1997
    FABS                                ; 004d199a
    FCOMPP                              ; 004d199c
    FNSTSW AX                           ; 004d199e
    SAHF                                ; 004d19a0
    JBE 0x004d1846                      ; 004d19a1
        ;   XREF to: 004d1846 (CONDITIONAL_JUMP)  ; LAB_004d1846
    MOV EAX,dword ptr [ESP]             ; 004d19a7
    MOV dword ptr [EBX + 0x2c],EAX      ; 004d19aa
    MOV ESP,EBP                         ; 004d19ad
    POP EBP                             ; 004d19af
    POP EDI                             ; 004d19b0
    POP ESI                             ; 004d19b1
    POP EBX                             ; 004d19b2
    RET                                 ; 004d19b3
    FLD float ptr [EBX + 0x28]          ; 004d19b4
        ;   Label: LAB_004d19b4
    FABS                                ; 004d19b7
    FLD float ptr [ESP + 0x4]           ; 004d19b9
    FABS                                ; 004d19bd
    FCOMPP                              ; 004d19bf
    FNSTSW AX                           ; 004d19c1
    SAHF                                ; 004d19c3
    JBE 0x004d1992                      ; 004d19c4
        ;   XREF to: 004d1992 (CONDITIONAL_JUMP)  ; LAB_004d1992
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d19c6
    MOV dword ptr [EBX + 0x28],EAX      ; 004d19ca
    JMP 0x004d1992                      ; 004d19cd
        ;   XREF to: 004d1992 (UNCONDITIONAL_JUMP)  ; LAB_004d1992

