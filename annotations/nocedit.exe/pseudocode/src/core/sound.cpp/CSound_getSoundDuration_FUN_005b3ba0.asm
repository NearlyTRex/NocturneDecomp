; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound *this_ptr,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; Local Variables:
; CSampleInfo      Stack[-0x160]:288  local_160
; undefined8       Stack[-0x10]:8  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_mobster.cpp_CMobster_playTaunt_FUN_005279f0 at 00527a90
;   core_script.cpp_CScript_getDialogDuration_FUN_0055ff00 at 0055ff90
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_005a84d0
;   sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3ba0
        ;   Label: core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
    SUB ESP,0x15c                       ; 005b3ba1
    MOV EBX,dword ptr [ESP + 0x168]     ; 005b3ba7
    MOV EAX,ESP                         ; 005b3bae
    PUSH EAX                            ; 005b3bb0
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_005a8480 ; 005b3bb1
        ;   XREF to: 005a8480 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_005a8480(CSfxSample * this_ptr)
    LEA EAX,[ESP + 0x4]                 ; 005b3bb6
    MOV DL,byte ptr [EBX]               ; 005b3bba
    ADD ESP,0x4                         ; 005b3bbc
    TEST DL,DL                          ; 005b3bbf
    JZ 0x005b3bcf                       ; 005b3bc1
        ;   XREF to: 005b3bcf (CONDITIONAL_JUMP)  ; LAB_005b3bcf
    MOV CL,byte ptr [EBX]               ; 005b3bc3
        ;   Label: LAB_005b3bc3
    CMP CL,0x40                         ; 005b3bc5
    JZ 0x005b3bcf                       ; 005b3bc8
        ;   XREF to: 005b3bcf (CONDITIONAL_JUMP)  ; LAB_005b3bcf
    CMP CL,0x2a                         ; 005b3bca
    JNZ 0x005b3bfb                      ; 005b3bcd
        ;   XREF to: 005b3bfb (CONDITIONAL_JUMP)  ; LAB_005b3bfb
    MOV byte ptr [EAX],0x0              ; 005b3bcf
        ;   Label: LAB_005b3bcf
    MOV EAX,ESP                         ; 005b3bd2
    PUSH EAX                            ; 005b3bd4
    CALL sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 ; 005b3bd5
        ;   XREF to: 005aa3f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0(CSfxSample * out_sample)
    ADD ESP,0x4                         ; 005b3bda
    TEST EAX,EAX                        ; 005b3bdd
    JNZ 0x005b3c1c                      ; 005b3bdf
        ;   XREF to: 005b3c1c (CONDITIONAL_JUMP)  ; LAB_005b3c1c
    MOV dword ptr [ESP + 0x158],0xbf800000 ; 005b3be1
    MOV EAX,dword ptr [ESP + 0x158]     ; 005b3bec
    ADD ESP,0x15c                       ; 005b3bf3
    POP EBX                             ; 005b3bf9
    RET                                 ; 005b3bfa
    MOV DL,CL                           ; 005b3bfb
        ;   Label: LAB_005b3bfb
    INC DL                              ; 005b3bfd
    AND EDX,0xff                        ; 005b3bff
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 005b3c05 | g_CharacterClassificationTable
    JNZ 0x005b3bcf                      ; 005b3c0c
        ;   XREF to: 005b3bcf (CONDITIONAL_JUMP)  ; LAB_005b3bcf
    MOV DL,byte ptr [EBX]               ; 005b3c0e
    INC EBX                             ; 005b3c10
    MOV byte ptr [EAX],DL               ; 005b3c11
    MOV DH,byte ptr [EBX]               ; 005b3c13
    INC EAX                             ; 005b3c15
    TEST DH,DH                          ; 005b3c16
    JNZ 0x005b3bc3                      ; 005b3c18
        ;   XREF to: 005b3bc3 (CONDITIONAL_JUMP)  ; LAB_005b3bc3
    JMP 0x005b3bcf                      ; 005b3c1a
        ;   XREF to: 005b3bcf (UNCONDITIONAL_JUMP)  ; LAB_005b3bcf
    MOV EAX,ESP                         ; 005b3c1c
        ;   Label: LAB_005b3c1c
    PUSH EAX                            ; 005b3c1e
    CALL sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_005a84d0 ; 005b3c1f
        ;   XREF to: 005a84d0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(CSampleInfo * this_ptr)
    MOV dword ptr [ESP + 0x154],EAX     ; 005b3c24
    MOV dword ptr [ESP + 0x158],EDX     ; 005b3c2b
    FLD double ptr [ESP + 0x154]        ; 005b3c32
    ADD ESP,0x4                         ; 005b3c39
    FSTP float ptr [ESP + 0x158]        ; 005b3c3c
    MOV EAX,dword ptr [ESP + 0x158]     ; 005b3c43
    ADD ESP,0x15c                       ; 005b3c4a
    POP EBX                             ; 005b3c50
    RET                                 ; 005b3c51

