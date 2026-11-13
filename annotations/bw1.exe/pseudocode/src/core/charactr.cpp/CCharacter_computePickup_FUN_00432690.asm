; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00432690(CCharacter *this_ptr,int param_2,float param_3,int *param_4)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; float            Stack[0xc]:4   param_3
; int *            Stack[0x10]:4   param_4
; Local Variables:
; undefined8       Stack[-0x168]:8  local_168
; undefined        Stack[-0x160]:1  local_160
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x40]:1  local_40
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004325b0 at 00432675
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 at 0042e390
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005d5c34
;   TerminatedCString s_CCharacter_computePickup_005d5c49
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_inverse_FUN_005b6380
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432690
        ;   Label: core_charactr.cpp_CCharacter_computePickup_FUN_00432690
    PUSH ESI                            ; 00432691
    PUSH EDI                            ; 00432692
    PUSH EBP                            ; 00432693
    MOV EBP,ESP                         ; 00432694
    SUB ESP,0x158                       ; 00432696
    AND ESP,0xfffffff8                  ; 0043269c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0043269f
    LEA EBX,[ESI*0x8 + 0x0]             ; 004326a2
    MOV EAX,EBX                         ; 004326a9
    SHL EBX,0x4                         ; 004326ab
    SUB EBX,EAX                         ; 004326ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 004326b0
    ADD EAX,0x25a8                      ; 004326b3
    ADD EBX,EAX                         ; 004326b8
    CMP dword ptr [EBX],0x0             ; 004326ba
    JL 0x004327bc                       ; 004326bd
        ;   XREF to: 004327bc (CONDITIONAL_JUMP)  ; LAB_004327bc
    MOV EAX,dword ptr [EBX + 0x8]       ; 004326c3
        ;   Label: LAB_004326c3
    LEA ESI,[EAX + 0x30]                ; 004326c6
    PUSH ESI                            ; 004326c9
    ADD EAX,0x20                        ; 004326ca
    PUSH EAX                            ; 004326cd
    LEA EAX,[ESP + 0xa0]                ; 004326ce
    PUSH EAX                            ; 004326d5
    CALL core_xform.cpp_FUN_005b5620    ; 004326d6
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004326db
    MOV EAX,dword ptr [EBP + 0x14]      ; 004326de
    ADD EAX,0x30                        ; 004326e1
    PUSH EAX                            ; 004326e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004326e5
    ADD EAX,0x20                        ; 004326e8
    PUSH EAX                            ; 004326eb
    LEA EAX,[ESP + 0xd0]                ; 004326ec
    PUSH EAX                            ; 004326f3
    CALL core_xform.cpp_FUN_005b5760    ; 004326f4
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004326f9
    LEA EAX,[ESP + 0x98]                ; 004326fc
    PUSH EAX                            ; 00432703
    LEA EAX,[ESP + 0xcc]                ; 00432704
    PUSH EAX                            ; 0043270b
    LEA ESI,[ESP + 0x70]                ; 0043270c
    LEA EDI,[ESP + 0x40]                ; 00432710
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00432714
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00432719
    LEA ESI,[ESP + 0x70]                ; 0043271e
    ADD ESP,0x8                         ; 00432722
    MOVSD.REP ES:EDI,ESI                ; 00432725
    LEA EAX,[ESP + 0x38]                ; 00432727
    MOV ESI,dword ptr [EBX]             ; 0043272b
    PUSH EAX                            ; 0043272d
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043272e
    SUB EAX,ESI                         ; 00432735
    MOV ESI,dword ptr [EBP + 0x14]      ; 00432737
    SHL EAX,0x4                         ; 0043273a
    ADD ESI,0xfd8                       ; 0043273d
    ADD EAX,ESI                         ; 00432743
    PUSH EAX                            ; 00432745
    LEA ESI,[ESP + 0x100]               ; 00432746
    LEA EDI,[ESP + 0x10]                ; 0043274d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00432751
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00432756
    LEA ESI,[ESP + 0x100]               ; 0043275b
    ADD ESP,0x8                         ; 00432762
    LEA EAX,[ESP + 0x8]                 ; 00432765
    MOVSD.REP ES:EDI,ESI                ; 00432769
    PUSH EAX                            ; 0043276b
    LEA ESI,[ESP + 0x12c]               ; 0043276c
    CALL core_xform.cpp_inverse_FUN_005b6380 ; 00432773
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_005b6380()
    FLDZ                                ; 00432778
    MOV ECX,0xc                         ; 0043277a
    LEA ESI,[ESP + 0x12c]               ; 0043277f
    ADD ESP,0x4                         ; 00432786
    LEA EDI,[EBX + 0xc]                 ; 00432789
    FLD float ptr [EBP + 0x1c]          ; 0043278c
    FSTP double ptr [ESP]               ; 0043278f
    MOVSD.REP ES:EDI,ESI                ; 00432792
    FCOMP double ptr [ESP]              ; 00432794
    FNSTSW AX                           ; 00432797
    SAHF                                ; 00432799
    JNC 0x004327e9                      ; 0043279a
        ;   XREF to: 004327e9 (CONDITIONAL_JUMP)  ; LAB_004327e9
    FLD1                                ; 0043279c
    FDIV double ptr [ESP]               ; 0043279e
    MOV dword ptr [EBX + 0x40],0x0      ; 004327a1
    FSTP float ptr [EBX + 0x3c]         ; 004327a8
    MOV EDX,dword ptr [EBP + 0x20]      ; 004327ab
        ;   Label: LAB_004327ab
    TEST EDX,EDX                        ; 004327ae
    JNZ 0x004327f9                      ; 004327b0
        ;   XREF to: 004327f9 (CONDITIONAL_JUMP)  ; LAB_004327f9
    MOV dword ptr [EBX + 0x44],EDX      ; 004327b2
    MOV ESP,EBP                         ; 004327b5
    POP EBP                             ; 004327b7
    POP EDI                             ; 004327b8
    POP ESI                             ; 004327b9
    POP EBX                             ; 004327ba
    RET                                 ; 004327bb
    PUSH ESI                            ; 004327bc
        ;   Label: LAB_004327bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004327bd
    PUSH EAX                            ; 004327c0
    MOV ECX,0x5d5c34                    ; 004327c1 | = "..\\core\\charactr.cpp"
    MOV EDI,0xdef                       ; 004327c6
    PUSH 0x5d5c49                       ; 004327cb | = "CCharacter::computePickup - invalid h..."
    MOV dword ptr [0x01d1d400],ECX      ; 004327d0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004327d6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004327dc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004327e1
    JMP 0x004326c3                      ; 004327e4
        ;   XREF to: 004326c3 (UNCONDITIONAL_JUMP)  ; LAB_004326c3
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 004327e9
        ;   Label: LAB_004327e9
    MOV dword ptr [EBX + 0x3c],0x0      ; 004327f0
    JMP 0x004327ab                      ; 004327f7
        ;   XREF to: 004327ab (UNCONDITIONAL_JUMP)  ; LAB_004327ab
    MOV ECX,0xc                         ; 004327f9
        ;   Label: LAB_004327f9
    MOV ESI,EDX                         ; 004327fe
    LEA EDI,[EBX + 0x48]                ; 00432800
    MOV dword ptr [EBX + 0x44],0x1      ; 00432803
    MOVSD.REP ES:EDI,ESI                ; 0043280a
    MOV ESP,EBP                         ; 0043280c
    POP EBP                             ; 0043280e
    POP EDI                             ; 0043280f
    POP ESI                             ; 00432810
    POP EBX                             ; 00432811
    RET                                 ; 00432812

