; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a9830(int param_1)
;
;
; XREF[2]:
;   FUN_004a9230 at 004a9236
;   FUN_004a9300 at 004a9322
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005c1007
;   TerminatedCString s_Out_of_memory_005c101c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004a8cb0
;   FUN_004e4330
;   FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9830
        ;   Label: FUN_004a9830
    PUSH ESI                            ; 004a9831
    PUSH EBP                            ; 004a9832
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a9833
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a9837
    CMP EAX,dword ptr [EBX + 0x38]      ; 004a983a
    JL 0x004a98a3                       ; 004a983d
        ;   XREF to: 004a98a3 (CONDITIONAL_JUMP)  ; LAB_004a98a3
    MOV EAX,dword ptr [EBX + 0x38]      ; 004a983f
        ;   Label: LAB_004a983f
    INC EAX                             ; 004a9842
    IMUL EAX,EAX,0x144                  ; 004a9843
    PUSH EAX                            ; 004a9849
    MOV EBP,dword ptr [EBX + 0x3c]      ; 004a984a
    PUSH EBP                            ; 004a984d
    CALL FUN_005a3e50                   ; 004a984e
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    ADD ESP,0x8                         ; 004a9853
    MOV dword ptr [EBX + 0x3c],EAX      ; 004a9856
    TEST EAX,EAX                        ; 004a9859
    JNZ 0x004a9880                      ; 004a985b
        ;   XREF to: 004a9880 (CONDITIONAL_JUMP)  ; LAB_004a9880
    MOV EDX,0x5c1007                    ; 004a985d | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x67d                       ; 004a9862
    PUSH 0x5c101c                       ; 004a9867 | = "Out of memory"
    MOV dword ptr [0x01d71de0],EDX      ; 004a986c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004a9872 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004a9878
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004a987d
    IMUL EAX,dword ptr [EBX + 0x38],0x144 ; 004a9880
        ;   Label: LAB_004a9880
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004a9887
    ADD EAX,EDX                         ; 004a988a
    PUSH EAX                            ; 004a988c
    CALL FUN_004a8cb0                   ; 004a988d
        ;   XREF to: 004a8cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8cb0()
    MOV ESI,dword ptr [EBX + 0x38]      ; 004a9892
    ADD ESP,0x4                         ; 004a9895
    INC ESI                             ; 004a9898
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a9899
    MOV dword ptr [EBX + 0x38],ESI      ; 004a989c
    CMP EAX,ESI                         ; 004a989f
    JGE 0x004a983f                      ; 004a98a1
        ;   XREF to: 004a983f (CONDITIONAL_JUMP)  ; LAB_004a983f
    POP EBP                             ; 004a98a3
        ;   Label: LAB_004a98a3
    POP ESI                             ; 004a98a4
    POP EBX                             ; 004a98a5
    RET                                 ; 004a98a6

