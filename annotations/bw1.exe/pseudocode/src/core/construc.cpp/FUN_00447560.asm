; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_construc_cpp_FUN_00447560(int param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_construc.cpp_CConstruct_process_FUN_00445cb0 at 00445ee0
;
; Referenced Globals:
;   TerminatedCString s_stick_growl_distant_wav_005d70d6
;
; Called Functions:
;   core_xform.cpp_FUN_005b7ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447560
        ;   Label: core_construc.cpp_FUN_00447560
    PUSH ESI                            ; 00447561
    PUSH EDI                            ; 00447562
    PUSH EBP                            ; 00447563
    SUB ESP,0x14                        ; 00447564
    MOV EAX,dword ptr [ESP + 0x28]      ; 00447567
    XOR EDX,EDX                         ; 0044756b
    MOV ECX,dword ptr [EAX + 0xc394]    ; 0044756d
    MOV dword ptr [ESP + 0x10],EDX      ; 00447573
    TEST ECX,ECX                        ; 00447577
    JLE 0x004475f8                      ; 00447579
        ;   XREF to: 004475f8 (CONDITIONAL_JUMP)  ; LAB_004475f8
    LEA EBP,[EAX + 0xc3d0]              ; 0044757f
    MOV EBX,EAX                         ; 00447585
    MOV EAX,dword ptr [EBX + 0xc3dc]    ; 00447587
        ;   Label: LAB_00447587
    ADD EAX,0x30                        ; 0044758d
    PUSH EAX                            ; 00447590
    LEA ESI,[ESP + 0x4]                 ; 00447591
    CALL core_xform.cpp_FUN_005b7ed0    ; 00447595
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    LEA ESI,[ESP + 0x4]                 ; 0044759a
    LEA EDI,[EBX + 0xc3b0]              ; 0044759e
    ADD ESP,0x4                         ; 004475a4
    MOVSD ES:EDI,ESI                    ; 004475a7
    MOVSD ES:EDI,ESI                    ; 004475a8
    MOVSD ES:EDI,ESI                    ; 004475a9
    MOVSD ES:EDI,ESI                    ; 004475aa
    MOV EAX,dword ptr [EBX + 0xc3dc]    ; 004475ab
    MOV dword ptr [EAX + 0xf24],0x0     ; 004475b1
    MOV EAX,dword ptr [EBX + 0xc3dc]    ; 004475bb
    ADD EAX,0x20                        ; 004475c1
    CMP EBP,EAX                         ; 004475c4
    JZ 0x004475d9                       ; 004475c6
        ;   XREF to: 004475d9 (CONDITIONAL_JUMP)  ; LAB_004475d9
    MOV EDX,dword ptr [EAX]             ; 004475c8
    MOV dword ptr [EBP],EDX             ; 004475ca
    MOV EDX,dword ptr [EAX + 0x4]       ; 004475cd
    MOV dword ptr [EBP + 0x4],EDX       ; 004475d0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004475d3
    MOV dword ptr [EBP + 0x8],EDX       ; 004475d6
    MOV ESI,dword ptr [ESP + 0x10]      ; 004475d9
        ;   Label: LAB_004475d9
    INC ESI                             ; 004475dd
    MOV dword ptr [ESP + 0x10],ESI      ; 004475de
    MOV EAX,ESI                         ; 004475e2
    MOV ESI,dword ptr [ESP + 0x28]      ; 004475e4
    ADD EBP,0x48                        ; 004475e8
    MOV EDI,dword ptr [ESI + 0xc394]    ; 004475eb
    ADD EBX,0x48                        ; 004475f1
    CMP EAX,EDI                         ; 004475f4
    JL 0x00447587                       ; 004475f6
        ;   XREF to: 00447587 (CONDITIONAL_JUMP)  ; LAB_00447587
    MOV EAX,dword ptr [ESP + 0x28]      ; 004475f8
        ;   Label: LAB_004475f8
    PUSH 0x5d70d6                       ; 004475fc | = "stick-growl-distant.wav"
    MOV dword ptr [EAX + 0xca58],0x2    ; 00447601
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044760b
    MOV dword ptr [EAX + 0xca5c],0x0    ; 0044760f
    PUSH EBP                            ; 00447619
    MOV EAX,dword ptr [EAX + 0x154]     ; 0044761a
    CALL dword ptr [EAX + 0x2c]         ; 00447620
    ADD ESP,0x8                         ; 00447623
    ADD ESP,0x14                        ; 00447626
    POP EBP                             ; 00447629
    POP EDI                             ; 0044762a
    POP ESI                             ; 0044762b
    POP EBX                             ; 0044762c
    RET                                 ; 0044762d

