; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_00560b10(CSound *this_ptr,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; Local Variables:
; undefined        Stack[-0x160]:1  local_160
; undefined8       Stack[-0x10]:8  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_script.cpp_CScript_startDialogLine_FUN_00530150 at 005301e0
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00555890
;   sound_sndmain.cpp_CSfxSample_init_FUN_00555840
;   sound_sndmain.cpp_FUN_00557570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560b10
        ;   Label: core_sound.cpp_CSound_getSoundDuration_FUN_00560b10
    SUB ESP,0x15c                       ; 00560b11
    MOV EBX,dword ptr [ESP + 0x168]     ; 00560b17
    MOV EAX,ESP                         ; 00560b1e
    PUSH EAX                            ; 00560b20
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00555840 ; 00560b21
        ;   XREF to: 00555840 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00555840(CSfxSample * this_ptr)
    LEA EAX,[ESP + 0x4]                 ; 00560b26
    MOV DL,byte ptr [EBX]               ; 00560b2a
    ADD ESP,0x4                         ; 00560b2c
    TEST DL,DL                          ; 00560b2f
    JZ 0x00560b3f                       ; 00560b31
        ;   XREF to: 00560b3f (CONDITIONAL_JUMP)  ; LAB_00560b3f
    MOV CL,byte ptr [EBX]               ; 00560b33
        ;   Label: LAB_00560b33
    CMP CL,0x40                         ; 00560b35
    JZ 0x00560b3f                       ; 00560b38
        ;   XREF to: 00560b3f (CONDITIONAL_JUMP)  ; LAB_00560b3f
    CMP CL,0x2a                         ; 00560b3a
    JNZ 0x00560b6b                      ; 00560b3d
        ;   XREF to: 00560b6b (CONDITIONAL_JUMP)  ; LAB_00560b6b
    MOV byte ptr [EAX],0x0              ; 00560b3f
        ;   Label: LAB_00560b3f
    MOV EAX,ESP                         ; 00560b42
    PUSH EAX                            ; 00560b44
    CALL sound_sndmain.cpp_FUN_00557570 ; 00560b45
        ;   XREF to: 00557570 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00557570(CSfxSample * out_sample)
    ADD ESP,0x4                         ; 00560b4a
    TEST EAX,EAX                        ; 00560b4d
    JNZ 0x00560b8c                      ; 00560b4f
        ;   XREF to: 00560b8c (CONDITIONAL_JUMP)  ; LAB_00560b8c
    MOV dword ptr [ESP + 0x158],0xbf800000 ; 00560b51
    MOV EAX,dword ptr [ESP + 0x158]     ; 00560b5c
    ADD ESP,0x15c                       ; 00560b63
    POP EBX                             ; 00560b69
    RET                                 ; 00560b6a
    MOV DL,CL                           ; 00560b6b
        ;   Label: LAB_00560b6b
    INC DL                              ; 00560b6d
    AND EDX,0xff                        ; 00560b6f
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00560b75 | DAT_006074b8
    JNZ 0x00560b3f                      ; 00560b7c
        ;   XREF to: 00560b3f (CONDITIONAL_JUMP)  ; LAB_00560b3f
    MOV DL,byte ptr [EBX]               ; 00560b7e
    INC EBX                             ; 00560b80
    MOV byte ptr [EAX],DL               ; 00560b81
    MOV DH,byte ptr [EBX]               ; 00560b83
    INC EAX                             ; 00560b85
    TEST DH,DH                          ; 00560b86
    JNZ 0x00560b33                      ; 00560b88
        ;   XREF to: 00560b33 (CONDITIONAL_JUMP)  ; LAB_00560b33
    JMP 0x00560b3f                      ; 00560b8a
        ;   XREF to: 00560b3f (UNCONDITIONAL_JUMP)  ; LAB_00560b3f
    MOV EAX,ESP                         ; 00560b8c
        ;   Label: LAB_00560b8c
    PUSH EAX                            ; 00560b8e
    CALL sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00555890 ; 00560b8f
        ;   XREF to: 00555890 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00555890(CSampleInfo * this_ptr)
    MOV dword ptr [ESP + 0x154],EAX     ; 00560b94
    MOV dword ptr [ESP + 0x158],EDX     ; 00560b9b
    FLD double ptr [ESP + 0x154]        ; 00560ba2
    ADD ESP,0x4                         ; 00560ba9
    FSTP float ptr [ESP + 0x158]        ; 00560bac
    MOV EAX,dword ptr [ESP + 0x158]     ; 00560bb3
    ADD ESP,0x15c                       ; 00560bba
    POP EBX                             ; 00560bc0
    RET                                 ; 00560bc1

