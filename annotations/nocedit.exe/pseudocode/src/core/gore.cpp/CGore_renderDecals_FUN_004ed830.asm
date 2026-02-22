; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004ed830(CGore *this_ptr,int render_all,int expire_flag)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_all
; int              Stack[0xc]:4   expire_flag
;
; XREF[4]:
;   core_set.cpp_CDemonSet_expireDecals_FUN_00571380 at 00571390
;   core_set.cpp_CDemonSet_renderDecals_FUN_005713c0 at 005713eb
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c5c9
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b724
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   int g_BloodSplatCount
;   CBloodSplat[2000] g_BloodSplats
;   undefined4 DAT_02d87420
;   int g_BloodPoolCount
;   CBloodPool[32] g_BloodPools
;   undefined4 DAT_02da874c
;   int g_FootstepCount
;   CFootstep[1000] g_Footsteps
;   undefined4 DAT_02da8c6c
;
; Called Functions:
;   core_gore.cpp_CBloodPool_render_FUN_004ecce0
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004ecc40
;   core_gore.cpp_CBloodSplat_render_FUN_004ec500
;   core_gore.cpp_CBloodSplat_setupRenderState_FUN_004ec470
;   core_gore.cpp_CFootstep_render_FUN_004ed3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed830
        ;   Label: core_gore.cpp_CGore_renderDecals_FUN_004ed830
    PUSH ESI                            ; 004ed831
    PUSH EDI                            ; 004ed832
    PUSH EBP                            ; 004ed833
    MOV EBP,dword ptr [ESP + 0x18]      ; 004ed834
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004ed838
    MOV EAX,[0x0067b654]                ; 004ed83c | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x14],0x0      ; 004ed841 | g_CGameInstance.blood_flag
    JNZ 0x004ed855                      ; 004ed845
        ;   XREF to: 004ed855 (CONDITIONAL_JUMP)  ; LAB_004ed855
    LEA EAX,[EAX]                       ; 004ed847 | g_CGameInstance
    LEA EDX,[EDX]                       ; 004ed84d
    POP EBP                             ; 004ed850
        ;   Label: LAB_004ed850
    POP EDI                             ; 004ed851
    POP ESI                             ; 004ed852
    POP EBX                             ; 004ed853
    RET                                 ; 004ed854
    PUSH 0x2d873dc                      ; 004ed855 | g_BloodSplats
        ;   Label: LAB_004ed855
    CALL core_gore.cpp_CBloodSplat_setupRenderState_FUN_004ec470 ; 004ed85a
        ;   XREF to: 004ec470 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_setupRenderState_FUN_004ec470(CBloodSplat * this_ptr)
    ADD ESP,0x4                         ; 004ed85f
    TEST EBP,EBP                        ; 004ed862
    JZ 0x004ed91b                       ; 004ed864
        ;   XREF to: 004ed91b (CONDITIONAL_JUMP)  ; LAB_004ed91b
    MOV EBX,dword ptr [0x02d873d8]      ; 004ed86a | g_BloodSplatCount
    XOR ESI,ESI                         ; 004ed870
    TEST EBX,EBX                        ; 004ed872
    JLE 0x004ed8a0                      ; 004ed874
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    MOV EBX,0x2d873dc                   ; 004ed876 | g_BloodSplats
    PUSH 0x0                            ; 004ed87b
        ;   Label: LAB_004ed87b
    PUSH EBX                            ; 004ed87d | g_BloodSplats | DAT_02d87420
    INC ESI                             ; 004ed87e
    CALL core_gore.cpp_CBloodSplat_render_FUN_004ec500 ; 004ed87f
        ;   XREF to: 004ec500 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_render_FUN_004ec500(CBloodSplat * this_ptr, int expire_flag)
    MOV ECX,dword ptr [0x02d873d8]      ; 004ed884 | g_BloodSplatCount
    ADD ESP,0x8                         ; 004ed88a
    ADD EBX,0x44                        ; 004ed88d | DAT_02d87420
    CMP ESI,ECX                         ; 004ed890
    JL 0x004ed87b                       ; 004ed892
        ;   XREF to: 004ed87b (CONDITIONAL_JUMP)  ; LAB_004ed87b
    LEA EAX,[EAX]                       ; 004ed894
    LEA EDX,[EDX]                       ; 004ed89a
    PUSH 0x2da8724                      ; 004ed8a0 | g_BloodPools
        ;   Label: LAB_004ed8a0
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004ecc40 ; 004ed8a5
        ;   XREF to: 004ecc40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_setupRenderState_FUN_004ecc40(CBloodPool * this_ptr)
    ADD ESP,0x4                         ; 004ed8aa
    TEST EBP,EBP                        ; 004ed8ad
    JZ 0x004ed95c                       ; 004ed8af
        ;   XREF to: 004ed95c (CONDITIONAL_JUMP)  ; LAB_004ed95c
    MOV ESI,dword ptr [0x02da8720]      ; 004ed8b5 | g_BloodPoolCount
    XOR EBX,EBX                         ; 004ed8bb
    TEST ESI,ESI                        ; 004ed8bd
    JLE 0x004ed8e0                      ; 004ed8bf
        ;   XREF to: 004ed8e0 (CONDITIONAL_JUMP)  ; LAB_004ed8e0
    MOV ESI,0x2da8724                   ; 004ed8c1 | g_BloodPools
    PUSH 0x0                            ; 004ed8c6
        ;   Label: LAB_004ed8c6
    PUSH ESI                            ; 004ed8c8 | g_BloodPools | DAT_02da874c
    INC EBX                             ; 004ed8c9
    CALL core_gore.cpp_CBloodPool_render_FUN_004ecce0 ; 004ed8ca
        ;   XREF to: 004ecce0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_render_FUN_004ecce0(CBloodPool * this_ptr, int expire_flag)
    MOV ECX,dword ptr [0x02da8720]      ; 004ed8cf | g_BloodPoolCount
    ADD ESP,0x8                         ; 004ed8d5
    ADD ESI,0x28                        ; 004ed8d8
    CMP EBX,ECX                         ; 004ed8db
    JL 0x004ed8c6                       ; 004ed8dd
        ;   XREF to: 004ed8c6 (CONDITIONAL_JUMP)  ; LAB_004ed8c6
    NOP                                 ; 004ed8df
    TEST EBP,EBP                        ; 004ed8e0
        ;   Label: LAB_004ed8e0
    JZ 0x004ed99d                       ; 004ed8e2
        ;   XREF to: 004ed99d (CONDITIONAL_JUMP)  ; LAB_004ed99d
    MOV ESI,dword ptr [0x02da8c28]      ; 004ed8e8 | g_FootstepCount
    XOR EBX,EBX                         ; 004ed8ee
    TEST ESI,ESI                        ; 004ed8f0
    JLE 0x004ed850                      ; 004ed8f2
        ;   XREF to: 004ed850 (CONDITIONAL_JUMP)  ; LAB_004ed850
    MOV ESI,0x2da8c2c                   ; 004ed8f8 | g_Footsteps
    PUSH 0x0                            ; 004ed8fd
        ;   Label: LAB_004ed8fd
    PUSH ESI                            ; 004ed8ff | g_Footsteps | DAT_02da8c6c
    INC EBX                             ; 004ed900
    CALL core_gore.cpp_CFootstep_render_FUN_004ed3c0 ; 004ed901
        ;   XREF to: 004ed3c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CFootstep_render_FUN_004ed3c0(CFootstep * this_ptr, int expire_flag)
    MOV EDX,dword ptr [0x02da8c28]      ; 004ed906 | g_FootstepCount
    ADD ESP,0x8                         ; 004ed90c
    ADD ESI,0x40                        ; 004ed90f
    CMP EBX,EDX                         ; 004ed912
    JL 0x004ed8fd                       ; 004ed914
        ;   XREF to: 004ed8fd (CONDITIONAL_JUMP)  ; LAB_004ed8fd
    POP EBP                             ; 004ed916
    POP EDI                             ; 004ed917
    POP ESI                             ; 004ed918
    POP EBX                             ; 004ed919
    RET                                 ; 004ed91a
    MOV ECX,dword ptr [0x02d873d8]      ; 004ed91b | g_BloodSplatCount
        ;   Label: LAB_004ed91b
    XOR ESI,ESI                         ; 004ed921
    TEST ECX,ECX                        ; 004ed923
    JLE 0x004ed8a0                      ; 004ed925
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    XOR EBX,EBX                         ; 004ed92b
    CMP dword ptr [EBX + 0x2d873dc],0x0 ; 004ed92d | g_BloodSplats | DAT_02d87420
        ;   Label: LAB_004ed92d
    JZ 0x004ed949                       ; 004ed934
        ;   XREF to: 004ed949 (CONDITIONAL_JUMP)  ; LAB_004ed949
    MOV EAX,[0x02d873d8]                ; 004ed936 | g_BloodSplatCount
        ;   Label: LAB_004ed936
    INC ESI                             ; 004ed93b
    ADD EBX,0x44                        ; 004ed93c
    CMP ESI,EAX                         ; 004ed93f
    JGE 0x004ed8a0                      ; 004ed941
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    JMP 0x004ed92d                      ; 004ed947
        ;   XREF to: 004ed92d (UNCONDITIONAL_JUMP)  ; LAB_004ed92d
    MOV EAX,0x2d873dc                   ; 004ed949 | g_BloodSplats
        ;   Label: LAB_004ed949
    PUSH EDI                            ; 004ed94e
    ADD EAX,EBX                         ; 004ed94f | DAT_02d87420
    PUSH EAX                            ; 004ed951 | DAT_02d87420
    CALL core_gore.cpp_CBloodSplat_render_FUN_004ec500 ; 004ed952
        ;   XREF to: 004ec500 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_render_FUN_004ec500(CBloodSplat * this_ptr, int expire_flag)
    ADD ESP,0x8                         ; 004ed957
    JMP 0x004ed936                      ; 004ed95a
        ;   XREF to: 004ed936 (UNCONDITIONAL_JUMP)  ; LAB_004ed936
    MOV EBX,dword ptr [0x02da8720]      ; 004ed95c | g_BloodPoolCount
        ;   Label: LAB_004ed95c
    XOR ESI,ESI                         ; 004ed962
    TEST EBX,EBX                        ; 004ed964
    JLE 0x004ed8e0                      ; 004ed966
        ;   XREF to: 004ed8e0 (CONDITIONAL_JUMP)  ; LAB_004ed8e0
    XOR EBX,EBX                         ; 004ed96c
    CMP dword ptr [EBX + 0x2da8724],0x0 ; 004ed96e | g_BloodPools | DAT_02da874c
        ;   Label: LAB_004ed96e
    JZ 0x004ed98a                       ; 004ed975
        ;   XREF to: 004ed98a (CONDITIONAL_JUMP)  ; LAB_004ed98a
    MOV EAX,[0x02da8720]                ; 004ed977 | g_BloodPoolCount
        ;   Label: LAB_004ed977
    INC ESI                             ; 004ed97c
    ADD EBX,0x28                        ; 004ed97d
    CMP ESI,EAX                         ; 004ed980
    JGE 0x004ed8e0                      ; 004ed982
        ;   XREF to: 004ed8e0 (CONDITIONAL_JUMP)  ; LAB_004ed8e0
    JMP 0x004ed96e                      ; 004ed988
        ;   XREF to: 004ed96e (UNCONDITIONAL_JUMP)  ; LAB_004ed96e
    MOV EAX,0x2da8724                   ; 004ed98a | g_BloodPools
        ;   Label: LAB_004ed98a
    PUSH EDI                            ; 004ed98f
    ADD EAX,EBX                         ; 004ed990 | DAT_02da874c
    PUSH EAX                            ; 004ed992 | DAT_02da874c
    CALL core_gore.cpp_CBloodPool_render_FUN_004ecce0 ; 004ed993
        ;   XREF to: 004ecce0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_render_FUN_004ecce0(CBloodPool * this_ptr, int expire_flag)
    ADD ESP,0x8                         ; 004ed998
    JMP 0x004ed977                      ; 004ed99b
        ;   XREF to: 004ed977 (UNCONDITIONAL_JUMP)  ; LAB_004ed977
    MOV EBX,dword ptr [0x02da8c28]      ; 004ed99d | g_FootstepCount
        ;   Label: LAB_004ed99d
    XOR ESI,ESI                         ; 004ed9a3
    TEST EBX,EBX                        ; 004ed9a5
    JLE 0x004ed850                      ; 004ed9a7
        ;   XREF to: 004ed850 (CONDITIONAL_JUMP)  ; LAB_004ed850
    XOR EBX,EBX                         ; 004ed9ad
    CMP dword ptr [EBX + 0x2da8c2c],0x0 ; 004ed9af | g_Footsteps | DAT_02da8c6c
        ;   Label: LAB_004ed9af
    JZ 0x004ed9cc                       ; 004ed9b6
        ;   XREF to: 004ed9cc (CONDITIONAL_JUMP)  ; LAB_004ed9cc
    MOV EBP,dword ptr [0x02da8c28]      ; 004ed9b8 | g_FootstepCount
        ;   Label: LAB_004ed9b8
    INC ESI                             ; 004ed9be
    ADD EBX,0x40                        ; 004ed9bf
    CMP ESI,EBP                         ; 004ed9c2
    JGE 0x004ed850                      ; 004ed9c4
        ;   XREF to: 004ed850 (CONDITIONAL_JUMP)  ; LAB_004ed850
    JMP 0x004ed9af                      ; 004ed9ca
        ;   XREF to: 004ed9af (UNCONDITIONAL_JUMP)  ; LAB_004ed9af
    MOV EAX,0x2da8c2c                   ; 004ed9cc | g_Footsteps
        ;   Label: LAB_004ed9cc
    PUSH EDI                            ; 004ed9d1
    ADD EAX,EBX                         ; 004ed9d2 | DAT_02da8c6c
    PUSH EAX                            ; 004ed9d4 | DAT_02da8c6c
    CALL core_gore.cpp_CFootstep_render_FUN_004ed3c0 ; 004ed9d5
        ;   XREF to: 004ed3c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CFootstep_render_FUN_004ed3c0(CFootstep * this_ptr, int expire_flag)
    ADD ESP,0x8                         ; 004ed9da
    JMP 0x004ed9b8                      ; 004ed9dd
        ;   XREF to: 004ed9b8 (UNCONDITIONAL_JUMP)  ; LAB_004ed9b8

