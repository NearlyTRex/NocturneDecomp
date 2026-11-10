; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyDamage_FUN_004239b0(CCharacter *this_ptr,int damage_type,float damage_amount)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   damage_type
; float            Stack[0xc]:4   damage_amount
;
; Called Functions:
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004239b0
        ;   Label: core_charactr.cpp_CCharacter_applyDamage_FUN_004239b0
    SUB ESP,0x3c                        ; 004239b1
    MOV EBX,dword ptr [ESP + 0x44]      ; 004239b4
    PUSH EBX                            ; 004239b8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004239b9
    CALL dword ptr [EAX + 0x114]        ; 004239bf
    ADD ESP,0x4                         ; 004239c5
    TEST EAX,EAX                        ; 004239c8
    JLE 0x004239d1                      ; 004239ca
        ;   XREF to: 004239d1 (CONDITIONAL_JUMP)  ; LAB_004239d1
    ADD ESP,0x3c                        ; 004239cc
    POP EBX                             ; 004239cf
    RET                                 ; 004239d0
    MOV EAX,ESP                         ; 004239d1
        ;   Label: LAB_004239d1
    PUSH EAX                            ; 004239d3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004239d4
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004239d9
    MOV EAX,dword ptr [ESP + 0x48]      ; 004239dc
    MOV dword ptr [ESP + 0x30],EAX      ; 004239e0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004239e4
    MOV dword ptr [ESP + 0x4],EAX       ; 004239e8
    MOV EAX,ESP                         ; 004239ec
    PUSH EAX                            ; 004239ee
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004239ef
    PUSH EBX                            ; 004239f5
    CALL dword ptr [EDX + 0x110]        ; 004239f6
    ADD ESP,0x8                         ; 004239fc
    ADD ESP,0x3c                        ; 004239ff
    POP EBX                             ; 00423a02
    RET                                 ; 00423a03

