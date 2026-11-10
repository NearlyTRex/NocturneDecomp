; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_process_FUN_004893d0(CEventList *this_ptr)
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
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd8e6
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004893d0
        ;   Label: core_event.cpp_CEventList_process_FUN_004893d0
    PUSH ESI                            ; 004893d1
    PUSH EDI                            ; 004893d2
    PUSH EBP                            ; 004893d3
    MOV EBP,ESP                         ; 004893d4
    SUB ESP,0x10                        ; 004893d6
    AND ESP,0xfffffff8                  ; 004893d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004893dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004893df
    MOV ECX,0xc80                       ; 004893e2
    LEA ESI,[EBX + 0x4]                 ; 004893e7
    MOV EAX,dword ptr [EAX]             ; 004893ea
    LEA EDI,[EBX + 0xc88]               ; 004893ec
    MOV dword ptr [EBX + 0xc84],EAX     ; 004893f2
    PUSH EDI                            ; 004893f8
    MOV EAX,ECX                         ; 004893f9
    SHR ECX,0x2                         ; 004893fb
    MOVSD.REP ES:EDI,ESI                ; 004893fe
    MOV CL,AL                           ; 00489400
    AND CL,0x3                          ; 00489402
    MOVSB.REP ES:EDI,ESI                ; 00489405
    POP EDI                             ; 00489407
    MOV EAX,[0x00616494]                ; 00489408 | g_CGamePtr
    MOV dword ptr [EBX],0x0             ; 0048940d
    FLD float ptr [EAX + 0x284]         ; 00489413 | g_CGameInstance.delta_time_float
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489419
    FSTP float ptr [ESP]                ; 0048941c
    MOV EDX,dword ptr [EAX + 0x3210]    ; 0048941f
    XOR EBX,EBX                         ; 00489425
    TEST EDX,EDX                        ; 00489427
    JLE 0x00489489                      ; 00489429
        ;   XREF to: 00489489 (CONDITIONAL_JUMP)  ; LAB_00489489
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048942b
    ADD EAX,0x3214                      ; 0048942e
    ADD ESI,0x3354                      ; 00489433
    MOV EDI,EAX                         ; 00489439
    MOV dword ptr [ESP + 0x4],ESI       ; 0048943b
    ADD EAX,0x20                        ; 0048943f
    MOV ESI,dword ptr [EBP + 0x14]      ; 00489442
    MOV dword ptr [ESP + 0xc],EAX       ; 00489445
    FLD float ptr [ESI + 0x3354]        ; 00489449
        ;   Label: LAB_00489449
    LEA EAX,[EBX*0x4 + 0x0]             ; 0048944f
    FSUB float ptr [ESP]                ; 00489456
    MOV dword ptr [ESP + 0x8],EAX       ; 00489459
    FST float ptr [ESI + 0x3354]        ; 0048945d
    FLDZ                                ; 00489463
    FCOMPP                              ; 00489465
    FNSTSW AX                           ; 00489467
    SAHF                                ; 00489469
    JNC 0x00489490                      ; 0048946a
        ;   XREF to: 00489490 (CONDITIONAL_JUMP)  ; LAB_00489490
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048946c
    ADD EDI,0x20                        ; 00489470
    INC EBX                             ; 00489473
    ADD EAX,0x20                        ; 00489474
    ADD ESI,0x4                         ; 00489477
    MOV dword ptr [ESP + 0xc],EAX       ; 0048947a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048947e
        ;   Label: LAB_0048947e
    CMP EBX,dword ptr [EAX + 0x3210]    ; 00489481
    JL 0x00489449                       ; 00489487
        ;   XREF to: 00489449 (CONDITIONAL_JUMP)  ; LAB_00489449
    MOV ESP,EBP                         ; 00489489
        ;   Label: LAB_00489489
    POP EBP                             ; 0048948b
    POP EDI                             ; 0048948c
    POP ESI                             ; 0048948d
    POP EBX                             ; 0048948e
    RET                                 ; 0048948f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489490
        ;   Label: LAB_00489490
    MOV EDX,dword ptr [EAX + 0x3210]    ; 00489493
    DEC EDX                             ; 00489499
    MOV dword ptr [EAX + 0x3210],EDX    ; 0048949a
    MOV EAX,EDX                         ; 004894a0
    SUB EAX,EBX                         ; 004894a2
    SHL EAX,0x5                         ; 004894a4
    PUSH EAX                            ; 004894a7
    MOV ECX,dword ptr [ESP + 0x10]      ; 004894a8
    PUSH ECX                            ; 004894ac
    PUSH EDI                            ; 004894ad
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004894ae
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004894b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004894b6
    MOV EAX,dword ptr [EAX + 0x3210]    ; 004894b9
    SUB EAX,EBX                         ; 004894bf
    SHL EAX,0x2                         ; 004894c1
    PUSH EAX                            ; 004894c4
    MOV EAX,dword ptr [ESP + 0xc]       ; 004894c5
    MOV EDX,dword ptr [ESP + 0x8]       ; 004894c9
    ADD EAX,0x4                         ; 004894cd
    ADD EAX,EDX                         ; 004894d0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004894d2
    PUSH EAX                            ; 004894d6
    LEA EAX,[EDX + ECX*0x1]             ; 004894d7
    PUSH EAX                            ; 004894da
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004894db
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004894e0
    JMP 0x0048947e                      ; 004894e3
        ;   XREF to: 0048947e (UNCONDITIONAL_JUMP)  ; LAB_0048947e

