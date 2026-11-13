; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_0055af90(CSound *this_ptr,char *sound_name)
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
;   core_mobster.cpp_CMobster_playTaunt_FUN_00500370 at 00500410
;   core_script.cpp_CScript_startDialogLine_FUN_00529750 at 005297e0
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_0054fd20
;   sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0
;   sound_sndmain.cpp_getSampleInfo_FUN_005519e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055af90
        ;   Label: core_sound.cpp_CSound_getSoundDuration_FUN_0055af90
    SUB ESP,0x15c                       ; 0055af91
    MOV EBX,dword ptr [ESP + 0x168]     ; 0055af97
    MOV EAX,ESP                         ; 0055af9e
    PUSH EAX                            ; 0055afa0
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0 ; 0055afa1
        ;   XREF to: 0054fcd0 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0(CSfxSample * this_ptr)
    LEA EAX,[ESP + 0x4]                 ; 0055afa6
    MOV DL,byte ptr [EBX]               ; 0055afaa
    ADD ESP,0x4                         ; 0055afac
    TEST DL,DL                          ; 0055afaf
    JZ 0x0055afbf                       ; 0055afb1
        ;   XREF to: 0055afbf (CONDITIONAL_JUMP)  ; LAB_0055afbf
    MOV CL,byte ptr [EBX]               ; 0055afb3
        ;   Label: LAB_0055afb3
    CMP CL,0x40                         ; 0055afb5
    JZ 0x0055afbf                       ; 0055afb8
        ;   XREF to: 0055afbf (CONDITIONAL_JUMP)  ; LAB_0055afbf
    CMP CL,0x2a                         ; 0055afba
    JNZ 0x0055afeb                      ; 0055afbd
        ;   XREF to: 0055afeb (CONDITIONAL_JUMP)  ; LAB_0055afeb
    MOV byte ptr [EAX],0x0              ; 0055afbf
        ;   Label: LAB_0055afbf
    MOV EAX,ESP                         ; 0055afc2
    PUSH EAX                            ; 0055afc4
    CALL sound_sndmain.cpp_getSampleInfo_FUN_005519e0 ; 0055afc5
        ;   XREF to: 005519e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSampleInfo_FUN_005519e0(CSfxSample * out_sample)
    ADD ESP,0x4                         ; 0055afca
    TEST EAX,EAX                        ; 0055afcd
    JNZ 0x0055b00c                      ; 0055afcf
        ;   XREF to: 0055b00c (CONDITIONAL_JUMP)  ; LAB_0055b00c
    MOV dword ptr [ESP + 0x158],0xbf800000 ; 0055afd1
    MOV EAX,dword ptr [ESP + 0x158]     ; 0055afdc
    ADD ESP,0x15c                       ; 0055afe3
    POP EBX                             ; 0055afe9
    RET                                 ; 0055afea
    MOV DL,CL                           ; 0055afeb
        ;   Label: LAB_0055afeb
    INC DL                              ; 0055afed
    AND EDX,0xff                        ; 0055afef
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0055aff5 | DAT_0061ed94
    JNZ 0x0055afbf                      ; 0055affc
        ;   XREF to: 0055afbf (CONDITIONAL_JUMP)  ; LAB_0055afbf
    MOV DL,byte ptr [EBX]               ; 0055affe
    INC EBX                             ; 0055b000
    MOV byte ptr [EAX],DL               ; 0055b001
    MOV DH,byte ptr [EBX]               ; 0055b003
    INC EAX                             ; 0055b005
    TEST DH,DH                          ; 0055b006
    JNZ 0x0055afb3                      ; 0055b008
        ;   XREF to: 0055afb3 (CONDITIONAL_JUMP)  ; LAB_0055afb3
    JMP 0x0055afbf                      ; 0055b00a
        ;   XREF to: 0055afbf (UNCONDITIONAL_JUMP)  ; LAB_0055afbf
    MOV EAX,ESP                         ; 0055b00c
        ;   Label: LAB_0055b00c
    PUSH EAX                            ; 0055b00e
    CALL sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_0054fd20 ; 0055b00f
        ;   XREF to: 0054fd20 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_0054fd20(CSampleInfo * this_ptr)
    MOV dword ptr [ESP + 0x154],EAX     ; 0055b014
    MOV dword ptr [ESP + 0x158],EDX     ; 0055b01b
    FLD double ptr [ESP + 0x154]        ; 0055b022
    ADD ESP,0x4                         ; 0055b029
    FSTP float ptr [ESP + 0x158]        ; 0055b02c
    MOV EAX,dword ptr [ESP + 0x158]     ; 0055b033
    ADD ESP,0x15c                       ; 0055b03a
    POP EBX                             ; 0055b040
    RET                                 ; 0055b041

