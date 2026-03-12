; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_updateStatusDisplays_FUN_004d85a0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; char[256] *      Stack[-0x1c]:4  local_1c
; char[256] *      Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db386
;
; Referenced Globals:
;   float g_OverlayDisplayTimer
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d85a0
        ;   Label: core_game.cpp_CGame_updateStatusDisplays_FUN_004d85a0
    PUSH ESI                            ; 004d85a1
    PUSH EDI                            ; 004d85a2
    PUSH EBP                            ; 004d85a3
    MOV EBP,ESP                         ; 004d85a4
    SUB ESP,0x18                        ; 004d85a6
    AND ESP,0xfffffff8                  ; 004d85a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d85ac
    FLD float ptr [EBX + 0x264]         ; 004d85af
    FSUBR float ptr [EBX + 0x384]       ; 004d85b5
    FST float ptr [EBX + 0x384]         ; 004d85bb
    FLDZ                                ; 004d85c1
    FCOMPP                              ; 004d85c3
    FNSTSW AX                           ; 004d85c5
    SAHF                                ; 004d85c7
    JA 0x004d867f                       ; 004d85c8
        ;   XREF to: 004d867f (CONDITIONAL_JUMP)  ; LAB_004d867f
    FLD float ptr [EBX + 0x264]         ; 004d85ce
        ;   Label: LAB_004d85ce
    FSUBR float ptr [0x02d831ac]        ; 004d85d4 | g_OverlayDisplayTimer
    FST float ptr [0x02d831ac]          ; 004d85da | g_OverlayDisplayTimer
    FLDZ                                ; 004d85e0
    FCOMPP                              ; 004d85e2
    FNSTSW AX                           ; 004d85e4
    SAHF                                ; 004d85e6
    JBE 0x004d85f1                      ; 004d85e7
        ;   XREF to: 004d85f1 (CONDITIONAL_JUMP)  ; LAB_004d85f1
    XOR EDX,EDX                         ; 004d85e9
    MOV dword ptr [0x02d831ac],EDX      ; 004d85eb | g_OverlayDisplayTimer
    MOV ECX,dword ptr [EBX + 0x388]     ; 004d85f1
        ;   Label: LAB_004d85f1
    XOR ESI,ESI                         ; 004d85f7
    TEST ECX,ECX                        ; 004d85f9
    JLE 0x004d8678                      ; 004d85fb
        ;   XREF to: 004d8678 (CONDITIONAL_JUMP)  ; LAB_004d8678
    LEA EAX,[EBX + 0x38c]               ; 004d8601
    LEA EDI,[EBX + 0x88c]               ; 004d8607
    MOV dword ptr [ESP + 0x10],EAX      ; 004d860d
    MOV dword ptr [ESP + 0x8],EDI       ; 004d8611
    ADD EAX,0x100                       ; 004d8615
    LEA EDI,[EBX + 0x8a0]               ; 004d861a
    MOV dword ptr [ESP + 0xc],EAX       ; 004d8620
    MOV dword ptr [ESP + 0x4],EDI       ; 004d8624
    MOV EDI,EBX                         ; 004d8628
    FLD float ptr [EBX + 0x264]         ; 004d862a
        ;   Label: LAB_004d862a
    LEA EAX,[ESI*0x4 + 0x0]             ; 004d8630
    FSUBR float ptr [EDI + 0x8a0]       ; 004d8637
    MOV dword ptr [ESP + 0x14],EAX      ; 004d863d
    FST float ptr [EDI + 0x8a0]         ; 004d8641
    FLDZ                                ; 004d8647
    FCOMPP                              ; 004d8649
    FNSTSW AX                           ; 004d864b
    SAHF                                ; 004d864d
    JNC 0x004d868e                      ; 004d864e
        ;   XREF to: 004d868e (CONDITIONAL_JUMP)  ; LAB_004d868e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d8650
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d8654
    INC ESI                             ; 004d8658
    ADD EDI,0x4                         ; 004d8659
    ADD EDX,0x100                       ; 004d865c
    ADD ECX,0x100                       ; 004d8662
    MOV dword ptr [ESP + 0x10],EDX      ; 004d8668
    MOV dword ptr [ESP + 0xc],ECX       ; 004d866c
    CMP ESI,dword ptr [EBX + 0x388]     ; 004d8670
    JL 0x004d862a                       ; 004d8676
        ;   XREF to: 004d862a (CONDITIONAL_JUMP)  ; LAB_004d862a
    MOV ESP,EBP                         ; 004d8678
        ;   Label: LAB_004d8678
    POP EBP                             ; 004d867a
    POP EDI                             ; 004d867b
    POP ESI                             ; 004d867c
    POP EBX                             ; 004d867d
    RET                                 ; 004d867e
    MOV dword ptr [EBX + 0x384],0x0     ; 004d867f
        ;   Label: LAB_004d867f
    JMP 0x004d85ce                      ; 004d8689
        ;   XREF to: 004d85ce (UNCONDITIONAL_JUMP)  ; LAB_004d85ce
    MOV EAX,dword ptr [EBX + 0x388]     ; 004d868e
        ;   Label: LAB_004d868e
    DEC EAX                             ; 004d8694
    MOV dword ptr [EBX + 0x388],EAX     ; 004d8695
    SUB EAX,ESI                         ; 004d869b
    SHL EAX,0x8                         ; 004d869d
    PUSH EAX                            ; 004d86a0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d86a1
    PUSH EDX                            ; 004d86a5
    MOV ECX,dword ptr [ESP + 0x18]      ; 004d86a6
    PUSH ECX                            ; 004d86aa
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004d86ab
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x388]     ; 004d86b0
    SUB EAX,ESI                         ; 004d86b6
    ADD ESP,0xc                         ; 004d86b8
    SHL EAX,0x2                         ; 004d86bb
    PUSH EAX                            ; 004d86be
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d86bf
    ADD EAX,0x4                         ; 004d86c3
    MOV dword ptr [ESP + 0x4],EAX       ; 004d86c6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d86ca
    ADD EAX,dword ptr [ESP + 0x4]       ; 004d86ce
    MOV ECX,dword ptr [ESP + 0x18]      ; 004d86d2
    PUSH EAX                            ; 004d86d6
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d86d7
    ADD EAX,ECX                         ; 004d86db
    PUSH EAX                            ; 004d86dd
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004d86de
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x388]     ; 004d86e3
    SUB EAX,ESI                         ; 004d86e9
    ADD ESP,0xc                         ; 004d86eb
    SHL EAX,0x2                         ; 004d86ee
    MOV EDX,dword ptr [ESP]             ; 004d86f1
    PUSH EAX                            ; 004d86f4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d86f5
    ADD EAX,EDX                         ; 004d86f9
    MOV ECX,dword ptr [ESP + 0x18]      ; 004d86fb
    PUSH EAX                            ; 004d86ff
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d8700
    ADD EAX,ECX                         ; 004d8704
    PUSH EAX                            ; 004d8706
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004d8707
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004d870c
    CMP ESI,dword ptr [EBX + 0x388]     ; 004d870f
    JL 0x004d862a                       ; 004d8715
        ;   XREF to: 004d862a (CONDITIONAL_JUMP)  ; LAB_004d862a
    MOV ESP,EBP                         ; 004d871b
    POP EBP                             ; 004d871d
    POP EDI                             ; 004d871e
    POP ESI                             ; 004d871f
    POP EBX                             ; 004d8720
    RET                                 ; 004d8721

