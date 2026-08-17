; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_toggle_FUN_00532ba0(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910 at 005539d2
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
;   engine_special.cpp_lockFrame_FUN_005322e0
;   engine_special.cpp_unlockFrame_FUN_00532320
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520
;   wincore_wddvmem.cpp_openScreenDevice_FUN_00553470
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00532ba0
        ;   Label: engine_special.cpp_toggle_FUN_00532ba0
    SUB ESP,0x4                         ; 00532ba1
    CMP dword ptr [0x01c02594],0x0      ; 00532ba4 | g_UseExternalRenderer
    JZ 0x00532c60                       ; 00532bab
        ;   XREF to: 00532c60 (CONDITIONAL_JUMP)  ; LAB_00532c60
    PUSH EDI                            ; 00532bb1
    CMP dword ptr [0x02dc9e24],0x0      ; 00532bb2 | g_ExternalFrameLocked
    JNZ 0x00532c4c                      ; 00532bb9
        ;   XREF to: 00532c4c (CONDITIONAL_JUMP)  ; LAB_00532c4c
    PUSH ESI                            ; 00532bbf
    PUSH EBX                            ; 00532bc0
    MOV EDX,dword ptr [0x005b761c]      ; 00532bc1 | g_WindowWidth
    MOV ESI,dword ptr [0x005b7624]      ; 00532bc7 | g_BitsPerPixel
    IMUL EDX,ESI                        ; 00532bcd
    MOV EAX,EDX                         ; 00532bd0
    SAR EDX,0x1f                        ; 00532bd2
    SHL EDX,0x3                         ; 00532bd5
    SBB EAX,EDX                         ; 00532bd8
    SAR EAX,0x3                         ; 00532bda
    MOV EBX,dword ptr [0x01bd2fa0]      ; 00532bdd | g_ScreenBufferArray
    XOR EDI,EDI                         ; 00532be3
    MOV EBP,EAX                         ; 00532be5
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_00553470 ; 00532be7
        ;   XREF to: 00553470 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_00553470()
    CALL engine_special.cpp_lockFrame_FUN_005322e0 ; 00532bec
        ;   XREF to: 005322e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_lockFrame_FUN_005322e0()
    MOV EAX,[0x005b7620]                ; 00532bf1 | g_WindowHeight
    MOV dword ptr [ESP + 0xc],EDI       ; 00532bf6
    TEST EAX,EAX                        ; 00532bfa
    JLE 0x00532c40                      ; 00532bfc
        ;   XREF to: 00532c40 (CONDITIONAL_JUMP)  ; LAB_00532c40
    XOR EDX,EDX                         ; 00532bfe
    MOV ECX,EBP                         ; 00532c00
        ;   Label: LAB_00532c00
    MOV ESI,EBX                         ; 00532c02
    MOV EDI,dword ptr [EDX + 0x1bd2fa0] ; 00532c04 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDI                            ; 00532c0a
    MOV EAX,ECX                         ; 00532c0b
    SHR ECX,0x2                         ; 00532c0d
    MOVSD.REP ES:EDI,ESI                ; 00532c10
    MOV CL,AL                           ; 00532c12
    AND CL,0x3                          ; 00532c14
    MOVSB.REP ES:EDI,ESI                ; 00532c17
    POP EDI                             ; 00532c19
    ADD EDX,0x4                         ; 00532c1a
    MOV ECX,dword ptr [ESP + 0xc]       ; 00532c1d
    MOV ESI,dword ptr [0x005b7620]      ; 00532c21 | g_WindowHeight
    INC ECX                             ; 00532c27
    ADD EBX,EBP                         ; 00532c28
    MOV dword ptr [ESP + 0xc],ECX       ; 00532c2a
    CMP ECX,ESI                         ; 00532c2e
    JL 0x00532c00                       ; 00532c30
        ;   XREF to: 00532c00 (CONDITIONAL_JUMP)  ; LAB_00532c00
    LEA EAX,[EAX]                       ; 00532c32
    LEA EDX,[EDX]                       ; 00532c38
    MOV EAX,EAX                         ; 00532c3e
    CALL engine_special.cpp_unlockFrame_FUN_00532320 ; 00532c40
        ;   XREF to: 00532320 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00532320(int clear_lock_flag)
        ;   Label: LAB_00532c40
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520 ; 00532c45
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520()
    POP EBX                             ; 00532c4a
    POP ESI                             ; 00532c4b
    XOR EDI,EDI                         ; 00532c4c
        ;   Label: LAB_00532c4c
    MOV dword ptr [0x02dc9e24],EDI      ; 00532c4e | g_ExternalFrameLocked
    CALL dword ptr [0x02dc9d7c]         ; 00532c54 | g_APIDLL_toggle
    POP EDI                             ; 00532c5a
    ADD ESP,0x4                         ; 00532c5b
    POP EBP                             ; 00532c5e
    RET                                 ; 00532c5f
    XOR EAX,EAX                         ; 00532c60
        ;   Label: LAB_00532c60
    ADD ESP,0x4                         ; 00532c62
    POP EBP                             ; 00532c65
    RET                                 ; 00532c66

