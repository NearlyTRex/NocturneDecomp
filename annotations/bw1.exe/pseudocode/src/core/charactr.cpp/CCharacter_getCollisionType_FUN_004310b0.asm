; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[16]:
;   core_armour.cpp_CArmour_getCollisionType_FUN_0040eca0 at 0040ecaa
;   core_batcreat.cpp_CBatCreature_getCollisionType_FUN_00412670 at 0041267a
;   core_batman.cpp_FUN_00414300 at 00414316
;   core_biggs.cpp_CBiggs_getCollisionType_FUN_004150d0 at 004150da
;   core_boneguy.cpp_FUN_0041d830 at 0041d846
;   core_construc.cpp_FUN_00447630 at 00447651
;   core_dracbrid.cpp_FUN_0047cfc0 at 0047cfd6
;   core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004dd9b0 at 004dd9ba
;   core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004f0880 at 004f088a
;   core_imp.cpp_CImp_getCollisionType_FUN_004f42b0 at 004f42ba
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004310b0
        ;   Label: core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
    PUSH ESI                            ; 004310b1
    PUSH EBP                            ; 004310b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004310b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004310b7
    MOV EDX,dword ptr [EBX]             ; 004310bb
    CMP EDX,0x2                         ; 004310bd
    JZ 0x004310d5                       ; 004310c0
        ;   XREF to: 004310d5 (CONDITIONAL_JUMP)  ; LAB_004310d5
    CMP dword ptr [ESI + 0x27a8],0x0    ; 004310c2
    JZ 0x004310ed                       ; 004310c9
        ;   XREF to: 004310ed (CONDITIONAL_JUMP)  ; LAB_004310ed
    CMP EDX,0x4                         ; 004310cb
    JZ 0x00431102                       ; 004310ce
        ;   XREF to: 00431102 (CONDITIONAL_JUMP)  ; LAB_00431102
    CMP EDX,0x3                         ; 004310d0
    JZ 0x004310db                       ; 004310d3
        ;   XREF to: 004310db (CONDITIONAL_JUMP)  ; LAB_004310db
    XOR EAX,EAX                         ; 004310d5
        ;   Label: LAB_004310d5
    POP EBP                             ; 004310d7
    POP ESI                             ; 004310d8
    POP EBX                             ; 004310d9
    RET                                 ; 004310da
    ADD ESI,0x158                       ; 004310db
        ;   Label: LAB_004310db
    MOV EAX,0x1                         ; 004310e1
    MOV dword ptr [EBX + 0x20],ESI      ; 004310e6
    POP EBP                             ; 004310e9
    POP ESI                             ; 004310ea
    POP EBX                             ; 004310eb
    RET                                 ; 004310ec
    PUSH ESI                            ; 004310ed
        ;   Label: LAB_004310ed
    MOV EAX,dword ptr [ESI + 0x154]     ; 004310ee
    CALL dword ptr [EAX + 0x10c]        ; 004310f4
    ADD ESP,0x4                         ; 004310fa
    CMP EAX,0x1                         ; 004310fd
    JG 0x004310d5                       ; 00431100
        ;   XREF to: 004310d5 (CONDITIONAL_JUMP)  ; LAB_004310d5
    MOV EBP,dword ptr [EBX]             ; 00431102
        ;   Label: LAB_00431102
    CMP EBP,0x1                         ; 00431104
    JZ 0x004310db                       ; 00431107
        ;   XREF to: 004310db (CONDITIONAL_JUMP)  ; LAB_004310db
    CMP EBP,0x3                         ; 00431109
    JZ 0x004310db                       ; 0043110c
        ;   XREF to: 004310db (CONDITIONAL_JUMP)  ; LAB_004310db
    FLD float ptr [ESI + 0x3000]        ; 0043110e
    FMUL float ptr [ESI + 0x27b8]       ; 00431114
    FSTP float ptr [EBX + 0x18]         ; 0043111a
    FLD float ptr [ESI + 0x2ffc]        ; 0043111d
    FMUL float ptr [ESI + 0x27b8]       ; 00431123
    FLD float ptr [EBX + 0x18]          ; 00431129
    FXCH                                ; 0043112c
    FSTP float ptr [EBX + 0x14]         ; 0043112e
    FCOMP float ptr [EBX + 0x14]        ; 00431131
    FNSTSW AX                           ; 00431134
    SAHF                                ; 00431136
    JNC 0x00431142                      ; 00431137
        ;   XREF to: 00431142 (CONDITIONAL_JUMP)  ; LAB_00431142
    MOV EAX,dword ptr [ESI + 0x2490]    ; 00431139
    MOV dword ptr [EBX + 0x18],EAX      ; 0043113f
    FLD float ptr [ESI + 0x2ff0]        ; 00431142
        ;   Label: LAB_00431142
    FMUL float ptr [ESI + 0x27b8]       ; 00431148
    MOV EAX,0x2                         ; 0043114e
    FSTP float ptr [EBX + 0x1c]         ; 00431153
    POP EBP                             ; 00431156
    POP ESI                             ; 00431157
    POP EBX                             ; 00431158
    RET                                 ; 00431159

