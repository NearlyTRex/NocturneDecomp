; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_0048eb30(CFlameThrower *this_ptr,float delta_time)
;
; Parameters:
; CFlameThrower *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   TerminatedCString s_fl_throw_wav_005816a9
;   float FLOAT_0059d7a0 = 4
;   void* PTR_DAT_005b9284 = 01c70f74
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
;   core_sound.cpp_CSound_killSound_FUN_0052ebb0
;   core_weapon.cpp_CWeapon_process_FUN_00554030
;   xxx_unk.c_FUN_004940d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048eb30
        ;   Label: core_flamegun.cpp_CFlameThrower_process_FUN_0048eb30
    PUSH ESI                            ; 0048eb31
    PUSH EDI                            ; 0048eb32
    PUSH EBP                            ; 0048eb33
    MOV EBP,ESP                         ; 0048eb34
    SUB ESP,0x8                         ; 0048eb36
    AND ESP,0xfffffff8                  ; 0048eb39
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048eb3c
    PUSH dword ptr [EBP + 0x18]         ; 0048eb3f
    PUSH EBX                            ; 0048eb42
    CALL core_weapon.cpp_CWeapon_process_FUN_00554030 ; 0048eb43
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00554030(CWeapon * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x570]     ; 0048eb48
    ADD ESP,0x8                         ; 0048eb4e
    TEST EDX,EDX                        ; 0048eb51
    JNZ 0x0048ebbb                      ; 0048eb53
        ;   XREF to: 0048ebbb (CONDITIONAL_JUMP)  ; LAB_0048ebbb
    MOV ECX,dword ptr [EBX + 0x574]     ; 0048eb55
    TEST ECX,ECX                        ; 0048eb5b
    JZ 0x0048eb79                       ; 0048eb5d
        ;   XREF to: 0048eb79 (CONDITIONAL_JUMP)  ; LAB_0048eb79
    PUSH ECX                            ; 0048eb5f
    MOV EDI,dword ptr [0x005bed68]      ; 0048eb60 | g_CSound_PTR_005bed68
    PUSH EDI                            ; 0048eb66
    CALL core_sound.cpp_CSound_killSound_FUN_0052ebb0 ; 0048eb67
        ;   XREF to: 0052ebb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0052ebb0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0048eb6c
    MOV dword ptr [EBX + 0x574],0x0     ; 0048eb6f
    PUSH EBX                            ; 0048eb79
        ;   Label: LAB_0048eb79
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0048eb7a
    CALL dword ptr [EAX + 0x8c]         ; 0048eb80
    MOV EDX,dword ptr [0x01cae0e8]      ; 0048eb86 | DAT_01cae0e8
    MOV ECX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0048eb8c
    ADD ESP,0x4                         ; 0048eb93
    CMP EAX,ECX                         ; 0048eb96
    JZ 0x0048ec3f                       ; 0048eb98
        ;   XREF to: 0048ec3f (CONDITIONAL_JUMP)  ; LAB_0048ec3f
    MOV EAX,dword ptr [EBX + 0x570]     ; 0048eb9e
        ;   Label: LAB_0048eb9e
    MOV dword ptr [EBX + 0x570],0x0     ; 0048eba4
    MOV dword ptr [EBX + 0x578],EAX     ; 0048ebae
    MOV ESP,EBP                         ; 0048ebb4
    POP EBP                             ; 0048ebb6
    POP EDI                             ; 0048ebb7
    POP ESI                             ; 0048ebb8
    POP EBX                             ; 0048ebb9
    RET                                 ; 0048ebba
    MOV EDI,dword ptr [EBX + 0x574]     ; 0048ebbb
        ;   Label: LAB_0048ebbb
    PUSH EDI                            ; 0048ebc1
    MOV EAX,[0x005bed68]                ; 0048ebc2 | g_CSound_PTR_005bed68
    PUSH EAX                            ; 0048ebc7
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0 ; 0048ebc8
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0048ebcd
    TEST EAX,EAX                        ; 0048ebd0
    JZ 0x0048ec25                       ; 0048ebd2
        ;   XREF to: 0048ec25 (CONDITIONAL_JUMP)  ; LAB_0048ec25
    FLD float ptr [EBX + 0x57c]         ; 0048ebd4
        ;   Label: LAB_0048ebd4
    FSUB float ptr [EBP + 0x18]         ; 0048ebda
    FLDZ                                ; 0048ebdd
    FXCH                                ; 0048ebdf
    FST float ptr [EBX + 0x57c]         ; 0048ebe1
    FSTP double ptr [ESP]               ; 0048ebe7
    FCOMP double ptr [ESP]              ; 0048ebea
    FNSTSW AX                           ; 0048ebed
    SAHF                                ; 0048ebef
    JBE 0x0048eb9e                      ; 0048ebf0
        ;   XREF to: 0048eb9e (CONDITIONAL_JUMP)  ; LAB_0048eb9e
    FLD float ptr [0x0059d7a0]          ; 0048ebf2 | FLOAT_0059d7a0
    FLD1                                ; 0048ebf8
    FDIVRP                              ; 0048ebfa
    MOV EDX,dword ptr [EBX + 0x560]     ; 0048ebfc
    DEC EDX                             ; 0048ec02
    FADD double ptr [ESP]               ; 0048ec03
    MOV dword ptr [EBX + 0x560],EDX     ; 0048ec06
    FSTP float ptr [EBX + 0x57c]        ; 0048ec0c
    TEST EDX,EDX                        ; 0048ec12
    JGE 0x0048eb9e                      ; 0048ec14
        ;   XREF to: 0048eb9e (CONDITIONAL_JUMP)  ; LAB_0048eb9e
    MOV dword ptr [EBX + 0x560],0x0     ; 0048ec16
    JMP 0x0048eb9e                      ; 0048ec20
        ;   XREF to: 0048eb9e (UNCONDITIONAL_JUMP)  ; LAB_0048eb9e
    PUSH 0x5816a9                       ; 0048ec25 | = "fl-throw.wav"
        ;   Label: LAB_0048ec25
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0048ec2a
    PUSH EBX                            ; 0048ec30
    CALL dword ptr [EAX + 0x24]         ; 0048ec31
    ADD ESP,0x8                         ; 0048ec34
    MOV dword ptr [EBX + 0x574],EAX     ; 0048ec37
    JMP 0x0048ebd4                      ; 0048ec3d
        ;   XREF to: 0048ebd4 (UNCONDITIONAL_JUMP)  ; LAB_0048ebd4
    MOV ESI,dword ptr [0x005b9284]      ; 0048ec3f | PTR_DAT_005b9284
        ;   Label: LAB_0048ec3f
    PUSH ESI                            ; 0048ec45
    CALL xxx_unk.c_FUN_004940d0         ; 0048ec46
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 0048ec4b
    JMP 0x0048eb9e                      ; 0048ec4e
        ;   XREF to: 0048eb9e (UNCONDITIONAL_JUMP)  ; LAB_0048eb9e

