; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_burncrss_cpp_CBurncross_renderOpaque_FUN_00425360(CBurncross *this_ptr)
;
; Parameters:
; CBurncross *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 g_CEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_weapon.cpp_CWeapon_renderOpaque_FUN_0057af80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425360
        ;   Label: core_burncrss.cpp_CBurncross_renderOpaque_FUN_00425360
    PUSH ESI                            ; 00425361
    PUSH EDI                            ; 00425362
    MOV ESI,dword ptr [ESP + 0x10]      ; 00425363
    PUSH ESI                            ; 00425367
    CALL core_weapon.cpp_CWeapon_renderOpaque_FUN_0057af80 ; 00425368
        ;   XREF to: 0057af80 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_renderOpaque_FUN_0057af80(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0042536d
    MOV EDX,dword ptr [ESI + 0x2d4]     ; 00425370
    MOV EDI,EAX                         ; 00425376
    CMP EDX,0x2                         ; 00425378
    JNZ 0x004253a8                      ; 0042537b
        ;   XREF to: 004253a8 (CONDITIONAL_JUMP)  ; LAB_004253a8
    ADD ESI,0x5a8                       ; 0042537d
        ;   Label: LAB_0042537d
    MOV EBX,ESI                         ; 00425383
    ADD ESI,0x1520                      ; 00425385
    PUSH EBX                            ; 0042538b
        ;   Label: LAB_0042538b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042538c
    CALL dword ptr [EAX + 0x14]         ; 00425392
    ADD EBX,0x2a4                       ; 00425395
    ADD ESP,0x4                         ; 0042539b
    CMP EBX,ESI                         ; 0042539e
    JNZ 0x0042538b                      ; 004253a0
        ;   XREF to: 0042538b (CONDITIONAL_JUMP)  ; LAB_0042538b
    MOV EAX,EDI                         ; 004253a2
    POP EDI                             ; 004253a4
    POP ESI                             ; 004253a5
    POP EBX                             ; 004253a6
    RET                                 ; 004253a7
    MOV ECX,dword ptr [0x01c5bc48]      ; 004253a8 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_004253a8
    PUSH ECX                            ; 004253ae
    MOV EBX,dword ptr [ESI + 0x304]     ; 004253af
    PUSH EBX                            ; 004253b5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004253b6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004253bb
    TEST EAX,EAX                        ; 004253be
    JNZ 0x0042537d                      ; 004253c0
        ;   XREF to: 0042537d (CONDITIONAL_JUMP)  ; LAB_0042537d
    MOV EAX,EDI                         ; 004253c2
    POP EDI                             ; 004253c4
    POP ESI                             ; 004253c5
    POP EBX                             ; 004253c6
    RET                                 ; 004253c7

