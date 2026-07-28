; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x,float orient_right_y,float orient_right_z)
;
; Parameters:
; float            Stack[0x4]:4   orient_right_x
; float            Stack[0x8]:4   orient_right_y
; float            Stack[0xc]:4   orient_right_z
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_0052e850 at 0052e8ee
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052de4b
;   core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0 at 0052ecd4
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;   undefined4 DAT_02dc8498
;   undefined4 DAT_02dc849c
;   undefined4 DAT_02dc84a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00528630
        ;   Label: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
    MOV [0x02dc8498],EAX                ; 00528634 | DAT_02dc8498
    MOV EAX,dword ptr [ESP + 0x8]       ; 00528639
    MOV [0x02dc849c],EAX                ; 0052863d | DAT_02dc849c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00528642
    MOV EDX,dword ptr [0x02dc8318]      ; 00528646 | DAT_02dc8318
    MOV [0x02dc84a0],EAX                ; 0052864c | DAT_02dc84a0
    TEST EDX,EDX                        ; 00528651
    JNZ 0x00528656                      ; 00528653
        ;   XREF to: 00528656 (CONDITIONAL_JUMP)  ; LAB_00528656
    RET                                 ; 00528655
    PUSH dword ptr [ESP + 0xc]          ; 00528656
        ;   Label: LAB_00528656
    PUSH dword ptr [ESP + 0xc]          ; 0052865a
    MOV EAX,EDX                         ; 0052865e
    PUSH dword ptr [ESP + 0xc]          ; 00528660
    MOV EDX,dword ptr [EDX]             ; 00528664
    PUSH EAX                            ; 00528666
    CALL dword ptr [EDX + 0x28]         ; 00528667
    ADD ESP,0x10                        ; 0052866a
    RET                                 ; 0052866d

