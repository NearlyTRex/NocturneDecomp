; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00535900 at 005364b8
;
; Referenced Globals:
;   float FLOAT_005a2704 = 10
;   undefined4 g_CDynamiteActorType_01bca088.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_0046eda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540660
        ;   Label: core_stranger.cpp_CStranger_processWeaponTick_FUN_00540660
    PUSH ESI                            ; 00540661
    PUSH EDI                            ; 00540662
    MOV EBX,dword ptr [ESP + 0x10]      ; 00540663
    MOV EDX,dword ptr [EBX + 0x1fa94]   ; 00540667
    TEST EDX,EDX                        ; 0054066d
    JNZ 0x00540675                      ; 0054066f
        ;   XREF to: 00540675 (CONDITIONAL_JUMP)  ; LAB_00540675
    POP EDI                             ; 00540671
        ;   Label: LAB_00540671
    POP ESI                             ; 00540672
    POP EBX                             ; 00540673
    RET                                 ; 00540674
    PUSH dword ptr [ESP + 0x14]         ; 00540675
        ;   Label: LAB_00540675
    MOV ESI,dword ptr [EDX + 0x14c]     ; 00540679
    PUSH EDX                            ; 0054067f
    CALL dword ptr [ESI + 0x4]          ; 00540680
    ADD ESP,0x8                         ; 00540683
    MOV ECX,dword ptr [0x01bca0c0]      ; 00540686 | g_CDynamiteActorType_01bca088.name_hash
    PUSH ECX                            ; 0054068c
    MOV ESI,dword ptr [EBX + 0x1fa94]   ; 0054068d
    PUSH ESI                            ; 00540693
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00540694
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00540699
    ADD ESP,0x8                         ; 0054069b
    TEST EAX,EAX                        ; 0054069e
    JZ 0x00540671                       ; 005406a0
        ;   XREF to: 00540671 (CONDITIONAL_JUMP)  ; LAB_00540671
    PUSH EAX                            ; 005406a2
    CALL core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_0046eda0 ; 005406a3
        ;   XREF to: 0046eda0 (UNCONDITIONAL_CALL)  ; int core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_0046eda0(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 005406a8
    TEST EAX,EAX                        ; 005406ab
    JZ 0x00540671                       ; 005406ad
        ;   XREF to: 00540671 (CONDITIONAL_JUMP)  ; LAB_00540671
    LEA EAX,[ESI + 0x574]               ; 005406af
    MOV dword ptr [EAX + 0x8],0x0       ; 005406b5
    PUSH ESI                            ; 005406bc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005406bd
    MOV dword ptr [EAX + 0x4],EDX       ; 005406c0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005406c3
    MOV dword ptr [EAX],EDX             ; 005406c6
    MOV EAX,dword ptr [ESI + 0x14c]     ; 005406c8
    CALL dword ptr [EAX + 0xdc]         ; 005406ce
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 005406d4
    MOV dword ptr [EBX + 0x2a84],0x0    ; 005406de
    FLD float ptr [0x005a2704]          ; 005406e8 | FLOAT_005a2704
    MOV dword ptr [EBX + 0x2a88],0x0    ; 005406ee
    ADD ESP,0x4                         ; 005406f8
    MOV EDI,dword ptr [EBX + 0x1faa0]   ; 005406fb
    FSTP float ptr [EBX + 0x1fa4c]      ; 00540701
    CMP EDI,0x3                         ; 00540707
    JNZ 0x00540671                      ; 0054070a
        ;   XREF to: 00540671 (CONDITIONAL_JUMP)  ; LAB_00540671
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 00540710
    POP EDI                             ; 0054071a
    POP ESI                             ; 0054071b
    POP EBX                             ; 0054071c
    RET                                 ; 0054071d

