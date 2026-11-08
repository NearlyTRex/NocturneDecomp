; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054ea40(int param_1)
;
;
; XREF[46]:
;   FUN_004091b0 at 0040966c
;   FUN_00417630 at 004177a5
;   FUN_00419550 at 004195a3
;   FUN_00423050 at 0042335b
;   FUN_00423cd0 at 00423d87
;   FUN_00425ab0 at 00425bc4
;   FUN_0042d500 at 0042d536
;   FUN_0042e370 at 0042e37f
;   FUN_0042e4b0 at 0042e689
;   FUN_0042e8c0 at 0042e916
;   ... and 36 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d20f4
;   TerminatedCString s_CDeformableModelInstance_005d2109
;   TerminatedCString s_core_skeleton_cpp_005d2157
;   TerminatedCString s_Tried_to_do_something_wi_005d216c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ea40
        ;   Label: FUN_0054ea40
    PUSH EDI                            ; 0054ea41
    PUSH EBP                            ; 0054ea42
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054ea43
    CMP dword ptr [EBX + 0x23a0],0x0    ; 0054ea47
    JNZ 0x0054ea7c                      ; 0054ea4e
        ;   XREF to: 0054ea7c (CONDITIONAL_JUMP)  ; LAB_0054ea7c
    CMP byte ptr [EBX + 0x2350],0x0     ; 0054ea50
    JNZ 0x0054ea86                      ; 0054ea57
        ;   XREF to: 0054ea86 (CONDITIONAL_JUMP)  ; LAB_0054ea86
    MOV EDI,0x5d20f4                    ; 0054ea59 | = "..\\core\\skeleton.cpp"
    MOV EBP,0xde7                       ; 0054ea5e
    PUSH 0x5d2109                       ; 0054ea63 | = "CDeformableModelInstance::getModelPtr..."
    MOV dword ptr [0x01d71de0],EDI      ; 0054ea68 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0054ea6e | DAT_01d71de4
    CALL FUN_004e4330                   ; 0054ea74
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0054ea79
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 0054ea7c
        ;   Label: LAB_0054ea7c
    POP EBP                             ; 0054ea82
    POP EDI                             ; 0054ea83
    POP EBX                             ; 0054ea84
    RET                                 ; 0054ea85
    PUSH ESI                            ; 0054ea86
        ;   Label: LAB_0054ea86
    LEA EAX,[EBX + 0x2350]              ; 0054ea87
    PUSH EAX                            ; 0054ea8d
    MOV ECX,0x5d2157                    ; 0054ea8e | = "..\\core\\skeleton.cpp"
    MOV ESI,0xde9                       ; 0054ea93
    PUSH 0x5d216c                       ; 0054ea98 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0054ea9d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0054eaa3 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0054eaa9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0054eaae
    POP ESI                             ; 0054eab1
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 0054eab2
    POP EBP                             ; 0054eab8
    POP EDI                             ; 0054eab9
    POP EBX                             ; 0054eaba
    RET                                 ; 0054eabb

