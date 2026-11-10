; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_processDamage_FUN_005813c0(CTVBat *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005813c0
        ;   Label: core_tvbat.cpp_CTVBat_processDamage_FUN_005813c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005813c1
    MOV EDX,dword ptr [EBX + 0x281c]    ; 005813c5
    TEST EDX,EDX                        ; 005813cb
    JNZ 0x00581422                      ; 005813cd
        ;   XREF to: 00581422 (CONDITIONAL_JUMP)  ; LAB_00581422
    MOV EAX,dword ptr [ESP + 0xc]       ; 005813cf
    FLD float ptr [EAX + 0x4]           ; 005813d3
    FSUBR float ptr [EBX + 0x25a8]      ; 005813d6
    FST float ptr [EBX + 0x25a8]        ; 005813dc
    FLDZ                                ; 005813e2
    FCOMPP                              ; 005813e4
    FNSTSW AX                           ; 005813e6
    SAHF                                ; 005813e8
    JC 0x00581412                       ; 005813e9
        ;   XREF to: 00581412 (CONDITIONAL_JUMP)  ; LAB_00581412
    PUSH EDX                            ; 005813eb
    PUSH 0xa                            ; 005813ec
    PUSH EDX                            ; 005813ee
    LEA EAX,[EBX + 0x20]                ; 005813ef
    PUSH EAX                            ; 005813f2
    MOV ECX,dword ptr [0x006167e0]      ; 005813f3 | g_CGorePtr
    PUSH ECX                            ; 005813f9
    MOV dword ptr [EBX + 0x25a8],EDX    ; 005813fa
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 00581400
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00581405
    MOV dword ptr [EBX + 0x10cb4],0x1   ; 00581408
    PUSH ESI                            ; 00581412
        ;   Label: LAB_00581412
    MOV ESI,dword ptr [ESP + 0x10]      ; 00581413
    PUSH ESI                            ; 00581417
    PUSH EBX                            ; 00581418
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 00581419
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0058141e
    POP ESI                             ; 00581421
    POP EBX                             ; 00581422
        ;   Label: LAB_00581422
    RET                                 ; 00581423

