; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_0057d9e0(CSound *this_ptr,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; Local Variables:
; undefined        Stack[-0x160]:1  local_160
; undefined8       Stack[-0x10]:8  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_mobster.cpp_CMobster_playTaunt_FUN_0051f330 at 0051f3d0
;   core_script.cpp_CScript_startDialogLine_FUN_0054aa60 at 0054aaf0
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00572390
;   sound_sndmain.cpp_CSfxSample_init_FUN_00572340
;   sound_sndmain.cpp_FUN_00574410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d9e0
        ;   Label: core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0
    SUB ESP,0x15c                       ; 0057d9e1
    MOV EBX,dword ptr [ESP + 0x168]     ; 0057d9e7
    MOV EAX,ESP                         ; 0057d9ee
    PUSH EAX                            ; 0057d9f0
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00572340 ; 0057d9f1
        ;   XREF to: 00572340 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00572340(CSfxSample * this_ptr)
    LEA EAX,[ESP + 0x4]                 ; 0057d9f6
    MOV DL,byte ptr [EBX]               ; 0057d9fa
    ADD ESP,0x4                         ; 0057d9fc
    TEST DL,DL                          ; 0057d9ff
    JZ 0x0057da0f                       ; 0057da01
        ;   XREF to: 0057da0f (CONDITIONAL_JUMP)  ; LAB_0057da0f
    MOV CL,byte ptr [EBX]               ; 0057da03
        ;   Label: LAB_0057da03
    CMP CL,0x40                         ; 0057da05
    JZ 0x0057da0f                       ; 0057da08
        ;   XREF to: 0057da0f (CONDITIONAL_JUMP)  ; LAB_0057da0f
    CMP CL,0x2a                         ; 0057da0a
    JNZ 0x0057da3b                      ; 0057da0d
        ;   XREF to: 0057da3b (CONDITIONAL_JUMP)  ; LAB_0057da3b
    MOV byte ptr [EAX],0x0              ; 0057da0f
        ;   Label: LAB_0057da0f
    MOV EAX,ESP                         ; 0057da12
    PUSH EAX                            ; 0057da14
    CALL sound_sndmain.cpp_FUN_00574410 ; 0057da15
        ;   XREF to: 00574410 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00574410(CSfxSample * out_sample)
    ADD ESP,0x4                         ; 0057da1a
    TEST EAX,EAX                        ; 0057da1d
    JNZ 0x0057da5c                      ; 0057da1f
        ;   XREF to: 0057da5c (CONDITIONAL_JUMP)  ; LAB_0057da5c
    MOV dword ptr [ESP + 0x158],0xbf800000 ; 0057da21
    MOV EAX,dword ptr [ESP + 0x158]     ; 0057da2c
    ADD ESP,0x15c                       ; 0057da33
    POP EBX                             ; 0057da39
    RET                                 ; 0057da3a
    MOV DL,CL                           ; 0057da3b
        ;   Label: LAB_0057da3b
    INC DL                              ; 0057da3d
    AND EDX,0xff                        ; 0057da3f
    TEST byte ptr [EDX + 0x626114],0x2  ; 0057da45 | DAT_00626114
    JNZ 0x0057da0f                      ; 0057da4c
        ;   XREF to: 0057da0f (CONDITIONAL_JUMP)  ; LAB_0057da0f
    MOV DL,byte ptr [EBX]               ; 0057da4e
    INC EBX                             ; 0057da50
    MOV byte ptr [EAX],DL               ; 0057da51
    MOV DH,byte ptr [EBX]               ; 0057da53
    INC EAX                             ; 0057da55
    TEST DH,DH                          ; 0057da56
    JNZ 0x0057da03                      ; 0057da58
        ;   XREF to: 0057da03 (CONDITIONAL_JUMP)  ; LAB_0057da03
    JMP 0x0057da0f                      ; 0057da5a
        ;   XREF to: 0057da0f (UNCONDITIONAL_JUMP)  ; LAB_0057da0f
    MOV EAX,ESP                         ; 0057da5c
        ;   Label: LAB_0057da5c
    PUSH EAX                            ; 0057da5e
    CALL sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00572390 ; 0057da5f
        ;   XREF to: 00572390 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00572390(CSampleInfo * this_ptr)
    MOV dword ptr [ESP + 0x154],EAX     ; 0057da64
    MOV dword ptr [ESP + 0x158],EDX     ; 0057da6b
    FLD double ptr [ESP + 0x154]        ; 0057da72
    ADD ESP,0x4                         ; 0057da79
    FSTP float ptr [ESP + 0x158]        ; 0057da7c
    MOV EAX,dword ptr [ESP + 0x158]     ; 0057da83
    ADD ESP,0x15c                       ; 0057da8a
    POP EBX                             ; 0057da90
    RET                                 ; 0057da91

