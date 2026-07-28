; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[1]:
;   core_manpuz.cpp_FUN_004cb010 at 004cb279
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_0058810f
;   TerminatedCString s_CMansionPuzzleCircle_pan_00588122
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cba40
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40
    PUSH ESI                            ; 004cba41
    PUSH EBP                            ; 004cba42
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cba43
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cba47
    TEST EBX,EBX                        ; 004cba4b
    JL 0x004cba54                       ; 004cba4d
        ;   XREF to: 004cba54 (CONDITIONAL_JUMP)  ; LAB_004cba54
    CMP EBX,0xc                         ; 004cba4f
    JL 0x004cba78                       ; 004cba52
        ;   XREF to: 004cba78 (CONDITIONAL_JUMP)  ; LAB_004cba78
    PUSH EBX                            ; 004cba54
        ;   Label: LAB_004cba54
    MOV EDX,0x58810f                    ; 004cba55 | = "..\\core\\manpuz.cpp"
    MOV ECX,0x5e6                       ; 004cba5a
    PUSH 0x588122                       ; 004cba5f | = "CMansionPuzzleCircle::panelOccupied -..."
    MOV dword ptr [0x01cc4800],EDX      ; 004cba64 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004cba6a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004cba70
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004cba75
    LEA EAX,[EBX*0x4 + 0x0]             ; 004cba78
        ;   Label: LAB_004cba78
    SUB EAX,EBX                         ; 004cba7f
    SHL EAX,0x3                         ; 004cba81
    ADD EAX,EBX                         ; 004cba84
    CMP dword ptr [ESI + EAX*0x4 + 0x5e8],0x0 ; 004cba86
    JZ 0x004cba99                       ; 004cba8e
        ;   XREF to: 004cba99 (CONDITIONAL_JUMP)  ; LAB_004cba99
    MOV EAX,0x1                         ; 004cba90
        ;   Label: LAB_004cba90
    POP EBP                             ; 004cba95
    POP ESI                             ; 004cba96
    POP EBX                             ; 004cba97
    RET                                 ; 004cba98
    PUSH EBX                            ; 004cba99
        ;   Label: LAB_004cba99
    PUSH ESI                            ; 004cba9a
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0 ; 004cba9b
        ;   XREF to: 004cb8f0 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDX,EAX                         ; 004cbaa0
    SHL EAX,0x2                         ; 004cbaa2
    SUB EAX,EDX                         ; 004cbaa5
    SHL EAX,0x3                         ; 004cbaa7
    ADD EAX,EDX                         ; 004cbaaa
    SHL EAX,0x2                         ; 004cbaac
    ADD EAX,ESI                         ; 004cbaaf
    MOV EBP,dword ptr [EAX + 0x5e8]     ; 004cbab1
    ADD ESP,0x8                         ; 004cbab7
    TEST EBP,EBP                        ; 004cbaba
    JZ 0x004cbaca                       ; 004cbabc
        ;   XREF to: 004cbaca (CONDITIONAL_JUMP)  ; LAB_004cbaca
    TEST dword ptr [EAX + 0x5f0],0x7fffffff ; 004cbabe
    JNZ 0x004cba90                      ; 004cbac8
        ;   XREF to: 004cba90 (CONDITIONAL_JUMP)  ; LAB_004cba90
    XOR EAX,EAX                         ; 004cbaca
        ;   Label: LAB_004cbaca
    POP EBP                             ; 004cbacc
    POP ESI                             ; 004cbacd
    POP EBX                             ; 004cbace
    RET                                 ; 004cbacf

