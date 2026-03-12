; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; char[32] *       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e34dc
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aaac0
        ;   Label: core_event.cpp_CEventList_process_FUN_004aaac0
    PUSH ESI                            ; 004aaac1
    PUSH EDI                            ; 004aaac2
    PUSH EBP                            ; 004aaac3
    MOV EBP,ESP                         ; 004aaac4
    SUB ESP,0x10                        ; 004aaac6
    AND ESP,0xfffffff8                  ; 004aaac9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aaacc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004aaacf
    MOV ECX,0xc80                       ; 004aaad2
    LEA ESI,[EBX + 0x4]                 ; 004aaad7
    MOV EAX,dword ptr [EAX]             ; 004aaada
    LEA EDI,[EBX + 0xc88]               ; 004aaadc
    MOV dword ptr [EBX + 0xc84],EAX     ; 004aaae2
    PUSH EDI                            ; 004aaae8
    MOV EAX,ECX                         ; 004aaae9
    SHR ECX,0x2                         ; 004aaaeb
    MOVSD.REP ES:EDI,ESI                ; 004aaaee
    MOV CL,AL                           ; 004aaaf0
    AND CL,0x3                          ; 004aaaf2
    MOVSB.REP ES:EDI,ESI                ; 004aaaf5
    POP EDI                             ; 004aaaf7
    MOV EAX,[0x0067b654]                ; 004aaaf8 | g_CGamePtr
    MOV dword ptr [EBX],0x0             ; 004aaafd
    FLD float ptr [EAX + 0x264]         ; 004aab03 | g_CGameInstance.delta_time_float
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aab09
    FSTP float ptr [ESP]                ; 004aab0c
    MOV EDX,dword ptr [EAX + 0x3210]    ; 004aab0f
    XOR EBX,EBX                         ; 004aab15
    TEST EDX,EDX                        ; 004aab17
    JLE 0x004aab79                      ; 004aab19
        ;   XREF to: 004aab79 (CONDITIONAL_JUMP)  ; LAB_004aab79
    MOV ESI,dword ptr [EBP + 0x14]      ; 004aab1b
    ADD EAX,0x3214                      ; 004aab1e
    ADD ESI,0x3354                      ; 004aab23
    MOV EDI,EAX                         ; 004aab29
    MOV dword ptr [ESP + 0x4],ESI       ; 004aab2b
    ADD EAX,0x20                        ; 004aab2f
    MOV ESI,dword ptr [EBP + 0x14]      ; 004aab32
    MOV dword ptr [ESP + 0xc],EAX       ; 004aab35
    FLD float ptr [ESI + 0x3354]        ; 004aab39
        ;   Label: LAB_004aab39
    LEA EAX,[EBX*0x4 + 0x0]             ; 004aab3f
    FSUB float ptr [ESP]                ; 004aab46
    MOV dword ptr [ESP + 0x8],EAX       ; 004aab49
    FST float ptr [ESI + 0x3354]        ; 004aab4d
    FLDZ                                ; 004aab53
    FCOMPP                              ; 004aab55
    FNSTSW AX                           ; 004aab57
    SAHF                                ; 004aab59
    JNC 0x004aab80                      ; 004aab5a
        ;   XREF to: 004aab80 (CONDITIONAL_JUMP)  ; LAB_004aab80
    MOV EAX,dword ptr [ESP + 0xc]       ; 004aab5c
    ADD EDI,0x20                        ; 004aab60
    INC EBX                             ; 004aab63
    ADD EAX,0x20                        ; 004aab64
    ADD ESI,0x4                         ; 004aab67
    MOV dword ptr [ESP + 0xc],EAX       ; 004aab6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aab6e
        ;   Label: LAB_004aab6e
    CMP EBX,dword ptr [EAX + 0x3210]    ; 004aab71
    JL 0x004aab39                       ; 004aab77
        ;   XREF to: 004aab39 (CONDITIONAL_JUMP)  ; LAB_004aab39
    MOV ESP,EBP                         ; 004aab79
        ;   Label: LAB_004aab79
    POP EBP                             ; 004aab7b
    POP EDI                             ; 004aab7c
    POP ESI                             ; 004aab7d
    POP EBX                             ; 004aab7e
    RET                                 ; 004aab7f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aab80
        ;   Label: LAB_004aab80
    MOV EDX,dword ptr [EAX + 0x3210]    ; 004aab83
    DEC EDX                             ; 004aab89
    MOV dword ptr [EAX + 0x3210],EDX    ; 004aab8a
    MOV EAX,EDX                         ; 004aab90
    SUB EAX,EBX                         ; 004aab92
    SHL EAX,0x5                         ; 004aab94
    PUSH EAX                            ; 004aab97
    MOV ECX,dword ptr [ESP + 0x10]      ; 004aab98
    PUSH ECX                            ; 004aab9c
    PUSH EDI                            ; 004aab9d
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004aab9e
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aaba3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aaba6
    MOV EAX,dword ptr [EAX + 0x3210]    ; 004aaba9
    SUB EAX,EBX                         ; 004aabaf
    SHL EAX,0x2                         ; 004aabb1
    PUSH EAX                            ; 004aabb4
    MOV EAX,dword ptr [ESP + 0xc]       ; 004aabb5
    MOV EDX,dword ptr [ESP + 0x8]       ; 004aabb9
    ADD EAX,0x4                         ; 004aabbd
    ADD EAX,EDX                         ; 004aabc0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aabc2
    PUSH EAX                            ; 004aabc6
    LEA EAX,[EDX + ECX*0x1]             ; 004aabc7
    PUSH EAX                            ; 004aabca
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004aabcb
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aabd0
    JMP 0x004aab6e                      ; 004aabd3
        ;   XREF to: 004aab6e (UNCONDITIONAL_JUMP)  ; LAB_004aab6e

