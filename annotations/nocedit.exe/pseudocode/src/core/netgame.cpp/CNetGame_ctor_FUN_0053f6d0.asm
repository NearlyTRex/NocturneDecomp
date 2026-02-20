; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_staticInit_FUN_0053f310 at 0053f315
;
; Referenced Globals:
;   TerminatedCString s_MyComputer_0063d2b1
;   undefined4 s_yComputer_0063d2b2
;   undefined4 s_Computer_0063d2b3
;   undefined4 s_omputer_0063d2b4
;   WatcomTypeInfo g_SNetPlayerTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;   support_trisock.cpp_invalidateSocket_FUN_005e1ae0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053f6d0
        ;   Label: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
    PUSH EDI                            ; 0053f6d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053f6d2
    PUSH 0x661d00                       ; 0053f6d6 | g_SNetPlayerTypeInfo
    PUSH 0x2                            ; 0053f6db
    ADD EDX,0x20                        ; 0053f6dd
    PUSH EDX                            ; 0053f6e0
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0053f6e1
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0053f6e6
    ADD EAX,0x150                       ; 0053f6e9
    PUSH EAX                            ; 0053f6ee
    CALL support_trisock.cpp_invalidateSocket_FUN_005e1ae0 ; 0053f6ef
        ;   XREF to: 005e1ae0 (UNCONDITIONAL_CALL)  ; SOCKET * support_trisock.cpp_invalidateSocket_FUN_005e1ae0(SOCKET * socket)
    LEA EDX,[EAX + 0xfffffe90]          ; 0053f6f4
    MOV dword ptr [EDX],0x0             ; 0053f6fa
    MOV dword ptr [EDX + 0x4],0x0       ; 0053f700
    MOV ESI,0x63d2b1                    ; 0053f707 | = "MyComputer"
    MOV dword ptr [EDX + 0x1c],0x0      ; 0053f70c
    ADD ESP,0x4                         ; 0053f713
    MOV dword ptr [EDX + 0x110],0xffffffff ; 0053f716
    LEA EDI,[EDX + 0x8]                 ; 0053f720
    MOV dword ptr [EDX + 0x114],0xffffffff ; 0053f723
    PUSH EDI                            ; 0053f72d
    MOV AL,byte ptr [ESI]               ; 0053f72e | = "MyComputer" | s_Computer_0063d2b3
        ;   Label: LAB_0053f72e
    MOV byte ptr [EDI],AL               ; 0053f730
    CMP AL,0x0                          ; 0053f732
    JZ 0x0053f746                       ; 0053f734
        ;   XREF to: 0053f746 (CONDITIONAL_JUMP)  ; LAB_0053f746
    MOV AL,byte ptr [ESI + 0x1]         ; 0053f736 | s_yComputer_0063d2b2 | s_omputer_0063d2b4
    ADD ESI,0x2                         ; 0053f739
    MOV byte ptr [EDI + 0x1],AL         ; 0053f73c
    ADD EDI,0x2                         ; 0053f73f
    CMP AL,0x0                          ; 0053f742
    JNZ 0x0053f72e                      ; 0053f744
        ;   XREF to: 0053f72e (CONDITIONAL_JUMP)  ; LAB_0053f72e
    POP EDI                             ; 0053f746
        ;   Label: LAB_0053f746
    MOV EAX,EDX                         ; 0053f747
    MOV dword ptr [EDX + 0x168],0x0     ; 0053f749
    POP EDI                             ; 0053f753
    POP ESI                             ; 0053f754
    RET                                 ; 0053f755

