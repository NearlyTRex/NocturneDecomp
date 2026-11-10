; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_005be330(CZombie *this_ptr,CVector3f *out_attract_position)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_attract_position
;
; Referenced Globals:
;   undefined4 DAT_005fa92c
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_motion.cpp_FUN_00524a40
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be330
        ;   Label: core_zombie.cpp_CZombie_canBeAttracted_FUN_005be330
    PUSH EBP                            ; 005be331
    SUB ESP,0x7c                        ; 005be332
    MOV EBP,dword ptr [ESP + 0x88]      ; 005be335
    PUSH 0x3                            ; 005be33c
    LEA EBX,[EBP + 0x158]               ; 005be33e
    PUSH EBX                            ; 005be344
    CALL core_motion.cpp_FUN_00524a40   ; 005be345
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x80],EAX      ; 005be34a
    FLD float ptr [ESP + 0x80]          ; 005be351
    FLDZ                                ; 005be358
    ADD ESP,0x8                         ; 005be35a
    FCOMPP                              ; 005be35d
    FNSTSW AX                           ; 005be35f
    SAHF                                ; 005be361
    JC 0x005be36c                       ; 005be362
        ;   XREF to: 005be36c (CONDITIONAL_JUMP)  ; LAB_005be36c
    XOR EAX,EAX                         ; 005be364
    ADD ESP,0x7c                        ; 005be366
    POP EBP                             ; 005be369
    POP EBX                             ; 005be36a
    RET                                 ; 005be36b
    PUSH EDI                            ; 005be36c
        ;   Label: LAB_005be36c
    PUSH ESI                            ; 005be36d
    MOV EDX,dword ptr [EBP + 0xc2fc]    ; 005be36e
    PUSH EDX                            ; 005be374
    PUSH EBX                            ; 005be375
    LEA ESI,[ESP + 0x70]                ; 005be376
    LEA EDI,[ESP + 0x10]                ; 005be37a
    CALL core_skeleton.cpp_FUN_00569130 ; 005be37e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x70]                ; 005be383
    ADD ESP,0x8                         ; 005be387
    MOVSD ES:EDI,ESI                    ; 005be38a
    MOVSD ES:EDI,ESI                    ; 005be38b
    MOVSD ES:EDI,ESI                    ; 005be38c
    MOV ECX,dword ptr [EBP + 0xc300]    ; 005be38d
    PUSH ECX                            ; 005be393
    PUSH EBX                            ; 005be394
    LEA ESI,[ESP + 0x40]                ; 005be395
    LEA EDI,[ESP + 0x58]                ; 005be399
    CALL core_skeleton.cpp_FUN_00569130 ; 005be39d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 005be3a2
    LEA ESI,[ESP + 0x38]                ; 005be3a5
    FLD float ptr [ESP + 0x8]           ; 005be3a9
    FLD float ptr [ESP + 0xc]           ; 005be3ad
    MOVSD ES:EDI,ESI                    ; 005be3b1
    MOVSD ES:EDI,ESI                    ; 005be3b2
    MOVSD ES:EDI,ESI                    ; 005be3b3
    FLD float ptr [ESP + 0x10]          ; 005be3b4
    LEA EDI,[ESP + 0x44]                ; 005be3b8
    LEA ESI,[ESP + 0x74]                ; 005be3bc
    FXCH ST2                            ; 005be3c0
    FADD float ptr [ESP + 0x50]         ; 005be3c2
    FXCH                                ; 005be3c6
    FADD float ptr [ESP + 0x54]         ; 005be3c8
    FXCH ST2                            ; 005be3cc
    FADD float ptr [ESP + 0x58]         ; 005be3ce
    FXCH                                ; 005be3d2
    FSTP float ptr [ESP + 0x74]         ; 005be3d4
    FXCH                                ; 005be3d8
    FSTP float ptr [ESP + 0x78]         ; 005be3da
    FSTP float ptr [ESP + 0x7c]         ; 005be3de
    MOVSD ES:EDI,ESI                    ; 005be3e2
    MOVSD ES:EDI,ESI                    ; 005be3e3
    MOVSD ES:EDI,ESI                    ; 005be3e4
    FLD float ptr [0x005fa92c]          ; 005be3e5 | DAT_005fa92c
    FLD float ptr [ESP + 0x44]          ; 005be3eb
    FMUL ST1                            ; 005be3ef
    FLD float ptr [ESP + 0x48]          ; 005be3f1
    FMUL ST2                            ; 005be3f5
    LEA EAX,[ESP + 0x20]                ; 005be3f7
    FLD float ptr [ESP + 0x4c]          ; 005be3fb
    FMULP ST3                           ; 005be3ff
    PUSH EAX                            ; 005be401
    LEA EDI,[ESP + 0x24]                ; 005be402
    LEA ESI,[ESP + 0x18]                ; 005be406
    FXCH                                ; 005be40a
    FSTP float ptr [ESP + 0x18]         ; 005be40c
    FSTP float ptr [ESP + 0x1c]         ; 005be410
    FSTP float ptr [ESP + 0x20]         ; 005be414
    MOVSD ES:EDI,ESI                    ; 005be418
    MOVSD ES:EDI,ESI                    ; 005be419
    MOVSD ES:EDI,ESI                    ; 005be41a
    PUSH EBP                            ; 005be41b
    LEA ESI,[ESP + 0x64]                ; 005be41c
    LEA EDI,[ESP + 0x34]                ; 005be420
    CALL core_actor.cpp_FUN_00408b40    ; 005be424
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x64]                ; 005be429
    ADD ESP,0x8                         ; 005be42d
    LEA EAX,[ESP + 0x2c]                ; 005be430
    MOV EBX,dword ptr [ESP + 0x94]      ; 005be434
    MOVSD ES:EDI,ESI                    ; 005be43b
    MOVSD ES:EDI,ESI                    ; 005be43c
    MOVSD ES:EDI,ESI                    ; 005be43d
    CMP EAX,EBX                         ; 005be43e
    JZ 0x005be456                       ; 005be440
        ;   XREF to: 005be456 (CONDITIONAL_JUMP)  ; LAB_005be456
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005be442
    MOV dword ptr [EBX],EAX             ; 005be446
    MOV EAX,dword ptr [ESP + 0x30]      ; 005be448
    MOV dword ptr [EBX + 0x4],EAX       ; 005be44c
    MOV EAX,dword ptr [ESP + 0x34]      ; 005be44f
    MOV dword ptr [EBX + 0x8],EAX       ; 005be453
    MOV EAX,0x1                         ; 005be456
        ;   Label: LAB_005be456
    POP ESI                             ; 005be45b
    POP EDI                             ; 005be45c
    ADD ESP,0x7c                        ; 005be45d
    POP EBP                             ; 005be460
    POP EBX                             ; 005be461
    RET                                 ; 005be462

