; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dynamite_cpp_FUN_0047a1e0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d1e63
;   undefined4 DAT_005d1e6b
;   undefined4 DAT_005f5bac
;   undefined4 DAT_00614d30
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040d060
;   core_fire.cpp_FUN_0049d090
;   core_sound.cpp_FUN_0055af80
;   core_weapon.cpp_FUN_00589c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a1e0
        ;   Label: core_dynamite.cpp_FUN_0047a1e0
    PUSH ESI                            ; 0047a1e1
    PUSH EDI                            ; 0047a1e2
    PUSH EBP                            ; 0047a1e3
    MOV EBP,ESP                         ; 0047a1e4
    SUB ESP,0xb0                        ; 0047a1e6
    AND ESP,0xfffffff8                  ; 0047a1ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047a1ef
    PUSH dword ptr [EBP + 0x18]         ; 0047a1f2
    PUSH EBX                            ; 0047a1f5
    CALL core_weapon.cpp_FUN_00589c80   ; 0047a1f6
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_00589c80()
    FLD float ptr [EBX + 0x6d4]         ; 0047a1fb
    FLDZ                                ; 0047a201
    ADD ESP,0x8                         ; 0047a203
    FCOMPP                              ; 0047a206
    FNSTSW AX                           ; 0047a208
    SAHF                                ; 0047a20a
    JA 0x0047a24f                       ; 0047a20b
        ;   XREF to: 0047a24f (CONDITIONAL_JUMP)  ; LAB_0047a24f
    FLD float ptr [EBX + 0x6d4]         ; 0047a20d
    FSUB float ptr [EBP + 0x18]         ; 0047a213
    FLDZ                                ; 0047a216
    FXCH                                ; 0047a218
    FST float ptr [EBX + 0x6d4]         ; 0047a21a
    FSTP double ptr [ESP]               ; 0047a220
    FCOMP double ptr [ESP]              ; 0047a223
    FNSTSW AX                           ; 0047a226
    SAHF                                ; 0047a228
    JA 0x0047a256                       ; 0047a229
        ;   XREF to: 0047a256 (CONDITIONAL_JUMP)  ; LAB_0047a256
    FLD float ptr [EBP + 0x18]          ; 0047a22b
    FMUL double ptr [0x005d1e63]        ; 0047a22e | DAT_005d1e63
    FMUL double ptr [ESP]               ; 0047a234
    FDIV float ptr [0x005f5bac]         ; 0047a237 | DAT_005f5bac
    SUB ESP,0x4                         ; 0047a23d
    FSTP float ptr [ESP]                ; 0047a240
    CALL core_actor.cpp_FUN_0040d060    ; 0047a243
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0047a248
    TEST EAX,EAX                        ; 0047a24b
    JNZ 0x0047a282                      ; 0047a24d
        ;   XREF to: 0047a282 (CONDITIONAL_JUMP)  ; LAB_0047a282
    MOV ESP,EBP                         ; 0047a24f
        ;   Label: LAB_0047a24f
    POP EBP                             ; 0047a251
    POP EDI                             ; 0047a252
    POP ESI                             ; 0047a253
    POP EBX                             ; 0047a254
    RET                                 ; 0047a255
    MOV ECX,dword ptr [EBX + 0x6e4]     ; 0047a256
        ;   Label: LAB_0047a256
    PUSH ECX                            ; 0047a25c
    MOV ESI,dword ptr [0x0061c068]      ; 0047a25d | DAT_0061c068
    PUSH ESI                            ; 0047a263
    MOV dword ptr [EBX + 0x6d4],0x0     ; 0047a264
    CALL core_sound.cpp_FUN_0055af80    ; 0047a26e
        ;   XREF to: 0055af80 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055af80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0047a273
    MOV dword ptr [EBX + 0x6e4],0x0     ; 0047a276
    JMP 0x0047a24f                      ; 0047a280
        ;   XREF to: 0047a24f (UNCONDITIONAL_JUMP)  ; LAB_0047a24f
    PUSH EBX                            ; 0047a282
        ;   Label: LAB_0047a282
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0047a283
    LEA ESI,[ESP + 0xc]                 ; 0047a289
    LEA EDI,[ESP + 0x54]                ; 0047a28d
    CALL dword ptr [EAX + 0x24]         ; 0047a291
    MOV ECX,0x6                         ; 0047a294
    LEA ESI,[ESP + 0xc]                 ; 0047a299
    ADD ESP,0x4                         ; 0047a29d
    MOVSD.REP ES:EDI,ESI                ; 0047a2a0
    LEA EAX,[ESP + 0x50]                ; 0047a2a2
    FLD float ptr [ESP + 0x50]          ; 0047a2a6
    FLD float ptr [ESP + 0x54]          ; 0047a2aa
    FLD float ptr [ESP + 0x58]          ; 0047a2ae
    LEA EDI,[ESP + 0x80]                ; 0047a2b2
    LEA ESI,[ESP + 0x98]                ; 0047a2b9
    FXCH ST2                            ; 0047a2c0
    FADD float ptr [EAX + 0xc]          ; 0047a2c2
    FXCH                                ; 0047a2c5
    FADD float ptr [EAX + 0x10]         ; 0047a2c7
    FXCH ST2                            ; 0047a2ca
    FADD float ptr [EAX + 0x14]         ; 0047a2cc
    FXCH                                ; 0047a2cf
    FSTP float ptr [ESP + 0x98]         ; 0047a2d1
    FXCH                                ; 0047a2d8
    FSTP float ptr [ESP + 0x9c]         ; 0047a2da
    FSTP float ptr [ESP + 0xa0]         ; 0047a2e1
    MOVSD ES:EDI,ESI                    ; 0047a2e8
    MOVSD ES:EDI,ESI                    ; 0047a2e9
    MOVSD ES:EDI,ESI                    ; 0047a2ea
    FLD float ptr [0x005d1e6b]          ; 0047a2eb | DAT_005d1e6b
    FLD float ptr [ESP + 0x80]          ; 0047a2f1
    FMUL ST1                            ; 0047a2f8
    FLD float ptr [ESP + 0x84]          ; 0047a2fa
    FMUL ST2                            ; 0047a301
    FLD float ptr [ESP + 0x88]          ; 0047a303
    FMULP ST3                           ; 0047a30a
    LEA EDI,[ESP + 0x74]                ; 0047a30c
    LEA ESI,[ESP + 0x68]                ; 0047a310
    FXCH                                ; 0047a314
    FSTP float ptr [ESP + 0x68]         ; 0047a316
    FSTP float ptr [ESP + 0x6c]         ; 0047a31a
    FSTP float ptr [ESP + 0x70]         ; 0047a31e
    MOVSD ES:EDI,ESI                    ; 0047a322
    MOVSD ES:EDI,ESI                    ; 0047a323
    MOVSD ES:EDI,ESI                    ; 0047a324
    PUSH EBX                            ; 0047a325
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0047a326
    LEA ESI,[ESP + 0x24]                ; 0047a32c
    LEA EDI,[ESP + 0x3c]                ; 0047a330
    CALL dword ptr [EAX + 0x24]         ; 0047a334
    MOV ECX,0x6                         ; 0047a337
    LEA ESI,[ESP + 0x24]                ; 0047a33c
    ADD ESP,0x4                         ; 0047a340
    MOVSD.REP ES:EDI,ESI                ; 0047a343
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047a345
    MOV dword ptr [ESP + 0x7c],EAX      ; 0047a349
    LEA EAX,[ESP + 0x74]                ; 0047a34d
    PUSH EAX                            ; 0047a351
    PUSH EBX                            ; 0047a352
    LEA ESI,[ESP + 0xac]                ; 0047a353
    LEA EDI,[ESP + 0x94]                ; 0047a35a
    CALL core_actor.cpp_FUN_00408d70    ; 0047a361
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xac]                ; 0047a366
    LEA EAX,[ESP + 0x94]                ; 0047a36d
    ADD ESP,0x8                         ; 0047a374
    LEA EBX,[ESP + 0x74]                ; 0047a377
    MOVSD ES:EDI,ESI                    ; 0047a37b
    MOVSD ES:EDI,ESI                    ; 0047a37c
    MOVSD ES:EDI,ESI                    ; 0047a37d
    CMP EBX,EAX                         ; 0047a37e
    JZ 0x0047a3a3                       ; 0047a380
        ;   XREF to: 0047a3a3 (CONDITIONAL_JUMP)  ; LAB_0047a3a3
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0047a382
    MOV dword ptr [ESP + 0x74],EAX      ; 0047a389
    MOV EAX,dword ptr [ESP + 0x90]      ; 0047a38d
    MOV dword ptr [ESP + 0x78],EAX      ; 0047a394
    MOV EAX,dword ptr [ESP + 0x94]      ; 0047a398
    MOV dword ptr [ESP + 0x7c],EAX      ; 0047a39f
    PUSH 0xffff                         ; 0047a3a3
        ;   Label: LAB_0047a3a3
    PUSH 0x0                            ; 0047a3a8
    PUSH 0x10000                        ; 0047a3aa
    PUSH 0x4000                         ; 0047a3af
    PUSH 0x0                            ; 0047a3b4
    LEA EAX,[ESP + 0x88]                ; 0047a3b6
    PUSH EAX                            ; 0047a3bd
    MOV EDX,dword ptr [0x00614d30]      ; 0047a3be | DAT_00614d30
    PUSH EDX                            ; 0047a3c4
    CALL core_fire.cpp_FUN_0049d090     ; 0047a3c5
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0047a3ca
    MOV ESP,EBP                         ; 0047a3cd
    POP EBP                             ; 0047a3cf
    POP EDI                             ; 0047a3d0
    POP ESI                             ; 0047a3d1
    POP EBX                             ; 0047a3d2
    RET                                 ; 0047a3d3

