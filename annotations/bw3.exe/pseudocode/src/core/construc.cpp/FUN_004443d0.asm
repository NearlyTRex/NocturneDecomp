; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_construc_cpp_FUN_004443d0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_constrct.cpp_FUN_00442a20 at 00442fda
;
; Referenced Globals:
;   TerminatedCString s_stick_growl_distant_wav_005b97de
;
; Called Functions:
;   core_xform.cpp_FUN_005860b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004443d0
        ;   Label: core_construc.cpp_FUN_004443d0
    PUSH ESI                            ; 004443d1
    PUSH EDI                            ; 004443d2
    PUSH EBP                            ; 004443d3
    SUB ESP,0x14                        ; 004443d4
    MOV EAX,dword ptr [ESP + 0x28]      ; 004443d7
    XOR EDX,EDX                         ; 004443db
    MOV ECX,dword ptr [EAX + 0xd180]    ; 004443dd
    MOV dword ptr [ESP + 0x10],EDX      ; 004443e3
    TEST ECX,ECX                        ; 004443e7
    JLE 0x0044447c                      ; 004443e9
        ;   XREF to: 0044447c (CONDITIONAL_JUMP)  ; LAB_0044447c
    LEA EBP,[EAX + 0xd1bc]              ; 004443ef
    MOV EBX,EAX                         ; 004443f5
    MOV EAX,dword ptr [EBX + 0xd1c8]    ; 004443f7
        ;   Label: LAB_004443f7
    ADD EAX,0x30                        ; 004443fd
    PUSH EAX                            ; 00444400
    LEA ESI,[ESP + 0x4]                 ; 00444401
    CALL core_xform.cpp_FUN_005860b0    ; 00444405
        ;   XREF to: 005860b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005860b0()
    LEA ESI,[ESP + 0x4]                 ; 0044440a
    LEA EDI,[EBX + 0xd19c]              ; 0044440e
    ADD ESP,0x4                         ; 00444414
    MOVSD ES:EDI,ESI                    ; 00444417
    MOVSD ES:EDI,ESI                    ; 00444418
    MOVSD ES:EDI,ESI                    ; 00444419
    MOVSD ES:EDI,ESI                    ; 0044441a
    MOV EAX,dword ptr [EBX + 0xd1c8]    ; 0044441b
    MOV dword ptr [EAX + 0xf24],0x0     ; 00444421
    MOV EAX,dword ptr [EBX + 0xd1c8]    ; 0044442b
    MOV dword ptr [EAX + 0xcc4],0x1     ; 00444431
    MOV EAX,dword ptr [EBX + 0xd1c8]    ; 0044443b
    ADD EAX,0x20                        ; 00444441
    CMP EBP,EAX                         ; 00444444
    JZ 0x00444459                       ; 00444446
        ;   XREF to: 00444459 (CONDITIONAL_JUMP)  ; LAB_00444459
    MOV EDX,dword ptr [EAX]             ; 00444448
    MOV dword ptr [EBP],EDX             ; 0044444a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044444d
    MOV dword ptr [EBP + 0x4],EDX       ; 00444450
    MOV EDX,dword ptr [EAX + 0x8]       ; 00444453
    MOV dword ptr [EBP + 0x8],EDX       ; 00444456
    MOV ESI,dword ptr [ESP + 0x10]      ; 00444459
        ;   Label: LAB_00444459
    INC ESI                             ; 0044445d
    MOV dword ptr [ESP + 0x10],ESI      ; 0044445e
    MOV EAX,ESI                         ; 00444462
    MOV ESI,dword ptr [ESP + 0x28]      ; 00444464
    ADD EBP,0x48                        ; 00444468
    MOV EDI,dword ptr [ESI + 0xd180]    ; 0044446b
    ADD EBX,0x48                        ; 00444471
    CMP EAX,EDI                         ; 00444474
    JL 0x004443f7                       ; 00444476
        ;   XREF to: 004443f7 (CONDITIONAL_JUMP)  ; LAB_004443f7
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044447c
        ;   Label: LAB_0044447c
    PUSH 0x5b97de                       ; 00444480 | = "stick-growl-distant.wav"
    MOV dword ptr [EAX + 0xd844],0x2    ; 00444485
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044448f
    MOV dword ptr [EAX + 0xd850],0x0    ; 00444493
    PUSH EBP                            ; 0044449d
    MOV EAX,dword ptr [EAX + 0x154]     ; 0044449e
    CALL dword ptr [EAX + 0x2c]         ; 004444a4
    ADD ESP,0x8                         ; 004444a7
    ADD ESP,0x14                        ; 004444aa
    POP EBP                             ; 004444ad
    POP EDI                             ; 004444ae
    POP ESI                             ; 004444af
    POP EBX                             ; 004444b0
    RET                                 ; 004444b1

