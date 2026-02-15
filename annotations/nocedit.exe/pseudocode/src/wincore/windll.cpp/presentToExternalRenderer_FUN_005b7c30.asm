; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)
;
; Parameters:
; int              Stack[0x4]:4   skip_buffer_copy
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004dbab6
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 at 005edb08
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_UseExternalRenderer
;   APIDLL_toggle* g_APIDLL_toggle
;   int g_ExternalFrameLocked
;
; Called Functions:
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
;   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
;   wincore_windll.cpp_lockFrame_FUN_005b7210
;   wincore_windll.cpp_unlockFrame_FUN_005b7250
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b7c30
        ;   Label: wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
    SUB ESP,0x4                         ; 005b7c31
    CMP dword ptr [0x02d03e94],0x0      ; 005b7c34 | g_UseExternalRenderer
    JZ 0x005b7cf5                       ; 005b7c3b
        ;   XREF to: 005b7cf5 (CONDITIONAL_JUMP)  ; LAB_005b7cf5
    PUSH EDI                            ; 005b7c41
    CMP dword ptr [ESP + 0x10],0x0      ; 005b7c42
    JNZ 0x005b7ce1                      ; 005b7c47
        ;   XREF to: 005b7ce1 (CONDITIONAL_JUMP)  ; LAB_005b7ce1
    CMP dword ptr [0x03f6b99c],0x0      ; 005b7c4d | g_ExternalFrameLocked
    JNZ 0x005b7ce1                      ; 005b7c54
        ;   XREF to: 005b7ce1 (CONDITIONAL_JUMP)  ; LAB_005b7ce1
    PUSH ESI                            ; 005b7c5a
    PUSH EBX                            ; 005b7c5b
    MOV EDX,dword ptr [0x00679394]      ; 005b7c5c | g_WindowWidth
    MOV ESI,dword ptr [0x0067939c]      ; 005b7c62 | g_BitsPerPixel
    IMUL EDX,ESI                        ; 005b7c68
    MOV EAX,EDX                         ; 005b7c6b
    SAR EDX,0x1f                        ; 005b7c6d
    SHL EDX,0x3                         ; 005b7c70
    SBB EAX,EDX                         ; 005b7c73
    SAR EAX,0x3                         ; 005b7c75
    MOV EBX,dword ptr [0x02cf6a9c]      ; 005b7c78 | g_ScreenBufferArray
    XOR EDI,EDI                         ; 005b7c7e
    MOV EBP,EAX                         ; 005b7c80
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 005b7c82
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 005b7c87
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
    MOV EAX,[0x00679398]                ; 005b7c8c | g_WindowHeight
    MOV dword ptr [ESP + 0xc],EDI       ; 005b7c91
    TEST EAX,EAX                        ; 005b7c95
    JLE 0x005b7cd0                      ; 005b7c97
        ;   XREF to: 005b7cd0 (CONDITIONAL_JUMP)  ; LAB_005b7cd0
    XOR EDX,EDX                         ; 005b7c99
    MOV ECX,EBP                         ; 005b7c9b
        ;   Label: LAB_005b7c9b
    MOV ESI,EBX                         ; 005b7c9d
    MOV EDI,dword ptr [EDX + 0x2cf6a9c] ; 005b7c9f | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDI                            ; 005b7ca5
    MOV EAX,ECX                         ; 005b7ca6
    SHR ECX,0x2                         ; 005b7ca8
    MOVSD.REP ES:EDI,ESI                ; 005b7cab
    MOV CL,AL                           ; 005b7cad
    AND CL,0x3                          ; 005b7caf
    MOVSB.REP ES:EDI,ESI                ; 005b7cb2
    POP EDI                             ; 005b7cb4
    ADD EDX,0x4                         ; 005b7cb5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b7cb8
    MOV ESI,dword ptr [0x00679398]      ; 005b7cbc | g_WindowHeight
    INC ECX                             ; 005b7cc2
    ADD EBX,EBP                         ; 005b7cc3
    MOV dword ptr [ESP + 0xc],ECX       ; 005b7cc5
    CMP ECX,ESI                         ; 005b7cc9
    JL 0x005b7c9b                       ; 005b7ccb
        ;   XREF to: 005b7c9b (CONDITIONAL_JUMP)  ; LAB_005b7c9b
    LEA EAX,[EAX]                       ; 005b7ccd
    PUSH 0x0                            ; 005b7cd0
        ;   Label: LAB_005b7cd0
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 005b7cd2
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 005b7cd7
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 005b7cda
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
    POP EBX                             ; 005b7cdf
    POP ESI                             ; 005b7ce0
    XOR EDI,EDI                         ; 005b7ce1
        ;   Label: LAB_005b7ce1
    MOV dword ptr [0x03f6b99c],EDI      ; 005b7ce3 | g_ExternalFrameLocked
    CALL dword ptr [0x03f6b894]         ; 005b7ce9 | g_APIDLL_toggle
    POP EDI                             ; 005b7cef
    ADD ESP,0x4                         ; 005b7cf0
    POP EBP                             ; 005b7cf3
    RET                                 ; 005b7cf4
    XOR EAX,EAX                         ; 005b7cf5
        ;   Label: LAB_005b7cf5
    ADD ESP,0x4                         ; 005b7cf7
    POP EBP                             ; 005b7cfa
    RET                                 ; 005b7cfb

