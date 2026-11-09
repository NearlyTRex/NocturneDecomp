; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   dest_position
; CVector3f *      Stack[0xc]:4   out_euler_angles
; int              Stack[0x10]:4   direction_hint
;
; XREF[14]:
;   core_bugs.cpp_FUN_00420000 at 0042017e
;   core_bugs.cpp_FUN_004203a0 at 004206f1
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 at 0042345f
;   core_colonel.cpp_FUN_00435e30 at 00436348
;   core_enemy.cpp_FUN_00488450 at 004886a3
;   core_gabriela.cpp_FUN_004aeb00 at 004af242
;   core_game.cpp_FUN_004be8a0 at 004bf311
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c1980 at 004c1acc
;   core_haystack.cpp_FUN_004ccff0 at 004cd567
;   core_icepick.cpp_FUN_004d5950 at 004d5fd4
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_01e4fed4
;
; Called Functions:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513650
        ;   Label: core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
    PUSH ESI                            ; 00513651
    PUSH EDI                            ; 00513652
    PUSH EBP                            ; 00513653
    MOV EBX,dword ptr [ESP + 0x14]      ; 00513654
    MOV ESI,dword ptr [ESP + 0x18]      ; 00513658
    MOV EBP,dword ptr [ESP + 0x20]      ; 0051365c
    LEA EDI,[EBX + 0x138c0]             ; 00513660
    FLD float ptr [EDI]                 ; 00513666
    FCOMP float ptr [ESI]               ; 00513668
    FNSTSW AX                           ; 0051366a
    SAHF                                ; 0051366c
    JZ 0x005136ba                       ; 0051366d
        ;   XREF to: 005136ba (CONDITIONAL_JUMP)  ; LAB_005136ba
    LEA EAX,[EBX + 0x138c0]             ; 0051366f
        ;   Label: LAB_0051366f
    CMP EAX,ESI                         ; 00513675
    JNZ 0x005136d2                      ; 00513677
        ;   XREF to: 005136d2 (CONDITIONAL_JUMP)  ; LAB_005136d2
    MOV EDX,0x1                         ; 00513679
        ;   Label: LAB_00513679
    LEA EDI,[EBX + 0x138cc]             ; 0051367e
    MOV dword ptr [0x01e4fed4],EDX      ; 00513684 | DAT_01e4fed4
    PUSH EBP                            ; 0051368a
        ;   Label: LAB_0051368a
    PUSH EDI                            ; 0051368b
    PUSH ESI                            ; 0051368c
    PUSH EBX                            ; 0051368d
    CALL core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70 ; 0051368e
        ;   XREF to: 00512a70 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00513693
    MOV dword ptr [EBX + 0x138bc],EAX   ; 00513696
    CMP EAX,0x1                         ; 0051369c
    JNZ 0x005136e4                      ; 0051369f
        ;   XREF to: 005136e4 (CONDITIONAL_JUMP)  ; LAB_005136e4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005136a1
        ;   Label: LAB_005136a1
    LEA EAX,[EBX + 0x138cc]             ; 005136a5
    CMP EAX,ECX                         ; 005136ab
    JNZ 0x005136f6                      ; 005136ad
        ;   XREF to: 005136f6 (CONDITIONAL_JUMP)  ; LAB_005136f6
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 005136af
    POP EBP                             ; 005136b5
    POP EDI                             ; 005136b6
    POP ESI                             ; 005136b7
    POP EBX                             ; 005136b8
    RET                                 ; 005136b9
    FLD float ptr [EDI + 0x4]           ; 005136ba
        ;   Label: LAB_005136ba
    FCOMP float ptr [ESI + 0x4]         ; 005136bd
    FNSTSW AX                           ; 005136c0
    SAHF                                ; 005136c2
    JNZ 0x0051366f                      ; 005136c3
        ;   XREF to: 0051366f (CONDITIONAL_JUMP)  ; LAB_0051366f
    FLD float ptr [EDI + 0x8]           ; 005136c5
    FCOMP float ptr [ESI + 0x8]         ; 005136c8
    FNSTSW AX                           ; 005136cb
    SAHF                                ; 005136cd
    JZ 0x005136a1                       ; 005136ce
        ;   XREF to: 005136a1 (CONDITIONAL_JUMP)  ; LAB_005136a1
    JMP 0x0051366f                      ; 005136d0
        ;   XREF to: 0051366f (UNCONDITIONAL_JUMP)  ; LAB_0051366f
    MOV EDX,dword ptr [ESI]             ; 005136d2
        ;   Label: LAB_005136d2
    MOV dword ptr [EAX],EDX             ; 005136d4
    MOV EDX,dword ptr [ESI + 0x4]       ; 005136d6
    MOV dword ptr [EAX + 0x4],EDX       ; 005136d9
    MOV EDX,dword ptr [ESI + 0x8]       ; 005136dc
    MOV dword ptr [EAX + 0x8],EDX       ; 005136df
    JMP 0x00513679                      ; 005136e2
        ;   XREF to: 00513679 (UNCONDITIONAL_JUMP)  ; LAB_00513679
    MOV EAX,[0x01e4fed4]                ; 005136e4 | DAT_01e4fed4
        ;   Label: LAB_005136e4
    INC EAX                             ; 005136e9
    MOV [0x01e4fed4],EAX                ; 005136ea | DAT_01e4fed4
    CMP EAX,0x3                         ; 005136ef
    JLE 0x0051368a                      ; 005136f2
        ;   XREF to: 0051368a (CONDITIONAL_JUMP)  ; LAB_0051368a
    JMP 0x005136a1                      ; 005136f4
        ;   XREF to: 005136a1 (UNCONDITIONAL_JUMP)  ; LAB_005136a1
    MOV EDX,dword ptr [EAX]             ; 005136f6
        ;   Label: LAB_005136f6
    MOV dword ptr [ECX],EDX             ; 005136f8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005136fa
    MOV dword ptr [ECX + 0x4],EDX       ; 005136fd
    MOV EDX,dword ptr [EAX + 0x8]       ; 00513700
    MOV dword ptr [ECX + 0x8],EDX       ; 00513703
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 00513706
    POP EBP                             ; 0051370c
    POP EDI                             ; 0051370d
    POP ESI                             ; 0051370e
    POP EBX                             ; 0051370f
    RET                                 ; 00513710

