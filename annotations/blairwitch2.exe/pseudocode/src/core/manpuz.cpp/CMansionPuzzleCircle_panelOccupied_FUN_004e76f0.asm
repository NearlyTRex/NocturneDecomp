; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40 at 004e6ec5
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e76f0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0
    PUSH ESI                            ; 004e76f1
    PUSH EBP                            ; 004e76f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e76f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e76f7
    TEST EBX,EBX                        ; 004e76fb
    JL 0x004e7704                       ; 004e76fd
        ;   XREF to: 004e7704 (CONDITIONAL_JUMP)  ; LAB_004e7704
    CMP EBX,0xc                         ; 004e76ff
    JL 0x004e7728                       ; 004e7702
        ;   XREF to: 004e7728 (CONDITIONAL_JUMP)  ; LAB_004e7728
    PUSH EBX                            ; 004e7704
        ;   Label: LAB_004e7704
    MOV EDX,0x5dc6d2                    ; 004e7705
    MOV ECX,0x5e6                       ; 004e770a
    PUSH 0x5dc6e5                       ; 004e770f
    MOV dword ptr [0x01d046a0],EDX      ; 004e7714 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004e771a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004e7720
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004e7725
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e7728
        ;   Label: LAB_004e7728
    SUB EAX,EBX                         ; 004e772f
    SHL EAX,0x3                         ; 004e7731
    ADD EAX,EBX                         ; 004e7734
    CMP dword ptr [ESI + EAX*0x4 + 0x74c],0x0 ; 004e7736
    JZ 0x004e7749                       ; 004e773e
        ;   XREF to: 004e7749 (CONDITIONAL_JUMP)  ; LAB_004e7749
    MOV EAX,0x1                         ; 004e7740
        ;   Label: LAB_004e7740
    POP EBP                             ; 004e7745
    POP ESI                             ; 004e7746
    POP EBX                             ; 004e7747
    RET                                 ; 004e7748
    PUSH EBX                            ; 004e7749
        ;   Label: LAB_004e7749
    PUSH ESI                            ; 004e774a
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570 ; 004e774b
        ;   XREF to: 004e7570 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDX,EAX                         ; 004e7750
    SHL EAX,0x2                         ; 004e7752
    SUB EAX,EDX                         ; 004e7755
    SHL EAX,0x3                         ; 004e7757
    ADD EAX,EDX                         ; 004e775a
    SHL EAX,0x2                         ; 004e775c
    ADD EAX,ESI                         ; 004e775f
    MOV EBP,dword ptr [EAX + 0x74c]     ; 004e7761
    ADD ESP,0x8                         ; 004e7767
    TEST EBP,EBP                        ; 004e776a
    JZ 0x004e777a                       ; 004e776c
        ;   XREF to: 004e777a (CONDITIONAL_JUMP)  ; LAB_004e777a
    TEST dword ptr [EAX + 0x754],0x7fffffff ; 004e776e
    JNZ 0x004e7740                      ; 004e7778
        ;   XREF to: 004e7740 (CONDITIONAL_JUMP)  ; LAB_004e7740
    XOR EAX,EAX                         ; 004e777a
        ;   Label: LAB_004e777a
    POP EBP                             ; 004e777c
    POP ESI                             ; 004e777d
    POP EBX                             ; 004e777e
    RET                                 ; 004e777f

