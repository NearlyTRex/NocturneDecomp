; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 at 004a0b9a
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

    PUSH EBP                            ; 0049e410
        ;   Label: shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
    SUB ESP,0x12c0                      ; 0049e411
    CMP dword ptr [0x02d03e94],0x0      ; 0049e417 | g_UseExternalRenderer
    JZ 0x0049e4b9                       ; 0049e41e
        ;   XREF to: 0049e4b9 (CONDITIONAL_JUMP)  ; LAB_0049e4b9
    PUSH ESI                            ; 0049e424
    PUSH EBX                            ; 0049e425
    MOV ECX,dword ptr [0x00679398]      ; 0049e426 | g_WindowHeight
    TEST ECX,ECX                        ; 0049e42c
    JLE 0x0049e450                      ; 0049e42e
        ;   XREF to: 0049e450 (CONDITIONAL_JUMP)  ; LAB_0049e450
    LEA EBX,[ECX*0x4 + 0x0]             ; 0049e430
    XOR EAX,EAX                         ; 0049e437
    ADD EAX,0x4                         ; 0049e439
        ;   Label: LAB_0049e439
    MOV EDX,dword ptr [EAX + 0x2cf6a98] ; 0049e43c | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV dword ptr [ESP + EAX*0x1 + 0x4],EDX ; 0049e442
    CMP EAX,EBX                         ; 0049e446
    JL 0x0049e439                       ; 0049e448
        ;   XREF to: 0049e439 (CONDITIONAL_JUMP)  ; LAB_0049e439
    LEA EAX,[EAX]                       ; 0049e44a
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 0049e450
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
        ;   Label: LAB_0049e450
    MOV EDX,dword ptr [0x00679394]      ; 0049e455 | g_WindowWidth
    MOV EBX,dword ptr [0x0067939c]      ; 0049e45b | g_BitsPerPixel
    IMUL EDX,EBX                        ; 0049e461
    MOV EAX,EDX                         ; 0049e464
    SAR EDX,0x1f                        ; 0049e466
    SHL EDX,0x3                         ; 0049e469
    SBB EAX,EDX                         ; 0049e46c
    SAR EAX,0x3                         ; 0049e46e
    MOV ESI,dword ptr [0x00679398]      ; 0049e471 | g_WindowHeight
    XOR EBX,EBX                         ; 0049e477
    MOV EBP,EAX                         ; 0049e479
    TEST ESI,ESI                        ; 0049e47b
    JLE 0x0049e4ad                      ; 0049e47d
        ;   XREF to: 0049e4ad (CONDITIONAL_JUMP)  ; LAB_0049e4ad
    PUSH EDI                            ; 0049e47f
    XOR EDX,EDX                         ; 0049e480
    MOV ECX,EBP                         ; 0049e482
        ;   Label: LAB_0049e482
    MOV ESI,dword ptr [EDX + 0x2cf6a9c] ; 0049e484 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EDI,dword ptr [ESP + EDX*0x1 + 0xc] ; 0049e48a
    PUSH EDI                            ; 0049e48e
    MOV EAX,ECX                         ; 0049e48f
    SHR ECX,0x2                         ; 0049e491
    MOVSD.REP ES:EDI,ESI                ; 0049e494
    MOV CL,AL                           ; 0049e496
    AND CL,0x3                          ; 0049e498
    MOVSB.REP ES:EDI,ESI                ; 0049e49b
    POP EDI                             ; 0049e49d
    INC EBX                             ; 0049e49e
    MOV EDI,dword ptr [0x00679398]      ; 0049e49f | g_WindowHeight
    ADD EDX,0x4                         ; 0049e4a5
    CMP EBX,EDI                         ; 0049e4a8
    JL 0x0049e482                       ; 0049e4aa
        ;   XREF to: 0049e482 (CONDITIONAL_JUMP)  ; LAB_0049e482
    POP EDI                             ; 0049e4ac
    PUSH 0x1                            ; 0049e4ad
        ;   Label: LAB_0049e4ad
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 0049e4af
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 0049e4b4
    POP EBX                             ; 0049e4b7
    POP ESI                             ; 0049e4b8
    ADD ESP,0x12c0                      ; 0049e4b9
        ;   Label: LAB_0049e4b9
    POP EBP                             ; 0049e4bf
    RET                                 ; 0049e4c0

