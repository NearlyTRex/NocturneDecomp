; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHiram * core_hiram.cpp_FUN_004f43f0(CHiram * this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hiram.cpp_FUN_004f43b0 at 004f43ca
;
; Referenced Globals:
;   TerminatedCString s_hiram_dfm_0062ede8
;   TerminatedCString s_killHiram_0062edf2
;   undefined4 s_illHiram_0062edf3
;   undefined4 s_llHiram_0062edf4
;   undefined4 s_lHiram_0062edf5
;   CDemonActor_vtable PTR_core_hiram.cpp_FUN_004f4530_0065f974
;
; Called Functions:
;   core_npc.cpp_FUN_005447e0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f43f0
        ;   Label: core_hiram.cpp_FUN_004f43f0
    PUSH ESI                            ; 004f43f1
    PUSH EDI                            ; 004f43f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f43f3
    PUSH EDX                            ; 004f43f7
    CALL core_npc.cpp_FUN_005447e0      ; 004f43f8
        ;   XREF to: 005447e0 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_FUN_005447e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f43fd
    PUSH 0x62ede8                       ; 004f4400 | = "hiram.dfm"
    MOV EBX,EAX                         ; 004f4405
    LEA EDI,[EAX + 0x158]               ; 004f4407
    PUSH EDI                            ; 004f440d
    MOV dword ptr [EAX + 0x154],0x65f974 ; 004f440e | PTR_core_hiram.cpp_FUN_004f4530_0065f974
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004f4418
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004f441d
    MOV ESI,0x62edf2                    ; 004f4420 | = "killHiram"
    LEA EDI,[EBX + 0x1f708]             ; 004f4425
    PUSH EDI                            ; 004f442b
    MOV AL,byte ptr [ESI]               ; 004f442c | = "killHiram" | s_llHiram_0062edf4
        ;   Label: LAB_004f442c
    MOV byte ptr [EDI],AL               ; 004f442e
    CMP AL,0x0                          ; 004f4430
    JZ 0x004f4444                       ; 004f4432
        ;   XREF to: 004f4444 (CONDITIONAL_JUMP)  ; LAB_004f4444
    MOV AL,byte ptr [ESI + 0x1]         ; 004f4434 | s_illHiram_0062edf3 | s_lHiram_0062edf5
    ADD ESI,0x2                         ; 004f4437
    MOV byte ptr [EDI + 0x1],AL         ; 004f443a
    ADD EDI,0x2                         ; 004f443d
    CMP AL,0x0                          ; 004f4440
    JNZ 0x004f442c                      ; 004f4442
        ;   XREF to: 004f442c (CONDITIONAL_JUMP)  ; LAB_004f442c
    POP EDI                             ; 004f4444
        ;   Label: LAB_004f4444
    MOV EAX,EBX                         ; 004f4445
    POP EDI                             ; 004f4447
    POP ESI                             ; 004f4448
    POP EBX                             ; 004f4449
    RET                                 ; 004f444a

