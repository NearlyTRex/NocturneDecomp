; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStormEffect_activate_FUN_004a0480(CStormEffect *this_ptr,CVector3f position)
;
; Parameters:
; CStormEffect *   Stack[0x4]:4   this_ptr
; CVector3f        Stack[0x8]:12   position
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0 at 004a3ffa
;
; Referenced Globals:
;   undefined4 s_wp_storm_wav_005c093b+1
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 DAT_006071f0
;   undefined4 g_CDemonSetInstance.selected_camera_index
;   undefined4 DAT_02d0c1a0
;
; Called Functions:
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   core_weather.cpp_FUN_0057d050
;   core_weather.cpp_FUN_0057d1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0480
        ;   Label: core_fire.cpp_CStormEffect_activate_FUN_004a0480
    PUSH EDI                            ; 004a0481
    SUB ESP,0x18                        ; 004a0482
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a0485
    MOV EAX,[0x006071f0]                ; 004a0489 | DAT_006071f0
    MOV EDX,dword ptr [EAX]             ; 004a048e | DAT_02d0c1a0
    MOV dword ptr [EBX + 0x4],EDX       ; 004a0490
    TEST EDX,EDX                        ; 004a0493
    JNZ 0x004a0562                      ; 004a0495
        ;   XREF to: 004a0562 (CONDITIONAL_JUMP)  ; LAB_004a0562
    MOV EAX,[0x00603b28]                ; 004a049b | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004a04a0 | g_CDemonSetInstance.selected_camera_index
    MOV ECX,EDX                         ; 004a04a6
    IMUL EDX,EDX,0x1a4                  ; 004a04a8
    ADD EAX,0x4                         ; 004a04ae
    ADD EDX,EAX                         ; 004a04b1
    LEA EAX,[ESP + 0xc]                 ; 004a04b3
    ADD EDX,0x100                       ; 004a04b7
    CMP EAX,EDX                         ; 004a04bd
    JNZ 0x004a0549                      ; 004a04bf
        ;   XREF to: 004a0549 (CONDITIONAL_JUMP)  ; LAB_004a0549
    IMUL EDX,ECX,0x1a4                  ; 004a04c5
        ;   Label: LAB_004a04c5
    MOV EAX,[0x00603b28]                ; 004a04cb | g_CDemonSetPtr
    ADD EAX,0x4                         ; 004a04d0
    ADD EDX,EAX                         ; 004a04d3
    MOV EAX,ESP                         ; 004a04d5
    ADD EDX,0x10c                       ; 004a04d7
    CMP EAX,EDX                         ; 004a04dd
    JZ 0x004a04f4                       ; 004a04df
        ;   XREF to: 004a04f4 (CONDITIONAL_JUMP)  ; LAB_004a04f4
    MOV EAX,dword ptr [EDX]             ; 004a04e1
    MOV dword ptr [ESP],EAX             ; 004a04e3
    MOV EAX,dword ptr [EDX + 0x4]       ; 004a04e6
    MOV dword ptr [ESP + 0x4],EAX       ; 004a04e9
    MOV EAX,dword ptr [EDX + 0x8]       ; 004a04ed
    MOV dword ptr [ESP + 0x8],EAX       ; 004a04f0
    PUSH ESI                            ; 004a04f4
        ;   Label: LAB_004a04f4
    PUSH 0x5                            ; 004a04f5
    MOV ECX,dword ptr [0x006071f0]      ; 004a04f7 | DAT_006071f0
    PUSH ECX                            ; 004a04fd | DAT_02d0c1a0
    CALL core_weather.cpp_FUN_0057d050  ; 004a04fe
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057d050()
    ADD ESP,0x8                         ; 004a0503
    LEA EAX,[ESP + 0x4]                 ; 004a0506
    PUSH EAX                            ; 004a050a
    LEA EAX,[ESP + 0x14]                ; 004a050b
    PUSH EAX                            ; 004a050f
    MOV ESI,dword ptr [0x006071f0]      ; 004a0510 | DAT_006071f0
    PUSH ESI                            ; 004a0516 | DAT_02d0c1a0
    CALL core_weather.cpp_FUN_0057d1a0  ; 004a0517
        ;   XREF to: 0057d1a0 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057d1a0()
    ADD ESP,0xc                         ; 004a051c
    POP ESI                             ; 004a051f
    LEA EAX,[ESP + 0x28]                ; 004a0520
        ;   Label: LAB_004a0520
    PUSH EAX                            ; 004a0524
    PUSH 0x5c093c                       ; 004a0525 | s_wp_storm_wav_005c093b+1
    PUSH EBX                            ; 004a052a
    MOV EDI,dword ptr [0x006045f8]      ; 004a052b | DAT_006045f8
    PUSH EDI                            ; 004a0531
    MOV dword ptr [EBX],0x40a00000      ; 004a0532
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004a0538
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004a053d
    MOV dword ptr [EBX + 0x8],EAX       ; 004a0540
    ADD ESP,0x18                        ; 004a0543
    POP EDI                             ; 004a0546
    POP EBX                             ; 004a0547
    RET                                 ; 004a0548
    MOV EAX,dword ptr [EDX]             ; 004a0549
        ;   Label: LAB_004a0549
    MOV dword ptr [ESP + 0xc],EAX       ; 004a054b
    MOV EAX,dword ptr [EDX + 0x4]       ; 004a054f
    MOV dword ptr [ESP + 0x10],EAX      ; 004a0552
    MOV EAX,dword ptr [EDX + 0x8]       ; 004a0556
    MOV dword ptr [ESP + 0x14],EAX      ; 004a0559
    JMP 0x004a04c5                      ; 004a055d
        ;   XREF to: 004a04c5 (UNCONDITIONAL_JUMP)  ; LAB_004a04c5
    PUSH 0x5                            ; 004a0562
        ;   Label: LAB_004a0562
    PUSH EAX                            ; 004a0564 | DAT_02d0c1a0
    CALL core_weather.cpp_FUN_0057d050  ; 004a0565
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057d050()
    ADD ESP,0x8                         ; 004a056a
    JMP 0x004a0520                      ; 004a056d
        ;   XREF to: 004a0520 (UNCONDITIONAL_JUMP)  ; LAB_004a0520

