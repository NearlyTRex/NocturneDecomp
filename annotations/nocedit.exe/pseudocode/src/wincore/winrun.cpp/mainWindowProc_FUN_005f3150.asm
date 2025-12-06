; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stdcall LRESULT wincore_winrun.cpp_mainWindowProc_FUN_005f3150(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
;
; Parameters:
; typedef HWND HWND__ * Stack[0x4]:4   hWnd
; typedef UINT uint Stack[0x8]:4   message
; typedef WPARAM UINT_PTR Stack[0xc]:4   wParam
; typedef LPARAM LONG_PTR Stack[0x10]:4   lParam
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_005f3680 at 005f37eb
;
; Referenced Globals:
;   DefWindowProcA* PTR_DefWindowProcA_00611498 = 00211a8c
;   PostQuitMessage* PTR_PostQuitMessage_006114d4 = 00211b80
;   SetCursor* PTR_SetCursor_006114e4 = 00211bc8
;   GetCurrentProcess* GetCurrentProcess = 00211e5a
;   SetThreadPriority* SetThreadPriority = 002121f6
;   int g_InputKeyMask = 0x7f
;   int g_WindowActive = -0x1
;   int g_PreviousActiveState = -0x1
;   int g_MouseX
;   int g_MouseY
;   int g_MouseButtonFlags
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
    CMP EBP,dword ptr [0x03f98468]      ; 005f315c | HWND g_MainWindowHandle
    JNZ 0x005f31f2                      ; 005f3162 | LAB_005f31f2
        ;   XREF to: 005f31f2 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x03f98ddc]      ; 005f3168 | int g_NumWindowMessageHandlers
    XOR EBX,EBX                         ; 005f316e
    TEST ECX,ECX                        ; 005f3170
    JLE 0x005f319e                      ; 005f3172 | LAB_005f319e
        ;   XREF to: 005f319e (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005f3174
    MOV EDX,dword ptr [ESP + 0x20]      ; 005f3176
        ;   Label: LAB_005f3176
    PUSH EDX                            ; 005f317a
    MOV ECX,dword ptr [ESP + 0x20]      ; 005f317b
    PUSH ECX                            ; 005f317f
    PUSH EDI                            ; 005f3180
    MOV EAX,ESI                         ; 005f3181
    PUSH EBP                            ; 005f3183
    CALL dword ptr [EAX + 0x3f98de0]    ; 005f3184 | WNDPROC[4] g_WindowMessageHandlers
    ADD ESP,0x10                        ; 005f318a
    TEST EAX,EAX                        ; 005f318d
    JNZ 0x005f31fe                      ; 005f318f | LAB_005f31fe
        ;   XREF to: 005f31fe (CONDITIONAL_JUMP)
    MOV EAX,[0x03f98ddc]                ; 005f3191 | int g_NumWindowMessageHandlers
    INC EBX                             ; 005f3196
    ADD ESI,0x4                         ; 005f3197
    CMP EBX,EAX                         ; 005f319a
    JL 0x005f3176                       ; 005f319c | LAB_005f3176
        ;   XREF to: 005f3176 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 005f319e
        ;   Label: LAB_005f319e
    CMP EDI,0x112                       ; 005f31a0
    JNC 0x005f34a9                      ; 005f31a6 | LAB_005f34a9
        ;   XREF to: 005f34a9 (CONDITIONAL_JUMP)
    CMP EDI,0x20                        ; 005f31ac
    JNC 0x005f3559                      ; 005f31af | LAB_005f3559
        ;   XREF to: 005f3559 (CONDITIONAL_JUMP)
    CMP EDI,0x2                         ; 005f31b5
    JC 0x005f31d4                       ; 005f31b8 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    JA 0x005f35bd                       ; 005f31ba | LAB_005f35bd
        ;   XREF to: 005f35bd (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005f31c0
    MOV EBX,0x1                         ; 005f31c2
    CALL dword ptr CS:[0x6114d4]        ; 005f31c7 | PostQuitMessage * PTR_PostQuitMessage_006114d4
    MOV dword ptr [0x03f9846c],EBX      ; 005f31ce | int g_InputDisabled
    MOV ESI,dword ptr [ESP + 0x20]      ; 005f31d4
        ;   Label: LAB_005f31d4
    PUSH ESI                            ; 005f31d8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f31d9
    PUSH EAX                            ; 005f31dd
    PUSH EDI                            ; 005f31de
        ;   Label: LAB_005f31de
    PUSH EBP                            ; 005f31df
    CALL dword ptr CS:[0x611498]        ; 005f31e0 | DefWindowProcA * PTR_DefWindowProcA_00611498
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
    JMP 0x005f31de                      ; 005f31fc | LAB_005f31de
        ;   XREF to: 005f31de (UNCONDITIONAL_JUMP)
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
    JC 0x005f31d4                       ; 005f3212 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    JBE 0x005f31fe                      ; 005f3214 | LAB_005f31fe
        ;   XREF to: 005f31fe (CONDITIONAL_JUMP)
    CMP EAX,0xf170                      ; 005f3216
    JZ 0x005f31fe                       ; 005f321b | LAB_005f31fe
        ;   XREF to: 005f31fe (CONDITIONAL_JUMP)
    JMP 0x005f31d4                      ; 005f321d | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x006849a4]                ; 005f321f | int g_WindowActive
        ;   Label: LAB_005f321f
    MOV [0x006849ac],EAX                ; 005f3224 | int g_PreviousActiveState
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005f3229
    MOV [0x006849a4],EAX                ; 005f322d | int g_WindowActive
    MOV EAX,[0x006849ac]                ; 005f3232 | int g_PreviousActiveState
    CMP EAX,dword ptr [0x006849a4]      ; 005f3237 | int g_WindowActive
    JZ 0x005f31d4                       ; 005f323d | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    CALL dword ptr CS:[0x61157c]        ; 005f323f | GetCurrentProcess * GetCurrentProcess
    MOV ESI,dword ptr [0x006849a4]      ; 005f3246 | int g_WindowActive
    MOV EBX,EAX                         ; 005f324c
    TEST ESI,ESI                        ; 005f324e
    JZ 0x005f3282                       ; 005f3250 | LAB_005f3282
        ;   XREF to: 005f3282 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005f3252
    PUSH EAX                            ; 005f3254
    CALL dword ptr CS:[0x61163c]        ; 005f3255 | SetThreadPriority * SetThreadPriority
    CALL wincore_wddvmem.cpp_videoRestore_FUN_005edc80 ; 005f325c | void wincore_wddvmem.cpp_videoRestore_FUN_005edc80()
        ;   XREF to: 005edc80 (UNCONDITIONAL_CALL)
    CMP dword ptr [0x006849ac],-0x1     ; 005f3261 | int g_PreviousActiveState
    JZ 0x005f31d4                       ; 005f3268 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005f326e | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV dword ptr [0x03f98470],0x1      ; 005f3273 | int g_ApplicationActive
    JMP 0x005f31d4                      ; 005f327d | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    CALL wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50 ; 005f3282 | void wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50()
        ;   Label: LAB_005f3282
        ;   XREF to: 005edc50 (UNCONDITIONAL_CALL)
    PUSH -0xf                           ; 005f3287
    PUSH EBX                            ; 005f3289
    CALL dword ptr CS:[0x61163c]        ; 005f328a | SetThreadPriority * SetThreadPriority
    MOV dword ptr [0x03f98470],ESI      ; 005f3291 | int g_ApplicationActive
    JMP 0x005f31d4                      ; 005f3297 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 005f329c
        ;   Label: LAB_005f329c
    MOV EDI,0x1                         ; 005f329e
    CALL dword ptr CS:[0x6114e4]        ; 005f32a3 | SetCursor * PTR_SetCursor_006114e4
    MOV EAX,EDI                         ; 005f32aa
    POP EBP                             ; 005f32ac
    POP EDI                             ; 005f32ad
    POP ESI                             ; 005f32ae
    POP EBX                             ; 005f32af
    RET 0x10                            ; 005f32b0
    CMP EBP,dword ptr [ESP + 0x1c]      ; 005f32b3
        ;   Label: LAB_005f32b3
    JZ 0x005f31d4                       ; 005f32b7 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    CALL wincore_wddvmem.cpp_stubFunction_FUN_005edd80 ; 005f32bd | void wincore_wddvmem.cpp_stubFunction_FUN_005edd80()
        ;   Label: LAB_005f32bd
        ;   XREF to: 005edd80 (UNCONDITIONAL_CALL)
    JMP 0x005f31d4                      ; 005f32c2 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    CALL wincore_wddvmem.cpp_stubFunction_FUN_005edd80 ; 005f32c7 | void wincore_wddvmem.cpp_stubFunction_FUN_005edd80()
        ;   Label: LAB_005f32c7
        ;   XREF to: 005edd80 (UNCONDITIONAL_CALL)
    JMP 0x005f31d4                      ; 005f32cc | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f32d1
        ;   Label: LAB_005f32d1
    MOV EDX,dword ptr [0x006793a8]      ; 005f32d5 | int g_InputKeyMask
    SAR EAX,0x10                        ; 005f32db
    AND EAX,EDX                         ; 005f32de
    MOV byte ptr [EAX + 0x2d03e98],0x1  ; 005f32e0 | char[256] g_KeyboardState
    CMP EAX,0x3e                        ; 005f32e7
    JNZ 0x005f31d4                      ; 005f32ea | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
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
    JZ 0x005f31d4                       ; 005f3303 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    AND EAX,0xffff                      ; 005f3309
    PUSH EAX                            ; 005f330e
    CALL wincore_winrun.cpp_enqueueInput_FUN_005f2f30 ; 005f330f | void wincore_winrun.cpp_enqueueInput_FUN_005f2f30(int input_value)
        ;   XREF to: 005f2f30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f3314
    JMP 0x005f31d4                      ; 005f3317 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005f331c
        ;   Label: LAB_005f331c
    MOV BX,word ptr [ESP + 0x20]        ; 005f331e
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3323 | int g_MouseX
    AND EAX,0xffff                      ; 005f3329
    XOR EDI,EDI                         ; 005f332e
    MOV [0x02cf6a90],EAX                ; 005f3330 | int g_MouseY
    MOV EAX,EDI                         ; 005f3335
    POP EBP                             ; 005f3337
    POP EDI                             ; 005f3338
    POP ESI                             ; 005f3339
    POP EBX                             ; 005f333a
    RET 0x10                            ; 005f333b
    XOR EBX,EBX                         ; 005f333e
        ;   Label: LAB_005f333e
    MOV BX,word ptr [ESP + 0x20]        ; 005f3340
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3345 | int g_MouseX
    AND EAX,0xffff                      ; 005f334b
    MOV [0x02cf6a90],EAX                ; 005f3350 | int g_MouseY
    OR byte ptr [0x02cf6a94],0x1        ; 005f3355 | int g_MouseButtonFlags
    MOV AH,0x1                          ; 005f335c
    XOR EDI,EDI                         ; 005f335e
    MOV byte ptr [0x02d04098],AH        ; 005f3360 | byte g_LeftMousePressed
    MOV EAX,EDI                         ; 005f3366
    POP EBP                             ; 005f3368
    POP EDI                             ; 005f3369
    POP ESI                             ; 005f336a
    POP EBX                             ; 005f336b
    RET 0x10                            ; 005f336c
    XOR EBX,EBX                         ; 005f336f
        ;   Label: LAB_005f336f
    MOV BX,word ptr [ESP + 0x20]        ; 005f3371
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3376 | int g_MouseX
    MOV EDI,0x1                         ; 005f337c
    AND EAX,0xffff                      ; 005f3381
    MOV CH,byte ptr [0x02cf6a94]        ; 005f3386 | int g_MouseButtonFlags
    MOV [0x02cf6a90],EAX                ; 005f338c | int g_MouseY
    AND CH,0xfe                         ; 005f3391
    MOV dword ptr [0x03f98c7c],EDI      ; 005f3394 | int g_LeftMouseReleased
    MOV byte ptr [0x02cf6a94],CH        ; 005f339a | int g_MouseButtonFlags
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
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f33b2 | int g_MouseX
    MOV CL,0x1                          ; 005f33b8
    MOV BH,byte ptr [0x02cf6a94]        ; 005f33ba | int g_MouseButtonFlags
    AND EAX,0xffff                      ; 005f33c0
    XOR EDI,EDI                         ; 005f33c5
    MOV [0x02cf6a90],EAX                ; 005f33c7 | int g_MouseY
    OR BH,0x2                           ; 005f33cc
    MOV byte ptr [0x02d04099],CL        ; 005f33cf | byte g_RightMousePressed
    MOV byte ptr [0x02cf6a94],BH        ; 005f33d5 | int g_MouseButtonFlags
    MOV EAX,EDI                         ; 005f33db
    POP EBP                             ; 005f33dd
    POP EDI                             ; 005f33de
    POP ESI                             ; 005f33df
    POP EBX                             ; 005f33e0
    RET 0x10                            ; 005f33e1
    XOR EBX,EBX                         ; 005f33e4
        ;   Label: LAB_005f33e4
    MOV BX,word ptr [ESP + 0x20]        ; 005f33e6
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f33eb | int g_MouseX
    MOV ESI,0x1                         ; 005f33f1
    MOV BL,byte ptr [0x02cf6a94]        ; 005f33f6 | int g_MouseButtonFlags
    AND EAX,0xffff                      ; 005f33fc
    XOR EDI,EDI                         ; 005f3401
    MOV [0x02cf6a90],EAX                ; 005f3403 | int g_MouseY
    AND BL,0xfd                         ; 005f3408
    MOV dword ptr [0x03f98c80],ESI      ; 005f340b | int g_RightMouseReleased
    MOV byte ptr [0x02cf6a94],BL        ; 005f3411 | int g_MouseButtonFlags
    MOV EAX,EDI                         ; 005f3417
    POP EBP                             ; 005f3419
    POP EDI                             ; 005f341a
    POP ESI                             ; 005f341b
    POP EBX                             ; 005f341c
    RET 0x10                            ; 005f341d
    XOR EBX,EBX                         ; 005f3420
        ;   Label: LAB_005f3420
    MOV BX,word ptr [ESP + 0x20]        ; 005f3422
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3427 | int g_MouseX
    MOV DL,byte ptr [0x02cf6a94]        ; 005f342d | int g_MouseButtonFlags
    AND EAX,0xffff                      ; 005f3433
    OR DL,0x4                           ; 005f3438
    XOR EDI,EDI                         ; 005f343b
    MOV byte ptr [0x02cf6a94],DL        ; 005f343d | int g_MouseButtonFlags
    MOV DH,0x1                          ; 005f3443
    MOV [0x02cf6a90],EAX                ; 005f3445 | int g_MouseY
    MOV byte ptr [0x02d040a4],DH        ; 005f344a | byte g_MiddleMousePressed
    MOV EAX,EDI                         ; 005f3450
    POP EBP                             ; 005f3452
    POP EDI                             ; 005f3453
    POP ESI                             ; 005f3454
    POP EBX                             ; 005f3455
    RET 0x10                            ; 005f3456
    XOR EBX,EBX                         ; 005f3459
        ;   Label: LAB_005f3459
    MOV BX,word ptr [ESP + 0x20]        ; 005f345b
    MOV dword ptr [0x02cf6a8c],EBX      ; 005f3460 | int g_MouseX
    AND EAX,0xffff                      ; 005f3466
    MOV EBX,0x1                         ; 005f346b
    MOV [0x02cf6a90],EAX                ; 005f3470 | int g_MouseY
    MOV AH,byte ptr [0x02cf6a94]        ; 005f3475 | int g_MouseButtonFlags
    XOR EDI,EDI                         ; 005f347b
    AND AH,0xfb                         ; 005f347d
    MOV dword ptr [0x03f98cac],EBX      ; 005f3480 | int g_MiddleMouseReleased
    MOV byte ptr [0x02cf6a94],AH        ; 005f3486 | int g_MouseButtonFlags
    MOV EAX,EDI                         ; 005f348c
    POP EBP                             ; 005f348e
    POP EDI                             ; 005f348f
    POP ESI                             ; 005f3490
    POP EBX                             ; 005f3491
    RET 0x10                            ; 005f3492
    MOV EDX,dword ptr [0x03f98468]      ; 005f3495 | HWND g_MainWindowHandle
        ;   Label: LAB_005f3495
    PUSH EDX                            ; 005f349b
    CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0 ; 005f349c | void wincore_winvideo.cpp_closeMovie_FUN_005f46b0(HWND window_handle)
        ;   XREF to: 005f46b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f34a1
    JMP 0x005f31d4                      ; 005f34a4 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    JBE 0x005f3209                      ; 005f34a9 | LAB_005f3209
        ;   Label: LAB_005f34a9
        ;   XREF to: 005f3209 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f34af
    SHR EAX,0x10                        ; 005f34b3
    AND EAX,0xffff                      ; 005f34b6
    CMP EDI,0x205                       ; 005f34bb
    JNC 0x005f34dc                      ; 005f34c1 | LAB_005f34dc
        ;   XREF to: 005f34dc (CONDITIONAL_JUMP)
    CMP EDI,0x201                       ; 005f34c3
    JNC 0x005f3536                      ; 005f34c9 | LAB_005f3536
        ;   XREF to: 005f3536 (CONDITIONAL_JUMP)
    CMP EDI,0x200                       ; 005f34cb
    JZ 0x005f331c                       ; 005f34d1 | LAB_005f331c
        ;   XREF to: 005f331c (CONDITIONAL_JUMP)
    JMP 0x005f31d4                      ; 005f34d7 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    JBE 0x005f33e4                      ; 005f34dc | LAB_005f33e4
        ;   Label: LAB_005f34dc
        ;   XREF to: 005f33e4 (CONDITIONAL_JUMP)
    CMP EDI,0x30f                       ; 005f34e2
    JNC 0x005f350d                      ; 005f34e8 | LAB_005f350d
        ;   XREF to: 005f350d (CONDITIONAL_JUMP)
    CMP EDI,0x207                       ; 005f34ea
    JC 0x005f31d4                       ; 005f34f0 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    JBE 0x005f3420                      ; 005f34f6 | LAB_005f3420
        ;   XREF to: 005f3420 (CONDITIONAL_JUMP)
    CMP EDI,0x208                       ; 005f34fc
    JZ 0x005f3459                       ; 005f3502 | LAB_005f3459
        ;   XREF to: 005f3459 (CONDITIONAL_JUMP)
    JMP 0x005f31d4                      ; 005f3508 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    JBE 0x005f32bd                      ; 005f350d | LAB_005f32bd
        ;   Label: LAB_005f350d
        ;   XREF to: 005f32bd (CONDITIONAL_JUMP)
    CMP EDI,0x311                       ; 005f3513
    JC 0x005f31d4                       ; 005f3519 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    JBE 0x005f32b3                      ; 005f351f | LAB_005f32b3
        ;   XREF to: 005f32b3 (CONDITIONAL_JUMP)
    CMP EDI,0x3b9                       ; 005f3525
    JZ 0x005f3495                       ; 005f352b | LAB_005f3495
        ;   XREF to: 005f3495 (CONDITIONAL_JUMP)
    JMP 0x005f31d4                      ; 005f3531 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    JBE 0x005f333e                      ; 005f3536 | LAB_005f333e
        ;   Label: LAB_005f3536
        ;   XREF to: 005f333e (CONDITIONAL_JUMP)
    CMP EDI,0x202                       ; 005f353c
    JBE 0x005f336f                      ; 005f3542 | LAB_005f336f
        ;   XREF to: 005f336f (CONDITIONAL_JUMP)
    CMP EDI,0x204                       ; 005f3548
    JZ 0x005f33ab                       ; 005f354e | LAB_005f33ab
        ;   XREF to: 005f33ab (CONDITIONAL_JUMP)
    JMP 0x005f31d4                      ; 005f3554 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    JBE 0x005f329c                      ; 005f3559 | LAB_005f329c
        ;   Label: LAB_005f3559
        ;   XREF to: 005f329c (CONDITIONAL_JUMP)
    CMP EDI,0x102                       ; 005f355f
    JNC 0x005f3598                      ; 005f3565 | LAB_005f3598
        ;   XREF to: 005f3598 (CONDITIONAL_JUMP)
    CMP EDI,0x100                       ; 005f3567
    JC 0x005f31d4                       ; 005f356d | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    JBE 0x005f32d1                      ; 005f3573 | LAB_005f32d1
        ;   XREF to: 005f32d1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f3579
        ;   Label: LAB_005f3579
    MOV EBX,dword ptr [0x006793a8]      ; 005f357d | int g_InputKeyMask
    SAR EAX,0x10                        ; 005f3583
    AND EAX,EBX                         ; 005f3586
    MOV dword ptr [EAX*0x4 + 0x3f9847c],0x1 ; 005f3588 | g_MessageFlags[1]
    JMP 0x005f31d4                      ; 005f3593 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    JBE 0x005f32fb                      ; 005f3598 | LAB_005f32fb
        ;   Label: LAB_005f3598
        ;   XREF to: 005f32fb (CONDITIONAL_JUMP)
    CMP EDI,0x104                       ; 005f359e
    JC 0x005f31d4                       ; 005f35a4 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    JBE 0x005f32d1                      ; 005f35aa | LAB_005f32d1
        ;   XREF to: 005f32d1 (CONDITIONAL_JUMP)
    CMP EDI,0x105                       ; 005f35b0
    JZ 0x005f3579                       ; 005f35b6 | LAB_005f3579
        ;   XREF to: 005f3579 (CONDITIONAL_JUMP)
    JMP 0x005f31d4                      ; 005f35b8 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
    CMP EDI,0xf                         ; 005f35bd
        ;   Label: LAB_005f35bd
    JC 0x005f31d4                       ; 005f35c0 | LAB_005f31d4
        ;   XREF to: 005f31d4 (CONDITIONAL_JUMP)
    JBE 0x005f32c7                      ; 005f35c6 | LAB_005f32c7
        ;   XREF to: 005f32c7 (CONDITIONAL_JUMP)
    CMP EDI,0x1c                        ; 005f35cc
    JZ 0x005f321f                       ; 005f35cf | LAB_005f321f
        ;   XREF to: 005f321f (CONDITIONAL_JUMP)
    JMP 0x005f31d4                      ; 005f35d5 | LAB_005f31d4
        ;   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)

