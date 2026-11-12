; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tawiscara_cpp_FUN_00595710(int param_1)
;
;
; XREF[2]:
;   core_tawiscara.cpp_CTawiscara_processDamage_FUN_00595f90 at 005960d8
;   core_tawiscara.cpp_FUN_00594000 at 00594d7f
;
; Referenced Globals:
;   TerminatedCString s_were_wav_005d93a1
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595710
        ;   Label: core_tawiscara.cpp_FUN_00595710
    MOV EBX,dword ptr [ESP + 0x8]       ; 00595711
    MOV EDX,dword ptr [EBX + 0xd070]    ; 00595715
    PUSH EDX                            ; 0059571b
    MOV dword ptr [EBX + 0xd074],0x41200000 ; 0059571c
    CALL sound_sndmain.cpp_FUN_00556700 ; 00595726
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059572b
    TEST EAX,EAX                        ; 0059572e
    JZ 0x00595734                       ; 00595730
        ;   XREF to: 00595734 (CONDITIONAL_JUMP)  ; LAB_00595734
    POP EBX                             ; 00595732
    RET                                 ; 00595733
    PUSH 0x5d93a1                       ; 00595734 | = "were?.wav"
        ;   Label: LAB_00595734
    MOV EAX,dword ptr [EBX + 0x154]     ; 00595739
    PUSH EBX                            ; 0059573f
    CALL dword ptr [EAX + 0x2c]         ; 00595740
    MOV dword ptr [EBX + 0xd074],0x41a00000 ; 00595743
    ADD ESP,0x8                         ; 0059574d
    MOV dword ptr [EBX + 0xd070],EAX    ; 00595750
    POP EBX                             ; 00595756
    RET                                 ; 00595757

