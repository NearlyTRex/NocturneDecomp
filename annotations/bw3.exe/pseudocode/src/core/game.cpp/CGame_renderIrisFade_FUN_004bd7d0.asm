; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004bd7d0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b73ce
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   CFieldNotes* g_CFieldNotesPtr = 01d1a05c
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   CFieldNotes g_CFieldNotesInstance
;   undefined4 g_CFieldNotesInstance.field64_0x40
;   undefined4 DAT_01d22c84
;   undefined4 DAT_01d22c88
;   undefined4 DAT_01d22c8c
;   undefined4 DAT_01d22c90
;
; Called Functions:
;   core_game.cpp_calculateIrisFadeCenter_FUN_004bd6a0
;   crt_math.c_round_FUN_005a3120
;   engine_2d.c_fillRectColor_FUN_004031c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd7d0
        ;   Label: core_game.cpp_CGame_renderIrisFade_FUN_004bd7d0
    PUSH ESI                            ; 004bd7d1
    PUSH EDI                            ; 004bd7d2
    PUSH EBP                            ; 004bd7d3
    SUB ESP,0x4                         ; 004bd7d4
    MOV EDI,dword ptr [0x005fba18]      ; 004bd7d7 | DAT_005fba18
    MOV EDX,dword ptr [0x01d22c84]      ; 004bd7dd | DAT_01d22c84
    TEST EDX,EDX                        ; 004bd7e3
    JZ 0x004bd893                       ; 004bd7e5
        ;   XREF to: 004bd893 (CONDITIONAL_JUMP)  ; LAB_004bd893
    MOV EAX,[0x005fe4b0]                ; 004bd7eb | g_CFieldNotesPtr | g_CFieldNotesInstance
    CMP dword ptr [EAX + 0x40],0x0      ; 004bd7f0 | g_CFieldNotesInstance.field64_0x40
    JNZ 0x004bd893                      ; 004bd7f4
        ;   XREF to: 004bd893 (CONDITIONAL_JUMP)  ; LAB_004bd893
    CMP EDX,0x4                         ; 004bd7fa
    JGE 0x004bd8a1                      ; 004bd7fd
        ;   XREF to: 004bd8a1 (CONDITIONAL_JUMP)  ; LAB_004bd8a1
    CMP EDX,0x1                         ; 004bd803
    JZ 0x004bd8a1                       ; 004bd806
        ;   XREF to: 004bd8a1 (CONDITIONAL_JUMP)  ; LAB_004bd8a1
    CMP dword ptr [0x01d22c88],0x3f800000 ; 004bd80c | DAT_01d22c88
    JL 0x004bd8a1                       ; 004bd816
        ;   XREF to: 004bd8a1 (CONDITIONAL_JUMP)  ; LAB_004bd8a1
    CALL core_game.cpp_calculateIrisFadeCenter_FUN_004bd6a0 ; 004bd81c
        ;   XREF to: 004bd6a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_calculateIrisFadeCenter_FUN_004bd6a0()
    CMP dword ptr [0x005fba20],0x20     ; 004bd821 | DAT_005fba20
    JNZ 0x004bd893                      ; 004bd828
        ;   XREF to: 004bd893 (CONDITIONAL_JUMP)  ; LAB_004bd893
    FLD float ptr [0x01d22c88]          ; 004bd82a | DAT_01d22c88
    FMUL ST0                            ; 004bd830
    MOV EDX,dword ptr [0x005fba1c]      ; 004bd832 | DAT_005fba1c
    XOR ESI,ESI                         ; 004bd838
    CALL crt_math.c_round_FUN_005a3120  ; 004bd83a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 004bd83f
    TEST EDX,EDX                        ; 004bd842
    JLE 0x004bd893                      ; 004bd844
        ;   XREF to: 004bd893 (CONDITIONAL_JUMP)  ; LAB_004bd893
    XOR EBP,EBP                         ; 004bd846
    MOV EDI,dword ptr [0x005fba18]      ; 004bd848 | DAT_005fba18
        ;   Label: LAB_004bd848
    MOV EDX,dword ptr [EBP + 0x1c5faec] ; 004bd84e | DAT_01c5faec | DAT_01c5faf0
    XOR EAX,EAX                         ; 004bd854
    TEST EDI,EDI                        ; 004bd856
    JLE 0x004bd87f                      ; 004bd858
        ;   XREF to: 004bd87f (CONDITIONAL_JUMP)  ; LAB_004bd87f
    MOV EBX,dword ptr [0x01d22c8c]      ; 004bd85a | DAT_01d22c8c
        ;   Label: LAB_004bd85a
    SUB EBX,EAX                         ; 004bd860
    IMUL EBX,EBX                        ; 004bd862
    MOV ECX,dword ptr [0x01d22c90]      ; 004bd865 | DAT_01d22c90
    SUB ECX,ESI                         ; 004bd86b
    IMUL ECX,ECX                        ; 004bd86d
    ADD ECX,EBX                         ; 004bd870
    CMP ECX,dword ptr [ESP]             ; 004bd872
    JG 0x004bd8c8                       ; 004bd875
        ;   XREF to: 004bd8c8 (CONDITIONAL_JUMP)  ; LAB_004bd8c8
    INC EAX                             ; 004bd877
        ;   Label: LAB_004bd877
    ADD EDX,0x4                         ; 004bd878
    CMP EAX,EDI                         ; 004bd87b
    JL 0x004bd85a                       ; 004bd87d
        ;   XREF to: 004bd85a (CONDITIONAL_JUMP)  ; LAB_004bd85a
    MOV ECX,dword ptr [0x005fba1c]      ; 004bd87f | DAT_005fba1c
        ;   Label: LAB_004bd87f
    ADD EBP,0x4                         ; 004bd885
    INC ESI                             ; 004bd888
    MOV dword ptr [0x005fba18],EDI      ; 004bd889 | DAT_005fba18
    CMP ESI,ECX                         ; 004bd88f
    JL 0x004bd848                       ; 004bd891
        ;   XREF to: 004bd848 (CONDITIONAL_JUMP)  ; LAB_004bd848
    MOV EDI,dword ptr [0x005fba18]      ; 004bd893 | DAT_005fba18
        ;   Label: LAB_004bd893
    ADD ESP,0x4                         ; 004bd899
    POP EBP                             ; 004bd89c
    POP EDI                             ; 004bd89d
    POP ESI                             ; 004bd89e
    POP EBX                             ; 004bd89f
    RET                                 ; 004bd8a0
    MOV EAX,[0x005fba1c]                ; 004bd8a1 | DAT_005fba1c
        ;   Label: LAB_004bd8a1
    PUSH 0x0                            ; 004bd8a6
    DEC EAX                             ; 004bd8a8
    MOV EDI,dword ptr [0x005fba18]      ; 004bd8a9 | DAT_005fba18
    PUSH EAX                            ; 004bd8af
    LEA EAX,[EDI + -0x1]                ; 004bd8b0
    PUSH EAX                            ; 004bd8b3
    PUSH 0x0                            ; 004bd8b4
    PUSH 0x0                            ; 004bd8b6
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004bd8b8
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    MOV EDI,dword ptr [0x005fba18]      ; 004bd8bd | DAT_005fba18
    ADD ESP,0x14                        ; 004bd8c3
    JMP 0x004bd893                      ; 004bd8c6
        ;   XREF to: 004bd893 (UNCONDITIONAL_JUMP)  ; LAB_004bd893
    MOV dword ptr [EDX],0x0             ; 004bd8c8
        ;   Label: LAB_004bd8c8
    JMP 0x004bd877                      ; 004bd8ce
        ;   XREF to: 004bd877 (UNCONDITIONAL_JUMP)  ; LAB_004bd877

