; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_FUN_004ed7b0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a384
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056c063
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c484
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056cb77
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   CBloodParticle[256] CBloodParticle_ARRAY_02d833d4
;   undefined4 DAT_02d833ec
;   undefined4 DAT_02d83408
;   undefined4 DAT_02d83414
;   undefined4 DAT_02d8342c
;   undefined4 DAT_02d83448
;   undefined4 DAT_02d873d4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_gore.cpp_CBloodParticle_FUN_004eb9d0
;   core_set.cpp_CDemonSet_FUN_0056d380
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed7b0
        ;   Label: core_gore.cpp_CGore_FUN_004ed7b0
    PUSH ESI                            ; 004ed7b1
    PUSH EBP                            ; 004ed7b2
    MOV EBP,ESP                         ; 004ed7b3
    AND ESP,0xfffffff8                  ; 004ed7b5
    MOV EAX,[0x0067b654]                ; 004ed7b8 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x14],0x0      ; 004ed7bd | g_CGameInstance.blood_flag
    JNZ 0x004ed7c9                      ; 004ed7c1
        ;   XREF to: 004ed7c9 (CONDITIONAL_JUMP)  ; LAB_004ed7c9
    MOV ESP,EBP                         ; 004ed7c3
        ;   Label: LAB_004ed7c3
    POP EBP                             ; 004ed7c5
    POP ESI                             ; 004ed7c6
    POP EBX                             ; 004ed7c7
    RET                                 ; 004ed7c8
    MOV ECX,dword ptr [0x006703ec]      ; 004ed7c9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_004ed7c9
    PUSH ECX                            ; 004ed7cf | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004ed7d0
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ed7d5
    TEST EAX,EAX                        ; 004ed7d8
    JNZ 0x004ed7c3                      ; 004ed7da
        ;   XREF to: 004ed7c3 (CONDITIONAL_JUMP)  ; LAB_004ed7c3
    PUSH EAX                            ; 004ed7dc
    PUSH EAX                            ; 004ed7dd
    PUSH EAX                            ; 004ed7de
    PUSH EAX                            ; 004ed7df
    PUSH EAX                            ; 004ed7e0
    MOV EBX,dword ptr [0x006810c8]      ; 004ed7e1 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 004ed7e7 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056d380 ; 004ed7e8
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)
    ADD ESP,0x18                        ; 004ed7ed
    PUSH 0x2d833d4                      ; 004ed7f0 | CBloodParticle_ARRAY_02d833d4
    MOV EBX,0x2d833d4                   ; 004ed7f5 | CBloodParticle_ARRAY_02d833d4
    CALL core_gore.cpp_CBloodParticle_FUN_004eb9d0 ; 004ed7fa
        ;   XREF to: 004eb9d0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodParticle_FUN_004eb9d0(CBloodParticle * this_ptr)
    LEA ESI,[EBX + 0x4000]              ; 004ed7ff | DAT_02d873d4
    ADD ESP,0x4                         ; 004ed805
    FLD float ptr [EBX + 0x18]          ; 004ed808 | DAT_02d833ec | DAT_02d8342c
        ;   Label: LAB_004ed808
    FLDZ                                ; 004ed80b
    FCOMPP                              ; 004ed80d
    FNSTSW AX                           ; 004ed80f
    SAHF                                ; 004ed811
    JNC 0x004ed81e                      ; 004ed812
        ;   XREF to: 004ed81e (CONDITIONAL_JUMP)  ; LAB_004ed81e
    PUSH EBX                            ; 004ed814 | CBloodParticle_ARRAY_02d833d4 | DAT_02d83414
    MOV EAX,dword ptr [EBX + 0x34]      ; 004ed815 | DAT_02d83408 | DAT_02d83448
    CALL dword ptr [EAX + 0x8]          ; 004ed818
    ADD ESP,0x4                         ; 004ed81b
    ADD EBX,0x40                        ; 004ed81e
        ;   Label: LAB_004ed81e
    CMP EBX,ESI                         ; 004ed821
    JZ 0x004ed7c3                       ; 004ed823
        ;   XREF to: 004ed7c3 (CONDITIONAL_JUMP)  ; LAB_004ed7c3
    JMP 0x004ed808                      ; 004ed825
        ;   XREF to: 004ed808 (UNCONDITIONAL_JUMP)  ; LAB_004ed808

