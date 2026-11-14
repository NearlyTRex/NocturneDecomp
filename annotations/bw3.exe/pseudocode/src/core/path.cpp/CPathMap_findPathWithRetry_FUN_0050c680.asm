; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   dest_position
; CVector3f *      Stack[0xc]:4   out_euler_angles
; int              Stack[0x10]:4   direction_hint
;
; XREF[7]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570 at 004228b1
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_004221c0 at 0042233e
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 at 0042be11
;   core_enemy.cpp_CEnemy_updateVictim_FUN_00489730 at 00489994
;   core_game.cpp_FUN_004c07b0 at 004c19bc
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c6c80 at 004c6dcc
;   core_waypoint.cpp_FUN_00579130 at 00579217
;
; Referenced Globals:
;   undefined4 DAT_01ec1514
;
; Called Functions:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_0050baa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c680
        ;   Label: core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680
    PUSH ESI                            ; 0050c681
    PUSH EDI                            ; 0050c682
    PUSH EBP                            ; 0050c683
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050c684
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050c688
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050c68c
    LEA EDI,[EBX + 0x138c0]             ; 0050c690
    FLD float ptr [EDI]                 ; 0050c696
    FCOMP float ptr [ESI]               ; 0050c698
    FNSTSW AX                           ; 0050c69a
    SAHF                                ; 0050c69c
    JZ 0x0050c6ea                       ; 0050c69d
        ;   XREF to: 0050c6ea (CONDITIONAL_JUMP)  ; LAB_0050c6ea
    LEA EAX,[EBX + 0x138c0]             ; 0050c69f
        ;   Label: LAB_0050c69f
    CMP EAX,ESI                         ; 0050c6a5
    JNZ 0x0050c702                      ; 0050c6a7
        ;   XREF to: 0050c702 (CONDITIONAL_JUMP)  ; LAB_0050c702
    MOV EDX,0x1                         ; 0050c6a9
        ;   Label: LAB_0050c6a9
    LEA EDI,[EBX + 0x138cc]             ; 0050c6ae
    MOV dword ptr [0x01ec1514],EDX      ; 0050c6b4 | DAT_01ec1514
    PUSH EBP                            ; 0050c6ba
        ;   Label: LAB_0050c6ba
    PUSH EDI                            ; 0050c6bb
    PUSH ESI                            ; 0050c6bc
    PUSH EBX                            ; 0050c6bd
    CALL core_path.cpp_CPathMap_findPathToDestination_FUN_0050baa0 ; 0050c6be
        ;   XREF to: 0050baa0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathToDestination_FUN_0050baa0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 0050c6c3
    MOV dword ptr [EBX + 0x138bc],EAX   ; 0050c6c6
    CMP EAX,0x1                         ; 0050c6cc
    JNZ 0x0050c714                      ; 0050c6cf
        ;   XREF to: 0050c714 (CONDITIONAL_JUMP)  ; LAB_0050c714
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050c6d1
        ;   Label: LAB_0050c6d1
    LEA EAX,[EBX + 0x138cc]             ; 0050c6d5
    CMP EAX,ECX                         ; 0050c6db
    JNZ 0x0050c726                      ; 0050c6dd
        ;   XREF to: 0050c726 (CONDITIONAL_JUMP)  ; LAB_0050c726
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 0050c6df
    POP EBP                             ; 0050c6e5
    POP EDI                             ; 0050c6e6
    POP ESI                             ; 0050c6e7
    POP EBX                             ; 0050c6e8
    RET                                 ; 0050c6e9
    FLD float ptr [EDI + 0x4]           ; 0050c6ea
        ;   Label: LAB_0050c6ea
    FCOMP float ptr [ESI + 0x4]         ; 0050c6ed
    FNSTSW AX                           ; 0050c6f0
    SAHF                                ; 0050c6f2
    JNZ 0x0050c69f                      ; 0050c6f3
        ;   XREF to: 0050c69f (CONDITIONAL_JUMP)  ; LAB_0050c69f
    FLD float ptr [EDI + 0x8]           ; 0050c6f5
    FCOMP float ptr [ESI + 0x8]         ; 0050c6f8
    FNSTSW AX                           ; 0050c6fb
    SAHF                                ; 0050c6fd
    JZ 0x0050c6d1                       ; 0050c6fe
        ;   XREF to: 0050c6d1 (CONDITIONAL_JUMP)  ; LAB_0050c6d1
    JMP 0x0050c69f                      ; 0050c700
        ;   XREF to: 0050c69f (UNCONDITIONAL_JUMP)  ; LAB_0050c69f
    MOV EDX,dword ptr [ESI]             ; 0050c702
        ;   Label: LAB_0050c702
    MOV dword ptr [EAX],EDX             ; 0050c704
    MOV EDX,dword ptr [ESI + 0x4]       ; 0050c706
    MOV dword ptr [EAX + 0x4],EDX       ; 0050c709
    MOV EDX,dword ptr [ESI + 0x8]       ; 0050c70c
    MOV dword ptr [EAX + 0x8],EDX       ; 0050c70f
    JMP 0x0050c6a9                      ; 0050c712
        ;   XREF to: 0050c6a9 (UNCONDITIONAL_JUMP)  ; LAB_0050c6a9
    MOV EAX,[0x01ec1514]                ; 0050c714 | DAT_01ec1514
        ;   Label: LAB_0050c714
    INC EAX                             ; 0050c719
    MOV [0x01ec1514],EAX                ; 0050c71a | DAT_01ec1514
    CMP EAX,0x3                         ; 0050c71f
    JLE 0x0050c6ba                      ; 0050c722
        ;   XREF to: 0050c6ba (CONDITIONAL_JUMP)  ; LAB_0050c6ba
    JMP 0x0050c6d1                      ; 0050c724
        ;   XREF to: 0050c6d1 (UNCONDITIONAL_JUMP)  ; LAB_0050c6d1
    MOV EDX,dword ptr [EAX]             ; 0050c726
        ;   Label: LAB_0050c726
    MOV dword ptr [ECX],EDX             ; 0050c728
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050c72a
    MOV dword ptr [ECX + 0x4],EDX       ; 0050c72d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050c730
    MOV dword ptr [ECX + 0x8],EDX       ; 0050c733
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 0050c736
    POP EBP                             ; 0050c73c
    POP EDI                             ; 0050c73d
    POP ESI                             ; 0050c73e
    POP EBX                             ; 0050c73f
    RET                                 ; 0050c740

