; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004d17c0(int param_1,int param_2)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01cd0c64
;
; Called Functions:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004d17c0
        ;   Label: core_game.cpp_FUN_004d17c0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d17c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d17c5
    CMP EDX,dword ptr [ECX + 0x260]     ; 004d17c9
    JZ 0x004d17dd                       ; 004d17cf
        ;   XREF to: 004d17dd (CONDITIONAL_JUMP)  ; LAB_004d17dd
    TEST EDX,EDX                        ; 004d17d1
    JNZ 0x004d17df                      ; 004d17d3
        ;   XREF to: 004d17df (CONDITIONAL_JUMP)  ; LAB_004d17df
    MOV dword ptr [ECX + 0x260],EDX     ; 004d17d5
    JZ 0x004d17f9                       ; 004d17db
        ;   XREF to: 004d17f9 (CONDITIONAL_JUMP)  ; LAB_004d17f9
    POP EBP                             ; 004d17dd
        ;   Label: LAB_004d17dd
    RET                                 ; 004d17de
    MOV EAX,[0x00622c18]                ; 004d17df | g_CDemonSetPtr
        ;   Label: LAB_004d17df
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004d17e4
    MOV [0x01cd0c64],EAX                ; 004d17ea | DAT_01cd0c64
    MOV dword ptr [ECX + 0x260],EDX     ; 004d17ef
    JZ 0x004d17f9                       ; 004d17f5
        ;   XREF to: 004d17f9 (CONDITIONAL_JUMP)  ; LAB_004d17f9
    POP EBP                             ; 004d17f7
    RET                                 ; 004d17f8
    PUSH EDI                            ; 004d17f9
        ;   Label: LAB_004d17f9
    MOV EDI,dword ptr [0x01cd0c64]      ; 004d17fa | DAT_01cd0c64
    PUSH EDI                            ; 004d1800
    MOV EBP,dword ptr [0x00622c18]      ; 004d1801 | g_CDemonSetPtr
    PUSH EBP                            ; 004d1807
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 004d1808
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004d180d
    POP EDI                             ; 004d1810
    POP EBP                             ; 004d1811
    RET                                 ; 004d1812

