; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00485640(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485640
        ;   Label: FUN_00485640
    MOV EAX,dword ptr [ESP + 0x8]       ; 00485641
    MOV EDX,dword ptr [ESP + 0xc]       ; 00485645
    MOV ECX,dword ptr [ESP + 0x10]      ; 00485649
    CMP EAX,EDX                         ; 0048564d
    JNZ 0x0048566f                      ; 0048564f
        ;   XREF to: 0048566f (CONDITIONAL_JUMP)  ; LAB_0048566f
    LEA EDX,[EAX + 0xc]                 ; 00485651
        ;   Label: LAB_00485651
    CMP EDX,ECX                         ; 00485654
    JNZ 0x00485681                      ; 00485656
        ;   XREF to: 00485681 (CONDITIONAL_JUMP)  ; LAB_00485681
    MOV EDX,dword ptr [ESP + 0x14]      ; 00485658
        ;   Label: LAB_00485658
    MOV dword ptr [EAX + 0x20],0x2      ; 0048565c
    MOV dword ptr [EAX + 0x18],EDX      ; 00485663
    MOV EDX,dword ptr [ESP + 0x18]      ; 00485666
    MOV dword ptr [EAX + 0x1c],EDX      ; 0048566a
    POP EBX                             ; 0048566d
    RET                                 ; 0048566e
    MOV EBX,dword ptr [EDX]             ; 0048566f
        ;   Label: LAB_0048566f
    MOV dword ptr [EAX],EBX             ; 00485671
    MOV EBX,dword ptr [EDX + 0x4]       ; 00485673
    MOV dword ptr [EAX + 0x4],EBX       ; 00485676
    MOV EBX,dword ptr [EDX + 0x8]       ; 00485679
    MOV dword ptr [EAX + 0x8],EBX       ; 0048567c
    JMP 0x00485651                      ; 0048567f
        ;   XREF to: 00485651 (UNCONDITIONAL_JUMP)  ; LAB_00485651
    MOV EBX,dword ptr [ECX]             ; 00485681
        ;   Label: LAB_00485681
    MOV dword ptr [EDX],EBX             ; 00485683
    MOV EBX,dword ptr [ECX + 0x4]       ; 00485685
    MOV dword ptr [EDX + 0x4],EBX       ; 00485688
    MOV EBX,dword ptr [ECX + 0x8]       ; 0048568b
    MOV dword ptr [EDX + 0x8],EBX       ; 0048568e
    JMP 0x00485658                      ; 00485691
        ;   XREF to: 00485658 (UNCONDITIONAL_JUMP)  ; LAB_00485658

