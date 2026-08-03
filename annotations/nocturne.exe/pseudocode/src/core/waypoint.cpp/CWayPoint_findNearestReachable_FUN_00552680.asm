; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint *this_ptr,CWayPoint *start_waypoint)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; CWayPoint *      Stack[0x8]:4   start_waypoint
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0 at 0042a35b
;   core_charactr.cpp_FUN_00428c00 at 00428e75
;   core_hostage.cpp_CHostage_process_FUN_004b6d80 at 004b77f4
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CDemonSet_01e57284.waypoint_count
;   undefined4 DAT_02ddd5d4
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552680
        ;   Label: core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680
    PUSH EBP                            ; 00552681
    SUB ESP,0x10                        ; 00552682
    MOV EBX,dword ptr [ESP + 0x20]      ; 00552685
    TEST EBX,EBX                        ; 00552689
    JNZ 0x00552695                      ; 0055268b
        ;   XREF to: 00552695 (CONDITIONAL_JUMP)  ; LAB_00552695
    XOR EAX,EAX                         ; 0055268d
    ADD ESP,0x10                        ; 0055268f
        ;   Label: LAB_0055268f
    POP EBP                             ; 00552692
    POP EBX                             ; 00552693
    RET                                 ; 00552694
    PUSH 0x0                            ; 00552695
        ;   Label: LAB_00552695
    LEA EAX,[EBX + 0x20]                ; 00552697
    PUSH EAX                            ; 0055269a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0055269b
    PUSH EDX                            ; 0055269f
    CALL core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0 ; 005526a0
        ;   XREF to: 005523b0 (UNCONDITIONAL_CALL)  ; int core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0(CWayPoint * this_ptr, CLocation * from_location, int use_tight_bounds)
    ADD ESP,0xc                         ; 005526a5
    TEST EAX,EAX                        ; 005526a8
    JNZ 0x005526de                      ; 005526aa
        ;   XREF to: 005526de (CONDITIONAL_JUMP)  ; LAB_005526de
    CMP dword ptr [EBX + 0x368],0x1     ; 005526ac
    JL 0x0055268f                       ; 005526b3
        ;   XREF to: 0055268f (CONDITIONAL_JUMP)  ; LAB_0055268f
    PUSH EDI                            ; 005526b5
    PUSH ESI                            ; 005526b6
    XOR ESI,ESI                         ; 005526b7
    MOV EDX,dword ptr [0x005be368]      ; 005526b9 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_005526b9
    CMP ESI,dword ptr [EDX + 0x154a7c]  ; 005526bf | g_CDemonSet_01e57284.waypoint_count
    JGE 0x005526e6                      ; 005526c5
        ;   XREF to: 005526e6 (CONDITIONAL_JUMP)  ; LAB_005526e6
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x154a80] ; 005526c7
    ADD EAX,0x4                         ; 005526ce
    INC ESI                             ; 005526d1
    MOV dword ptr [EDX + 0x54c],0x7149f2ca ; 005526d2
    JMP 0x005526b9                      ; 005526dc
        ;   XREF to: 005526b9 (UNCONDITIONAL_JUMP)  ; LAB_005526b9
    MOV EAX,EBX                         ; 005526de
        ;   Label: LAB_005526de
    ADD ESP,0x10                        ; 005526e0
    POP EBP                             ; 005526e3
    POP EBX                             ; 005526e4
    RET                                 ; 005526e5
    MOV ESI,0x1                         ; 005526e6
        ;   Label: LAB_005526e6
    MOV dword ptr [0x02ddd5d4],EBX      ; 005526eb | DAT_02ddd5d4
    MOV dword ptr [EBX + 0x54c],0x0     ; 005526f1
    DEC ESI                             ; 005526fb
        ;   Label: LAB_005526fb
    LEA EBX,[ESI*0x4 + 0x0]             ; 005526fc
    PUSH EBX                            ; 00552703
    PUSH 0x2ddd5d8                      ; 00552704
    MOV EAX,[0x02ddd5d4]                ; 00552709 | DAT_02ddd5d4
    PUSH 0x2ddd5d4                      ; 0055270e | DAT_02ddd5d4
    MOV dword ptr [ESP + 0x18],EAX      ; 00552713
    CALL crt_string.c_memmove_FUN_00566170 ; 00552717
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0055271c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055271f
    XOR EBP,EBP                         ; 00552723
    MOV EDX,dword ptr [EAX + 0x368]     ; 00552725
    MOV dword ptr [ESP + 0x14],EBP      ; 0055272b
    TEST EDX,EDX                        ; 0055272f
    JLE 0x005527a9                      ; 00552731
        ;   XREF to: 005527a9 (CONDITIONAL_JUMP)  ; LAB_005527a9
    MOV EBP,EBX                         ; 00552737
    MOV EDI,EAX                         ; 00552739
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055273b
        ;   Label: LAB_0055273b
    FLD float ptr [EAX + 0x54c]         ; 0055273f
    FADD float ptr [EDI + 0x370]        ; 00552745
    MOV ECX,dword ptr [EDI + 0x36c]     ; 0055274b
    FST float ptr [ESP + 0x10]          ; 00552751
    FCOMP float ptr [ECX + 0x54c]       ; 00552755
    FNSTSW AX                           ; 0055275b
    SAHF                                ; 0055275d
    JNC 0x0055278f                      ; 0055275e
        ;   XREF to: 0055278f (CONDITIONAL_JUMP)  ; LAB_0055278f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00552760
    XOR EDX,EDX                         ; 00552764
    MOV dword ptr [ECX + 0x54c],EAX     ; 00552766
    TEST ESI,ESI                        ; 0055276c
    JLE 0x00552781                      ; 0055276e
        ;   XREF to: 00552781 (CONDITIONAL_JUMP)  ; LAB_00552781
    LEA EBX,[ESI*0x4 + 0x0]             ; 00552770
    XOR EAX,EAX                         ; 00552777
    CMP ECX,dword ptr [EAX + 0x2ddd5d4] ; 00552779 | DAT_02ddd5d4
        ;   Label: LAB_00552779
    JNZ 0x005527e9                      ; 0055277f
        ;   XREF to: 005527e9 (CONDITIONAL_JUMP)  ; LAB_005527e9
    CMP EDX,ESI                         ; 00552781
        ;   Label: LAB_00552781
    JNZ 0x0055278f                      ; 00552783
        ;   XREF to: 0055278f (CONDITIONAL_JUMP)  ; LAB_0055278f
    ADD EBP,0x4                         ; 00552785
    INC ESI                             ; 00552788
    MOV dword ptr [EBP + 0x2ddd5d0],ECX ; 00552789 | DAT_02ddd5d4
    MOV ECX,dword ptr [ESP + 0x14]      ; 0055278f
        ;   Label: LAB_0055278f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00552793
    ADD EDI,0x8                         ; 00552797
    INC ECX                             ; 0055279a
    MOV EBX,dword ptr [EDX + 0x368]     ; 0055279b
    MOV dword ptr [ESP + 0x14],ECX      ; 005527a1
    CMP ECX,EBX                         ; 005527a5
    JL 0x0055273b                       ; 005527a7
        ;   XREF to: 0055273b (CONDITIONAL_JUMP)  ; LAB_0055273b
    TEST ESI,ESI                        ; 005527a9
        ;   Label: LAB_005527a9
    JG 0x005526fb                       ; 005527ab
        ;   XREF to: 005526fb (CONDITIONAL_JUMP)  ; LAB_005526fb
    MOV ESI,0x6fa18f08                  ; 005527b1
    XOR EBP,EBP                         ; 005527b6
    XOR EDI,EDI                         ; 005527b8
    MOV dword ptr [ESP + 0x8],ESI       ; 005527ba
    XOR ESI,ESI                         ; 005527be
    MOV EAX,[0x005be368]                ; 005527c0 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_005527c0
    CMP EDI,dword ptr [EAX + 0x154a7c]  ; 005527c5 | g_CDemonSet_01e57284.waypoint_count
    JGE 0x00552818                      ; 005527cb
        ;   XREF to: 00552818 (CONDITIONAL_JUMP)  ; LAB_00552818
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x154a80] ; 005527cd
    FLD float ptr [EBX + 0x54c]         ; 005527d4
    FCOMP float ptr [ESP + 0x8]         ; 005527da
    FNSTSW AX                           ; 005527de
    SAHF                                ; 005527e0
    JC 0x005527f3                       ; 005527e1
        ;   XREF to: 005527f3 (CONDITIONAL_JUMP)  ; LAB_005527f3
    INC EDI                             ; 005527e3
        ;   Label: LAB_005527e3
    ADD ESI,0x4                         ; 005527e4
    JMP 0x005527c0                      ; 005527e7
        ;   XREF to: 005527c0 (UNCONDITIONAL_JUMP)  ; LAB_005527c0
    ADD EAX,0x4                         ; 005527e9
        ;   Label: LAB_005527e9
    INC EDX                             ; 005527ec
    CMP EAX,EBX                         ; 005527ed
    JL 0x00552779                       ; 005527ef
        ;   XREF to: 00552779 (CONDITIONAL_JUMP)  ; LAB_00552779
    JMP 0x00552781                      ; 005527f1
        ;   XREF to: 00552781 (UNCONDITIONAL_JUMP)  ; LAB_00552781
    PUSH 0x0                            ; 005527f3
        ;   Label: LAB_005527f3
    LEA EAX,[EBX + 0x20]                ; 005527f5
    PUSH EAX                            ; 005527f8
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005527f9
    PUSH ECX                            ; 005527fd
    CALL core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0 ; 005527fe
        ;   XREF to: 005523b0 (UNCONDITIONAL_CALL)  ; int core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0(CWayPoint * this_ptr, CLocation * from_location, int use_tight_bounds)
    ADD ESP,0xc                         ; 00552803
    TEST EAX,EAX                        ; 00552806
    JZ 0x005527e3                       ; 00552808
        ;   XREF to: 005527e3 (CONDITIONAL_JUMP)  ; LAB_005527e3
    MOV EAX,dword ptr [EBX + 0x54c]     ; 0055280a
    MOV EBP,EBX                         ; 00552810
    MOV dword ptr [ESP + 0x8],EAX       ; 00552812
    JMP 0x005527e3                      ; 00552816
        ;   XREF to: 005527e3 (UNCONDITIONAL_JUMP)  ; LAB_005527e3
    MOV EAX,EBP                         ; 00552818
        ;   Label: LAB_00552818
    POP ESI                             ; 0055281a
    POP EDI                             ; 0055281b
    ADD ESP,0x10                        ; 0055281c
    POP EBP                             ; 0055281f
    POP EBX                             ; 00552820
    RET                                 ; 00552821

