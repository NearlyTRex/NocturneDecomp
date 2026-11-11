; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a3920(CFireEffect *param_1,CVector3f *param_2,UOrientationVector *param_3,CVector3f *param_4,float param_5,uint param_6)
;
;
; XREF[1]:
;   core_dynamite.cpp_CDynamite_fire_FUN_0047b130 at 0047b168
;
; Referenced Globals:
;   undefined4 DAT_005c0a40
;
; Called Functions:
;   core_fire.cpp_FUN_004a3a30
;   sound_sndmain.cpp_FUN_00556930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3920
        ;   Label: core_fire.cpp_FUN_004a3920
    PUSH ESI                            ; 004a3921
    PUSH EDI                            ; 004a3922
    PUSH EBP                            ; 004a3923
    FLD float ptr [ESP + 0x24]          ; 004a3924
    FCOMP double ptr [0x005c0a40]       ; 004a3928 | DAT_005c0a40
    FNSTSW AX                           ; 004a392e
    SAHF                                ; 004a3930
    JNC 0x004a393b                      ; 004a3931
        ;   XREF to: 004a393b (CONDITIONAL_JUMP)  ; LAB_004a393b
    MOV dword ptr [ESP + 0x24],0x38d1b717 ; 004a3933
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a393b
        ;   Label: LAB_004a393b
    PUSH dword ptr [ESP + 0x24]         ; 004a393f
    PUSH ECX                            ; 004a3943
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a3944
    PUSH EBX                            ; 004a3948
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a3949
    PUSH ESI                            ; 004a394d
    PUSH 0x0                            ; 004a394e
    MOV EDI,dword ptr [ESP + 0x28]      ; 004a3950
    PUSH EDI                            ; 004a3954
    CALL core_fire.cpp_FUN_004a3a30     ; 004a3955
        ;   XREF to: 004a3a30 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_FUN_004a3a30(CFireEffect * this_ptr, int toss_type, CVector3f * position, UOrientationVector * orientation, ...)
    MOV EDX,EAX                         ; 004a395a
    SHL EAX,0x2                         ; 004a395c
    SUB EAX,EDX                         ; 004a395f
    SHL EAX,0x3                         ; 004a3961
    ADD EAX,EDX                         ; 004a3964
    SHL EAX,0x3                         ; 004a3966
    MOV EDX,EAX                         ; 004a3969
    SHL EAX,0x2                         ; 004a396b
    ADD ESP,0x18                        ; 004a396e
    ADD EAX,EDX                         ; 004a3971
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a3973
    MOV dword ptr [EAX + 0x1cf65b8],EDX ; 004a3977
    MOV EDX,0x1cf61d4                   ; 004a397d
    ADD EDX,EAX                         ; 004a3982
    ADD EDX,0x180                       ; 004a3984
    PUSH EDX                            ; 004a398a
    MOV EBP,dword ptr [EAX + 0x1cf65b8] ; 004a398b
    PUSH EBP                            ; 004a3991
    CALL sound_sndmain.cpp_FUN_00556930 ; 004a3992
        ;   XREF to: 00556930 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556930()
    ADD ESP,0x8                         ; 004a3997
    POP EBP                             ; 004a399a
    POP EDI                             ; 004a399b
    POP ESI                             ; 004a399c
    POP EBX                             ; 004a399d
    RET                                 ; 004a399e

