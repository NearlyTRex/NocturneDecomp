; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00427260(CCharacter *param_1,undefined4 param_2,undefined4 param_3,CVector3f *param_4,float param_5)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 at 0042802c
;
; Referenced Globals:
;   undefined4 DAT_005ccdc2
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_charactr.cpp_CCharacter_dismember_FUN_00427360
;   core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427260
        ;   Label: core_charactr.cpp_FUN_00427260
    PUSH ESI                            ; 00427261
    PUSH EDI                            ; 00427262
    SUB ESP,0x78                        ; 00427263
    MOV EBX,dword ptr [ESP + 0x88]      ; 00427266
    PUSH EBX                            ; 0042726d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0042726e
    LEA ESI,[ESP + 0x4]                 ; 00427274
    LEA EDI,[ESP + 0x1c]                ; 00427278
    CALL dword ptr [EAX + 0x24]         ; 0042727c
    MOV ECX,0x6                         ; 0042727f
    LEA ESI,[ESP + 0x4]                 ; 00427284
    ADD ESP,0x4                         ; 00427288
    MOVSD.REP ES:EDI,ESI                ; 0042728b
    LEA EAX,[ESP + 0x18]                ; 0042728d
    FLD float ptr [ESP + 0x18]          ; 00427291
    FLD float ptr [ESP + 0x1c]          ; 00427295
    FLD float ptr [ESP + 0x20]          ; 00427299
    LEA EDI,[ESP + 0x6c]                ; 0042729d
    LEA ESI,[ESP + 0x54]                ; 004272a1
    FXCH ST2                            ; 004272a5
    FADD float ptr [EAX + 0xc]          ; 004272a7
    FXCH                                ; 004272aa
    FADD float ptr [EAX + 0x10]         ; 004272ac
    FXCH ST2                            ; 004272af
    FADD float ptr [EAX + 0x14]         ; 004272b1
    FXCH                                ; 004272b4
    FSTP float ptr [ESP + 0x54]         ; 004272b6
    FXCH                                ; 004272ba
    FSTP float ptr [ESP + 0x58]         ; 004272bc
    FSTP float ptr [ESP + 0x5c]         ; 004272c0
    MOVSD ES:EDI,ESI                    ; 004272c4
    MOVSD ES:EDI,ESI                    ; 004272c5
    MOVSD ES:EDI,ESI                    ; 004272c6
    FLD float ptr [0x005ccdc2]          ; 004272c7 | DAT_005ccdc2
    FLD float ptr [ESP + 0x6c]          ; 004272cd
    FMUL ST1                            ; 004272d1
    FLD float ptr [ESP + 0x70]          ; 004272d3
    FMUL ST2                            ; 004272d7
    LEA EAX,[ESP + 0x30]                ; 004272d9
    FLD float ptr [ESP + 0x74]          ; 004272dd
    FMULP ST3                           ; 004272e1
    PUSH EAX                            ; 004272e3
    LEA EDI,[ESP + 0x34]                ; 004272e4
    LEA ESI,[ESP + 0x64]                ; 004272e8
    FXCH                                ; 004272ec
    FSTP float ptr [ESP + 0x64]         ; 004272ee
    FSTP float ptr [ESP + 0x68]         ; 004272f2
    FSTP float ptr [ESP + 0x6c]         ; 004272f6
    MOVSD ES:EDI,ESI                    ; 004272fa
    MOVSD ES:EDI,ESI                    ; 004272fb
    MOVSD ES:EDI,ESI                    ; 004272fc
    PUSH EBX                            ; 004272fd
    LEA ESI,[ESP + 0x50]                ; 004272fe
    CALL core_actor.cpp_FUN_00408d70    ; 00427302
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00427307
    PUSH 0x40800000                     ; 0042730a
    PUSH 0x44bb8000                     ; 0042730f
    LEA EAX,[ESP + 0x44]                ; 00427314
    PUSH 0x40000000                     ; 00427318
    LEA EDI,[ESP + 0x48]                ; 0042731d
    PUSH EAX                            ; 00427321
    MOV EDX,dword ptr [0x00614d30]      ; 00427322 | DAT_00614d30
    LEA ESI,[ESP + 0x58]                ; 00427328
    PUSH EDX                            ; 0042732c
    MOVSD ES:EDI,ESI                    ; 0042732d
    MOVSD ES:EDI,ESI                    ; 0042732e
    MOVSD ES:EDI,ESI                    ; 0042732f
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360 ; 00427330
        ;   XREF to: 0049e360 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 00427335
    PUSH 0x0                            ; 00427338
    MOV ECX,dword ptr [ESP + 0x90]      ; 0042733a
    PUSH dword ptr [ESP + 0x94]         ; 00427341
    PUSH ECX                            ; 00427348
    PUSH EBX                            ; 00427349
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427360 ; 0042734a
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00427360(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 0042734f
    ADD ESP,0x78                        ; 00427352
    POP EDI                             ; 00427355
    POP ESI                             ; 00427356
    POP EBX                             ; 00427357
    RET                                 ; 00427358

