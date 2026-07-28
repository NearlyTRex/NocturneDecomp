; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_0054e310(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e310
        ;   Label: core_vampboss.cpp_CVampireBoss_getCollisionType_FUN_0054e310
    PUSH ESI                            ; 0054e311
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054e312
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054e316
    CMP dword ptr [EBX],0x2             ; 0054e31a
    JNZ 0x0054e324                      ; 0054e31d
        ;   XREF to: 0054e324 (CONDITIONAL_JUMP)  ; LAB_0054e324
    XOR EAX,EAX                         ; 0054e31f
        ;   Label: LAB_0054e31f
    POP ESI                             ; 0054e321
    POP EBX                             ; 0054e322
    RET                                 ; 0054e323
    PUSH ESI                            ; 0054e324
        ;   Label: LAB_0054e324
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054e325
    CALL dword ptr [EAX + 0x104]        ; 0054e32b
    ADD ESP,0x4                         ; 0054e331
    CMP EAX,0x1                         ; 0054e334
    JG 0x0054e31f                       ; 0054e337
        ;   XREF to: 0054e31f (CONDITIONAL_JUMP)  ; LAB_0054e31f
    MOV ECX,dword ptr [EBX]             ; 0054e339
    CMP ECX,0x1                         ; 0054e33b
    JNZ 0x0054e35a                      ; 0054e33e
        ;   XREF to: 0054e35a (CONDITIONAL_JUMP)  ; LAB_0054e35a
    CMP dword ptr [ESI + 0xbe168],0x2   ; 0054e340
        ;   Label: LAB_0054e340
    JNZ 0x0054e35f                      ; 0054e347
        ;   XREF to: 0054e35f (CONDITIONAL_JUMP)  ; LAB_0054e35f
    ADD ESI,0xbd24                      ; 0054e349
    MOV EAX,0x1                         ; 0054e34f
    MOV dword ptr [EBX + 0x20],ESI      ; 0054e354
    POP ESI                             ; 0054e357
    POP EBX                             ; 0054e358
    RET                                 ; 0054e359
    CMP ECX,0x3                         ; 0054e35a
        ;   Label: LAB_0054e35a
    JZ 0x0054e340                       ; 0054e35d
        ;   XREF to: 0054e340 (CONDITIONAL_JUMP)  ; LAB_0054e340
    PUSH EBX                            ; 0054e35f
        ;   Label: LAB_0054e35f
    PUSH ESI                            ; 0054e360
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 0054e361
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0054e366
    POP ESI                             ; 0054e369
    POP EBX                             ; 0054e36a
    RET                                 ; 0054e36b

