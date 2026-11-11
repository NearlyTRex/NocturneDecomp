; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_process_FUN_004c9670(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd79d
;
; Referenced Globals:
;   undefined4 g_BloodParticles[0].base.lifetime_remaining
;   undefined4 g_BloodParticles[1].base.lifetime_remaining
;   undefined4 g_BloodParticles[1].base.vtable
;   undefined4 DAT_01cbcaf8
;   undefined4 DAT_01cdde40
;
; Called Functions:
;   core_gore.cpp_CBloodPool_processAge_FUN_004c8ce0
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800
;   core_gore.cpp_CBloodSplat_processAge_FUN_004c8690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9670
        ;   Label: core_gore.cpp_CGore_process_FUN_004c9670
    PUSH ESI                            ; 004c9671
    PUSH EDI                            ; 004c9672
    PUSH EBP                            ; 004c9673
    MOV EBP,ESP                         ; 004c9674
    AND ESP,0xfffffff8                  ; 004c9676
    MOV EBX,0x1cb82f4                   ; 004c9679
    LEA ESI,[EBX + 0x4800]              ; 004c967e
    FLD float ptr [EBX + 0x24]          ; 004c9684 | g_BloodParticles[0].base.lifetime_remaining | g_BloodParticles[1].base.lifetime_remaining
        ;   Label: LAB_004c9684
    FLDZ                                ; 004c9687
    FCOMPP                              ; 004c9689
    FNSTSW AX                           ; 004c968b
    SAHF                                ; 004c968d
    JC 0x004c9717                       ; 004c968e
        ;   XREF to: 004c9717 (CONDITIONAL_JUMP)  ; LAB_004c9717
    ADD EBX,0x48                        ; 004c9694
        ;   Label: LAB_004c9694
    CMP EBX,ESI                         ; 004c9697
    JNZ 0x004c9684                      ; 004c9699
        ;   XREF to: 004c9684 (CONDITIONAL_JUMP)  ; LAB_004c9684
    MOV EDX,dword ptr [0x01cbcaf8]      ; 004c969b | DAT_01cbcaf8
    XOR EBX,ESI                         ; 004c96a1
    TEST EDX,EDX                        ; 004c96a3
    JLE 0x004c96d0                      ; 004c96a5
        ;   XREF to: 004c96d0 (CONDITIONAL_JUMP)  ; LAB_004c96d0
    MOV ESI,0x1cbcafc                   ; 004c96a7
    PUSH ESI                            ; 004c96ac
        ;   Label: LAB_004c96ac
    CALL core_gore.cpp_CBloodSplat_processAge_FUN_004c8690 ; 004c96ad
        ;   XREF to: 004c8690 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_processAge_FUN_004c8690(CBloodSplat * this_ptr)
    INC EBX                             ; 004c96b2
    MOV ECX,dword ptr [0x01cbcaf8]      ; 004c96b3 | DAT_01cbcaf8
    ADD ESP,0x4                         ; 004c96b9
    ADD ESI,0x44                        ; 004c96bc
    CMP EBX,ECX                         ; 004c96bf
    JL 0x004c96ac                       ; 004c96c1
        ;   XREF to: 004c96ac (CONDITIONAL_JUMP)  ; LAB_004c96ac
    LEA EAX,[EAX]                       ; 004c96c3
    LEA EDX,[EDX]                       ; 004c96c9
    NOP                                 ; 004c96cf
    PUSH 0x1cdde44                      ; 004c96d0
        ;   Label: LAB_004c96d0
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800 ; 004c96d5
        ;   XREF to: 004c8800 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool * this_ptr)
    XOR ESI,ESI                         ; 004c96da
    MOV EBX,dword ptr [0x01cdde40]      ; 004c96dc | DAT_01cdde40
    ADD ESP,0x4                         ; 004c96e2
    TEST EBX,EBX                        ; 004c96e5
    JLE 0x004c9710                      ; 004c96e7
        ;   XREF to: 004c9710 (CONDITIONAL_JUMP)  ; LAB_004c9710
    MOV EBX,0x1cdde44                   ; 004c96e9
    PUSH EBX                            ; 004c96ee
        ;   Label: LAB_004c96ee
    CALL core_gore.cpp_CBloodPool_processAge_FUN_004c8ce0 ; 004c96ef
        ;   XREF to: 004c8ce0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_processAge_FUN_004c8ce0(CBloodPool * this_ptr)
    INC ESI                             ; 004c96f4
    MOV EDI,dword ptr [0x01cdde40]      ; 004c96f5 | DAT_01cdde40
    ADD ESP,0x4                         ; 004c96fb
    ADD EBX,0x28                        ; 004c96fe
    CMP ESI,EDI                         ; 004c9701
    JL 0x004c96ee                       ; 004c9703
        ;   XREF to: 004c96ee (CONDITIONAL_JUMP)  ; LAB_004c96ee
    LEA EAX,[EAX]                       ; 004c9705
    LEA EDX,[EDX]                       ; 004c970b
    MOV EBX,EBX                         ; 004c970e
    MOV ESP,EBP                         ; 004c9710
        ;   Label: LAB_004c9710
    POP EBP                             ; 004c9712
    POP EDI                             ; 004c9713
    POP ESI                             ; 004c9714
    POP EBX                             ; 004c9715
    RET                                 ; 004c9716
    PUSH EBX                            ; 004c9717
        ;   Label: LAB_004c9717
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004c9718 | g_BloodParticles[1].base.vtable
    CALL dword ptr [EAX + 0x4]          ; 004c971b
    ADD ESP,0x4                         ; 004c971e
    JMP 0x004c9694                      ; 004c9721
        ;   XREF to: 004c9694 (UNCONDITIONAL_JUMP)  ; LAB_004c9694

