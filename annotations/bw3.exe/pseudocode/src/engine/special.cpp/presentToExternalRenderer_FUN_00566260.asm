; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_00566260(int skip_buffer_copy)
;
; Parameters:
; int              Stack[0x4]:4   skip_buffer_copy
; Local Variables:
; undefined        Stack[-0x12c4]:1  local_12c4
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8c6c
;   engine_mini3d.cpp_swapBuffers_FUN_004ec8d0 at 004ec8db
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 at 0057a987
;
; Referenced Globals:
;   int g_INT_005fba18 = 0x140
;   int g_INT_005fba1c = 0xc8
;   int g_INT_005fba20 = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 g_ScreenBufferArray[1]+1
;   int g_INT_01c6cee8
;   void* g_APIDLL_toggle
;   int g_INT_02cf612c
;
; Called Functions:
;   engine_special.cpp_lockFrame_FUN_00565820
;   engine_special.cpp_unlockFrame_FUN_00565870
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0
;   wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00566260
        ;   Label: engine_special.cpp_presentToExternalRenderer_FUN_00566260
    SUB ESP,0x12c0                      ; 00566261
    CMP dword ptr [0x01c6cee8],0x0      ; 00566267 | g_INT_01c6cee8
    JZ 0x00566338                       ; 0056626e
        ;   XREF to: 00566338 (CONDITIONAL_JUMP)  ; LAB_00566338
    PUSH EBX                            ; 00566274
    CMP dword ptr [ESP + 0x12cc],0x0    ; 00566275
    JNZ 0x00566321                      ; 0056627d
        ;   XREF to: 00566321 (CONDITIONAL_JUMP)  ; LAB_00566321
    MOV EBX,dword ptr [0x02cf612c]      ; 00566283 | g_INT_02cf612c
    TEST EBX,EBX                        ; 00566289
    JNZ 0x00566321                      ; 0056628b
        ;   XREF to: 00566321 (CONDITIONAL_JUMP)  ; LAB_00566321
    PUSH EDI                            ; 00566291
    PUSH ESI                            ; 00566292
    MOV ECX,0x12c0                      ; 00566293
    MOV ESI,0x1c5faec                   ; 00566298
    LEA EDI,[ESP + 0xc]                 ; 0056629d
    PUSH EDI                            ; 005662a1
    MOV EAX,ECX                         ; 005662a2
    SHR ECX,0x2                         ; 005662a4
    MOVSD.REP ES:EDI,ESI                ; 005662a7 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV CL,AL                           ; 005662a9
    AND CL,0x3                          ; 005662ab
    MOVSB.REP ES:EDI,ESI                ; 005662ae | g_ScreenBufferArray[1] | g_ScreenBufferArray[1]+1
    POP EDI                             ; 005662b0
    MOV EDX,dword ptr [0x005fba18]      ; 005662b1 | g_INT_005fba18
    MOV ESI,dword ptr [0x005fba20]      ; 005662b7 | g_INT_005fba20
    IMUL EDX,ESI                        ; 005662bd
    MOV EAX,EDX                         ; 005662c0
    SAR EDX,0x1f                        ; 005662c2
    SHL EDX,0x3                         ; 005662c5
    SBB EAX,EDX                         ; 005662c8
    SAR EAX,0x3                         ; 005662ca
    MOV EBP,EAX                         ; 005662cd
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0 ; 005662cf
        ;   XREF to: 0057a3c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0()
    CALL engine_special.cpp_lockFrame_FUN_00565820 ; 005662d4
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_lockFrame_FUN_00565820()
    CMP dword ptr [0x005fba1c],0x0      ; 005662d9 | g_INT_005fba1c
    JLE 0x00566310                      ; 005662e0
        ;   XREF to: 00566310 (CONDITIONAL_JUMP)  ; LAB_00566310
    XOR EDX,EDX                         ; 005662e2
    MOV ECX,EBP                         ; 005662e4
        ;   Label: LAB_005662e4
    MOV ESI,dword ptr [ESP + EDX*0x1 + 0xc] ; 005662e6
    MOV EDI,dword ptr [EDX + 0x1c5faec] ; 005662ea | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDI                            ; 005662f0
    MOV EAX,ECX                         ; 005662f1
    SHR ECX,0x2                         ; 005662f3
    MOVSD.REP ES:EDI,ESI                ; 005662f6
    MOV CL,AL                           ; 005662f8
    AND CL,0x3                          ; 005662fa
    MOVSB.REP ES:EDI,ESI                ; 005662fd
    POP EDI                             ; 005662ff
    INC EBX                             ; 00566300
    MOV EAX,[0x005fba1c]                ; 00566301 | g_INT_005fba1c
    ADD EDX,0x4                         ; 00566306
    CMP EBX,EAX                         ; 00566309
    JL 0x005662e4                       ; 0056630b
        ;   XREF to: 005662e4 (CONDITIONAL_JUMP)  ; LAB_005662e4
    LEA EAX,[EAX]                       ; 0056630d
    PUSH 0x0                            ; 00566310
        ;   Label: LAB_00566310
    CALL engine_special.cpp_unlockFrame_FUN_00565870 ; 00566312
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00565870(int clear_lock_flag)
    ADD ESP,0x4                         ; 00566317
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0 ; 0056631a
        ;   XREF to: 0057a4b0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0()
    POP ESI                             ; 0056631f
    POP EDI                             ; 00566320
    XOR EDX,EDX                         ; 00566321
        ;   Label: LAB_00566321
    MOV dword ptr [0x02cf612c],EDX      ; 00566323 | g_INT_02cf612c
    CALL dword ptr [0x02cf5fec]         ; 00566329 | g_APIDLL_toggle
    POP EBX                             ; 0056632f
    ADD ESP,0x12c0                      ; 00566330
    POP EBP                             ; 00566336
    RET                                 ; 00566337
    XOR EAX,EAX                         ; 00566338
        ;   Label: LAB_00566338
    ADD ESP,0x12c0                      ; 0056633a
    POP EBP                             ; 00566340
    RET                                 ; 00566341

