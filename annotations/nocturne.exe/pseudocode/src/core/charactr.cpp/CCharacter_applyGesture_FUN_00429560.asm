; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_00429560(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042a150 at 0042a156
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_0057a210
;   TerminatedCString s_CCharacter_applyGesture_0057a225
;   float FLOAT_0057a26a = 0.3000000
;   float FLOAT_0057a26e = 0.8500000
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429560
        ;   Label: core_charactr.cpp_CCharacter_applyGesture_FUN_00429560
    SUB ESP,0x10                        ; 00429561
    MOV EBX,dword ptr [ESP + 0x18]      ; 00429564
    CMP dword ptr [EBX + 0x25c0],0x0    ; 00429568
    JL 0x0042962e                       ; 0042956f
        ;   XREF to: 0042962e (CONDITIONAL_JUMP)  ; LAB_0042962e
    PUSH ESI                            ; 00429575
    CMP dword ptr [EBX + 0x25bc],-0x1   ; 00429576
    JL 0x00429633                       ; 0042957d
        ;   XREF to: 00429633 (CONDITIONAL_JUMP)  ; LAB_00429633
    IMUL ESI,dword ptr [EBX + 0x25c0],0x54c ; 00429583
        ;   Label: LAB_00429583
    LEA EAX,[EBX + 0x150]               ; 0042958d
    PUSH EAX                            ; 00429593
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 00429594
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    FLD float ptr [ESI + EAX*0x1 + 0x988] ; 00429599
    FMUL float ptr [0x0057a26a]         ; 004295a0 | FLOAT_0057a26a
    FLD float ptr [EBX + 0x25c4]        ; 004295a6
    ADD ESP,0x4                         ; 004295ac
    FLD1                                ; 004295af
    FDIVRP ST2,ST0                      ; 004295b1
    FMUL ST1                            ; 004295b3
    FILD dword ptr [ESI + EAX*0x1 + 0x9cc] ; 004295b5
    FSUB float ptr [EBX + 0x25c4]       ; 004295bc
    MOV EAX,0x3f59999a                  ; 004295c2
    FMULP ST2                           ; 004295c7
    MOV dword ptr [ESP + 0x10],EAX      ; 004295c9
    FSTP float ptr [ESP + 0x8]          ; 004295cd
    FSTP float ptr [ESP + 0xc]          ; 004295d1
    FLD float ptr [ESP + 0x8]           ; 004295d5
    FCOMP float ptr [0x0057a26e]        ; 004295d9 | FLOAT_0057a26e
    FNSTSW AX                           ; 004295df
    SAHF                                ; 004295e1
    JNC 0x004295ec                      ; 004295e2
        ;   XREF to: 004295ec (CONDITIONAL_JUMP)  ; LAB_004295ec
    MOV EAX,dword ptr [ESP + 0x8]       ; 004295e4
    MOV dword ptr [ESP + 0x10],EAX      ; 004295e8
    FLD float ptr [ESP + 0xc]           ; 004295ec
        ;   Label: LAB_004295ec
    FCOMP float ptr [ESP + 0x10]        ; 004295f0
    FNSTSW AX                           ; 004295f4
    SAHF                                ; 004295f6
    JNC 0x00429601                      ; 004295f7
        ;   XREF to: 00429601 (CONDITIONAL_JUMP)  ; LAB_00429601
    MOV EAX,dword ptr [ESP + 0xc]       ; 004295f9
    MOV dword ptr [ESP + 0x10],EAX      ; 004295fd
    PUSH 0x51b650                       ; 00429601 | LAB_0051b650
        ;   Label: LAB_00429601
    MOV EDX,dword ptr [EBX + 0x25bc]    ; 00429606
    PUSH EDX                            ; 0042960c
    PUSH dword ptr [ESP + 0x18]         ; 0042960d
    MOV ECX,dword ptr [EBX + 0x25c0]    ; 00429611
    PUSH dword ptr [EBX + 0x25c4]       ; 00429617
    PUSH ECX                            ; 0042961d
    ADD EBX,0x150                       ; 0042961e
    PUSH EBX                            ; 00429624
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 00429625
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    ADD ESP,0x18                        ; 0042962a
    POP ESI                             ; 0042962d
    ADD ESP,0x10                        ; 0042962e
        ;   Label: LAB_0042962e
    POP EBX                             ; 00429631
    RET                                 ; 00429632
    PUSH EDI                            ; 00429633
        ;   Label: LAB_00429633
    PUSH EBX                            ; 00429634
    MOV ESI,0x57a210                    ; 00429635 | = "..\\core\\charactr.cpp"
    MOV EDI,0xcdb                       ; 0042963a
    PUSH 0x57a225                       ; 0042963f | = "CCharacter::applyGesture - never set ..."
    MOV dword ptr [0x01cc4800],ESI      ; 00429644 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0042964a | DAT_01cc4804
    CALL FUN_004c8440                   ; 00429650
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00429655
    POP EDI                             ; 00429658
    JMP 0x00429583                      ; 00429659
        ;   XREF to: 00429583 (UNCONDITIONAL_JUMP)  ; LAB_00429583

