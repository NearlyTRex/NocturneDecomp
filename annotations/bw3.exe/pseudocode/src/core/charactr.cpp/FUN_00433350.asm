; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00433350(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[39]:
;   core_asgaya.cpp_FUN_005a0be0 at 005a107a
;   core_baal.cpp_FUN_005968a0 at 005976e1
;   core_boneguy.cpp_FUN_004179b0 at 00418023
;   core_boneguy.cpp_FUN_00419b40 at 0041a175
;   core_carved.cpp_FUN_00425da0 at 00426b41
;   core_charactr.cpp_FUN_0042cd70 at 0042d36d
;   core_constrct.cpp_FUN_00442a20 at 004435b6
;   core_cow.cpp_FUN_00445130 at 0044538c
;   core_demnfolk.cpp_FUN_00455080 at 00455d59
;   core_dog.cpp_FUN_004628b0 at 00462b87
;   ... and 29 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433000
;   core_charactr.cpp_FUN_00431d10
;   core_charactr.cpp_FUN_004320d0
;   core_charactr.cpp_FUN_004322a0
;   core_cloth.cpp_CClothList_process_FUN_0043fc00
;   core_skeleton.cpp_FUN_0054dd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433350
        ;   Label: core_charactr.cpp_FUN_00433350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00433351
    PUSH EBX                            ; 00433355
    CALL core_charactr.cpp_FUN_004320d0 ; 00433356
        ;   XREF to: 004320d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004320d0()
    ADD ESP,0x4                         ; 0043335b
    PUSH EBX                            ; 0043335e
    CALL core_charactr.cpp_CCharacter_applyLookAt_FUN_00433000 ; 0043335f
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyLookAt_FUN_00433000(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00433364
    LEA EAX,[EBX + 0x158]               ; 00433367
    PUSH EAX                            ; 0043336d
    CALL core_skeleton.cpp_FUN_0054dd10 ; 0043336e
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00433373
    PUSH EBX                            ; 00433376
    CALL core_charactr.cpp_FUN_004322a0 ; 00433377
        ;   XREF to: 004322a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004322a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0043337c
    PUSH dword ptr [ESP + 0xc]          ; 0043337f
    PUSH EBX                            ; 00433383
    CALL core_charactr.cpp_FUN_00431d10 ; 00433384
        ;   XREF to: 00431d10 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431d10(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x27bc]    ; 00433389
    ADD ESP,0x8                         ; 0043338f
    TEST EDX,EDX                        ; 00433392
    JNZ 0x004333ad                      ; 00433394
        ;   XREF to: 004333ad (CONDITIONAL_JUMP)  ; LAB_004333ad
    PUSH EBX                            ; 00433396
    MOV EAX,dword ptr [EBX + 0x154]     ; 00433397
    CALL dword ptr [EAX + 0x10c]        ; 0043339d
    ADD ESP,0x4                         ; 004333a3
    CMP EAX,0x1                         ; 004333a6
    JZ 0x004333ad                       ; 004333a9
        ;   XREF to: 004333ad (CONDITIONAL_JUMP)  ; LAB_004333ad
    POP EBX                             ; 004333ab
    RET                                 ; 004333ac
    LEA EAX,[EBX + 0x158]               ; 004333ad
        ;   Label: LAB_004333ad
    PUSH EAX                            ; 004333b3
    PUSH dword ptr [EBX + 0x2504]       ; 004333b4
    LEA EAX,[EBX + 0x30]                ; 004333ba
    PUSH dword ptr [ESP + 0x14]         ; 004333bd
    PUSH EAX                            ; 004333c1
    LEA EAX,[EBX + 0x20]                ; 004333c2
    PUSH EAX                            ; 004333c5
    ADD EBX,0x2f08                      ; 004333c6
    PUSH EBX                            ; 004333cc
    CALL core_cloth.cpp_CClothList_process_FUN_0043fc00 ; 004333cd
        ;   XREF to: 0043fc00 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_0043fc00(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 004333d2
    POP EBX                             ; 004333d5
    RET                                 ; 004333d6

