; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004ce7e0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004bf4b0 at 004bf6d4
;
; Referenced Globals:
;   undefined4 g_BloodParticles[0].field36_0x24
;   undefined4 g_BloodParticles[1].field36_0x24
;   undefined4 g_BloodParticles[1].field60_0x3c
;   undefined4 DAT_01d276b8
;   undefined4 DAT_01d4a940
;
; Called Functions:
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004cdc90
;   core_gore.cpp_FUN_004cdb20
;   core_gore.cpp_FUN_004cdfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce7e0
        ;   Label: core_gore.cpp_FUN_004ce7e0
    PUSH ESI                            ; 004ce7e1
    PUSH EDI                            ; 004ce7e2
    PUSH EBP                            ; 004ce7e3
    MOV EBP,ESP                         ; 004ce7e4
    AND ESP,0xfffffff8                  ; 004ce7e6
    MOV EBX,0x1d22eb4                   ; 004ce7e9
    LEA ESI,[EBX + 0x4800]              ; 004ce7ee
    FLD float ptr [EBX + 0x24]          ; 004ce7f4 | g_BloodParticles[0].field36_0x24 | g_BloodParticles[1].field36_0x24
        ;   Label: LAB_004ce7f4
    FLDZ                                ; 004ce7f7
    FCOMPP                              ; 004ce7f9
    FNSTSW AX                           ; 004ce7fb
    SAHF                                ; 004ce7fd
    JC 0x004ce887                       ; 004ce7fe
        ;   XREF to: 004ce887 (CONDITIONAL_JUMP)  ; LAB_004ce887
    ADD EBX,0x48                        ; 004ce804
        ;   Label: LAB_004ce804
    CMP EBX,ESI                         ; 004ce807
    JNZ 0x004ce7f4                      ; 004ce809
        ;   XREF to: 004ce7f4 (CONDITIONAL_JUMP)  ; LAB_004ce7f4
    MOV EDX,dword ptr [0x01d276b8]      ; 004ce80b | DAT_01d276b8
    XOR EBX,ESI                         ; 004ce811
    TEST EDX,EDX                        ; 004ce813
    JLE 0x004ce840                      ; 004ce815
        ;   XREF to: 004ce840 (CONDITIONAL_JUMP)  ; LAB_004ce840
    MOV ESI,0x1d276bc                   ; 004ce817
    PUSH ESI                            ; 004ce81c
        ;   Label: LAB_004ce81c
    CALL core_gore.cpp_FUN_004cdb20     ; 004ce81d
        ;   XREF to: 004cdb20 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004cdb20(CBloodSplat * this_ptr)
    INC EBX                             ; 004ce822
    MOV ECX,dword ptr [0x01d276b8]      ; 004ce823 | DAT_01d276b8
    ADD ESP,0x4                         ; 004ce829
    ADD ESI,0x48                        ; 004ce82c
    CMP EBX,ECX                         ; 004ce82f
    JL 0x004ce81c                       ; 004ce831
        ;   XREF to: 004ce81c (CONDITIONAL_JUMP)  ; LAB_004ce81c
    LEA EAX,[EAX]                       ; 004ce833
    LEA EDX,[EDX]                       ; 004ce839
    NOP                                 ; 004ce83f
    PUSH 0x1d4a944                      ; 004ce840
        ;   Label: LAB_004ce840
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004cdc90 ; 004ce845
        ;   XREF to: 004cdc90 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_setupRenderState_FUN_004cdc90(CBloodPool * this_ptr)
    XOR ESI,ESI                         ; 004ce84a
    MOV EBX,dword ptr [0x01d4a940]      ; 004ce84c | DAT_01d4a940
    ADD ESP,0x4                         ; 004ce852
    TEST EBX,EBX                        ; 004ce855
    JLE 0x004ce880                      ; 004ce857
        ;   XREF to: 004ce880 (CONDITIONAL_JUMP)  ; LAB_004ce880
    MOV EBX,0x1d4a944                   ; 004ce859
    PUSH EBX                            ; 004ce85e
        ;   Label: LAB_004ce85e
    CALL core_gore.cpp_FUN_004cdfc0     ; 004ce85f
        ;   XREF to: 004cdfc0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004cdfc0(CBloodPool * this_ptr)
    INC ESI                             ; 004ce864
    MOV EDI,dword ptr [0x01d4a940]      ; 004ce865 | DAT_01d4a940
    ADD ESP,0x4                         ; 004ce86b
    ADD EBX,0x2c                        ; 004ce86e
    CMP ESI,EDI                         ; 004ce871
    JL 0x004ce85e                       ; 004ce873
        ;   XREF to: 004ce85e (CONDITIONAL_JUMP)  ; LAB_004ce85e
    LEA EAX,[EAX]                       ; 004ce875
    LEA EDX,[EDX]                       ; 004ce87b
    MOV EBX,EBX                         ; 004ce87e
    MOV ESP,EBP                         ; 004ce880
        ;   Label: LAB_004ce880
    POP EBP                             ; 004ce882
    POP EDI                             ; 004ce883
    POP ESI                             ; 004ce884
    POP EBX                             ; 004ce885
    RET                                 ; 004ce886
    PUSH EBX                            ; 004ce887
        ;   Label: LAB_004ce887
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004ce888 | g_BloodParticles[1].field60_0x3c
    CALL dword ptr [EAX + 0x4]          ; 004ce88b
    ADD ESP,0x4                         ; 004ce88e
    JMP 0x004ce804                      ; 004ce891
        ;   XREF to: 004ce804 (UNCONDITIONAL_JUMP)  ; LAB_004ce804

