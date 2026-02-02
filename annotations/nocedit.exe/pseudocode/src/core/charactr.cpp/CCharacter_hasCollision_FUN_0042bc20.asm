; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20 (CCharacter *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[14]:
;   core_armour.cpp_CArmour_hasCollision_FUN_00412450 at 0041245a
;   core_batcreat.cpp_CBatCreature_hasCollision_FUN_00416290 at 0041629a
;   core_batman.cpp_CBatman_hasCollision_FUN_00417cb0 at 00417cc6
;   core_biggs.cpp_CBiggs_hasCollision_FUN_00418c60 at 00418c6a
;   core_boneguy.cpp_CBoneGuy_hasCollision_FUN_0041d970 at 0041d986
;   core_dracbrid.cpp_FUN_00485bc0 at 00485bd6
;   core_gargoyle.cpp_CGargoyle_FUN_004e5ad0 at 004e5ada
;   core_hotdemon.cpp_CHotDemon_hasCollision_FUN_004f79b0 at 004f79ba
;   core_imp.cpp_CImp_hasCollision_FUN_004fb0f0 at 004fb0fa
;   core_mobster.cpp_CMobster_hasCollision_FUN_005279d0 at 005279da
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042bc20
        ;   Label: core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
    PUSH ESI                            ; 0042bc21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042bc22
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042bc26
    CMP dword ptr [ESI],0x2             ; 0042bc2a
    JNZ 0x0042bc34                      ; 0042bc2d
        ;   XREF to: 0042bc34 (CONDITIONAL_JUMP)  ; LAB_0042bc34
    XOR EAX,EAX                         ; 0042bc2f
        ;   Label: LAB_0042bc2f
    POP ESI                             ; 0042bc31
    POP EBX                             ; 0042bc32
    RET                                 ; 0042bc33
    PUSH EBX                            ; 0042bc34
        ;   Label: LAB_0042bc34
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042bc35
    CALL dword ptr [EAX + 0x120]        ; 0042bc3b
    ADD ESP,0x4                         ; 0042bc41
    CMP EAX,0x1                         ; 0042bc44
    JG 0x0042bc2f                       ; 0042bc47
        ;   XREF to: 0042bc2f (CONDITIONAL_JUMP)  ; LAB_0042bc2f
    MOV ECX,dword ptr [ESI]             ; 0042bc49
    CMP ECX,0x1                         ; 0042bc4b
    JZ 0x0042bca0                       ; 0042bc4e
        ;   XREF to: 0042bca0 (CONDITIONAL_JUMP)  ; LAB_0042bca0
    CMP ECX,0x3                         ; 0042bc50
    JZ 0x0042bca0                       ; 0042bc53
        ;   XREF to: 0042bca0 (CONDITIONAL_JUMP)  ; LAB_0042bca0
    FLD float ptr [EBX + 0x2df0]        ; 0042bc55
    FMUL float ptr [EBX + 0x261c]       ; 0042bc5b
    FSTP float ptr [ESI + 0x18]         ; 0042bc61
    FLD float ptr [EBX + 0x2dec]        ; 0042bc64
    FMUL float ptr [EBX + 0x261c]       ; 0042bc6a
    FLD float ptr [ESI + 0x18]          ; 0042bc70
    FXCH                                ; 0042bc73
    FSTP float ptr [ESI + 0x14]         ; 0042bc75
    FCOMP float ptr [ESI + 0x14]        ; 0042bc78
    FNSTSW AX                           ; 0042bc7b
    SAHF                                ; 0042bc7d
    JNC 0x0042bc89                      ; 0042bc7e
        ;   XREF to: 0042bc89 (CONDITIONAL_JUMP)  ; LAB_0042bc89
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 0042bc80
    MOV dword ptr [ESI + 0x18],EAX      ; 0042bc86
    FLD float ptr [EBX + 0x2de0]        ; 0042bc89
        ;   Label: LAB_0042bc89
    FMUL float ptr [EBX + 0x261c]       ; 0042bc8f
    MOV EAX,0x2                         ; 0042bc95
    FSTP float ptr [ESI + 0x1c]         ; 0042bc9a
    POP ESI                             ; 0042bc9d
    POP EBX                             ; 0042bc9e
    RET                                 ; 0042bc9f
    ADD EBX,0x158                       ; 0042bca0
        ;   Label: LAB_0042bca0
    MOV EAX,0x1                         ; 0042bca6
    MOV dword ptr [ESI + 0x20],EBX      ; 0042bcab
    POP ESI                             ; 0042bcae
    POP EBX                             ; 0042bcaf
    RET                                 ; 0042bcb0

