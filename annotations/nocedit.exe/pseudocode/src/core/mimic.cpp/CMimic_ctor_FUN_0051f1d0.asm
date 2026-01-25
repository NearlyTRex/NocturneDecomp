; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMimic * core_mimic.cpp_CMimic_ctor_FUN_0051f1d0(CMimic * this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mimic.cpp_FUN_0051f190 at 0051f1aa
;
; Referenced Globals:
;   TerminatedCString s_CGhoul_00638554
;   undefined4 s_Ghoul_00638555
;   undefined4 s_houl_00638556
;   undefined4 s_oul_00638557
;   float FLOAT_0066140c = 50
;   float FLOAT_00661410 = 100
;   CDemonActor_vtable g_CMimicVTable
;
; Called Functions:
;   core_cloth.cpp_FUN_00438ba0
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_morph.cpp_FUN_0052b310
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0051f1d0
        ;   Label: core_mimic.cpp_CMimic_ctor_FUN_0051f1d0
    PUSH EDI                            ; 0051f1d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051f1d2
    PUSH EDX                            ; 0051f1d6
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 0051f1d7
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0051f1dc
    ADD EAX,0xbf84                      ; 0051f1df
    PUSH EAX                            ; 0051f1e4
    CALL core_cloth.cpp_FUN_00438ba0    ; 0051f1e5
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00438ba0()
    ADD ESP,0x4                         ; 0051f1ea
    ADD EAX,0x3fea0                     ; 0051f1ed
    PUSH EAX                            ; 0051f1f2
    CALL core_morph.cpp_FUN_0052b310    ; 0051f1f3
        ;   XREF to: 0052b310 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_0052b310()
    LEA EDX,[EAX + 0xfffb41dc]          ; 0051f1f8
    MOV dword ptr [EDX + 0x154],0x661424 ; 0051f1fe | g_CMimicVTable
    MOV dword ptr [EDX + 0x2ddc],0x3f000000 ; 0051f208
    MOV ESI,0x638554                    ; 0051f212 | = "CGhoul"
    MOV dword ptr [EDX + 0x2de0],0x3f800000 ; 0051f217
    FLD float ptr [0x0066140c]          ; 0051f221 | FLOAT_0066140c
    MOV byte ptr [EDX + 0xbebc],0x0     ; 0051f227
    FLD float ptr [0x00661410]          ; 0051f22e | FLOAT_00661410
    MOV byte ptr [EDX + 0xbf20],0x0     ; 0051f234
    ADD ESP,0x4                         ; 0051f23b
    FXCH                                ; 0051f23e
    FSTP float ptr [EDX + 0x2de4]       ; 0051f240
    FSTP float ptr [EDX + 0x2de8]       ; 0051f246
    MOV dword ptr [EDX + 0x4bdf4],0x0   ; 0051f24c
    LEA EDI,[EDX + 0x4bdfc]             ; 0051f256
    MOV dword ptr [EDX + 0x4bdf8],0x0   ; 0051f25c
    PUSH EDI                            ; 0051f266
    MOV AL,byte ptr [ESI]               ; 0051f267 | = "CGhoul" | s_houl_00638556
        ;   Label: LAB_0051f267
    MOV byte ptr [EDI],AL               ; 0051f269
    CMP AL,0x0                          ; 0051f26b
    JZ 0x0051f27f                       ; 0051f26d
        ;   XREF to: 0051f27f (CONDITIONAL_JUMP)  ; LAB_0051f27f
    MOV AL,byte ptr [ESI + 0x1]         ; 0051f26f | s_Ghoul_00638555 | s_oul_00638557
    ADD ESI,0x2                         ; 0051f272
    MOV byte ptr [EDI + 0x1],AL         ; 0051f275
    ADD EDI,0x2                         ; 0051f278
    CMP AL,0x0                          ; 0051f27b
    JNZ 0x0051f267                      ; 0051f27d
        ;   XREF to: 0051f267 (CONDITIONAL_JUMP)  ; LAB_0051f267
    POP EDI                             ; 0051f27f
        ;   Label: LAB_0051f27f
    MOV dword ptr [EDX + 0x4ca54],0x0   ; 0051f280
    MOV dword ptr [EDX + 0x4ca50],0xbf800000 ; 0051f28a
    MOV dword ptr [EDX + 0x108],0x10000 ; 0051f294
    MOV dword ptr [EDX + 0x10c],0x10000 ; 0051f29e
    MOV EAX,EDX                         ; 0051f2a8
    MOV dword ptr [EDX + 0x110],0x10000 ; 0051f2aa
    POP EDI                             ; 0051f2b4
    POP ESI                             ; 0051f2b5
    RET                                 ; 0051f2b6

