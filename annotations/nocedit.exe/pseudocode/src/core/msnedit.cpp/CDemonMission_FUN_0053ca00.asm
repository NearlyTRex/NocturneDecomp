; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca00(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 at 0040d0b0
;
; Referenced Globals:
;   int g_MouseX
;   int g_MouseY
;
; Called Functions:
;   core_msnedit.cpp_CDemonMission_FUN_0053c970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ca00
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053ca00
    PUSH ESI                            ; 0053ca01
    MOV EDX,dword ptr [0x02cf6a90]      ; 0053ca02 | g_MouseY
    PUSH EDX                            ; 0053ca08
    MOV ECX,dword ptr [0x02cf6a8c]      ; 0053ca09 | g_MouseX
    PUSH ECX                            ; 0053ca0f
    MOV EBX,dword ptr [ESP + 0x18]      ; 0053ca10
    PUSH EBX                            ; 0053ca14
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053ca15
    PUSH ESI                            ; 0053ca19
    CALL core_msnedit.cpp_CDemonMission_FUN_0053c970 ; 0053ca1a
        ;   XREF to: 0053c970 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053c970(CDemonMission * this_ptr, int param_2, int param_3, int param_4)
    ADD ESP,0x10                        ; 0053ca1f
    POP ESI                             ; 0053ca22
    POP EBX                             ; 0053ca23
    RET                                 ; 0053ca24

