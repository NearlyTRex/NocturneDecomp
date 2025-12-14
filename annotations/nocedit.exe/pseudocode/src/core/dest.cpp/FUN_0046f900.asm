; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorDestination * core_dest.cpp_FUN_0046f900(CActorDestination * this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dest.cpp_FUN_0046f8c0 at 0046f8da
;   core_filmreel.cpp_ctor_FUN_004bea40 at 004bea48
;
; Referenced Globals:
;   TerminatedCString s_none_0061e39d
;   undefined4 s_one_0061e39e
;   undefined4 s_ne_0061e39f
;   undefined4 s_e_0061e3a0
;   CDemonActor_vtable PTR_core_dest.cpp_FUN_0065c724
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046f900
        ;   Label: core_dest.cpp_FUN_0046f900
    PUSH EDI                            ; 0046f901
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046f902
    PUSH EDX                            ; 0046f906
    MOV ESI,0x61e39d                    ; 0046f907 | = "none"
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 0046f90c
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    MOV EDX,EAX                         ; 0046f911
    ADD ESP,0x4                         ; 0046f913
    LEA EDI,[EAX + 0x188]               ; 0046f916
    MOV dword ptr [EAX + 0x154],0x65c724 ; 0046f91c | PTR_core_dest.cpp_FUN_0065c724
    PUSH EDI                            ; 0046f926
    MOV AL,byte ptr [ESI]               ; 0046f927 | = "none" | s_ne_0061e39f
        ;   Label: LAB_0046f927
    MOV byte ptr [EDI],AL               ; 0046f929
    CMP AL,0x0                          ; 0046f92b
    JZ 0x0046f93f                       ; 0046f92d
        ;   XREF to: 0046f93f (CONDITIONAL_JUMP)  ; LAB_0046f93f
    MOV AL,byte ptr [ESI + 0x1]         ; 0046f92f | s_one_0061e39e | s_e_0061e3a0
    ADD ESI,0x2                         ; 0046f932
    MOV byte ptr [EDI + 0x1],AL         ; 0046f935
    ADD EDI,0x2                         ; 0046f938
    CMP AL,0x0                          ; 0046f93b
    JNZ 0x0046f927                      ; 0046f93d
        ;   XREF to: 0046f927 (CONDITIONAL_JUMP)  ; LAB_0046f927
    POP EDI                             ; 0046f93f
        ;   Label: LAB_0046f93f
    MOV dword ptr [EDX + 0x158],0x0     ; 0046f940
    MOV byte ptr [EDX + 0x15c],0x0      ; 0046f94a
    MOV dword ptr [EDX + 0x1f0],0x1     ; 0046f951
    MOV EAX,EDX                         ; 0046f95b
    MOV dword ptr [EDX + 0x1ec],0x1     ; 0046f95d
    POP EDI                             ; 0046f967
    POP ESI                             ; 0046f968
    RET                                 ; 0046f969

