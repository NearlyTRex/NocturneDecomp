; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processFudge_FUN_004d8750(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db38f
;
; Referenced Globals:
;   double DOUBLE_0062b285 = 0.100000000000000
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8750
        ;   Label: core_game.cpp_CGame_processFudge_FUN_004d8750
    PUSH EBP                            ; 004d8751
    MOV EBP,ESP                         ; 004d8752
    SUB ESP,0xc                         ; 004d8754
    AND ESP,0xfffffff8                  ; 004d8757
    MOV EBX,dword ptr [EBP + 0xc]       ; 004d875a
    PUSH 0x1d                           ; 004d875d
    MOV EAX,[0x0067cf44]                ; 004d875f | g_CKeysPtr
    PUSH EAX                            ; 004d8764 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d8765 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004d8767
    ADD ESP,0x8                         ; 004d8769
    TEST EAX,EAX                        ; 004d876c
    JZ 0x004d8779                       ; 004d876e
        ;   XREF to: 004d8779 (CONDITIONAL_JUMP)  ; LAB_004d8779
    CMP dword ptr [EBX + 0x9bc],0x0     ; 004d8770
    JNZ 0x004d877e                      ; 004d8777
        ;   XREF to: 004d877e (CONDITIONAL_JUMP)  ; LAB_004d877e
    MOV ESP,EBP                         ; 004d8779
        ;   Label: LAB_004d8779
    POP EBP                             ; 004d877b
    POP EBX                             ; 004d877c
    RET                                 ; 004d877d
    MOV EAX,dword ptr [EBX + 0x9c0]     ; 004d877e
        ;   Label: LAB_004d877e
    PUSH 0x38                           ; 004d8784
    MOV dword ptr [ESP + 0x4],EAX       ; 004d8786
    MOV EAX,[0x0067cf44]                ; 004d878a | g_CKeysPtr
    PUSH EAX                            ; 004d878f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d8790 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004d8792
    ADD ESP,0x8                         ; 004d8794
    TEST EAX,EAX                        ; 004d8797
    JZ 0x004d87ab                       ; 004d8799
        ;   XREF to: 004d87ab (CONDITIONAL_JUMP)  ; LAB_004d87ab
    FLD float ptr [ESP]                 ; 004d879b
    FLD ST0                             ; 004d879e
    FMUL double ptr [0x0062b285]        ; 004d87a0 | DOUBLE_0062b285
    FSTP ST1                            ; 004d87a6
    FSTP float ptr [ESP]                ; 004d87a8
    PUSH 0x4b                           ; 004d87ab
        ;   Label: LAB_004d87ab
    MOV EAX,[0x0067cf44]                ; 004d87ad | g_CKeysPtr
    PUSH EAX                            ; 004d87b2 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d87b3 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004d87b5
    ADD ESP,0x8                         ; 004d87b8
    TEST EAX,EAX                        ; 004d87bb
    JZ 0x004d87cc                       ; 004d87bd
        ;   XREF to: 004d87cc (CONDITIONAL_JUMP)  ; LAB_004d87cc
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 004d87bf
    FLD float ptr [EAX]                 ; 004d87c5
    FSUB float ptr [ESP]                ; 004d87c7
    FSTP float ptr [EAX]                ; 004d87ca
    PUSH 0x4d                           ; 004d87cc
        ;   Label: LAB_004d87cc
    MOV EAX,[0x0067cf44]                ; 004d87ce | g_CKeysPtr
    PUSH EAX                            ; 004d87d3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d87d4 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004d87d6
    ADD ESP,0x8                         ; 004d87d9
    TEST EAX,EAX                        ; 004d87dc
    JZ 0x004d87ed                       ; 004d87de
        ;   XREF to: 004d87ed (CONDITIONAL_JUMP)  ; LAB_004d87ed
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 004d87e0
    FLD float ptr [EAX]                 ; 004d87e6
    FADD float ptr [ESP]                ; 004d87e8
    FSTP float ptr [EAX]                ; 004d87eb
    PUSH 0x48                           ; 004d87ed
        ;   Label: LAB_004d87ed
    MOV EAX,[0x0067cf44]                ; 004d87ef | g_CKeysPtr
    PUSH EAX                            ; 004d87f4 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d87f5 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004d87f7
    ADD ESP,0x8                         ; 004d87fa
    TEST EAX,EAX                        ; 004d87fd
    JZ 0x004d8810                       ; 004d87ff
        ;   XREF to: 004d8810 (CONDITIONAL_JUMP)  ; LAB_004d8810
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 004d8801
    FLD float ptr [EAX + 0x8]           ; 004d8807
    FSUB float ptr [ESP]                ; 004d880a
    FSTP float ptr [EAX + 0x8]          ; 004d880d
    PUSH 0x50                           ; 004d8810
        ;   Label: LAB_004d8810
    MOV EAX,[0x0067cf44]                ; 004d8812 | g_CKeysPtr
    PUSH EAX                            ; 004d8817 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d8818 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004d881a
    ADD ESP,0x8                         ; 004d881d
    TEST EAX,EAX                        ; 004d8820
    JZ 0x004d8833                       ; 004d8822
        ;   XREF to: 004d8833 (CONDITIONAL_JUMP)  ; LAB_004d8833
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 004d8824
    FLD float ptr [EAX + 0x8]           ; 004d882a
    FADD float ptr [ESP]                ; 004d882d
    FSTP float ptr [EAX + 0x8]          ; 004d8830
    PUSH 0x1e                           ; 004d8833
        ;   Label: LAB_004d8833
    MOV EAX,[0x0067cf44]                ; 004d8835 | g_CKeysPtr
    PUSH EAX                            ; 004d883a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d883b | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004d883d
    ADD ESP,0x8                         ; 004d8840
    TEST EAX,EAX                        ; 004d8843
    JZ 0x004d8856                       ; 004d8845
        ;   XREF to: 004d8856 (CONDITIONAL_JUMP)  ; LAB_004d8856
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 004d8847
    FLD float ptr [EAX + 0x4]           ; 004d884d
    FSUB float ptr [ESP]                ; 004d8850
    FSTP float ptr [EAX + 0x4]          ; 004d8853
    PUSH 0x10                           ; 004d8856
        ;   Label: LAB_004d8856
    MOV EAX,[0x0067cf44]                ; 004d8858 | g_CKeysPtr
    PUSH EAX                            ; 004d885d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d885e | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004d8860
    ADD ESP,0x8                         ; 004d8863
    TEST EAX,EAX                        ; 004d8866
    JZ 0x004d8779                       ; 004d8868
        ;   XREF to: 004d8779 (CONDITIONAL_JUMP)  ; LAB_004d8779
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 004d886e
    FLD float ptr [EAX + 0x4]           ; 004d8874
    FADD float ptr [ESP]                ; 004d8877
    FSTP float ptr [EAX + 0x4]          ; 004d887a
    MOV ESP,EBP                         ; 004d887d
    POP EBP                             ; 004d887f
    POP EBX                             ; 004d8880
    RET                                 ; 004d8881

