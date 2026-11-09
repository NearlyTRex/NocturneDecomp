; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004a9bf0(CEventList *this_ptr,char *name,float duration)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; float            Stack[0xc]:4   duration
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a5e74
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005debc4
;   TerminatedCString s_CEventList_setTimerEvent_005debd6
;   TerminatedCString s_core_event_cpp_005dec0e
;   TerminatedCString s_CEventList_setTimerEvent_005dec20
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_event.cpp_CEventList_findTimer_FUN_004a9f50
;   core_main.c_FUN_005030e0
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9bf0
        ;   Label: core_event.cpp_CEventList_setTimerEvent_FUN_004a9bf0
    PUSH ESI                            ; 004a9bf1
    PUSH EDI                            ; 004a9bf2
    PUSH EBP                            ; 004a9bf3
    MOV EBP,ESP                         ; 004a9bf4
    SUB ESP,0xc                         ; 004a9bf6
    AND ESP,0xfffffff8                  ; 004a9bf9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a9bfc
    FLD float ptr [EBP + 0x1c]          ; 004a9bff
    FLDZ                                ; 004a9c02
    FXCH                                ; 004a9c04
    FSTP double ptr [ESP]               ; 004a9c06
    FCOMP double ptr [ESP]              ; 004a9c09
    FNSTSW AX                           ; 004a9c0c
    SAHF                                ; 004a9c0e
    JBE 0x004a9c42                      ; 004a9c0f
        ;   XREF to: 004a9c42 (CONDITIONAL_JUMP)  ; LAB_004a9c42
    MOV ESI,dword ptr [ESP + 0x4]       ; 004a9c11
    PUSH ESI                            ; 004a9c15
    MOV EDI,dword ptr [ESP + 0x4]       ; 004a9c16
    PUSH EDI                            ; 004a9c1a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a9c1b
    PUSH EAX                            ; 004a9c1e
    MOV EDX,0x5debc4                    ; 004a9c1f | = "..\\core\\event.cpp"
    MOV ECX,0xdb4                       ; 004a9c24
    PUSH 0x5debd6                       ; 004a9c29 | = "CEventList::setTimerEvent - invalid d..."
    MOV dword ptr [0x01d1d400],EDX      ; 004a9c2e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004a9c34 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004a9c3a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 004a9c3f
    MOV EDX,dword ptr [EBP + 0x18]      ; 004a9c42
        ;   Label: LAB_004a9c42
    PUSH EDX                            ; 004a9c45
    PUSH EBX                            ; 004a9c46
    CALL core_event.cpp_CEventList_findTimer_FUN_004a9f50 ; 004a9c47
        ;   XREF to: 004a9f50 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findTimer_FUN_004a9f50(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 004a9c4c
    ADD ESP,0x8                         ; 004a9c4e
    TEST EAX,EAX                        ; 004a9c51
    JL 0x004a9ce0                       ; 004a9c53
        ;   XREF to: 004a9ce0 (CONDITIONAL_JUMP)  ; LAB_004a9ce0
    FLD float ptr [EBP + 0x1c]          ; 004a9c59
    FLDZ                                ; 004a9c5c
    LEA EDI,[EAX*0x4 + 0x0]             ; 004a9c5e
    FCOMPP                              ; 004a9c65
    FNSTSW AX                           ; 004a9c67
    SAHF                                ; 004a9c69
    JNC 0x004a9c7d                      ; 004a9c6a
        ;   XREF to: 004a9c7d (CONDITIONAL_JUMP)  ; LAB_004a9c7d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004a9c6c
    MOV dword ptr [EDI + EBX*0x1 + 0x3354],EAX ; 004a9c6f
    MOV ESP,EBP                         ; 004a9c76
        ;   Label: LAB_004a9c76
    POP EBP                             ; 004a9c78
    POP EDI                             ; 004a9c79
    POP ESI                             ; 004a9c7a
    POP EBX                             ; 004a9c7b
    RET                                 ; 004a9c7c
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004a9c7d
        ;   Label: LAB_004a9c7d
    DEC EDX                             ; 004a9c83
    MOV EAX,EDX                         ; 004a9c84
    MOV dword ptr [EBX + 0x3210],EDX    ; 004a9c86
    SUB EAX,ESI                         ; 004a9c8c
    MOV EDX,ESI                         ; 004a9c8e
    SHL EAX,0x5                         ; 004a9c90
    SHL EDX,0x5                         ; 004a9c93
    PUSH EAX                            ; 004a9c96
    LEA EAX,[EDX + 0x20]                ; 004a9c97
    MOV dword ptr [ESP + 0xc],EAX       ; 004a9c9a
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a9c9e
    LEA EAX,[EBX + 0x3214]              ; 004a9ca2
    ADD ECX,EAX                         ; 004a9ca8
    PUSH ECX                            ; 004a9caa
    ADD EAX,EDX                         ; 004a9cab
    PUSH EAX                            ; 004a9cad
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a9cae
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x3210]    ; 004a9cb3
    SUB EAX,ESI                         ; 004a9cb9
    ADD ESP,0xc                         ; 004a9cbb
    SHL EAX,0x2                         ; 004a9cbe
    ADD EBX,0x3354                      ; 004a9cc1
    PUSH EAX                            ; 004a9cc7
    LEA EAX,[EDI + 0x4]                 ; 004a9cc8
    ADD EAX,EBX                         ; 004a9ccb
    PUSH EAX                            ; 004a9ccd
    ADD EBX,EDI                         ; 004a9cce
    PUSH EBX                            ; 004a9cd0
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a9cd1
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a9cd6
    MOV ESP,EBP                         ; 004a9cd9
    POP EBP                             ; 004a9cdb
    POP EDI                             ; 004a9cdc
    POP ESI                             ; 004a9cdd
    POP EBX                             ; 004a9cde
    RET                                 ; 004a9cdf
    FLD float ptr [EBP + 0x1c]          ; 004a9ce0
        ;   Label: LAB_004a9ce0
    FLDZ                                ; 004a9ce3
    FCOMPP                              ; 004a9ce5
    FNSTSW AX                           ; 004a9ce7
    SAHF                                ; 004a9ce9
    JNC 0x004a9c76                      ; 004a9cea
        ;   XREF to: 004a9c76 (CONDITIONAL_JUMP)  ; LAB_004a9c76
    CMP dword ptr [EBX + 0x3210],0xa    ; 004a9cec
    JL 0x004a9d18                       ; 004a9cf3
        ;   XREF to: 004a9d18 (CONDITIONAL_JUMP)  ; LAB_004a9d18
    MOV ESI,0x5dec0e                    ; 004a9cf5 | = "..\\core\\event.cpp"
    MOV EDI,0xdd5                       ; 004a9cfa
    PUSH 0x5dec20                       ; 004a9cff | = "CEventList::setTimerEvent - too many ..."
    MOV dword ptr [0x01d1d400],ESI      ; 004a9d04 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004a9d0a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004a9d10
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004a9d15
    MOV EDI,dword ptr [EBX + 0x3210]    ; 004a9d18
        ;   Label: LAB_004a9d18
    LEA EAX,[EBX + 0x3214]              ; 004a9d1e
    SHL EDI,0x5                         ; 004a9d24
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a9d27
    ADD EDI,EAX                         ; 004a9d2a
    PUSH EDI                            ; 004a9d2c
    MOV AL,byte ptr [ESI]               ; 004a9d2d
        ;   Label: LAB_004a9d2d
    MOV byte ptr [EDI],AL               ; 004a9d2f
    CMP AL,0x0                          ; 004a9d31
    JZ 0x004a9d45                       ; 004a9d33
        ;   XREF to: 004a9d45 (CONDITIONAL_JUMP)  ; LAB_004a9d45
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9d35
    ADD ESI,0x2                         ; 004a9d38
    MOV byte ptr [EDI + 0x1],AL         ; 004a9d3b
    ADD EDI,0x2                         ; 004a9d3e
    CMP AL,0x0                          ; 004a9d41
    JNZ 0x004a9d2d                      ; 004a9d43
        ;   XREF to: 004a9d2d (CONDITIONAL_JUMP)  ; LAB_004a9d2d
    POP EDI                             ; 004a9d45
        ;   Label: LAB_004a9d45
    MOV EAX,dword ptr [EBX + 0x3210]    ; 004a9d46
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004a9d4c
    MOV dword ptr [EBX + EAX*0x4 + 0x3354],EDX ; 004a9d4f
    INC dword ptr [EBX + 0x3210]        ; 004a9d56
    MOV ESP,EBP                         ; 004a9d5c
    POP EBP                             ; 004a9d5e
    POP EDI                             ; 004a9d5f
    POP ESI                             ; 004a9d60
    POP EBX                             ; 004a9d61
    RET                                 ; 004a9d62

