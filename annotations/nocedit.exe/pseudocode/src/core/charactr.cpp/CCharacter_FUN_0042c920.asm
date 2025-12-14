; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042c920(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_werewolf.cpp_FUN_005f11a0 at 005f11cd
;
; Referenced Globals:
;   TerminatedCString s_STAND_00617252
;   TerminatedCString s_STAND_00617258
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c920
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042c920
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042c921
    CMP dword ptr [ESP + 0xc],0x0       ; 0042c925
    JNZ 0x0042c9c3                      ; 0042c92a
        ;   XREF to: 0042c9c3 (CONDITIONAL_JUMP)  ; LAB_0042c9c3
    PUSH ESI                            ; 0042c930
    CMP dword ptr [EBX + 0x25b0],0x0    ; 0042c931
    JZ 0x0042c954                       ; 0042c938
        ;   XREF to: 0042c954 (CONDITIONAL_JUMP)  ; LAB_0042c954
    CMP dword ptr [EBX + 0x25a0],0x0    ; 0042c93a
    JZ 0x0042c954                       ; 0042c941
        ;   XREF to: 0042c954 (CONDITIONAL_JUMP)  ; LAB_0042c954
    LEA ESI,[EBX + 0x158]               ; 0042c943
    LEA EAX,[EBX + 0x23b8]              ; 0042c949
    CMP byte ptr [EAX],0x0              ; 0042c94f
    JNZ 0x0042c994                      ; 0042c952
        ;   XREF to: 0042c994 (CONDITIONAL_JUMP)  ; LAB_0042c994
    MOV dword ptr [EBX + 0x25b0],0x0    ; 0042c954
        ;   Label: LAB_0042c954
    POP ESI                             ; 0042c95e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042c95f
        ;   Label: LAB_0042c95f
    MOV dword ptr [EBX + 0x25a0],EAX    ; 0042c963
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042c969
    MOV dword ptr [EBX + 0x25a4],EAX    ; 0042c96d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042c973
    PUSH 0xbf800000                     ; 0042c977
    MOV dword ptr [EBX + 0x25a8],EAX    ; 0042c97c
    PUSH EBX                            ; 0042c982
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c983
    CALL dword ptr [EAX + 0x14c]        ; 0042c989
    ADD ESP,0x8                         ; 0042c98f
    POP EBX                             ; 0042c992
    RET                                 ; 0042c993
    PUSH 0x0                            ; 0042c994
        ;   Label: LAB_0042c994
    PUSH 0x617252                       ; 0042c996 | = "STAND"
    PUSH ESI                            ; 0042c99b
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0042c99c
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042c9a1
    PUSH EAX                            ; 0042c9a4
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 0042c9a5
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 0042c9aa
    TEST EAX,EAX                        ; 0042c9ad
    JL 0x0042c954                       ; 0042c9af
        ;   XREF to: 0042c954 (CONDITIONAL_JUMP)  ; LAB_0042c954
    PUSH 0x1                            ; 0042c9b1
    PUSH 0x617258                       ; 0042c9b3 | = "STAND"
    PUSH ESI                            ; 0042c9b8
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 ; 0042c9b9
        ;   XREF to: 0052db90 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 0042c9be
    JMP 0x0042c954                      ; 0042c9c1
        ;   XREF to: 0042c954 (UNCONDITIONAL_JUMP)  ; LAB_0042c954
    MOV dword ptr [EBX + 0x25b0],0x1    ; 0042c9c3
        ;   Label: LAB_0042c9c3
    JMP 0x0042c95f                      ; 0042c9cd
        ;   XREF to: 0042c95f (UNCONDITIONAL_JUMP)  ; LAB_0042c95f

