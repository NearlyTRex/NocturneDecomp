; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_005515e0(double pos_x,double pos_y,double pos_z,float radius)
;
; Parameters:
; double           Stack[0x4]:8   pos_x
; double           Stack[0xc]:8   pos_y
; double           Stack[0x14]:8   pos_z
; float            Stack[0x1c]:4   radius
;
; XREF[7]:
;   core_bat.cpp_CBat_process_FUN_00411200 at 004113a0
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418d1e
;   core_construc.cpp_CConstruct_process_FUN_00436e80 at 0043754f
;   core_drone.cpp_CDrone_process_FUN_0046d870 at 0046d9bc
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 00486d3e
;   core_haystack.cpp_CHaystack_advanceMotion_FUN_004cd660 at 004cd707
;   core_tvbat.cpp_CTVBat_process_FUN_00580610 at 00581209
;
; Referenced Globals:
;   undefined4 DAT_02648428
;   undefined4 DAT_02648438
;   undefined4 DAT_02648448
;   undefined4 DAT_026484b8
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00550510
        ;   Label: LAB_00550510
    RET                                 ; 00550512
    FLD double ptr [ESP + 0x4]          ; 005515e0
        ;   Label: sound_sndmain.cpp_isWithinListenerRadius_FUN_005515e0
    MOV EAX,[0x026484b8]                ; 005515e4 | DAT_026484b8
    FLD double ptr [ESP + 0xc]          ; 005515e9
    FXCH                                ; 005515ed
    FSUB double ptr [EAX*0x8 + 0x2648428] ; 005515ef | DAT_02648428
    FXCH                                ; 005515f6
    FSUB double ptr [EAX*0x8 + 0x2648438] ; 005515f8 | DAT_02648438
    FXCH                                ; 005515ff
    FST double ptr [ESP + 0x4]          ; 00551601
    FMUL double ptr [ESP + 0x4]         ; 00551605
    FXCH                                ; 00551609
    FST double ptr [ESP + 0xc]          ; 0055160b
    FMUL double ptr [ESP + 0xc]         ; 0055160f
    FLD double ptr [ESP + 0x14]         ; 00551613
    FSUB double ptr [EAX*0x8 + 0x2648448] ; 00551617 | DAT_02648448
    FXCH                                ; 0055161e
    FADDP ST2,ST0                       ; 00551620
    FST double ptr [ESP + 0x14]         ; 00551622
    FMUL double ptr [ESP + 0x14]        ; 00551626
    FADDP                               ; 0055162a
    FLD float ptr [ESP + 0x1c]          ; 0055162c
    FMUL ST0                            ; 00551630
    FCOMPP                              ; 00551632
    FNSTSW AX                           ; 00551634
    SAHF                                ; 00551636
    JC 0x00550510                       ; 00551637
        ;   XREF to: 00550510 (CONDITIONAL_JUMP)  ; LAB_00550510
    MOV EAX,0x1                         ; 0055163d
    RET                                 ; 00551642

