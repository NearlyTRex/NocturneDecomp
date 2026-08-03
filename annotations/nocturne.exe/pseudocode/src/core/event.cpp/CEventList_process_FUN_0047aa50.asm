; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_process_FUN_0047aa50(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a635c
;
; Referenced Globals:
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.delta_time_float
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047aa50
        ;   Label: core_event.cpp_CEventList_process_FUN_0047aa50
    PUSH ESI                            ; 0047aa51
    PUSH EDI                            ; 0047aa52
    PUSH EBP                            ; 0047aa53
    MOV EBP,ESP                         ; 0047aa54
    SUB ESP,0x10                        ; 0047aa56
    AND ESP,0xfffffff8                  ; 0047aa59
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047aa5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047aa5f
    MOV ECX,0xc80                       ; 0047aa62
    LEA ESI,[EBX + 0x4]                 ; 0047aa67
    MOV EAX,dword ptr [EAX]             ; 0047aa6a
    LEA EDI,[EBX + 0xc88]               ; 0047aa6c
    MOV dword ptr [EBX + 0xc84],EAX     ; 0047aa72
    PUSH EDI                            ; 0047aa78
    MOV EAX,ECX                         ; 0047aa79
    SHR ECX,0x2                         ; 0047aa7b
    MOVSD.REP ES:EDI,ESI                ; 0047aa7e
    MOV CL,AL                           ; 0047aa80
    AND CL,0x3                          ; 0047aa82
    MOVSB.REP ES:EDI,ESI                ; 0047aa85
    POP EDI                             ; 0047aa87
    MOV EAX,[0x005b9354]                ; 0047aa88 | g_CGame_PTR_005b9354
    MOV dword ptr [EBX],0x0             ; 0047aa8d
    FLD float ptr [EAX + 0x264]         ; 0047aa93 | g_CGame_01c775ec.delta_time_float
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047aa99
    FSTP float ptr [ESP]                ; 0047aa9c
    MOV EDX,dword ptr [EAX + 0x3210]    ; 0047aa9f
    XOR EBX,EBX                         ; 0047aaa5
    TEST EDX,EDX                        ; 0047aaa7
    JLE 0x0047ab09                      ; 0047aaa9
        ;   XREF to: 0047ab09 (CONDITIONAL_JUMP)  ; LAB_0047ab09
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047aaab
    ADD EAX,0x3214                      ; 0047aaae
    ADD ESI,0x3354                      ; 0047aab3
    MOV EDI,EAX                         ; 0047aab9
    MOV dword ptr [ESP + 0x4],ESI       ; 0047aabb
    ADD EAX,0x20                        ; 0047aabf
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047aac2
    MOV dword ptr [ESP + 0xc],EAX       ; 0047aac5
    FLD float ptr [ESI + 0x3354]        ; 0047aac9
        ;   Label: LAB_0047aac9
    LEA EAX,[EBX*0x4 + 0x0]             ; 0047aacf
    FSUB float ptr [ESP]                ; 0047aad6
    MOV dword ptr [ESP + 0x8],EAX       ; 0047aad9
    FST float ptr [ESI + 0x3354]        ; 0047aadd
    FLDZ                                ; 0047aae3
    FCOMPP                              ; 0047aae5
    FNSTSW AX                           ; 0047aae7
    SAHF                                ; 0047aae9
    JNC 0x0047ab10                      ; 0047aaea
        ;   XREF to: 0047ab10 (CONDITIONAL_JUMP)  ; LAB_0047ab10
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047aaec
    ADD EDI,0x20                        ; 0047aaf0
    INC EBX                             ; 0047aaf3
    ADD EAX,0x20                        ; 0047aaf4
    ADD ESI,0x4                         ; 0047aaf7
    MOV dword ptr [ESP + 0xc],EAX       ; 0047aafa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047aafe
        ;   Label: LAB_0047aafe
    CMP EBX,dword ptr [EAX + 0x3210]    ; 0047ab01
    JL 0x0047aac9                       ; 0047ab07
        ;   XREF to: 0047aac9 (CONDITIONAL_JUMP)  ; LAB_0047aac9
    MOV ESP,EBP                         ; 0047ab09
        ;   Label: LAB_0047ab09
    POP EBP                             ; 0047ab0b
    POP EDI                             ; 0047ab0c
    POP ESI                             ; 0047ab0d
    POP EBX                             ; 0047ab0e
    RET                                 ; 0047ab0f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047ab10
        ;   Label: LAB_0047ab10
    MOV EDX,dword ptr [EAX + 0x3210]    ; 0047ab13
    DEC EDX                             ; 0047ab19
    MOV dword ptr [EAX + 0x3210],EDX    ; 0047ab1a
    MOV EAX,EDX                         ; 0047ab20
    SUB EAX,EBX                         ; 0047ab22
    SHL EAX,0x5                         ; 0047ab24
    PUSH EAX                            ; 0047ab27
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047ab28
    PUSH ECX                            ; 0047ab2c
    PUSH EDI                            ; 0047ab2d
    CALL crt_string.c_memmove_FUN_00566170 ; 0047ab2e
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047ab33
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047ab36
    MOV EAX,dword ptr [EAX + 0x3210]    ; 0047ab39
    SUB EAX,EBX                         ; 0047ab3f
    SHL EAX,0x2                         ; 0047ab41
    PUSH EAX                            ; 0047ab44
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047ab45
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047ab49
    ADD EAX,0x4                         ; 0047ab4d
    ADD EAX,EDX                         ; 0047ab50
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047ab52
    PUSH EAX                            ; 0047ab56
    LEA EAX,[EDX + ECX*0x1]             ; 0047ab57
    PUSH EAX                            ; 0047ab5a
    CALL crt_string.c_memmove_FUN_00566170 ; 0047ab5b
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047ab60
    JMP 0x0047aafe                      ; 0047ab63
        ;   XREF to: 0047aafe (UNCONDITIONAL_JUMP)  ; LAB_0047aafe

