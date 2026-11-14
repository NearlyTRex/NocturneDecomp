; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_presentToExternalRenderer_FUN_00582990(int skip_buffer_copy)
;
; Parameters:
; int              Stack[0x4]:4   skip_buffer_copy
; Local Variables:
; undefined        Stack[-0x12c4]:1  local_12c4
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004d0296
;   engine_mini3d.cpp_swapBuffers_FUN_00511100 at 0051110b
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 at 005ad0d7
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c43551
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c83390
;   undefined4 DAT_02c834d0
;
; Called Functions:
;   engine_special.cpp_FUN_00581f50
;   engine_special.cpp_unlockFrame_FUN_00581fa0
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00
;   wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00582990
        ;   Label: engine_special.cpp_presentToExternalRenderer_FUN_00582990
    SUB ESP,0x12c0                      ; 00582991
    CMP dword ptr [0x01c50948],0x0      ; 00582997 | DAT_01c50948
    JZ 0x00582a68                       ; 0058299e
        ;   XREF to: 00582a68 (CONDITIONAL_JUMP)  ; LAB_00582a68
    PUSH EBX                            ; 005829a4
    CMP dword ptr [ESP + 0x12cc],0x0    ; 005829a5
    JNZ 0x00582a51                      ; 005829ad
        ;   XREF to: 00582a51 (CONDITIONAL_JUMP)  ; LAB_00582a51
    MOV EBX,dword ptr [0x02c834d0]      ; 005829b3 | DAT_02c834d0
    TEST EBX,EBX                        ; 005829b9
    JNZ 0x00582a51                      ; 005829bb
        ;   XREF to: 00582a51 (CONDITIONAL_JUMP)  ; LAB_00582a51
    PUSH EDI                            ; 005829c1
    PUSH ESI                            ; 005829c2
    MOV ECX,0x12c0                      ; 005829c3
    MOV ESI,0x1c4354c                   ; 005829c8
    LEA EDI,[ESP + 0xc]                 ; 005829cd
    PUSH EDI                            ; 005829d1
    MOV EAX,ECX                         ; 005829d2
    SHR ECX,0x2                         ; 005829d4
    MOVSD.REP ES:EDI,ESI                ; 005829d7 | DAT_01c4354c | DAT_01c43550
    MOV CL,AL                           ; 005829d9
    AND CL,0x3                          ; 005829db
    MOVSB.REP ES:EDI,ESI                ; 005829de | DAT_01c43550 | DAT_01c43551
    POP EDI                             ; 005829e0
    MOV EDX,dword ptr [0x0061b498]      ; 005829e1 | DAT_0061b498
    MOV ESI,dword ptr [0x0061b4a0]      ; 005829e7 | DAT_0061b4a0
    IMUL EDX,ESI                        ; 005829ed
    MOV EAX,EDX                         ; 005829f0
    SAR EDX,0x1f                        ; 005829f2
    SHL EDX,0x3                         ; 005829f5
    SBB EAX,EDX                         ; 005829f8
    SAR EAX,0x3                         ; 005829fa
    MOV EBP,EAX                         ; 005829fd
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10 ; 005829ff
        ;   XREF to: 005acb10 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10()
    CALL engine_special.cpp_FUN_00581f50 ; 00582a04
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00581f50()
    CMP dword ptr [0x0061b49c],0x0      ; 00582a09 | DAT_0061b49c
    JLE 0x00582a40                      ; 00582a10
        ;   XREF to: 00582a40 (CONDITIONAL_JUMP)  ; LAB_00582a40
    XOR EDX,EDX                         ; 00582a12
    MOV ECX,EBP                         ; 00582a14
        ;   Label: LAB_00582a14
    MOV ESI,dword ptr [ESP + EDX*0x1 + 0xc] ; 00582a16
    MOV EDI,dword ptr [EDX + 0x1c4354c] ; 00582a1a | DAT_01c4354c | DAT_01c43550
    PUSH EDI                            ; 00582a20
    MOV EAX,ECX                         ; 00582a21
    SHR ECX,0x2                         ; 00582a23
    MOVSD.REP ES:EDI,ESI                ; 00582a26
    MOV CL,AL                           ; 00582a28
    AND CL,0x3                          ; 00582a2a
    MOVSB.REP ES:EDI,ESI                ; 00582a2d
    POP EDI                             ; 00582a2f
    INC EBX                             ; 00582a30
    MOV EAX,[0x0061b49c]                ; 00582a31 | DAT_0061b49c
    ADD EDX,0x4                         ; 00582a36
    CMP EBX,EAX                         ; 00582a39
    JL 0x00582a14                       ; 00582a3b
        ;   XREF to: 00582a14 (CONDITIONAL_JUMP)  ; LAB_00582a14
    LEA EAX,[EAX]                       ; 00582a3d
    PUSH 0x0                            ; 00582a40
        ;   Label: LAB_00582a40
    CALL engine_special.cpp_unlockFrame_FUN_00581fa0 ; 00582a42
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)
    ADD ESP,0x4                         ; 00582a47
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00 ; 00582a4a
        ;   XREF to: 005acc00 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005acc00()
    POP ESI                             ; 00582a4f
    POP EDI                             ; 00582a50
    XOR EDX,EDX                         ; 00582a51
        ;   Label: LAB_00582a51
    MOV dword ptr [0x02c834d0],EDX      ; 00582a53 | DAT_02c834d0
    CALL dword ptr [0x02c83390]         ; 00582a59 | DAT_02c83390
    POP EBX                             ; 00582a5f
    ADD ESP,0x12c0                      ; 00582a60
    POP EBP                             ; 00582a66
    RET                                 ; 00582a67
    XOR EAX,EAX                         ; 00582a68
        ;   Label: LAB_00582a68
    ADD ESP,0x12c0                      ; 00582a6a
    POP EBP                             ; 00582a70
    RET                                 ; 00582a71

