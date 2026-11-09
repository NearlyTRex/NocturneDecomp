; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_00494030(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x12c8]:4  local_12c8
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00496920 at 00496b64
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c50948
;
; Called Functions:
;   engine_special.cpp_FUN_00581f50
;   engine_special.cpp_unlockFrame_FUN_00581fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494030
        ;   Label: shape_edittool.cpp_FUN_00494030
    PUSH EBP                            ; 00494031
    SUB ESP,0x12c0                      ; 00494032
    CMP dword ptr [0x01c50948],0x0      ; 00494038 | DAT_01c50948
    JZ 0x004940fd                       ; 0049403f
        ;   XREF to: 004940fd (CONDITIONAL_JUMP)  ; LAB_004940fd
    CMP dword ptr [0x01c4354c],0x0      ; 00494045 | DAT_01c4354c
    JZ 0x004940fd                       ; 0049404c
        ;   XREF to: 004940fd (CONDITIONAL_JUMP)  ; LAB_004940fd
    MOV EBX,dword ptr [0x0061b49c]      ; 00494052 | DAT_0061b49c
    TEST EBX,EBX                        ; 00494058
    JLE 0x00494080                      ; 0049405a
        ;   XREF to: 00494080 (CONDITIONAL_JUMP)  ; LAB_00494080
    SHL EBX,0x2                         ; 0049405c
    XOR EAX,EAX                         ; 0049405f
    ADD EAX,0x4                         ; 00494061
        ;   Label: LAB_00494061
    MOV EDX,dword ptr [EAX + 0x1c43548] ; 00494064 | DAT_01c4354c | DAT_01c43550
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0049406a
    CMP EAX,EBX                         ; 0049406e
    JL 0x00494061                       ; 00494070
        ;   XREF to: 00494061 (CONDITIONAL_JUMP)  ; LAB_00494061
    LEA EAX,[EAX]                       ; 00494072
    LEA EDX,[EDX]                       ; 00494078
    MOV EAX,EAX                         ; 0049407e
    CALL engine_special.cpp_FUN_00581f50 ; 00494080
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00581f50()
        ;   Label: LAB_00494080
    TEST EAX,EAX                        ; 00494085
    JZ 0x004940fd                       ; 00494087
        ;   XREF to: 004940fd (CONDITIONAL_JUMP)  ; LAB_004940fd
    PUSH EDI                            ; 0049408d
    PUSH ESI                            ; 0049408e
    MOV ESI,dword ptr [0x0061b4a0]      ; 0049408f | DAT_0061b4a0
    MOV EDX,dword ptr [0x0061b498]      ; 00494095 | DAT_0061b498
    IMUL EDX,ESI                        ; 0049409b
    MOV EAX,EDX                         ; 0049409e
    SAR EDX,0x1f                        ; 004940a0
    SHL EDX,0x3                         ; 004940a3
    SBB EAX,EDX                         ; 004940a6
    SAR EAX,0x3                         ; 004940a8
    MOV EDI,dword ptr [0x0061b49c]      ; 004940ab | DAT_0061b49c
    XOR EBX,EBX                         ; 004940b1
    MOV EBP,EAX                         ; 004940b3
    TEST EDI,EDI                        ; 004940b5
    JLE 0x004940f1                      ; 004940b7
        ;   XREF to: 004940f1 (CONDITIONAL_JUMP)  ; LAB_004940f1
    XOR EDX,EDX                         ; 004940b9
    MOV ECX,dword ptr [EDX + 0x1c4354c] ; 004940bb | DAT_01c4354c | DAT_01c43550
        ;   Label: LAB_004940bb
    TEST ECX,ECX                        ; 004940c1
    JZ 0x004940e4                       ; 004940c3
        ;   XREF to: 004940e4 (CONDITIONAL_JUMP)  ; LAB_004940e4
    CMP dword ptr [ESP + EDX*0x1 + 0x8],0x0 ; 004940c5
    JZ 0x004940e4                       ; 004940ca
        ;   XREF to: 004940e4 (CONDITIONAL_JUMP)  ; LAB_004940e4
    MOV ESI,ECX                         ; 004940cc
    MOV EDI,dword ptr [ESP + EDX*0x1 + 0x8] ; 004940ce
    MOV ECX,EBP                         ; 004940d2
    PUSH EDI                            ; 004940d4
    MOV EAX,ECX                         ; 004940d5
    SHR ECX,0x2                         ; 004940d7
    MOVSD.REP ES:EDI,ESI                ; 004940da
    MOV CL,AL                           ; 004940dc
    AND CL,0x3                          ; 004940de
    MOVSB.REP ES:EDI,ESI                ; 004940e1
    POP EDI                             ; 004940e3
    MOV EAX,[0x0061b49c]                ; 004940e4 | DAT_0061b49c
        ;   Label: LAB_004940e4
    INC EBX                             ; 004940e9
    ADD EDX,0x4                         ; 004940ea
    CMP EBX,EAX                         ; 004940ed
    JL 0x004940bb                       ; 004940ef
        ;   XREF to: 004940bb (CONDITIONAL_JUMP)  ; LAB_004940bb
    PUSH 0x1                            ; 004940f1
        ;   Label: LAB_004940f1
    CALL engine_special.cpp_unlockFrame_FUN_00581fa0 ; 004940f3
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)
    ADD ESP,0x4                         ; 004940f8
    POP ESI                             ; 004940fb
    POP EDI                             ; 004940fc
    ADD ESP,0x12c0                      ; 004940fd
        ;   Label: LAB_004940fd
    POP EBP                             ; 00494103
    POP EBX                             ; 00494104
    RET                                 ; 00494105

