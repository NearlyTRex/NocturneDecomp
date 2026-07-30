; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00479990(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start
; CVector3f *      Stack[0xc]:4   end
; SDamageInfo *    Stack[0x10]:4   damage_info
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 00419273
;
; Referenced Globals:
;   double DOUBLE_0057f34f = 1.20000000000000
;   double DOUBLE_0057f357 = 0.25
;   int INT_005b96c4 = 0x1c78c7c
;
; Called Functions:
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479990
        ;   Label: core_enemy.cpp_CEnemy_testAttackLine_FUN_00479990
    PUSH ESI                            ; 00479991
    PUSH EDI                            ; 00479992
    PUSH EBP                            ; 00479993
    MOV EBP,ESP                         ; 00479994
    SUB ESP,0x18                        ; 00479996
    AND ESP,0xfffffff8                  ; 00479999
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047999c
    MOV EDX,dword ptr [EAX + 0xbca4]    ; 0047999f
    TEST EDX,EDX                        ; 004799a5
    JNZ 0x004799b2                      ; 004799a7
        ;   XREF to: 004799b2 (CONDITIONAL_JUMP)  ; LAB_004799b2
    XOR EAX,EAX                         ; 004799a9
        ;   Label: LAB_004799a9
    MOV ESP,EBP                         ; 004799ab
    POP EBP                             ; 004799ad
    POP EDI                             ; 004799ae
    POP ESI                             ; 004799af
    POP EBX                             ; 004799b0
    RET                                 ; 004799b1
    LEA ECX,[ESP + 0x8]                 ; 004799b2
        ;   Label: LAB_004799b2
    PUSH ECX                            ; 004799b6
    MOV ECX,dword ptr [EBP + 0x20]      ; 004799b7
    PUSH ECX                            ; 004799ba
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004799bb
    PUSH EBX                            ; 004799be
    MOV ESI,dword ptr [EBP + 0x18]      ; 004799bf
    PUSH ESI                            ; 004799c2
    MOV EAX,EDX                         ; 004799c3
    MOV EDX,dword ptr [EDX + 0x14c]     ; 004799c5
    PUSH EAX                            ; 004799cb
    CALL dword ptr [EDX + 0xfc]         ; 004799cc
    ADD ESP,0x14                        ; 004799d2
    MOV EAX,dword ptr [EBP + 0x20]      ; 004799d5
    FLDZ                                ; 004799d8
    FLD float ptr [EAX + 0x4]           ; 004799da
    FSTP double ptr [ESP]               ; 004799dd
    FCOMP double ptr [ESP]              ; 004799e0
    FNSTSW AX                           ; 004799e3
    SAHF                                ; 004799e5
    JNC 0x004799a9                      ; 004799e6
        ;   XREF to: 004799a9 (CONDITIONAL_JUMP)  ; LAB_004799a9
    FLD double ptr [ESP]                ; 004799e8
    FMUL double ptr [0x0057f34f]        ; 004799eb | DOUBLE_0057f34f
    FMUL double ptr [0x0057f357]        ; 004799f1 | DOUBLE_0057f357
    PUSH 0x0                            ; 004799f7
    CALL crt_math.c_round_FUN_00563a30  ; 004799f9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x18]        ; 004799fe
    MOV EDI,dword ptr [ESP + 0x18]      ; 00479a02
    PUSH EDI                            ; 00479a06
    PUSH 0x0                            ; 00479a07
    LEA EAX,[ESP + 0x14]                ; 00479a09
    PUSH EAX                            ; 00479a0d
    MOV EAX,[0x005b96c4]                ; 00479a0e | INT_005b96c4
    PUSH EAX                            ; 00479a13
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 00479a14
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    MOV EAX,0x1                         ; 00479a19
    ADD ESP,0x14                        ; 00479a1e
    MOV ESP,EBP                         ; 00479a21
    POP EBP                             ; 00479a23
    POP EDI                             ; 00479a24
    POP ESI                             ; 00479a25
    POP EBX                             ; 00479a26
    RET                                 ; 00479a27

