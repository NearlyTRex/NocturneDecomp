; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00489490(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start
; CVector3f *      Stack[0xc]:4   end
; SDamageInfo *    Stack[0x10]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_005bdc5f
;   undefined4 DAT_005bdc67
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489490
        ;   Label: core_enemy.cpp_CEnemy_testAttackLine_FUN_00489490
    PUSH ESI                            ; 00489491
    PUSH EDI                            ; 00489492
    PUSH EBP                            ; 00489493
    MOV EBP,ESP                         ; 00489494
    SUB ESP,0x18                        ; 00489496
    AND ESP,0xfffffff8                  ; 00489499
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048949c
    MOV EDX,dword ptr [EAX + 0xcde4]    ; 0048949f
    TEST EDX,EDX                        ; 004894a5
    JNZ 0x004894b2                      ; 004894a7
        ;   XREF to: 004894b2 (CONDITIONAL_JUMP)  ; LAB_004894b2
    XOR EAX,EAX                         ; 004894a9
        ;   Label: LAB_004894a9
    MOV ESP,EBP                         ; 004894ab
    POP EBP                             ; 004894ad
    POP EDI                             ; 004894ae
    POP ESI                             ; 004894af
    POP EBX                             ; 004894b0
    RET                                 ; 004894b1
    LEA ECX,[ESP + 0x8]                 ; 004894b2
        ;   Label: LAB_004894b2
    PUSH ECX                            ; 004894b6
    MOV ECX,dword ptr [EBP + 0x20]      ; 004894b7
    PUSH ECX                            ; 004894ba
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004894bb
    PUSH EBX                            ; 004894be
    MOV ESI,dword ptr [EBP + 0x18]      ; 004894bf
    PUSH ESI                            ; 004894c2
    MOV EAX,EDX                         ; 004894c3
    MOV EDX,dword ptr [EDX + 0x154]     ; 004894c5
    PUSH EAX                            ; 004894cb
    CALL dword ptr [EDX + 0x104]        ; 004894cc
    ADD ESP,0x14                        ; 004894d2
    MOV EAX,dword ptr [EBP + 0x20]      ; 004894d5
    FLDZ                                ; 004894d8
    FLD float ptr [EAX + 0x4]           ; 004894da
    FSTP double ptr [ESP]               ; 004894dd
    FCOMP double ptr [ESP]              ; 004894e0
    FNSTSW AX                           ; 004894e3
    SAHF                                ; 004894e5
    JNC 0x004894a9                      ; 004894e6
        ;   XREF to: 004894a9 (CONDITIONAL_JUMP)  ; LAB_004894a9
    FLD double ptr [ESP]                ; 004894e8
    FMUL double ptr [0x005bdc5f]        ; 004894eb | DAT_005bdc5f
    FMUL double ptr [0x005bdc67]        ; 004894f1 | DAT_005bdc67
    PUSH 0x0                            ; 004894f7
    CALL crt_math.c_round_FUN_005a3120  ; 004894f9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x18]        ; 004894fe
    MOV EDI,dword ptr [ESP + 0x18]      ; 00489502
    PUSH EDI                            ; 00489506
    PUSH 0x0                            ; 00489507
    LEA EAX,[ESP + 0x14]                ; 00489509
    PUSH EAX                            ; 0048950d
    MOV EAX,[0x005fed24]                ; 0048950e | g_CGorePtr
    PUSH EAX                            ; 00489513
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 00489514
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    MOV EAX,0x1                         ; 00489519
    ADD ESP,0x14                        ; 0048951e
    MOV ESP,EBP                         ; 00489521
    POP EBP                             ; 00489523
    POP EDI                             ; 00489524
    POP ESI                             ; 00489525
    POP EBX                             ; 00489526
    RET                                 ; 00489527

