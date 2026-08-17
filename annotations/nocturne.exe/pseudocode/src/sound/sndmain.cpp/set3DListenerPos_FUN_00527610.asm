; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00527610(double pos_x,double pos_y,double pos_z)
;
; Parameters:
; double           Stack[0x4]:8   pos_x
; double           Stack[0xc]:8   pos_y
; double           Stack[0x14]:8   pos_z
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_0052e850 at 0052e902
;   core_sound.cpp_updateListeners_FUN_0052c9d0 at 0052cb0b
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00527d80 at 00527dbd
;
; Referenced Globals:
;   undefined4 DAT_02dc78e0
;   undefined4 DAT_02dc78e4
;   undefined4 DAT_02dc78e8
;   undefined4 DAT_02dc78ec
;   undefined4 DAT_02dc78f0
;   undefined4 DAT_02dc78f4
;   undefined4 DAT_02dc8318
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00527610
        ;   Label: sound_sndmain.cpp_set3DListenerPos_FUN_00527610
    MOV EAX,dword ptr [ESP + 0x8]       ; 00527611
    MOV [0x02dc78e0],EAX                ; 00527615 | DAT_02dc78e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052761a
    MOV [0x02dc78e4],EAX                ; 0052761e | DAT_02dc78e4
    MOV EAX,dword ptr [ESP + 0x10]      ; 00527623
    MOV [0x02dc78e8],EAX                ; 00527627 | DAT_02dc78e8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052762c
    MOV [0x02dc78ec],EAX                ; 00527630 | DAT_02dc78ec
    MOV EAX,dword ptr [ESP + 0x18]      ; 00527635
    MOV [0x02dc78f0],EAX                ; 00527639 | DAT_02dc78f0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052763e
    MOV EDX,dword ptr [0x02dc8318]      ; 00527642 | DAT_02dc8318
    MOV [0x02dc78f4],EAX                ; 00527648 | DAT_02dc78f4
    TEST EDX,EDX                        ; 0052764d
    JNZ 0x00527653                      ; 0052764f
        ;   XREF to: 00527653 (CONDITIONAL_JUMP)  ; LAB_00527653
    POP EBP                             ; 00527651
    RET                                 ; 00527652
    PUSH EDI                            ; 00527653
        ;   Label: LAB_00527653
    PUSH ESI                            ; 00527654
    PUSH EBX                            ; 00527655
    MOV ECX,dword ptr [ESP + 0x28]      ; 00527656
    PUSH ECX                            ; 0052765a
    MOV EBX,dword ptr [ESP + 0x28]      ; 0052765b
    PUSH EBX                            ; 0052765f
    MOV ESI,dword ptr [ESP + 0x28]      ; 00527660
    PUSH ESI                            ; 00527664
    MOV EDI,dword ptr [ESP + 0x28]      ; 00527665
    PUSH EDI                            ; 00527669
    MOV EBP,dword ptr [ESP + 0x28]      ; 0052766a
    PUSH EBP                            ; 0052766e
    MOV ECX,dword ptr [ESP + 0x28]      ; 0052766f
    PUSH ECX                            ; 00527673
    MOV EAX,EDX                         ; 00527674
    MOV EDX,dword ptr [EDX]             ; 00527676
    PUSH EAX                            ; 00527678
    CALL dword ptr [EDX + 0x18]         ; 00527679
    ADD ESP,0x1c                        ; 0052767c
    POP EBX                             ; 0052767f
    POP ESI                             ; 00527680
    POP EDI                             ; 00527681
    POP EBP                             ; 00527682
    RET                                 ; 00527683

