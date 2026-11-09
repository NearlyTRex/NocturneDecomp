; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[9]:
;   core_boneguy.cpp_FUN_00419860 at 00419876
;   core_construc.cpp_FUN_004444c0 at 004444e1
;   core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004c6530 at 004c653a
;   core_hino.cpp_FUN_0059d640 at 0059d64a
;   core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004d62c0 at 004d62ca
;   core_imp.cpp_CImp_getCollisionType_FUN_004d81d0 at 004d81da
;   core_sentinel.cpp_CSentinel_getCollisionType_FUN_00532500 at 0053250a
;   core_styldemo.cpp_FUN_005a08f0 at 005a08fa
;   unkafter_zombiepr.cpp_FUN_0058fc60 at 0058fc6a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430430
        ;   Label: core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
    PUSH ESI                            ; 00430431
    PUSH EBP                            ; 00430432
    MOV ESI,dword ptr [ESP + 0x10]      ; 00430433
    MOV EBX,dword ptr [ESP + 0x14]      ; 00430437
    MOV EDX,dword ptr [EBX]             ; 0043043b
    CMP EDX,0x2                         ; 0043043d
    JZ 0x00430455                       ; 00430440
        ;   XREF to: 00430455 (CONDITIONAL_JUMP)  ; LAB_00430455
    CMP dword ptr [ESI + 0x27a8],0x0    ; 00430442
    JZ 0x0043046d                       ; 00430449
        ;   XREF to: 0043046d (CONDITIONAL_JUMP)  ; LAB_0043046d
    CMP EDX,0x4                         ; 0043044b
    JZ 0x00430482                       ; 0043044e
        ;   XREF to: 00430482 (CONDITIONAL_JUMP)  ; LAB_00430482
    CMP EDX,0x3                         ; 00430450
    JZ 0x0043045b                       ; 00430453
        ;   XREF to: 0043045b (CONDITIONAL_JUMP)  ; LAB_0043045b
    XOR EAX,EAX                         ; 00430455
        ;   Label: LAB_00430455
    POP EBP                             ; 00430457
    POP ESI                             ; 00430458
    POP EBX                             ; 00430459
    RET                                 ; 0043045a
    ADD ESI,0x158                       ; 0043045b
        ;   Label: LAB_0043045b
    MOV EAX,0x1                         ; 00430461
    MOV dword ptr [EBX + 0x20],ESI      ; 00430466
    POP EBP                             ; 00430469
    POP ESI                             ; 0043046a
    POP EBX                             ; 0043046b
    RET                                 ; 0043046c
    PUSH ESI                            ; 0043046d
        ;   Label: LAB_0043046d
    MOV EAX,dword ptr [ESI + 0x154]     ; 0043046e
    CALL dword ptr [EAX + 0x10c]        ; 00430474
    ADD ESP,0x4                         ; 0043047a
    CMP EAX,0x1                         ; 0043047d
    JG 0x00430455                       ; 00430480
        ;   XREF to: 00430455 (CONDITIONAL_JUMP)  ; LAB_00430455
    MOV EBP,dword ptr [EBX]             ; 00430482
        ;   Label: LAB_00430482
    CMP EBP,0x1                         ; 00430484
    JZ 0x0043045b                       ; 00430487
        ;   XREF to: 0043045b (CONDITIONAL_JUMP)  ; LAB_0043045b
    CMP EBP,0x3                         ; 00430489
    JZ 0x0043045b                       ; 0043048c
        ;   XREF to: 0043045b (CONDITIONAL_JUMP)  ; LAB_0043045b
    FLD float ptr [ESI + 0x3280]        ; 0043048e
    FMUL float ptr [ESI + 0x27b8]       ; 00430494
    FSTP float ptr [EBX + 0x18]         ; 0043049a
    FLD float ptr [ESI + 0x327c]        ; 0043049d
    FMUL float ptr [ESI + 0x27b8]       ; 004304a3
    FLD float ptr [EBX + 0x18]          ; 004304a9
    FXCH                                ; 004304ac
    FSTP float ptr [EBX + 0x14]         ; 004304ae
    FCOMP float ptr [EBX + 0x14]        ; 004304b1
    FNSTSW AX                           ; 004304b4
    SAHF                                ; 004304b6
    JNC 0x004304c2                      ; 004304b7
        ;   XREF to: 004304c2 (CONDITIONAL_JUMP)  ; LAB_004304c2
    MOV EAX,dword ptr [ESI + 0x2490]    ; 004304b9
    MOV dword ptr [EBX + 0x18],EAX      ; 004304bf
    FLD float ptr [ESI + 0x3270]        ; 004304c2
        ;   Label: LAB_004304c2
    FMUL float ptr [ESI + 0x27b8]       ; 004304c8
    MOV EAX,0x2                         ; 004304ce
    FSTP float ptr [EBX + 0x1c]         ; 004304d3
    POP EBP                             ; 004304d6
    POP ESI                             ; 004304d7
    POP EBX                             ; 004304d8
    RET                                 ; 004304d9

