; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stdcall LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_005f3150(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)
;
; Parameters:
; HWND             Stack[0x4]:4   hWnd
; UINT             Stack[0x8]:4   message
; WPARAM           Stack[0xc]:4   wParam
; LPARAM           Stack[0x10]:4   lParam
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_005f3680 at 005f37eb
;
; Referenced Globals:
;   DEF_WINDOW_PROC_A_FUNC* g_DefWindowProcAFunc = 00211a8c
;   POST_QUIT_MESSAGE_FUNC* g_PostQuitMessageFunc = 00211b80
;   SET_CURSOR_FUNC* g_SetCursorFunc = 00211bc8
;   GET_CURRENT_PROCESS_FUNC* g_GetCurrentProcessFunc = 00211e5a
;   SET_THREAD_PRIORITY_FUNC* g_SetThreadPriorityFunc = 002121f6
;   int g_InputKeyMask = 0x7f
;   int g_WindowActive = -0x1
;   int g_PreviousActiveState = -0x1
;   int g_MouseX
;   int g_MouseY
;   uint g_MouseButtonFlags
;   char[256] g_KeyboardState
;   byte g_LeftMousePressed
;   byte g_RightMousePressed
;   byte g_MiddleMousePressed
;   ... and 10 more
;
; Called Functions:
;   DefWindowProcA
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   GetCurrentProcess
;   PostQuitMessage
;   SetCursor
;   SetThreadPriority
;   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50
;   wincore_wddvmem.cpp_stubFunction_FUN_005edd80
;   wincore_wddvmem.cpp_videoRestore_FUN_005edc80
;   wincore_winrun.cpp_enqueueInput_FUN_005f2f30
;   wincore_winvideo.cpp_closeMovie_FUN_005f46b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f3150
        ;   Label: wincore_winrun.cpp_mainWindowProc_FUN_005f3150
    PUSH ESI                            ; 005f3151
    PUSH EDI                            ; 005f3152
    PUSH EBP                            ; 005f3153
    MOV EBP,dword ptr [ESP + 0x14]      ; 005f3154
    MOV EDI,dword ptr [ESP + 0x18]      ; 005f3158
    CMP EBP,dword ptr [0x03f98468]      ; 005f315c | g_MainWindowHandle
    JNZ 0x005f31f2                      ; 005f3162
        ;   XREF to: 005f31f2 (CONDITIONAL_JUMP)  ; LAB_005f31f2
    MOV ECX,dword ptr [0x03f98ddc]      ; 005f3168 | g_NumWindowMessageHandlers
    XOR EBX,EBX                         ; 005f316e
    TEST ECX,ECX                        ; 005f3170
    JLE 0x005f319e                      ; 005f3172
        ;   XREF to: 005f319e (CONDITIONAL_JUMP)  ; LAB_005f319e
    XOR ESI,ESI                         ; 005f3174
    MOV EDX,dword ptr [ESP + 0x20]      ; 005f3176
        ;   Label: LAB_005f3176
    PUSH EDX                            ; 005f317a
    MOV ECX,dword ptr [ESP + 0x20]      ; 005f317b
    PUSH ECX                            ; 005f317f
    PUSH EDI                            ; 005f3180
    MOV EAX,ESI                         ; 005f3181
    PUSH EBP                            ; 005f3183
    CALL dword ptr [EAX + 0x3f98de0]    ; 005f3184 | g_WindowMessageHandlers | g_WindowMessageHandlers[1]
    ADD ESP,0x10                        ; 005f318a
    TEST EAX,EAX                        ; 005f318d
    JNZ 0x005f31fe                      ; 005f318f
        ;   XREF to: 005f31fe (CONDITIONAL_JUMP)  ; LAB_005f31fe
    MOV EAX,[0x03f98ddc]                ; 005f3191 | g_NumWindowMessageHandlers
    INC EBX                             ; 005f3196
    ADD ESI,0x4                         ; 005f3197
    CMP EBX,EAX                         ; 005f319a
    JL 0x005f3176                       ; 005f319c
        ;   XREF to: 005f3176 (CONDITIONAL_JUMP)  ; LAB_005f3176
    MOV EAX,EDI                         ; 005f319e
        ;   Label: LAB_005f319e
    CMP EDI,0x112                       ; 005f31a0
    JNC 0x005f34a9                      ; 005f31a6
        ;   XREF to: 005f34a9 (CONDITIONAL_JUMP)  ; LAB_005f34a9
    CMP EDI,0x20                        ; 005f31ac
    JNC 0x005f3559                      ; 005f31af
        ;   XREF to: 005f3559 (CONDITIONAL_JUMP)  ; LAB_005f3559
    CMP EDI,0x2                         ; 005f31b5
    JC 0x005f31d4                       ; 005f31b8
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    JA 0x005f35bd                       ; 005f31ba
        ;   XREF to: 005f35bd (CONDITIONAL_JUMP)  ; LAB_005f35bd
    PUSH 0x0                            ; 005f31c0
    MOV EBX,0x1                         ; 005f31c2
    CALL dword ptr CS:[0x6114d4]        ; 005f31c7 | g_PostQuitMessageFunc
    MOV dword ptr [0x03f9846c],EBX      ; 005f31ce | g_InputDisabled
    MOV ESI,dword ptr [ESP + 0x20]      ; 005f31d4
        ;   Label: LAB_005f31d4
    PUSH ESI                            ; 005f31d8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f31d9
    PUSH EAX                            ; 005f31dd
    PUSH EDI                            ; 005f31de
        ;   Label: LAB_005f31de
    PUSH EBP                            ; 005f31df
    CALL dword ptr CS:[0x611498]        ; 005f31e0 | g_DefWindowProcAFunc
    MOV EDI,EAX                         ; 005f31e7
    MOV EAX,EDI                         ; 005f31e9
    POP EBP                             ; 005f31eb
    POP EDI                             ; 005f31ec
    POP ESI                             ; 005f31ed
    POP EBX                             ; 005f31ee
    RET 0x10                            ; 005f31ef
    MOV EBX,dword ptr [ESP + 0x20]      ; 005f31f2
        ;   Label: LAB_005f31f2
    PUSH EBX                            ; 005f31f6
    MOV ESI,dword ptr [ESP + 0x20]      ; 005f31f7
    PUSH ESI                            ; 005f31fb
    JMP 0x005f31de                      ; 005f31fc
        ;   XREF to: 005f31de (UNCONDITIONAL_JUMP)  ; LAB_005f31de
    XOR EDI,EDI                         ; 005f31fe
        ;   Label: LAB_005f31fe
    MOV EAX,EDI                         ; 005f3200
    POP EBP                             ; 005f3202
    POP EDI                             ; 005f3203
    POP ESI                             ; 005f3204
    POP EBX                             ; 005f3205
    RET 0x10                            ; 005f3206
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005f3209
        ;   Label: LAB_005f3209
    CMP EAX,0xf140                      ; 005f320d
    JC 0x005f31d4                       ; 005f3212
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f31fe                      ; 005f3214
        ;   XREF to: 005f31fe (CONDITIONAL_JUMP)  ; LAB_005f31fe
    CMP EAX,0xf170                      ; 005f3216
    JZ 0x005f31fe                       ; 005f321b
        ;   XREF to: 005f31fe (CONDITIONAL_JUMP)  ; LAB_005f31fe
    JMP 0x005f31d4                      ; 005f321d
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    MOV EAX,[0x006849a4]                ; 005f321f | g_WindowActive
        ;   Label: LAB_005f321f
    MOV [0x006849ac],EAX                ; 005f3224 | g_PreviousActiveState
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005f3229
    MOV [0x006849a4],EAX                ; 005f322d | g_WindowActive
    MOV EAX,[0x006849ac]                ; 005f3232 | g_PreviousActiveState
    CMP EAX,dword ptr [0x006849a4]      ; 005f3237 | g_WindowActive
    JZ 0x005f31d4                       ; 005f323d
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    CALL dword ptr CS:[0x61157c]        ; 005f323f | g_GetCurrentProcessFunc
    MOV ESI,dword ptr [0x006849a4]      ; 005f3246 | g_WindowActive
    MOV EBX,EAX                         ; 005f324c
    TEST ESI,ESI                        ; 005f324e
    JZ 0x005f3282                       ; 005f3250
        ;   XREF to: 005f3282 (CONDITIONAL_JUMP)  ; LAB_005f3282
    PUSH 0x1                            ; 005f3252
    PUSH EAX                            ; 005f3254
    CALL dword ptr CS:[0x61163c]        ; 005f3255 | g_SetThreadPriorityFunc
    CALL wincore_wddvmem.cpp_videoRestore_FUN_005edc80 ; 005f325c
        ;   XREF to: 005edc80 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_videoRestore_FUN_005edc80()
    CMP dword ptr [0x006849ac],-0x1     ; 005f3261 | g_PreviousActiveState
    JZ 0x005f31d4                       ; 005f3268
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005f326e
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV dword ptr [0x03f98470],0x1      ; 005f3273 | g_ApplicationActive
    JMP 0x005f31d4                      ; 005f327d
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    CALL wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50 ; 005f3282
        ;   XREF to: 005edc50 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50()
        ;   Label: LAB_005f3282
    PUSH -0xf                           ; 005f3287
    PUSH EBX                            ; 005f3289
    CALL dword ptr CS:[0x61163c]        ; 005f328a | g_SetThreadPriorityFunc
    MOV dword ptr [0x03f98470],ESI      ; 005f3291 | g_ApplicationActive
    JMP 0x005f31d4                      ; 005f3297
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    PUSH 0x0                            ; 005f329c
        ;   Label: LAB_005f329c
    MOV EDI,0x1                         ; 005f329e
    CALL dword ptr CS:[0x6114e4]        ; 005f32a3 | g_SetCursorFunc
    MOV EAX,EDI                         ; 005f32aa
    POP EBP                             ; 005f32ac
    POP EDI                             ; 005f32ad
    POP ESI                             ; 005f32ae
    POP EBX                             ; 005f32af
    RET 0x10                            ; 005f32b0
    CMP EBP,dword ptr [ESP + 0x1c]      ; 005f32b3
        ;   Label: LAB_005f32b3
    JZ 0x005f31d4                       ; 005f32b7
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    CALL wincore_wddvmem.cpp_stubFunction_FUN_005edd80 ; 005f32bd
        ;   XREF to: 005edd80 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_stubFunction_FUN_005edd80()
        ;   Label: LAB_005f32bd
    JMP 0x005f31d4                      ; 005f32c2
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    CALL wincore_wddvmem.cpp_stubFunction_FUN_005edd80 ; 005f32c7
        ;   XREF to: 005edd80 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_stubFunction_FUN_005edd80()
        ;   Label: LAB_005f32c7
    JMP 0x005f31d4                      ; 005f32cc
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f32d1
        ;   Label: LAB_005f32d1
    MOV EDX,dword ptr [0x006793a8]      ; 005f32d5 | g_InputKeyMask
    SAR EAX,0x10                        ; 005f32db
    AND EAX,EDX                         ; 005f32de
    MOV byte ptr [EAX + 0x2d03e98],0x1  ; 005f32e0 | g_KeyboardState
    CMP EAX,0x3e                        ; 005f32e7
    JNZ 0x005f31d4                      ; 005f32ea
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    XOR EDI,EDI                         ; 005f32f0
    MOV EAX,EDI                         ; 005f32f2
    POP EBP                             ; 005f32f4
    POP EDI                             ; 005f32f5
    POP ESI                             ; 005f32f6
    POP EBX                             ; 005f32f7
    RET 0x10                            ; 005f32f8
    XOR EAX,EDI                         ; 005f32fb
        ;   Label: LAB_005f32fb
    MOV AL,byte ptr [ESP + 0x1c]        ; 005f32fd
    TEST EAX,EAX                        ; 005f3301
    JZ 0x005f31d4                       ; 005f3303
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    AND EAX,0xffff                      ; 005f3309
    PUSH EAX                            ; 005f330e
    CALL wincore_winrun.cpp_enqueueInput_FUN_005f2f30 ; 005f330f
        ;   XREF to: 005f2f30 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_enqueueInput_FUN_005f2f30(int input_value)
    ADD ESP,0x4                         ; 005f3314
    JMP 0x005f31d4                      ; 005f3317
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    XOR EBX,EBX                         ; 005f331c
        ;   Label: LAB_005f331c
    MOV BX,word ptr [ESP + 0x20]        ; 005f331e
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3323 | g_MouseX
    AND EAX,0xffff                      ; 005f3329
    XOR EDI,EDI                         ; 005f332e
    MOV [0x02cf6a90],EAX                ; 005f3330 | g_MouseY
    MOV EAX,EDI                         ; 005f3335
    POP EBP                             ; 005f3337
    POP EDI                             ; 005f3338
    POP ESI                             ; 005f3339
    POP EBX                             ; 005f333a
    RET 0x10                            ; 005f333b
    XOR EBX,EBX                         ; 005f333e
        ;   Label: LAB_005f333e
    MOV BX,word ptr [ESP + 0x20]        ; 005f3340
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3345 | g_MouseX
    AND EAX,0xffff                      ; 005f334b
    MOV [0x02cf6a90],EAX                ; 005f3350 | g_MouseY
    OR byte ptr [0x02cf6a94],0x1        ; 005f3355 | g_MouseButtonFlags
    MOV AH,0x1                          ; 005f335c
    XOR EDI,EDI                         ; 005f335e
    MOV byte ptr [0x02d04098],AH        ; 005f3360 | g_LeftMousePressed
    MOV EAX,EDI                         ; 005f3366
    POP EBP                             ; 005f3368
    POP EDI                             ; 005f3369
    POP ESI                             ; 005f336a
    POP EBX                             ; 005f336b
    RET 0x10                            ; 005f336c
    XOR EBX,EBX                         ; 005f336f
        ;   Label: LAB_005f336f
    MOV BX,word ptr [ESP + 0x20]        ; 005f3371
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3376 | g_MouseX
    MOV EDI,0x1                         ; 005f337c
    AND EAX,0xffff                      ; 005f3381
    MOV CH,byte ptr [0x02cf6a94]        ; 005f3386 | g_MouseButtonFlags
    MOV [0x02cf6a90],EAX                ; 005f338c | g_MouseY
    AND CH,0xfe                         ; 005f3391
    MOV dword ptr [0x03f98c7c],EDI      ; 005f3394 | g_LeftMouseReleased
    MOV byte ptr [0x02cf6a94],CH        ; 005f339a | g_MouseButtonFlags
    XOR EDI,EDI                         ; 005f33a0
    MOV EAX,EDI                         ; 005f33a2
    POP EBP                             ; 005f33a4
    POP EDI                             ; 005f33a5
    POP ESI                             ; 005f33a6
    POP EBX                             ; 005f33a7
    RET 0x10                            ; 005f33a8
    XOR EBX,EBX                         ; 005f33ab
        ;   Label: LAB_005f33ab
    MOV BX,word ptr [ESP + 0x20]        ; 005f33ad
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f33b2 | g_MouseX
    MOV CL,0x1                          ; 005f33b8
    MOV BH,byte ptr [0x02cf6a94]        ; 005f33ba | g_MouseButtonFlags
    AND EAX,0xffff                      ; 005f33c0
    XOR EDI,EDI                         ; 005f33c5
    MOV [0x02cf6a90],EAX                ; 005f33c7 | g_MouseY
    OR BH,0x2                           ; 005f33cc
    MOV byte ptr [0x02d04099],CL        ; 005f33cf | g_RightMousePressed
    MOV byte ptr [0x02cf6a94],BH        ; 005f33d5 | g_MouseButtonFlags
    MOV EAX,EDI                         ; 005f33db
    POP EBP                             ; 005f33dd
    POP EDI                             ; 005f33de
    POP ESI                             ; 005f33df
    POP EBX                             ; 005f33e0
    RET 0x10                            ; 005f33e1
    XOR EBX,EBX                         ; 005f33e4
        ;   Label: LAB_005f33e4
    MOV BX,word ptr [ESP + 0x20]        ; 005f33e6
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f33eb | g_MouseX
    MOV ESI,0x1                         ; 005f33f1
    MOV BL,byte ptr [0x02cf6a94]        ; 005f33f6 | g_MouseButtonFlags
    AND EAX,0xffff                      ; 005f33fc
    XOR EDI,EDI                         ; 005f3401
    MOV [0x02cf6a90],EAX                ; 005f3403 | g_MouseY
    AND BL,0xfd                         ; 005f3408
    MOV dword ptr [0x03f98c80],ESI      ; 005f340b | g_RightMouseReleased
    MOV byte ptr [0x02cf6a94],BL        ; 005f3411 | g_MouseButtonFlags
    MOV EAX,EDI                         ; 005f3417
    POP EBP                             ; 005f3419
    POP EDI                             ; 005f341a
    POP ESI                             ; 005f341b
    POP EBX                             ; 005f341c
    RET 0x10                            ; 005f341d
    XOR EBX,EBX                         ; 005f3420
        ;   Label: LAB_005f3420
    MOV BX,word ptr [ESP + 0x20]        ; 005f3422
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3427 | g_MouseX
    MOV DL,byte ptr [0x02cf6a94]        ; 005f342d | g_MouseButtonFlags
    AND EAX,0xffff                      ; 005f3433
    OR DL,0x4                           ; 005f3438
    XOR EDI,EDI                         ; 005f343b
    MOV byte ptr [0x02cf6a94],DL        ; 005f343d | g_MouseButtonFlags
    MOV DH,0x1                          ; 005f3443
    MOV [0x02cf6a90],EAX                ; 005f3445 | g_MouseY
    MOV byte ptr [0x02d040a4],DH        ; 005f344a | g_MiddleMousePressed
    MOV EAX,EDI                         ; 005f3450
    POP EBP                             ; 005f3452
    POP EDI                             ; 005f3453
    POP ESI                             ; 005f3454
    POP EBX                             ; 005f3455
    RET 0x10                            ; 005f3456
    XOR EBX,EBX                         ; 005f3459
        ;   Label: LAB_005f3459
    MOV BX,word ptr [ESP + 0x20]        ; 005f345b
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3460 | g_MouseX
    AND EAX,0xffff                      ; 005f3466
    MOV EBX,0x1                         ; 005f346b
    MOV [0x02cf6a90],EAX                ; 005f3470 | g_MouseY
    MOV AH,byte ptr [0x02cf6a94]        ; 005f3475 | g_MouseButtonFlags
    XOR EDI,EDI                         ; 005f347b
    AND AH,0xfb                         ; 005f347d
    MOV dword ptr [0x03f98cac],EBX      ; 005f3480 | g_MiddleMouseReleased
    MOV byte ptr [0x02cf6a94],AH        ; 005f3486 | g_MouseButtonFlags
    MOV EAX,EDI                         ; 005f348c
    POP EBP                             ; 005f348e
    POP EDI                             ; 005f348f
    POP ESI                             ; 005f3490
    POP EBX                             ; 005f3491
    RET 0x10                            ; 005f3492
    MOV EDX,dword ptr [0x03f98468]      ; 005f3495 | g_MainWindowHandle
        ;   Label: LAB_005f3495
    PUSH EDX                            ; 005f349b
    CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0 ; 005f349c
        ;   XREF to: 005f46b0 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_005f46b0(HWND window_handle)
    ADD ESP,0x4                         ; 005f34a1
    JMP 0x005f31d4                      ; 005f34a4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f3209                      ; 005f34a9
        ;   XREF to: 005f3209 (CONDITIONAL_JUMP)  ; LAB_005f3209
        ;   Label: LAB_005f34a9
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f34af
    SHR EAX,0x10                        ; 005f34b3
    AND EAX,0xffff                      ; 005f34b6
    CMP EDI,0x205                       ; 005f34bb
    JNC 0x005f34dc                      ; 005f34c1
        ;   XREF to: 005f34dc (CONDITIONAL_JUMP)  ; LAB_005f34dc
    CMP EDI,0x201                       ; 005f34c3
    JNC 0x005f3536                      ; 005f34c9
        ;   XREF to: 005f3536 (CONDITIONAL_JUMP)  ; LAB_005f3536
    CMP EDI,0x200                       ; 005f34cb
    JZ 0x005f331c                       ; 005f34d1
        ;   XREF to: 005f331c (CONDITIONAL_JUMP)  ; LAB_005f331c
    JMP 0x005f31d4                      ; 005f34d7
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f33e4                      ; 005f34dc
        ;   XREF to: 005f33e4 (CONDITIONAL_JUMP)  ; LAB_005f33e4
        ;   Label: LAB_005f34dc
    CMP EDI,0x30f                       ; 005f34e2
    JNC 0x005f350d                      ; 005f34e8
        ;   XREF to: 005f350d (CONDITIONAL_JUMP)  ; LAB_005f350d
    CMP EDI,0x207                       ; 005f34ea
    JC 0x005f31d4                       ; 005f34f0
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f3420                      ; 005f34f6
        ;   XREF to: 005f3420 (CONDITIONAL_JUMP)  ; LAB_005f3420
    CMP EDI,0x208                       ; 005f34fc
    JZ 0x005f3459                       ; 005f3502
        ;   XREF to: 005f3459 (CONDITIONAL_JUMP)  ; LAB_005f3459
    JMP 0x005f31d4                      ; 005f3508
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f32bd                      ; 005f350d
        ;   XREF to: 005f32bd (CONDITIONAL_JUMP)  ; LAB_005f32bd
        ;   Label: LAB_005f350d
    CMP EDI,0x311                       ; 005f3513
    JC 0x005f31d4                       ; 005f3519
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f32b3                      ; 005f351f
        ;   XREF to: 005f32b3 (CONDITIONAL_JUMP)  ; LAB_005f32b3
    CMP EDI,0x3b9                       ; 005f3525
    JZ 0x005f3495                       ; 005f352b
        ;   XREF to: 005f3495 (CONDITIONAL_JUMP)  ; LAB_005f3495
    JMP 0x005f31d4                      ; 005f3531
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f333e                      ; 005f3536
        ;   XREF to: 005f333e (CONDITIONAL_JUMP)  ; LAB_005f333e
        ;   Label: LAB_005f3536
    CMP EDI,0x202                       ; 005f353c
    JBE 0x005f336f                      ; 005f3542
        ;   XREF to: 005f336f (CONDITIONAL_JUMP)  ; LAB_005f336f
    CMP EDI,0x204                       ; 005f3548
    JZ 0x005f33ab                       ; 005f354e
        ;   XREF to: 005f33ab (CONDITIONAL_JUMP)  ; LAB_005f33ab
    JMP 0x005f31d4                      ; 005f3554
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f329c                      ; 005f3559
        ;   XREF to: 005f329c (CONDITIONAL_JUMP)  ; LAB_005f329c
        ;   Label: LAB_005f3559
    CMP EDI,0x102                       ; 005f355f
    JNC 0x005f3598                      ; 005f3565
        ;   XREF to: 005f3598 (CONDITIONAL_JUMP)  ; LAB_005f3598
    CMP EDI,0x100                       ; 005f3567
    JC 0x005f31d4                       ; 005f356d
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f32d1                      ; 005f3573
        ;   XREF to: 005f32d1 (CONDITIONAL_JUMP)  ; LAB_005f32d1
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f3579
        ;   Label: LAB_005f3579
    MOV EBX,dword ptr [0x006793a8]      ; 005f357d | g_InputKeyMask
    SAR EAX,0x10                        ; 005f3583
    AND EAX,EBX                         ; 005f3586
    MOV dword ptr [EAX*0x4 + 0x3f9847c],0x1 ; 005f3588 | g_MessageFlags[1]
    JMP 0x005f31d4                      ; 005f3593
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f32fb                      ; 005f3598
        ;   XREF to: 005f32fb (CONDITIONAL_JUMP)  ; LAB_005f32fb
        ;   Label: LAB_005f3598
    CMP EDI,0x104                       ; 005f359e
    JC 0x005f31d4                       ; 005f35a4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f32d1                      ; 005f35aa
        ;   XREF to: 005f32d1 (CONDITIONAL_JUMP)  ; LAB_005f32d1
    CMP EDI,0x105                       ; 005f35b0
    JZ 0x005f3579                       ; 005f35b6
        ;   XREF to: 005f3579 (CONDITIONAL_JUMP)  ; LAB_005f3579
    JMP 0x005f31d4                      ; 005f35b8
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4
    CMP EDI,0xf                         ; 005f35bd
        ;   Label: LAB_005f35bd
    JC 0x005f31d4                       ; 005f35c0
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)  ; LAB_005f31d4
    JBE 0x005f32c7                      ; 005f35c6
        ;   XREF to: 005f32c7 (CONDITIONAL_JUMP)  ; LAB_005f32c7
    CMP EDI,0x1c                        ; 005f35cc
    JZ 0x005f321f                       ; 005f35cf
        ;   XREF to: 005f321f (CONDITIONAL_JUMP)  ; LAB_005f321f
    JMP 0x005f31d4                      ; 005f35d5
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)  ; LAB_005f31d4

