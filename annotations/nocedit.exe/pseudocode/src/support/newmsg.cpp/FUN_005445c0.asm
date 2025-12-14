; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined support_newmsg.cpp_FUN_005445c0()
;
;
; Referenced Globals:
;   int g_GlobalDeltaTimeInt
;   int g_MouseX
;   int g_MouseY
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_00406dd0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005445c0
        ;   Label: support_newmsg.cpp_FUN_005445c0
    PUSH EDI                            ; 005445c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005445c2
    MOV EDX,dword ptr [0x02cf6a90]      ; 005445c6 | g_MouseY
    MOV EAX,[0x02cf6a8c]                ; 005445cc | g_MouseX
    MOV ECX,dword ptr [EBX + 0x25c]     ; 005445d1
    SUB EDX,0xc                         ; 005445d7
    SUB EAX,0xd                         ; 005445da
    CMP ECX,0x1                         ; 005445dd
    JZ 0x00544674                       ; 005445e0
        ;   XREF to: 00544674 (CONDITIONAL_JUMP)  ; LAB_00544674
    CMP ECX,0x2                         ; 005445e6
    JNZ 0x005446a4                      ; 005445e9
        ;   XREF to: 005446a4 (CONDITIONAL_JUMP)  ; LAB_005446a4
    PUSH 0xffff                         ; 005445ef
    PUSH EDX                            ; 005445f4
    PUSH EAX                            ; 005445f5
    MOV EAX,dword ptr [EBX + 0x258]     ; 005445f6
    MOV EDX,EAX                         ; 005445fc
    SAR EDX,0x1f                        ; 005445fe
    SHL EDX,0x10                        ; 00544601
    SBB EAX,EDX                         ; 00544604
    SAR EAX,0x10                        ; 00544606
    MOV EDX,EAX                         ; 00544609
    SHL EAX,0x2                         ; 0054460b
    ADD EDX,EAX                         ; 0054460e
    SHL EDX,0x2                         ; 00544610
    LEA EAX,[EBX + 0x12c]               ; 00544613
    ADD EAX,EDX                         ; 00544619
    PUSH EAX                            ; 0054461b
        ;   Label: LAB_0054461b
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 0054461c
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   Label: LAB_0054461c
    ADD ESP,0x10                        ; 00544621
    MOV EDI,dword ptr [EBX + 0x25c]     ; 00544624
    TEST EDI,EDI                        ; 0054462a
    JZ 0x00544671                       ; 0054462c
        ;   XREF to: 00544671 (CONDITIONAL_JUMP)  ; LAB_00544671
    CMP EDI,0x2                         ; 0054462e
    JNZ 0x005446b1                      ; 00544631
        ;   XREF to: 005446b1 (CONDITIONAL_JUMP)  ; LAB_005446b1
    MOV EAX,[0x02cf6a80]                ; 00544637 | g_GlobalDeltaTimeInt
        ;   Label: LAB_00544637
    MOV EDX,dword ptr [EBX + 0x258]     ; 0054463c
    SHL EAX,0x5                         ; 00544642
    MOV ECX,dword ptr [EBX + 0x25c]     ; 00544645
    ADD EDX,EAX                         ; 0054464b
    MOV EAX,0x7                         ; 0054464d
    MOV dword ptr [EBX + 0x258],EDX     ; 00544652
    CMP ECX,0x2                         ; 00544658
    JNZ 0x00544662                      ; 0054465b
        ;   XREF to: 00544662 (CONDITIONAL_JUMP)  ; LAB_00544662
    MOV EAX,0xf                         ; 0054465d
    SHL EAX,0x10                        ; 00544662
        ;   Label: LAB_00544662
    CMP EAX,dword ptr [EBX + 0x258]     ; 00544665
    JLE 0x0054470f                      ; 0054466b
        ;   XREF to: 0054470f (CONDITIONAL_JUMP)  ; LAB_0054470f
    POP EDI                             ; 00544671
        ;   Label: LAB_00544671
    POP EBX                             ; 00544672
    RET                                 ; 00544673
    PUSH 0xffff                         ; 00544674
        ;   Label: LAB_00544674
    PUSH EDX                            ; 00544679
    PUSH EAX                            ; 0054467a
    MOV EAX,dword ptr [EBX + 0x258]     ; 0054467b
    MOV EDX,EAX                         ; 00544681
    SAR EDX,0x1f                        ; 00544683
    SHL EDX,0x10                        ; 00544686
    SBB EAX,EDX                         ; 00544689
    SAR EAX,0x10                        ; 0054468b
    LEA EDX,[EAX + ECX*0x1]             ; 0054468e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00544691
    ADD EAX,EDX                         ; 00544698
    SHL EAX,0x2                         ; 0054469a
    ADD EAX,EBX                         ; 0054469d
    JMP 0x0054461b                      ; 0054469f
        ;   XREF to: 0054461b (UNCONDITIONAL_JUMP)  ; LAB_0054461b
    PUSH 0xffff                         ; 005446a4
        ;   Label: LAB_005446a4
    PUSH EDX                            ; 005446a9
    PUSH EAX                            ; 005446aa
    PUSH EBX                            ; 005446ab
    JMP 0x0054461c                      ; 005446ac
        ;   XREF to: 0054461c (UNCONDITIONAL_JUMP)  ; LAB_0054461c
    PUSH 0x1                            ; 005446b1
        ;   Label: LAB_005446b1
    CALL engine_3d.c_setBlendMode_FUN_00406dd0 ; 005446b3
        ;   XREF to: 00406dd0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406dd0(int blend_mode)
    ADD ESP,0x4                         ; 005446b8
    MOV EAX,[0x02cf6a90]                ; 005446bb | g_MouseY
    PUSH 0x8000                         ; 005446c0
    SUB EAX,0xc                         ; 005446c5
    PUSH EAX                            ; 005446c8
    MOV EAX,[0x02cf6a8c]                ; 005446c9 | g_MouseX
    SUB EAX,0xd                         ; 005446ce
    PUSH EAX                            ; 005446d1
    MOV EAX,dword ptr [EBX + 0x258]     ; 005446d2
    MOV EDX,EAX                         ; 005446d8
    SAR EDX,0x1f                        ; 005446da
    SHL EDX,0x10                        ; 005446dd
    SBB EAX,EDX                         ; 005446e0
    SAR EAX,0x10                        ; 005446e2
    MOV EDX,EAX                         ; 005446e5
    SHL EAX,0x2                         ; 005446e7
    ADD EDX,EAX                         ; 005446ea
    SHL EDX,0x2                         ; 005446ec
    LEA EAX,[EBX + 0xa0]                ; 005446ef
    ADD EAX,EDX                         ; 005446f5
    PUSH EAX                            ; 005446f7
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 005446f8
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 005446fd
    PUSH 0x0                            ; 00544700
    CALL engine_3d.c_setBlendMode_FUN_00406dd0 ; 00544702
        ;   XREF to: 00406dd0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406dd0(int blend_mode)
    ADD ESP,0x4                         ; 00544707
    JMP 0x00544637                      ; 0054470a
        ;   XREF to: 00544637 (UNCONDITIONAL_JUMP)  ; LAB_00544637
    MOV dword ptr [EBX + 0x25c],0x0     ; 0054470f
        ;   Label: LAB_0054470f
    MOV dword ptr [EBX + 0x258],0x0     ; 00544719
    POP EDI                             ; 00544723
    POP EBX                             ; 00544724
    RET                                 ; 00544725

