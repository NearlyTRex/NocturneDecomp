; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_restoreScreen_FUN_0049e4d0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_UseExternalRenderer
;
; Called Functions:
;   wincore_windll.cpp_lockFrame_FUN_005b7210
;   wincore_windll.cpp_unlockFrame_FUN_005b7250
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049e4d0
        ;   Label: shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0
    SUB ESP,0x12c0                      ; 0049e4d1
    CMP dword ptr [0x02d03e94],0x0      ; 0049e4d7 | g_UseExternalRenderer
    JZ 0x0049e579                       ; 0049e4de
        ;   XREF to: 0049e579 (CONDITIONAL_JUMP)  ; LAB_0049e579
    PUSH ESI                            ; 0049e4e4
    PUSH EBX                            ; 0049e4e5
    MOV ECX,dword ptr [0x00679398]      ; 0049e4e6 | g_WindowHeight
    TEST ECX,ECX                        ; 0049e4ec
    JLE 0x0049e510                      ; 0049e4ee
        ;   XREF to: 0049e510 (CONDITIONAL_JUMP)  ; LAB_0049e510
    LEA EBX,[ECX*0x4 + 0x0]             ; 0049e4f0
    XOR EAX,EAX                         ; 0049e4f7
    ADD EAX,0x4                         ; 0049e4f9
        ;   Label: LAB_0049e4f9
    MOV EDX,dword ptr [EAX + 0x2cf6a98] ; 0049e4fc | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV dword ptr [ESP + EAX*0x1 + 0x4],EDX ; 0049e502
    CMP EAX,EBX                         ; 0049e506
    JL 0x0049e4f9                       ; 0049e508
        ;   XREF to: 0049e4f9 (CONDITIONAL_JUMP)  ; LAB_0049e4f9
    LEA EAX,[EAX]                       ; 0049e50a
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 0049e510
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
        ;   Label: LAB_0049e510
    MOV EDX,dword ptr [0x00679394]      ; 0049e515 | g_WindowWidth
    MOV EBX,dword ptr [0x0067939c]      ; 0049e51b | g_BitsPerPixel
    IMUL EDX,EBX                        ; 0049e521
    MOV EAX,EDX                         ; 0049e524
    SAR EDX,0x1f                        ; 0049e526
    SHL EDX,0x3                         ; 0049e529
    SBB EAX,EDX                         ; 0049e52c
    SAR EAX,0x3                         ; 0049e52e
    MOV ESI,dword ptr [0x00679398]      ; 0049e531 | g_WindowHeight
    XOR EBX,EBX                         ; 0049e537
    MOV EBP,EAX                         ; 0049e539
    TEST ESI,ESI                        ; 0049e53b
    JLE 0x0049e56d                      ; 0049e53d
        ;   XREF to: 0049e56d (CONDITIONAL_JUMP)  ; LAB_0049e56d
    PUSH EDI                            ; 0049e53f
    XOR EDX,EDX                         ; 0049e540
    MOV ECX,EBP                         ; 0049e542
        ;   Label: LAB_0049e542
    MOV ESI,dword ptr [ESP + EDX*0x1 + 0xc] ; 0049e544
    MOV EDI,dword ptr [EDX + 0x2cf6a9c] ; 0049e548 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDI                            ; 0049e54e
    MOV EAX,ECX                         ; 0049e54f
    SHR ECX,0x2                         ; 0049e551
    MOVSD.REP ES:EDI,ESI                ; 0049e554
    MOV CL,AL                           ; 0049e556
    AND CL,0x3                          ; 0049e558
    MOVSB.REP ES:EDI,ESI                ; 0049e55b
    POP EDI                             ; 0049e55d
    INC EBX                             ; 0049e55e
    MOV EDI,dword ptr [0x00679398]      ; 0049e55f | g_WindowHeight
    ADD EDX,0x4                         ; 0049e565
    CMP EBX,EDI                         ; 0049e568
    JL 0x0049e542                       ; 0049e56a
        ;   XREF to: 0049e542 (CONDITIONAL_JUMP)  ; LAB_0049e542
    POP EDI                             ; 0049e56c
    PUSH 0x1                            ; 0049e56d
        ;   Label: LAB_0049e56d
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 0049e56f
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 0049e574
    POP EBX                             ; 0049e577
    POP ESI                             ; 0049e578
    ADD ESP,0x12c0                      ; 0049e579
        ;   Label: LAB_0049e579
    POP EBP                             ; 0049e57f
    RET                                 ; 0049e580

