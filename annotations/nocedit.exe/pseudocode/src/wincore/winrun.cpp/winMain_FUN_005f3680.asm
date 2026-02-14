; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stdcall int __stdcall wincore_winrun_cpp_winMain_FUN_005f3680(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow1,int nCmdShow2)
;
; Parameters:
; HINSTANCE        Stack[0x4]:4   hInstance
; HINSTANCE        Stack[0x8]:4   hPrevInstance
; LPSTR            Stack[0xc]:4   lpCmdLine
; int              Stack[0x10]:4   nCmdShow1
; int              Stack[0x14]:4   nCmdShow2
; Local Variables:
; undefined1[40]   Stack[-0x58]:40  windowClass
; undefined1[32]   Stack[-0x30]:32  memStatus
;
; XREF[1]:
;   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 at 00609f0d
;
; Referenced Globals:
;   GET_STOCK_OBJECT_FUNC* g_GetStockObjectFunc = 002117a0
;   TIME_GET_TIME_FUNC* g_timeGetTimeFunc = 00211884
;   BRING_WINDOW_TO_TOP_FUNC* g_BringWindowToTopFunc = 00211a42
;   CREATE_WINDOW_EX_A_FUNC* g_CreateWindowExAFunc = 00211a7a
;   FIND_WINDOW_A_FUNC* g_FindWindowAFunc = 00211ab2
;   GET_LAST_ACTIVE_POPUP_FUNC* g_GetLastActivePopupFunc = 00211af6
;   IS_ICONIC_FUNC* g_IsIconicFunc = 00211b1e
;   LOAD_CURSOR_A_FUNC* g_LoadCursorAFunc = 00211b2a
;   LOAD_ICON_A_FUNC* g_LoadIconAFunc = 00211b38
;   REGISTER_CLASS_A_FUNC* g_RegisterClassAFunc = 00211b92
;   SET_FOREGROUND_WINDOW_FUNC* g_SetForegroundWindowFunc = 00211be0
;   SHOW_WINDOW_FUNC* g_ShowWindowFunc = 00211c06
;   UPDATE_WINDOW_FUNC* g_UpdateWindowFunc = 00211c28
;   GET_COMMAND_LINE_A_FUNC* g_GetCommandLineAFunc = 00211df8
;   GET_CURRENT_DIRECTORY_A_FUNC* g_GetCurrentDirectoryAFunc = 00211e42
;   ... and 24 more
;
; Called Functions:
;   BringWindowToTop
;   core_main.c_enterMainGameMenu_FUN_00512f40
;   core_main.c_finalizeGameSystems_FUN_00508570
;   core_main.c_initializeGameSystems_FUN_00507a60
;   CreateWindowExA
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdlib.c_srand_FUN_005feb80
;   GetCommandLineA
;   GetCurrentDirectoryA
;   GetModuleFileNameA
;   GetStockObject
;   GlobalMemoryStatus
;   IsIconic
;   LoadCursorA
;   RegisterClassA
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f3680
        ;   Label: wincore_winrun.cpp_winMain_FUN_005f3680
    PUSH ESI                            ; 005f3681
    PUSH EDI                            ; 005f3682
    PUSH EBP                            ; 005f3683
    SUB ESP,0x48                        ; 005f3684
    MOV EBP,dword ptr [ESP + 0x5c]      ; 005f3687
    PUSH 0x0                            ; 005f368b
    MOV EDX,dword ptr [0x0068499c]      ; 005f368d | = "Nocturne Editor" | g_ApplicationTitle
    PUSH EDX                            ; 005f3693 | = "Nocturne Editor"
    CALL dword ptr CS:[0x6114a0]        ; 005f3694 | g_FindWindowAFunc
    MOV EDI,EAX                         ; 005f369b
    TEST EAX,EAX                        ; 005f369d
    JZ 0x005f36e1                       ; 005f369f
        ;   XREF to: 005f36e1 (CONDITIONAL_JUMP)  ; LAB_005f36e1
    PUSH EAX                            ; 005f36a1
    CALL dword ptr CS:[0x6114b0]        ; 005f36a2 | g_GetLastActivePopupFunc
    TEST EAX,EAX                        ; 005f36a9
    JZ 0x005f36af                       ; 005f36ab
        ;   XREF to: 005f36af (CONDITIONAL_JUMP)  ; LAB_005f36af
    MOV EDI,EAX                         ; 005f36ad
    PUSH EDI                            ; 005f36af
        ;   Label: LAB_005f36af
    CALL dword ptr CS:[0x611488]        ; 005f36b0 | g_BringWindowToTopFunc
    PUSH EDI                            ; 005f36b7
    CALL dword ptr CS:[0x6114b8]        ; 005f36b8 | g_IsIconicFunc
    TEST EAX,EAX                        ; 005f36bf
    JZ 0x005f36cd                       ; 005f36c1
        ;   XREF to: 005f36cd (CONDITIONAL_JUMP)  ; LAB_005f36cd
    PUSH 0x9                            ; 005f36c3
    PUSH EDI                            ; 005f36c5
    CALL dword ptr CS:[0x6114f4]        ; 005f36c6 | g_ShowWindowFunc
    PUSH EDI                            ; 005f36cd
        ;   Label: LAB_005f36cd
    CALL dword ptr CS:[0x6114ec]        ; 005f36ce | g_SetForegroundWindowFunc
    XOR EAX,EAX                         ; 005f36d5
    ADD ESP,0x48                        ; 005f36d7
    POP EBP                             ; 005f36da
    POP EDI                             ; 005f36db
    POP ESI                             ; 005f36dc
    POP EBX                             ; 005f36dd
    RET 0x10                            ; 005f36de
    MOV EBX,ESP                         ; 005f36e1
        ;   Label: LAB_005f36e1
    MOV EAX,ESP                         ; 005f36e3
    SUB EAX,0x40000                     ; 005f36e5
    MOV EAX,dword ptr [EBX]             ; 005f36ea
        ;   Label: LAB_005f36ea
    SUB EBX,0x80                        ; 005f36ec
    CMP EBX,EAX                         ; 005f36f2
    JG 0x005f36ea                       ; 005f36f4
        ;   XREF to: 005f36ea (CONDITIONAL_JUMP)  ; LAB_005f36ea
    CALL dword ptr CS:[0x61141c]        ; 005f36f6 | g_timeGetTimeFunc
    PUSH EAX                            ; 005f36fd
    CALL crt_stdlib.c_srand_FUN_005feb80 ; 005f36fe
        ;   XREF to: 005feb80 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005feb80(uint seed)
    ADD ESP,0x4                         ; 005f3703
    MOV EDI,0x3f98ff0                   ; 005f3706 | g_CommandLineBuffer
    CALL dword ptr CS:[0x611568]        ; 005f370b | g_GetCommandLineAFunc
    MOV ESI,EAX                         ; 005f3712
    PUSH EDI                            ; 005f3714 | g_CommandLineBuffer
    MOV AL,byte ptr [ESI]               ; 005f3715
        ;   Label: LAB_005f3715
    MOV byte ptr [EDI],AL               ; 005f3717 | g_CommandLineBuffer | DAT_03f98ff2
    CMP AL,0x0                          ; 005f3719
    JZ 0x005f372d                       ; 005f371b
        ;   XREF to: 005f372d (CONDITIONAL_JUMP)  ; LAB_005f372d
    MOV AL,byte ptr [ESI + 0x1]         ; 005f371d
    ADD ESI,0x2                         ; 005f3720
    MOV byte ptr [EDI + 0x1],AL         ; 005f3723 | DAT_03f98ff1 | DAT_03f98ff3
    ADD EDI,0x2                         ; 005f3726
    CMP AL,0x0                          ; 005f3729
    JNZ 0x005f3715                      ; 005f372b
        ;   XREF to: 005f3715 (CONDITIONAL_JUMP)  ; LAB_005f3715
    POP EDI                             ; 005f372d
        ;   Label: LAB_005f372d
    MOV DL,byte ptr [0x03f98ff0]        ; 005f372e | g_CommandLineBuffer
    MOV EAX,EDI                         ; 005f3734 | g_CommandLineBuffer
    TEST DL,DL                          ; 005f3736
    JZ 0x005f3784                       ; 005f3738
        ;   XREF to: 005f3784 (CONDITIONAL_JUMP)  ; LAB_005f3784
    MOV ECX,dword ptr [0x03f990f0]      ; 005f373a | g_ArgCount
    SHL ECX,0x2                         ; 005f3740
    MOV BL,byte ptr [EAX]               ; 005f3743 | g_CommandLineBuffer | DAT_03f98ff1 | DAT_03f98ff2
        ;   Label: LAB_005f3743
    LEA EDX,[EAX + 0x1]                 ; 005f3745 | DAT_03f98ff1
    CMP BL,0x20                         ; 005f3748
    JBE 0x005f3751                      ; 005f374b
        ;   XREF to: 005f3751 (CONDITIONAL_JUMP)  ; LAB_005f3751
    MOV EAX,EDX                         ; 005f374d
    JMP 0x005f3743                      ; 005f374f
        ;   XREF to: 005f3743 (UNCONDITIONAL_JUMP)  ; LAB_005f3743
    MOV EBX,dword ptr [0x03f990f0]      ; 005f3751 | g_ArgCount
        ;   Label: LAB_005f3751
    ADD ECX,0x4                         ; 005f3757
    MOV byte ptr [EAX],0x0              ; 005f375a | g_CommandLineBuffer | DAT_03f98ff1
    INC EBX                             ; 005f375d
    MOV dword ptr [ECX + 0x3f990f0],EDI ; 005f375e | g_ArgCount | g_CommandLineBuffer | g_ArgVector
    MOV dword ptr [0x03f990f0],EBX      ; 005f3764 | g_ArgCount
    MOV BH,byte ptr [EDX]               ; 005f376a | DAT_03f98ff1 | DAT_03f98ff2
    MOV EAX,EDX                         ; 005f376c
    CMP BH,0x20                         ; 005f376e
    JNZ 0x005f377c                      ; 005f3771
        ;   XREF to: 005f377c (CONDITIONAL_JUMP)  ; LAB_005f377c
    MOV DL,byte ptr [EAX + 0x1]         ; 005f3773 | DAT_03f98ff2 | DAT_03f98ff3 | DAT_03f98ff4
        ;   Label: LAB_005f3773
    INC EAX                             ; 005f3776 | DAT_03f98ff2
    CMP DL,0x20                         ; 005f3777
    JZ 0x005f3773                       ; 005f377a
        ;   XREF to: 005f3773 (CONDITIONAL_JUMP)  ; LAB_005f3773
    MOV DH,byte ptr [EAX]               ; 005f377c | DAT_03f98ff1 | DAT_03f98ff2 | DAT_03f98ff3
        ;   Label: LAB_005f377c
    MOV EDI,EAX                         ; 005f377e
    TEST DH,DH                          ; 005f3780
    JNZ 0x005f3743                      ; 005f3782
        ;   XREF to: 005f3743 (CONDITIONAL_JUMP)  ; LAB_005f3743
    PUSH 0x3f98ef0                      ; 005f3784 | g_CurrentDirectory
        ;   Label: LAB_005f3784
    PUSH 0x100                          ; 005f3789
    CALL dword ptr CS:[0x611578]        ; 005f378e | g_GetCurrentDirectoryAFunc
    PUSH 0x100                          ; 005f3795
    PUSH 0x3f98df0                      ; 005f379a | g_ModuleFileName
    PUSH EBP                            ; 005f379f
    MOV EDI,0x3f98df0                   ; 005f37a0 | g_ModuleFileName
    CALL dword ptr CS:[0x6115ac]        ; 005f37a5 | g_GetModuleFileNameAFunc
    SUB ECX,ECX                         ; 005f37ac
    DEC ECX                             ; 005f37ae
    XOR EAX,EAX                         ; 005f37af
    SCASB.REPNE ES:EDI                  ; 005f37b1 | g_ModuleFileName | CHAR_ARRAY_03f98df1
    NOT ECX                             ; 005f37b3
    DEC ECX                             ; 005f37b5
    MOV EAX,ECX                         ; 005f37b6
    TEST ECX,ECX                        ; 005f37b8
    JLE 0x005f37d1                      ; 005f37ba
        ;   XREF to: 005f37d1 (CONDITIONAL_JUMP)  ; LAB_005f37d1
    CMP byte ptr [EAX + 0x3f98df0],0x5c ; 005f37bc | g_WindowMessageHandlers[3]+3 | g_ModuleFileName | CHAR_ARRAY_03f98df1
        ;   Label: LAB_005f37bc
    JNZ 0x005f387a                      ; 005f37c3
        ;   XREF to: 005f387a (CONDITIONAL_JUMP)  ; LAB_005f387a
    XOR BH,BH                           ; 005f37c9
    MOV byte ptr [EAX + 0x3f98df0],BH   ; 005f37cb | g_WindowMessageHandlers[3]+3 | g_ModuleFileName | CHAR_ARRAY_03f98df1
    PUSH 0x3f98df0                      ; 005f37d1 | g_ModuleFileName
        ;   Label: LAB_005f37d1
    MOV EBX,0x5f3150                    ; 005f37d6
    CALL dword ptr CS:[0x611614]        ; 005f37db | g_SetCurrentDirectoryAFunc
    XOR ESI,ESI                         ; 005f37e2
    MOV ECX,0x3                         ; 005f37e4
    PUSH 0x65                           ; 005f37e9
    MOV dword ptr [ESP + 0x8],EBX       ; 005f37eb
    MOV dword ptr [ESP + 0xc],ESI       ; 005f37ef
    MOV dword ptr [ESP + 0x10],ESI      ; 005f37f3
    PUSH EBP                            ; 005f37f7
    MOV dword ptr [ESP + 0x18],EBP      ; 005f37f8
    MOV dword ptr [ESP + 0x8],ECX       ; 005f37fc
    CALL dword ptr CS:[0x6114c0]        ; 005f3800 | Rsrc_GroupIcon_65_0 | g_LoadIconAFunc
    PUSH 0x7f00                         ; 005f3807
    PUSH ESI                            ; 005f380c
    MOV dword ptr [ESP + 0x1c],EAX      ; 005f380d
    CALL dword ptr CS:[0x6114bc]        ; 005f3811 | g_LoadCursorAFunc
    PUSH 0x4                            ; 005f3818
    MOV dword ptr [ESP + 0x1c],EAX      ; 005f381a
    CALL dword ptr CS:[0x6113e0]        ; 005f381e | g_GetStockObjectFunc
    MOV dword ptr [ESP + 0x1c],EAX      ; 005f3825
    MOV EAX,[0x0068499c]                ; 005f3829 | g_ApplicationTitle
    MOV dword ptr [ESP + 0x24],EAX      ; 005f382e | = "Nocturne Editor"
    MOV EAX,ESP                         ; 005f3832
    PUSH EAX                            ; 005f3834
    MOV dword ptr [ESP + 0x24],ESI      ; 005f3835
    CALL dword ptr CS:[0x6114d8]        ; 005f3839 | g_RegisterClassAFunc
    PUSH ESI                            ; 005f3840
    PUSH EBP                            ; 005f3841
    PUSH ESI                            ; 005f3842
    PUSH ESI                            ; 005f3843
    PUSH ESI                            ; 005f3844
    PUSH ESI                            ; 005f3845
    PUSH ESI                            ; 005f3846
    PUSH ESI                            ; 005f3847
    PUSH 0x80000000                     ; 005f3848
    MOV EDX,dword ptr [0x006849a0]      ; 005f384d | = "Nocturne Editor" | g_ApplicationTimerTitle
    PUSH EDX                            ; 005f3853 | = "Nocturne Editor"
    MOV ECX,dword ptr [0x0068499c]      ; 005f3854 | = "Nocturne Editor" | g_ApplicationTitle
    PUSH ECX                            ; 005f385a | = "Nocturne Editor"
    PUSH 0x40000                        ; 005f385b
    CALL dword ptr CS:[0x611494]        ; 005f3860 | g_CreateWindowExAFunc
    MOV [0x03f98468],EAX                ; 005f3867 | g_MainWindowHandle
    TEST EAX,EAX                        ; 005f386c
    JNZ 0x005f3888                      ; 005f386e
        ;   XREF to: 005f3888 (CONDITIONAL_JUMP)  ; LAB_005f3888
    ADD ESP,0x48                        ; 005f3870
    POP EBP                             ; 005f3873
    POP EDI                             ; 005f3874
    POP ESI                             ; 005f3875
    POP EBX                             ; 005f3876
    RET 0x10                            ; 005f3877
    DEC EAX                             ; 005f387a
        ;   Label: LAB_005f387a
    TEST EAX,EAX                        ; 005f387b
    JG 0x005f37bc                       ; 005f387d
        ;   XREF to: 005f37bc (CONDITIONAL_JUMP)  ; LAB_005f37bc
    JMP 0x005f37d1                      ; 005f3883
        ;   XREF to: 005f37d1 (UNCONDITIONAL_JUMP)  ; LAB_005f37d1
    MOV EBX,dword ptr [ESP + 0x68]      ; 005f3888
        ;   Label: LAB_005f3888
    PUSH EBX                            ; 005f388c
    PUSH EAX                            ; 005f388d
    CALL dword ptr CS:[0x6114f4]        ; 005f388e | g_ShowWindowFunc
    MOV ESI,dword ptr [0x03f98468]      ; 005f3895 | g_MainWindowHandle
    PUSH ESI                            ; 005f389b
    CALL dword ptr CS:[0x6114fc]        ; 005f389c | g_UpdateWindowFunc
    CALL dword ptr CS:[0x61157c]        ; 005f38a3 | g_GetCurrentProcessFunc
    PUSH 0x1                            ; 005f38aa
    PUSH EAX                            ; 005f38ac
    CALL dword ptr CS:[0x61163c]        ; 005f38ad | g_SetThreadPriorityFunc
    PUSH 0x20                           ; 005f38b4
    PUSH 0x0                            ; 005f38b6
    LEA EAX,[ESP + 0x30]                ; 005f38b8
    PUSH EAX                            ; 005f38bc
    CALL crt_memory.c_memset_FUN_005fde40 ; 005f38bd
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005f38c2
    LEA EAX,[ESP + 0x28]                ; 005f38c5
    MOV EDI,0x20                        ; 005f38c9
    PUSH EAX                            ; 005f38ce
    MOV dword ptr [ESP + 0x2c],EDI      ; 005f38cf
    CALL dword ptr CS:[0x6115d8]        ; 005f38d3 | g_GlobalMemoryStatusFunc
    MOV EAX,dword ptr [ESP + 0x30]      ; 005f38da
    PUSH 0x3f990f4                      ; 005f38de | g_ArgVector
    MOV EBP,dword ptr [0x03f990f0]      ; 005f38e3 | g_ArgCount
    MOV [0x03f98474],EAX                ; 005f38e9 | g_TotalPhysicalMemory
    MOV EAX,dword ptr [ESP + 0x40]      ; 005f38ee
    PUSH EBP                            ; 005f38f2
    MOV [0x03f98478],EAX                ; 005f38f3 | g_MessageFlags
    CALL core_main.c_initializeGameSystems_FUN_00507a60 ; 005f38f8
        ;   XREF to: 00507a60 (UNCONDITIONAL_CALL)  ; void core_main.c_initializeGameSystems_FUN_00507a60()
    ADD ESP,0x8                         ; 005f38fd
    CALL core_main.c_enterMainGameMenu_FUN_00512f40 ; 005f3900
        ;   XREF to: 00507a50 (UNCONDITIONAL_CALL)  ; int core_main.c_enterMainGameMenu_FUN_00512f40()
    CALL core_main.c_finalizeGameSystems_FUN_00508570 ; 005f3905
        ;   XREF to: 00508570 (UNCONDITIONAL_CALL)  ; void core_main.c_finalizeGameSystems_FUN_00508570()
    XOR EAX,EAX                         ; 005f390a
    ADD ESP,0x48                        ; 005f390c
    POP EBP                             ; 005f390f
    POP EDI                             ; 005f3910
    POP ESI                             ; 005f3911
    POP EBX                             ; 005f3912
    RET 0x10                            ; 005f3913

