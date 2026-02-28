; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_moveActorToViewportCenter_FUN_0053c930(CDemonMission *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; Called Functions:
;   core_msnedit.cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c930
        ;   Label: core_msnedit.cpp_CDemonMission_moveActorToViewportCenter_FUN_0053c930
    PUSH ESI                            ; 0053c931
    PUSH EDI                            ; 0053c932
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053c933
    MOV EDX,dword ptr [ECX + 0x18]      ; 0053c937
    MOV EBX,dword ptr [ECX + 0x20]      ; 0053c93a
    ADD EDX,EBX                         ; 0053c93d
    MOV EAX,EDX                         ; 0053c93f
    SAR EDX,0x1f                        ; 0053c941
    SUB EAX,EDX                         ; 0053c944
    SAR EAX,0x1                         ; 0053c946
    MOV ESI,dword ptr [ECX + 0x1c]      ; 0053c948
    MOV EDX,dword ptr [ECX + 0x14]      ; 0053c94b
    ADD EDX,ESI                         ; 0053c94e
    PUSH EAX                            ; 0053c950
    MOV EAX,EDX                         ; 0053c951
    SAR EDX,0x1f                        ; 0053c953
    SUB EAX,EDX                         ; 0053c956
    SAR EAX,0x1                         ; 0053c958
    PUSH EAX                            ; 0053c95a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0053c95b
    PUSH EDI                            ; 0053c95f
    PUSH ECX                            ; 0053c960
    CALL core_msnedit.cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970 ; 0053c961
        ;   XREF to: 0053c970 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970(CDemonMission * this_ptr, CDemonActor * actor, int screen_x, int screen_y)
    ADD ESP,0x10                        ; 0053c966
    POP EDI                             ; 0053c969
    POP ESI                             ; 0053c96a
    POP EBX                             ; 0053c96b
    RET                                 ; 0053c96c

